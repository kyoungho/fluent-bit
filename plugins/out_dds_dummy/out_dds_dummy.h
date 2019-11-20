#ifndef FLB_OUT_DDS_DUMMY_H
#define FLB_OUT_DDS_DUMMY_H

#include <fluent-bit/flb_info.h>
#include <fluent-bit/flb_output.h>
#include <fluent-bit/flb_time.h>
#include <fluent-bit/flb_pack.h>
#include <stdio.h>
#include <stdlib.h>
#include "ndds/ndds_c.h"
#include "dummy.h"
#include "dummySupport.h"

struct flb_out_dds_dummy_config {
	int domain_id;

	DDS_DomainParticipant *participant;
	DDS_Publisher *publisher;
	DDS_Topic *topic;
	DDS_DataWriter *writer;
	DummyDataWriter *dummy_writer;
	const char *type_name;
	Dummy *instance;
	DDS_InstanceHandle_t instance_handle;
};

#endif
