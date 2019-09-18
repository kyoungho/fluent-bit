#ifndef FLB_IN_DDS_H
#define FLB_IN_DDS_H

#include <fluent-bit/flb_info.h>
#include <fluent-bit/flb_input.h>
#include <fluent-bit/flb_pack.h>

#include "ndds/ndds_c.h"
#include "fb.h"
#include "fbSupport.h"

struct flb_in_dds_config {
	int domain_id;

	DDS_DomainParticipant *participant;
	DDS_Subscriber *subscriber;
	DDS_Topic *topic;
	struct DDS_DataReaderListener reader_listener;
	DDS_DataReader *reader;
	FBDataReader *fb_reader;
	const char *type_name;
	struct flb_input_instance *i_ins;
};

#endif
