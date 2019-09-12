#include <fluent-bit/flb_info.h>
#include <fluent-bit/flb_output.h>
#include <fluent-bit/flb_time.h>
#include <fluent-bit/flb_pack.h>

//#include "ndds/ndds_c.h"

static int cb_dds_init(struct flb_output_instance *ins,
                         struct flb_config *config,
                         void *data)
{   
    return 0;
}

static void cb_dds_flush(const void *data, size_t bytes,
                           const char *tag, int tag_len,
                           struct flb_input_instance *i_ins,
                           void *out_context,
                           struct flb_config *config) {
    return 0;
}

static int cb_dds_exit(void *data, struct flb_config *config) {
    return 0;
}

struct flb_output_plugin out_dds_plugin = {
    .name         = "dds",
    .description  = "dds",
    .cb_init      = cb_dds_init,
    .cb_flush     = cb_dds_flush,
    .cb_exit      = cb_dds_exit,
    .flags        = 0
};

