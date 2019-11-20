#include "in_dds_dummy.h"

static int dds_shutdown(DDS_DomainParticipant *participant)
{
    int status = 0;
    DDS_ReturnCode_t retcode;

    if (participant != NULL) {
        retcode = DDS_DomainParticipant_delete_contained_entities(participant);
        if (retcode != DDS_RETCODE_OK) {
            flb_error("[in_dds_dummy] delete_contained_entities error %d\n", retcode);
            status = -1;
        }
        retcode = DDS_DomainParticipantFactory_delete_participant(
            DDS_TheParticipantFactory, participant);
        if (retcode != DDS_RETCODE_OK) {
            flb_error("[in_dds_dummy] delete_participant error %d\n", retcode);
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

static int cb_dds_dummy_collect(struct flb_input_instance *ins,
                            struct flb_config *config, void *ctx_data)
{
	struct flb_in_dds_dummy_config *ctx = ctx_data;
    DummyDataReader *dummy_reader = NULL;
    struct DummySeq data_seq = DDS_SEQUENCE_INITIALIZER;
    struct DDS_SampleInfoSeq info_seq = DDS_SEQUENCE_INITIALIZER;
    DDS_ReturnCode_t retcode;
    int i;
    msgpack_packer mp_pck;
    msgpack_sbuffer mp_sbuf;
    Dummy *data;

    dummy_reader = DummyDataReader_narrow(ctx->reader);
    if (dummy_reader == NULL) {
        flb_error("[in_dds_dummy] DataReader narrow error\n");
        return -1;
    }

    retcode = DummyDataReader_take(
            dummy_reader,
            &data_seq, &info_seq, DDS_LENGTH_UNLIMITED,
            DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);
    if (retcode == DDS_RETCODE_NO_DATA) {
        return -1;
    } else if (retcode != DDS_RETCODE_OK) {
        flb_error("[in_dds_dummy]take error %d\n", retcode);
        return -1;
    }

    for (i = 0; i < DummySeq_get_length(&data_seq); ++i) {
        if (DDS_SampleInfoSeq_get_reference(&info_seq, i)->valid_data) {
		    msgpack_sbuffer_init(&mp_sbuf);
    		msgpack_packer_init(&mp_pck, &mp_sbuf, msgpack_sbuffer_write);

            data = DummySeq_get_reference(&data_seq, i);
			msgpack_pack_array(&mp_pck, 2);
			// TODO: Source Timestamp
            msgpack_pack_double(&mp_pck, data->ts);

            msgpack_pack_map(&mp_pck, 1);
    
			msgpack_pack_str(&mp_pck, 7);
    		msgpack_pack_str_body(&mp_pck, "message", 7);
            msgpack_pack_str(&mp_pck, strlen(data->message));
            msgpack_pack_str_body(&mp_pck, data->message, strlen(data->message));

            flb_input_chunk_append_raw(ctx->i_ins, NULL, 0, mp_sbuf.data, mp_sbuf.size);
            msgpack_sbuffer_destroy(&mp_sbuf);
        }
    }

    retcode = DummyDataReader_return_loan(
            dummy_reader,
            &data_seq, &info_seq);
    if (retcode != DDS_RETCODE_OK) {
        flb_error ("[in_dds_dummy]return loan error %d\n", retcode);
    }

	return 0;
}

static int cb_dds_dummy_init(struct flb_input_instance *ins,
		struct flb_config *config, void *data)
{
	struct flb_in_dds_dummy_config *ctx;
	const char *tmp = NULL;
	DDS_ReturnCode_t retcode;
	int ret;

	ctx = flb_calloc(1, sizeof(struct flb_in_dds_dummy_config));
	if (!ctx) {
		flb_errno();
		return -1;
	}

	ctx->i_ins = ins;

	// Setting Domain ID
	tmp = flb_input_get_property("Domain_ID", ins);
	if (tmp != NULL && atoi(tmp) >= 0) {
		ctx->domain_id = atoi(tmp);
	}
	else {
		ctx->domain_id = DEFAULT_DOMAIN_ID;
	}

	// Setting interval
	tmp = flb_input_get_property("Interval_Sec", ins);
	if (tmp != NULL && atoi(tmp) >= 0) {
        ctx->interval_sec = atoi(tmp);
    }
    else {
        ctx->interval_sec = DEFAULT_INTERVAL_SEC;
    }
	tmp = flb_input_get_property("Interval_Nsec", ins);
	if (tmp != NULL && atoi(tmp) >= 0) {
        ctx->interval_nsec = atoi(tmp);
    }
    else {
        ctx->interval_nsec = DEFAULT_INTERVAL_NSEC;
    }

	/* To customize participant QoS, use
	   the configuration file USER_QOS_PROFILES.xml */
	ctx->participant = DDS_DomainParticipantFactory_create_participant(
			DDS_TheParticipantFactory, ctx->domain_id, &DDS_PARTICIPANT_QOS_DEFAULT,
			NULL /* listener */, DDS_STATUS_MASK_NONE);
	if (ctx->participant == NULL) {
		flb_error("[in_dds_dummy] create_participant error");
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
		flb_error("[in_dds_dummy] create_subscriber error");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* Register type before creating topic */
	ctx->type_name = DummyTypeSupport_get_type_name();
	retcode = DummyTypeSupport_register_type(
			ctx->participant, ctx->type_name);
	if (retcode != DDS_RETCODE_OK) {
		flb_error("[in_dds_dummy] register_type error %d", retcode);
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* To customize topic QoS, use
	   DDS_DomainParticipant_get_default_topic_qos() instead */
	ctx->topic = DDS_DomainParticipant_create_topic(
			ctx->participant, "Dummy",
			ctx->type_name, &DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
			DDS_STATUS_MASK_NONE);
	if (ctx->topic == NULL) {
		flb_error("[in_dds_dummy] create_topic error");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* To customize data reader QoS, use
	   the configuration file USER_QOS_PROFILES.xml */
	ctx->reader = DDS_Subscriber_create_datareader(
			ctx->subscriber, DDS_Topic_as_topicdescription(ctx->topic),
			&DDS_DATAREADER_QOS_DEFAULT, NULL, DDS_STATUS_MASK_NONE);
	if (ctx->reader == NULL) {
		flb_error("[in_dds_dummy] create_datareader error");
		dds_shutdown(ctx->participant);
		flb_errno();
		return -1;
	}

	/* Set the context */
	flb_input_set_context(ins, ctx);

	/* Set our collector based on time, the DDS reader polls configured interval */
	ret = flb_input_set_collector_time(ins,
					cb_dds_dummy_collect,
					ctx->interval_sec,
					ctx->interval_nsec,
					config);
	if (ret == -1) {
		flb_error("[in_dds_dummy] flb_input_set_collector_time error");
	}

	return 0;
}

static int cb_dds_dummy_exit(void *data, struct flb_config *config)
{
		(void) *config;
		struct flb_in_dds_dummy_config *ctx = data;

		if (!ctx) {
				return 0;
		}

		if (ctx->participant) {
				dds_shutdown(ctx->participant);

		}

		flb_free(ctx);

		return 0;
}

struct flb_input_plugin in_dds_dummy_plugin = {
		.name         = "dds_dummy",
		.description  = "DDS Dummy Input Plugin",
		.cb_init      = cb_dds_dummy_init,
		.cb_pre_run   = NULL,
		.cb_collect   = cb_dds_dummy_collect,
		.cb_flush_buf = NULL,
		.cb_exit      = cb_dds_dummy_exit
};
