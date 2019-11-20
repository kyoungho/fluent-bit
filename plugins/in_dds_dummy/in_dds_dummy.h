#ifndef FLB_IN_DDS_DUMMY_H
#define FLB_IN_DDS_DUMMY_H

#include <fluent-bit/flb_info.h>
#include <fluent-bit/flb_input.h>
#include <fluent-bit/flb_pack.h>

#include "ndds/ndds_c.h"
#include "dummy.h"
#include "dummySupport.h"

/* Default configuration values */
#define DEFAULT_DOMAIN_ID 0
#define DEFAULT_INTERVAL_SEC 0
#define DEFAULT_INTERVAL_NSEC 1000000

struct flb_in_dds_dummy_config {
	int domain_id;	/* DDS Domain ID */
    int interval_sec;   /* interval collection time (Second) */
    int interval_nsec;  /* interval collection time (Nanosecond) */

	DDS_DomainParticipant *participant;
	DDS_Subscriber *subscriber;
	DDS_Topic *topic;
	DDS_DataReader *reader;
	DummyDataReader *dummy_reader;
	const char *type_name;
	struct flb_input_instance *i_ins;
};

#endif
