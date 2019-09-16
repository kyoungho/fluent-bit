#include <fluent-bit/flb_info.h>
#include <fluent-bit/flb_output.h>
#include <fluent-bit/flb_time.h>
#include <fluent-bit/flb_pack.h>
#include <stdlib.h>
#include "dds.h"

//#include "ndds/ndds_c.h"

static int cb_dds_init(struct flb_output_instance *ins,
		struct flb_config *config,
		void *data)
{   

	const char *tmp;
	struct flb_out_dds_config *ctx;

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
	struct flb_time tms;
	msgpack_object *obj;
	msgpack_unpacked result;

	msgpack_unpacked_init(&result);


	while(msgpack_unpack_next(&result, data, bytes, &off) == MSGPACK_UNPACK_SUCCESS) {
		flb_time_pop_from_msgpack(&tms, &result, &obj);

		flb_info("tag: %s", tag);
		flb_info("%"PRIu32".%09lu", (uint32_t)tms.tm.tv_sec, tms.tm.tv_nsec);

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

