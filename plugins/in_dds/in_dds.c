#include "in_dds.h"

static int dds_shutdown(DDS_DomainParticipant *participant)
{
    int status = 0;
    DDS_ReturnCode_t retcode;

    if (participant != NULL) {
        retcode = DDS_DomainParticipant_delete_contained_entities(participant);
        if (retcode != DDS_RETCODE_OK) {
            flb_error("[out_dds] delete_contained_entities error %d\n", retcode);
            status = -1;
        }
        retcode = DDS_DomainParticipantFactory_delete_participant(
            DDS_TheParticipantFactory, participant);
        if (retcode != DDS_RETCODE_OK) {
            flb_error("[out_dds] delete_participant error %d\n", retcode);
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

struct DDS_DataReaderListener reader_listener = DDS_DataReaderListener_INITIALIZER;
void cb_on_data_available(void* listener_data, DDS_DataReader* reader)
{
	FBDataReader *fb_reader = NULL;
	struct FBSeq data_seq = DDS_SEQUENCE_INITIALIZER;
	struct DDS_SampleInfoSeq info_seq = DDS_SEQUENCE_INITIALIZER;
	DDS_ReturnCode_t retcode;
	int i;

	fb_reader = FBDataReader_narrow(reader);
	if (fb_reader == NULL) {
		flb_error("[in_dds] DataReader narrow error\n");
		return;
	}

	retcode = FBDataReader_take(
			fb_reader,
			&data_seq, &info_seq, DDS_LENGTH_UNLIMITED,
			DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);
	if (retcode == DDS_RETCODE_NO_DATA) {
		return;
	} else if (retcode != DDS_RETCODE_OK) {
		flb_error("[in_dds]take error %d\n", retcode);
		return;
	}
	for (i = 0; i < FBSeq_get_length(&data_seq); ++i) {
		if (DDS_SampleInfoSeq_get_reference(&info_seq, i)->valid_data) {
			flb_info("Received data\n");
			FBTypeSupport_print_data(
					FBSeq_get_reference(&data_seq, i));
		}
	}
	retcode = FBDataReader_return_loan(
			fb_reader,
			&data_seq, &info_seq);
	if (retcode != DDS_RETCODE_OK) {
		flb_error ("[in_dds]return loan error %d\n", retcode);
	}
}

static int cb_dds_init(struct flb_input_instance *ins,
		struct flb_config *config, void *data)
{
	struct flb_in_dds_config *ctx;
	const char *tmp = NULL;
	DDS_ReturnCode_t retcode;

	ctx = flb_calloc(1, sizeof(struct flb_in_dds_config));
	if (!ctx) {
		flb_errno();
		return -1;
	}

	// Setting Domain ID
	tmp = flb_input_get_property("domain_id", ins);
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
		flb_error("[in_dds] create_participant error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* To customize subscriber QoS, use
	   DDS_DomainParticipant_get_default_publisher_qos() instead */
	ctx->subscriber = DDS_DomainParticipant_create_subscriber(
			ctx->participant, &DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* listener */,
			DDS_STATUS_MASK_NONE);
	if (ctx->subscriber == NULL) {
		flb_error("[in_dds] create_subscriber error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* Register type before creating topic */
	ctx->type_name = FBTypeSupport_get_type_name();
	retcode = FBTypeSupport_register_type(
			ctx->participant, ctx->type_name);
	if (retcode != DDS_RETCODE_OK) {
		flb_error("[in_dds] register_type error %d\n", retcode);
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
		flb_error("[in_dds] create_topic error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* Set up a data reader listener */
	reader_listener.on_requested_deadline_missed  = NULL;
	reader_listener.on_requested_incompatible_qos = NULL;
	reader_listener.on_sample_rejected = NULL;
	reader_listener.on_liveliness_changed = NULL;
	reader_listener.on_sample_lost = NULL;
	reader_listener.on_subscription_matched = NULL;
	reader_listener.on_data_available = cb_on_data_available;

	/* To customize data reader QoS, use
	   the configuration file USER_QOS_PROFILES.xml */
	ctx->reader = DDS_Subscriber_create_datareader(
			ctx->subscriber, DDS_Topic_as_topicdescription(ctx->topic),
			&DDS_DATAREADER_QOS_DEFAULT, &reader_listener, DDS_DATA_AVAILABLE_STATUS);
	if (ctx->reader == NULL) {
		flb_error("[in_dds] create_datareader error\n");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	return 0;

}

static int cb_dds_exit(void *data, struct flb_config *config)
{
	(void) *config;
	struct flb_in_dds_config *ctx = data;

	dds_shutdown(ctx->participant);

	return 0;
}

struct flb_input_plugin in_dds_plugin = {
	.name         = "dds",
	.description  = "DDS Input Plugin",
	.cb_init      = cb_dds_init,
	.cb_pre_run   = NULL,
	.cb_collect   = NULL,
	.cb_flush_buf = NULL,
	.cb_exit      = cb_dds_exit
};


