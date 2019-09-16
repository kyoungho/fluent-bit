#include "dds.h"

static int dds_shutdown(DDS_DomainParticipant *participant)
{
    DDS_ReturnCode_t retcode;
    int status = 0;
    if (participant != NULL) {
        retcode = DDS_DomainParticipant_delete_contained_entities(participant);
        if (retcode != DDS_RETCODE_OK) {
            flb_info("delete_contained_entities error %d\n", retcode);
            status = -1;
        }
        retcode = DDS_DomainParticipantFactory_delete_participant(
            DDS_TheParticipantFactory, participant);
        if (retcode != DDS_RETCODE_OK) {
            flb_info("delete_participant error %d\n", retcode);
            status = -1;
        }
    }
    /* RTI Data Distribution Service provides the finalize_instance() method on
    domain participant factory for users who want to release memory used
    by the participant factory. Uncomment the following block of code for
    clean destruction of the singleton. */
    /*
    retcode = DDS_DomainParticipantFactory_finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        printf("finalize_instance error %d\n", retcode);
        status = -1;
    }
    */
    return status;
}

static int cb_dds_init(struct flb_output_instance *ins,
		struct flb_config *config,
		void *data)
{   
	const char *tmp;
	struct flb_out_dds_config *ctx;
	DDS_ReturnCode_t retcode;

	ctx = flb_calloc(1, sizeof(struct flb_out_dds_config));
	if (!ctx) {
		flb_errno();
		return -1;
	}

	// Setting Domain ID
	tmp = flb_output_get_property("domain_id", ins);
	if (tmp != NULL && atoi(tmp) >= 0) {
		ctx->domain_id = atoi(tmp);
	}
	else {
		ctx->domain_id = 0;
	}

	/* To customize participant QoS, use 
	   the configuration file USER_QOS_PROFILES.xml */
	ctx->participant = DDS_DomainParticipantFactory_create_participant(
			DDS_TheParticipantFactory, ctx->domain_id, &DDS_PARTICIPANT_QOS_DEFAULT,
			NULL /* listener */, DDS_STATUS_MASK_NONE);
	if (ctx->participant == NULL) {
		flb_info("create_participant error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* To customize publisher QoS, use
	   DDS_DomainParticipant_get_default_publisher_qos() instead */
	ctx->publisher = DDS_DomainParticipant_create_publisher(
			ctx->participant, &DDS_PUBLISHER_QOS_DEFAULT, NULL /* listener */,
			DDS_STATUS_MASK_NONE);
	if (ctx->publisher == NULL) {
		flb_info("create_publisher error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* Register type before creating topic */
	ctx->type_name = FBTypeSupport_get_type_name();
	retcode = FBTypeSupport_register_type(
			ctx->participant, ctx->type_name);
	if (retcode != DDS_RETCODE_OK) {
		flb_info("register_type error %d\n", retcode);
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* To customize topic QoS, use
	   DDS_DomainParticipant_get_default_topic_qos() instead */
	ctx->topic = DDS_DomainParticipant_create_topic(
			ctx->participant, "FluentBit",
			ctx->type_name, &DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
			DDS_STATUS_MASK_NONE);
	if (ctx->topic == NULL) {
		flb_info("create_topic error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}
	/* To customize data writer QoS, use
	   DDS_Publisher_get_default_datawriter_qos() instead */
	ctx->writer = DDS_Publisher_create_datawriter(
			ctx->publisher, ctx->topic,
			&DDS_DATAWRITER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
	if (ctx->writer == NULL) {
		flb_info("create_datawriter error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}
	ctx->fb_writer = FBDataWriter_narrow(ctx->writer);
	if (ctx->fb_writer == NULL) {
		flb_info("DataWriter narrow error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* Create data sample for writing */
	ctx->instance = FBTypeSupport_create_data_ex(DDS_BOOLEAN_TRUE);
	if (ctx->instance == NULL) {
		flb_info("FBTypeSupport_create_data error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	ctx->instance_handle = DDS_HANDLE_NIL;

	/* For data type that has key, if the same instance is going to be
	   written multiple times, initialize the key here
	   and register the keyed instance prior to writing */
	/*
	   instance_handle = FBDataWriter_register_instance(
	   fb_writer, instance);
	   */

	/* Export context */
	flb_output_set_context(ins, ctx);
	flb_info("[out_dds] domain_id=%d", ctx->domain_id);
	return 0;
}

static void cb_dds_flush(const void *data, size_t bytes,
		const char *tag, int tag_len,
		struct flb_input_instance *i_ins,
		void *out_context,
		struct flb_config *config) {

	int ret;
	size_t off = 0;
	struct flb_out_dds_config *ctx = out_context;
	struct flb_time tms;
	msgpack_object *obj;
	msgpack_unpacked result;

	msgpack_unpacked_init(&result);


	while(msgpack_unpack_next(&result, data, bytes, &off) == MSGPACK_UNPACK_SUCCESS) {
		flb_time_pop_from_msgpack(&tms, &result, &obj);

		flb_info("tag: %s", tag);
		flb_info("%"PRIu32".%09lu", (uint32_t)tms.tm.tv_sec, tms.tm.tv_nsec);

		FBDataWriter_write(ctx->fb_writer, ctx->instance, &(ctx->instance_handle));

		//ret = produce_message(&tms, obj, ctx, config);
		/*
		   if (ret == FLB_ERROR) {
		   msgpack_unpacked_destroy(&result);
		   FLB_OUTPUT_RETURN(FLB_ERROR);
		   }
		   else if (ret == FLB_RETRY) {
		   msgpack_unpacked_destroy(&result);
		   FLB_OUTPUT_RETURN(FLB_RETRY);
		   }
		   */
	}

	msgpack_unpacked_destroy(&result);
	FLB_OUTPUT_RETURN(FLB_OK);
}

static int cb_dds_exit(void *data, struct flb_config *config) {
	return 0;
}

struct flb_output_plugin out_dds_plugin = {
	.name         = "dds",
	.description  = "DDS Output Plugin",
	.cb_init      = cb_dds_init,
	.cb_flush     = cb_dds_flush,
	.cb_exit      = cb_dds_exit,
	.flags        = 0
};

