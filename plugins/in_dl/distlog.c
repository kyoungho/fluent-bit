

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from distlog.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "distlog.h"

#ifndef NDDS_STANDALONE_TYPE
#include "distlogPlugin.h"
#endif

/* ========================================================================= */
const char *RTI_DL_HostAndAppIdTYPENAME = "RTI::DL::HostAndAppId";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_HostAndAppId_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_HostAndAppId_g_tc_members[2]=
    {

        {
            (char *)"rtps_host_id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"rtps_app_id",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_HostAndAppId_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::HostAndAppId", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            RTI_DL_HostAndAppId_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_HostAndAppId*/

    if (is_initialized) {
        return &RTI_DL_HostAndAppId_g_tc;
    }

    RTI_DL_HostAndAppId_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_DL_HostAndAppId_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    RTI_DL_HostAndAppId_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    /* Initialize the values for member annotations. */
    RTI_DL_HostAndAppId_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_HostAndAppId_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
    RTI_DL_HostAndAppId_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_HostAndAppId_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_DL_HostAndAppId_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_HostAndAppId_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_DL_HostAndAppId_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_HostAndAppId_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    RTI_DL_HostAndAppId_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_HostAndAppId_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_DL_HostAndAppId_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_HostAndAppId_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_DL_HostAndAppId_g_tc._data._sampleAccessInfo =
    RTI_DL_HostAndAppId_get_sample_access_info();
    RTI_DL_HostAndAppId_g_tc._data._typePlugin =
    RTI_DL_HostAndAppId_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_HostAndAppId_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_HostAndAppId_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_HostAndAppId_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_HostAndAppId_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_HostAndAppId_g_sampleAccessInfo;
    }

    RTI_DL_HostAndAppId_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_HostAndAppId *)NULL)->rtps_host_id);

    RTI_DL_HostAndAppId_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_HostAndAppId *)NULL)->rtps_app_id);

    RTI_DL_HostAndAppId_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_HostAndAppId_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_HostAndAppId);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_HostAndAppId_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_HostAndAppId_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_HostAndAppId_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_HostAndAppId_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_HostAndAppId_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_HostAndAppId_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_HostAndAppId_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_HostAndAppId_finalize_w_return,
        NULL
    };

    return &RTI_DL_HostAndAppId_g_typePlugin;
}
#endif

RTIBool RTI_DL_HostAndAppId_initialize(
    RTI_DL_HostAndAppId* sample) {
    return RTI_DL_HostAndAppId_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_DL_HostAndAppId_initialize_ex(
    RTI_DL_HostAndAppId* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_HostAndAppId_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_HostAndAppId_initialize_w_params(
    RTI_DL_HostAndAppId* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->rtps_host_id = 0;

    sample->rtps_app_id = 0;

    return RTI_TRUE;
}

RTIBool RTI_DL_HostAndAppId_finalize_w_return(
    RTI_DL_HostAndAppId* sample)
{
    RTI_DL_HostAndAppId_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_DL_HostAndAppId_finalize(
    RTI_DL_HostAndAppId* sample)
{

    RTI_DL_HostAndAppId_finalize_ex(sample,RTI_TRUE);
}

void RTI_DL_HostAndAppId_finalize_ex(
    RTI_DL_HostAndAppId* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_HostAndAppId_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_HostAndAppId_finalize_w_params(
    RTI_DL_HostAndAppId* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_DL_HostAndAppId_finalize_optional_members(
    RTI_DL_HostAndAppId* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_DL_HostAndAppId_copy(
    RTI_DL_HostAndAppId* dst,
    const RTI_DL_HostAndAppId* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLong (
        &dst->rtps_host_id, &src->rtps_host_id)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->rtps_app_id, &src->rtps_app_id)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_HostAndAppId' sequence class.
*/
#define T RTI_DL_HostAndAppId
#define TSeq RTI_DL_HostAndAppIdSeq

#define T_initialize_w_params RTI_DL_HostAndAppId_initialize_w_params

#define T_finalize_w_params   RTI_DL_HostAndAppId_finalize_w_params
#define T_copy       RTI_DL_HostAndAppId_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_LogMessageTYPENAME = "RTI::DL::LogMessage";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_LogMessage_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_DL_LogMessage_g_tc_category_string = DDS_INITIALIZE_STRING_TYPECODE(((RTI_DL_MAX_CATEGORY_LENGTH)));
    static DDS_TypeCode RTI_DL_LogMessage_g_tc_message_string = DDS_INITIALIZE_STRING_TYPECODE(((RTI_DL_MAX_LOG_MESSAGE_LENGTH)));

    static DDS_TypeCode_Member RTI_DL_LogMessage_g_tc_members[5]=
    {

        {
            (char *)"hostAndAppId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"level",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"category",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"message",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"messageId",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_LogMessage_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_MUTABLE_EXTENSIBILITY, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::LogMessage", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            RTI_DL_LogMessage_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_LogMessage*/

    if (is_initialized) {
        return &RTI_DL_LogMessage_g_tc;
    }

    RTI_DL_LogMessage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_DL_LogMessage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_HostAndAppId_get_typecode();
    RTI_DL_LogMessage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    RTI_DL_LogMessage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&RTI_DL_LogMessage_g_tc_category_string;
    RTI_DL_LogMessage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&RTI_DL_LogMessage_g_tc_message_string;
    RTI_DL_LogMessage_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    /* Initialize the values for member annotations. */

    RTI_DL_LogMessage_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_LogMessage_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    RTI_DL_LogMessage_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_LogMessage_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_DL_LogMessage_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_LogMessage_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_DL_LogMessage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_DL_LogMessage_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_DL_LogMessage_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_DL_LogMessage_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_DL_LogMessage_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_DL_LogMessage_g_tc_members[4]._annotations._defaultValue._u.long_long_value = 0ll;
    RTI_DL_LogMessage_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_DL_LogMessage_g_tc_members[4]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    RTI_DL_LogMessage_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_DL_LogMessage_g_tc_members[4]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

    RTI_DL_LogMessage_g_tc._data._sampleAccessInfo =
    RTI_DL_LogMessage_get_sample_access_info();
    RTI_DL_LogMessage_g_tc._data._typePlugin =
    RTI_DL_LogMessage_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_LogMessage_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_LogMessage_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_LogMessage_g_memberAccessInfos[5] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_LogMessage_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_LogMessage_g_sampleAccessInfo;
    }

    RTI_DL_LogMessage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_LogMessage *)NULL)->hostAndAppId);

    RTI_DL_LogMessage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_LogMessage *)NULL)->level);

    RTI_DL_LogMessage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_LogMessage *)NULL)->category);

    RTI_DL_LogMessage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_LogMessage *)NULL)->message);

    RTI_DL_LogMessage_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_LogMessage *)NULL)->messageId);

    RTI_DL_LogMessage_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_LogMessage_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_LogMessage);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_LogMessage_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_LogMessage_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_LogMessage_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_LogMessage_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_LogMessage_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_LogMessage_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_LogMessage_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_LogMessage_finalize_w_return,
        NULL
    };

    return &RTI_DL_LogMessage_g_typePlugin;
}
#endif

RTIBool RTI_DL_LogMessage_initialize(
    RTI_DL_LogMessage* sample) {
    return RTI_DL_LogMessage_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_DL_LogMessage_initialize_ex(
    RTI_DL_LogMessage* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_LogMessage_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_LogMessage_initialize_w_params(
    RTI_DL_LogMessage* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_HostAndAppId_initialize_w_params(&sample->hostAndAppId,
    allocParams)) {
        return RTI_FALSE;
    }

    sample->level = 0;

    if (allocParams->allocate_memory) {
        sample->category = DDS_String_alloc(((RTI_DL_MAX_CATEGORY_LENGTH)));
        RTICdrType_copyStringEx(
            &sample->category,
            "",
            ((RTI_DL_MAX_CATEGORY_LENGTH)),
            RTI_FALSE);
        if (sample->category == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->category != NULL) {
            RTICdrType_copyStringEx(
                &sample->category,
                "",
                ((RTI_DL_MAX_CATEGORY_LENGTH)),
                RTI_FALSE);
            if (sample->category == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (allocParams->allocate_memory) {
        sample->message = DDS_String_alloc(((RTI_DL_MAX_LOG_MESSAGE_LENGTH)));
        RTICdrType_copyStringEx(
            &sample->message,
            "",
            ((RTI_DL_MAX_LOG_MESSAGE_LENGTH)),
            RTI_FALSE);
        if (sample->message == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->message != NULL) {
            RTICdrType_copyStringEx(
                &sample->message,
                "",
                ((RTI_DL_MAX_LOG_MESSAGE_LENGTH)),
                RTI_FALSE);
            if (sample->message == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->messageId = 0ll;

    return RTI_TRUE;
}

RTIBool RTI_DL_LogMessage_finalize_w_return(
    RTI_DL_LogMessage* sample)
{
    RTI_DL_LogMessage_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_DL_LogMessage_finalize(
    RTI_DL_LogMessage* sample)
{

    RTI_DL_LogMessage_finalize_ex(sample,RTI_TRUE);
}

void RTI_DL_LogMessage_finalize_ex(
    RTI_DL_LogMessage* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_LogMessage_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_LogMessage_finalize_w_params(
    RTI_DL_LogMessage* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_DL_HostAndAppId_finalize_w_params(&sample->hostAndAppId,deallocParams);

    if (sample->category != NULL) {
        DDS_String_free(sample->category);
        sample->category=NULL;

    }
    if (sample->message != NULL) {
        DDS_String_free(sample->message);
        sample->message=NULL;

    }

}

void RTI_DL_LogMessage_finalize_optional_members(
    RTI_DL_LogMessage* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    RTI_DL_HostAndAppId_finalize_optional_members(&sample->hostAndAppId, deallocParams->delete_pointers);
}

RTIBool RTI_DL_LogMessage_copy(
    RTI_DL_LogMessage* dst,
    const RTI_DL_LogMessage* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_HostAndAppId_copy(
        &dst->hostAndAppId,(const RTI_DL_HostAndAppId*)&src->hostAndAppId)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyLong (
        &dst->level, &src->level)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->category, src->category, 
        ((RTI_DL_MAX_CATEGORY_LENGTH)) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->message, src->message, 
        ((RTI_DL_MAX_LOG_MESSAGE_LENGTH)) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLongLong (
        &dst->messageId, &src->messageId)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_LogMessage' sequence class.
*/
#define T RTI_DL_LogMessage
#define TSeq RTI_DL_LogMessageSeq

#define T_initialize_w_params RTI_DL_LogMessage_initialize_w_params

#define T_finalize_w_params   RTI_DL_LogMessage_finalize_w_params
#define T_copy       RTI_DL_LogMessage_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_RTILoggerVerbosityTYPENAME = "RTI::DL::ADMIN::RTILoggerVerbosity";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_RTILoggerVerbosity_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_ADMIN_RTILoggerVerbosity_g_tc_members[6]=
    {

        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_SILENT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_SILENT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_ERROR",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_ERROR, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_WARNING",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_WARNING, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_LOCAL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_LOCAL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_REMOTE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_REMOTE, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_RTILoggerVerbosity_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::RTILoggerVerbosity", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            RTI_DL_ADMIN_RTILoggerVerbosity_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_RTILoggerVerbosity*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_RTILoggerVerbosity_g_tc;
    }

    RTI_DL_ADMIN_RTILoggerVerbosity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    RTI_DL_ADMIN_RTILoggerVerbosity_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_RTILoggerVerbosity_g_tc._data._annotations._defaultValue._u.long_value = 0;

    RTI_DL_ADMIN_RTILoggerVerbosity_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_RTILoggerVerbosity_get_sample_access_info();
    RTI_DL_ADMIN_RTILoggerVerbosity_g_tc._data._typePlugin =
    RTI_DL_ADMIN_RTILoggerVerbosity_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_RTILoggerVerbosity_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_RTILoggerVerbosity_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_RTILoggerVerbosity_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_RTILoggerVerbosity_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_RTILoggerVerbosity_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_RTILoggerVerbosity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_DL_ADMIN_RTILoggerVerbosity_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_RTILoggerVerbosity_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_RTILoggerVerbosity);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_RTILoggerVerbosity_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_RTILoggerVerbosity_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_RTILoggerVerbosity_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_RTILoggerVerbosity_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_RTILoggerVerbosity_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_RTILoggerVerbosity_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_RTILoggerVerbosity_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_RTILoggerVerbosity_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_RTILoggerVerbosity_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_initialize(
    RTI_DL_ADMIN_RTILoggerVerbosity* sample) {
    *sample = RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_SILENT;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_initialize_ex(
    RTI_DL_ADMIN_RTILoggerVerbosity* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_RTILoggerVerbosity_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_initialize_w_params(
    RTI_DL_ADMIN_RTILoggerVerbosity* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_SILENT;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_finalize_w_return(
    RTI_DL_ADMIN_RTILoggerVerbosity* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void RTI_DL_ADMIN_RTILoggerVerbosity_finalize(
    RTI_DL_ADMIN_RTILoggerVerbosity* sample)
{

    if (sample==NULL) {
        return;
    }
}

void RTI_DL_ADMIN_RTILoggerVerbosity_finalize_ex(
    RTI_DL_ADMIN_RTILoggerVerbosity* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_RTILoggerVerbosity_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_RTILoggerVerbosity_finalize_w_params(
    RTI_DL_ADMIN_RTILoggerVerbosity* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_DL_ADMIN_RTILoggerVerbosity_finalize_optional_members(
    RTI_DL_ADMIN_RTILoggerVerbosity* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_copy(
    RTI_DL_ADMIN_RTILoggerVerbosity* dst,
    const RTI_DL_ADMIN_RTILoggerVerbosity* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_RTILoggerVerbosity' sequence class.
*/
#define T RTI_DL_ADMIN_RTILoggerVerbosity
#define TSeq RTI_DL_ADMIN_RTILoggerVerbositySeq

#define T_initialize_w_params RTI_DL_ADMIN_RTILoggerVerbosity_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_RTILoggerVerbosity_finalize_w_params
#define T_copy       RTI_DL_ADMIN_RTILoggerVerbosity_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_RTILoggerCategoryTYPENAME = "RTI::DL::ADMIN::RTILoggerCategory";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_RTILoggerCategory_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_ADMIN_RTILoggerCategory_g_tc_members[5]=
    {

        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_CATEGORY_PLATFORM",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_CATEGORY_PLATFORM, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_CATEGORY_COMMUNICATION",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_CATEGORY_COMMUNICATION, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_CATEGORY_DATABASE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_CATEGORY_DATABASE, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_CATEGORY_ENTITIES",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_CATEGORY_ENTITIES, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_CATEGORY_API",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_CATEGORY_API, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_RTILoggerCategory_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::RTILoggerCategory", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            RTI_DL_ADMIN_RTILoggerCategory_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_RTILoggerCategory*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_RTILoggerCategory_g_tc;
    }

    RTI_DL_ADMIN_RTILoggerCategory_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    RTI_DL_ADMIN_RTILoggerCategory_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_RTILoggerCategory_g_tc._data._annotations._defaultValue._u.long_value = 0;

    RTI_DL_ADMIN_RTILoggerCategory_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_RTILoggerCategory_get_sample_access_info();
    RTI_DL_ADMIN_RTILoggerCategory_g_tc._data._typePlugin =
    RTI_DL_ADMIN_RTILoggerCategory_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_RTILoggerCategory_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_RTILoggerCategory_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_RTILoggerCategory_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_RTILoggerCategory_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_RTILoggerCategory_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_RTILoggerCategory_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_DL_ADMIN_RTILoggerCategory_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_RTILoggerCategory_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_RTILoggerCategory);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_RTILoggerCategory_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_RTILoggerCategory_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_RTILoggerCategory_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_RTILoggerCategory_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_RTILoggerCategory_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_RTILoggerCategory_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_RTILoggerCategory_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_RTILoggerCategory_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_RTILoggerCategory_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_RTILoggerCategory_initialize(
    RTI_DL_ADMIN_RTILoggerCategory* sample) {
    *sample = RTI_DL_NDDS_CONFIG_LOG_CATEGORY_PLATFORM;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_RTILoggerCategory_initialize_ex(
    RTI_DL_ADMIN_RTILoggerCategory* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_RTILoggerCategory_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_RTILoggerCategory_initialize_w_params(
    RTI_DL_ADMIN_RTILoggerCategory* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = RTI_DL_NDDS_CONFIG_LOG_CATEGORY_PLATFORM;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_RTILoggerCategory_finalize_w_return(
    RTI_DL_ADMIN_RTILoggerCategory* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void RTI_DL_ADMIN_RTILoggerCategory_finalize(
    RTI_DL_ADMIN_RTILoggerCategory* sample)
{

    if (sample==NULL) {
        return;
    }
}

void RTI_DL_ADMIN_RTILoggerCategory_finalize_ex(
    RTI_DL_ADMIN_RTILoggerCategory* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_RTILoggerCategory_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_RTILoggerCategory_finalize_w_params(
    RTI_DL_ADMIN_RTILoggerCategory* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_DL_ADMIN_RTILoggerCategory_finalize_optional_members(
    RTI_DL_ADMIN_RTILoggerCategory* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_DL_ADMIN_RTILoggerCategory_copy(
    RTI_DL_ADMIN_RTILoggerCategory* dst,
    const RTI_DL_ADMIN_RTILoggerCategory* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_RTILoggerCategory' sequence class.
*/
#define T RTI_DL_ADMIN_RTILoggerCategory
#define TSeq RTI_DL_ADMIN_RTILoggerCategorySeq

#define T_initialize_w_params RTI_DL_ADMIN_RTILoggerCategory_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_RTILoggerCategory_finalize_w_params
#define T_copy       RTI_DL_ADMIN_RTILoggerCategory_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_RTILoggerPrintFormatTYPENAME = "RTI::DL::ADMIN::RTILoggerPrintFormat";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_RTILoggerPrintFormat_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc_members[7]=
    {

        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEFAULT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEFAULT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_TIMESTAMPED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_TIMESTAMPED, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_VERBOSE",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_VERBOSE, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_VERBOSE_TIMESTAMPED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_VERBOSE_TIMESTAMPED, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEBUG",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEBUG, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_MINIMAL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_MINIMAL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_MAXIMAL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_MAXIMAL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::RTILoggerPrintFormat", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_RTILoggerPrintFormat*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc;
    }

    RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc._data._annotations._defaultValue._u.long_value = 0;

    RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_RTILoggerPrintFormat_get_sample_access_info();
    RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc._data._typePlugin =
    RTI_DL_ADMIN_RTILoggerPrintFormat_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_RTILoggerPrintFormat_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_RTILoggerPrintFormat_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_RTILoggerPrintFormat_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_RTILoggerPrintFormat_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_RTILoggerPrintFormat_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_RTILoggerPrintFormat_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_DL_ADMIN_RTILoggerPrintFormat_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_RTILoggerPrintFormat_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_RTILoggerPrintFormat);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_RTILoggerPrintFormat_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_RTILoggerPrintFormat_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_RTILoggerPrintFormat_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_RTILoggerPrintFormat_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_RTILoggerPrintFormat_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_RTILoggerPrintFormat_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_RTILoggerPrintFormat_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_RTILoggerPrintFormat_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_initialize(
    RTI_DL_ADMIN_RTILoggerPrintFormat* sample) {
    *sample = RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEFAULT;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_initialize_ex(
    RTI_DL_ADMIN_RTILoggerPrintFormat* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_RTILoggerPrintFormat_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_initialize_w_params(
    RTI_DL_ADMIN_RTILoggerPrintFormat* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEFAULT;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_return(
    RTI_DL_ADMIN_RTILoggerPrintFormat* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void RTI_DL_ADMIN_RTILoggerPrintFormat_finalize(
    RTI_DL_ADMIN_RTILoggerPrintFormat* sample)
{

    if (sample==NULL) {
        return;
    }
}

void RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_ex(
    RTI_DL_ADMIN_RTILoggerPrintFormat* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_params(
    RTI_DL_ADMIN_RTILoggerPrintFormat* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_optional_members(
    RTI_DL_ADMIN_RTILoggerPrintFormat* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_copy(
    RTI_DL_ADMIN_RTILoggerPrintFormat* dst,
    const RTI_DL_ADMIN_RTILoggerPrintFormat* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_RTILoggerPrintFormat' sequence class.
*/
#define T RTI_DL_ADMIN_RTILoggerPrintFormat
#define TSeq RTI_DL_ADMIN_RTILoggerPrintFormatSeq

#define T_initialize_w_params RTI_DL_ADMIN_RTILoggerPrintFormat_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_params
#define T_copy       RTI_DL_ADMIN_RTILoggerPrintFormat_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityTYPENAME = "RTI::DL::ADMIN::RTILoggerCategoryAndVerbosity";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc_members[2]=
    {

        {
            (char *)"category",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"verbosity",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::RTILoggerCategoryAndVerbosity", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc;
    }

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_RTILoggerCategory_get_typecode();
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_RTILoggerVerbosity_get_typecode();

    /* Initialize the values for member annotations. */
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc_members[0]._annotations._defaultValue._u.enumerated_value = 0;

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_sample_access_info();
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc._data._typePlugin =
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *)NULL)->category);

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *)NULL)->verbosity);

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* sample) {
    return RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_ex(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_w_params(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->category = RTI_DL_NDDS_CONFIG_LOG_CATEGORY_PLATFORM;
    sample->verbosity = RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_SILENT;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_w_return(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* sample)
{
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* sample)
{

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_ex(sample,RTI_TRUE);
}

void RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_ex(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_w_params(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_DL_ADMIN_RTILoggerCategory_finalize_w_params(&sample->category,deallocParams);

    RTI_DL_ADMIN_RTILoggerVerbosity_finalize_w_params(&sample->verbosity,deallocParams);

}

void RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_optional_members(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    RTI_DL_ADMIN_RTILoggerCategory_finalize_optional_members(&sample->category, deallocParams->delete_pointers);
    RTI_DL_ADMIN_RTILoggerVerbosity_finalize_optional_members(&sample->verbosity, deallocParams->delete_pointers);
}

RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_copy(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* dst,
    const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_ADMIN_RTILoggerCategory_copy(
        &dst->category,(const RTI_DL_ADMIN_RTILoggerCategory*)&src->category)) {
        return RTI_FALSE;
    } 
    if (!RTI_DL_ADMIN_RTILoggerVerbosity_copy(
        &dst->verbosity,(const RTI_DL_ADMIN_RTILoggerVerbosity*)&src->verbosity)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity' sequence class.
*/
#define T RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity
#define TSeq RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq

#define T_initialize_w_params RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_w_params
#define T_copy       RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_StateKindTYPENAME = "RTI::DL::ADMIN::StateKind";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_StateKind_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_ADMIN_StateKind_g_tc_members[4]=
    {

        {
            (char *)"RTI_DL_STATE_INITIALIZING",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_STATE_INITIALIZING, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_STATE_OPERATIONAL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_STATE_OPERATIONAL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_STATE_NONOPERATIONAL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_STATE_NONOPERATIONAL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_STATE_SHUTTING_DOWN",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_STATE_SHUTTING_DOWN, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_StateKind_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::StateKind", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            RTI_DL_ADMIN_StateKind_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_StateKind*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_StateKind_g_tc;
    }

    RTI_DL_ADMIN_StateKind_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    RTI_DL_ADMIN_StateKind_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_StateKind_g_tc._data._annotations._defaultValue._u.long_value = 0;

    RTI_DL_ADMIN_StateKind_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_StateKind_get_sample_access_info();
    RTI_DL_ADMIN_StateKind_g_tc._data._typePlugin =
    RTI_DL_ADMIN_StateKind_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_StateKind_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_StateKind_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_StateKind_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_StateKind_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_StateKind_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_StateKind_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_DL_ADMIN_StateKind_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_StateKind_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_StateKind);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_StateKind_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_StateKind_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_StateKind_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_StateKind_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_StateKind_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_StateKind_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_StateKind_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_StateKind_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_StateKind_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_StateKind_initialize(
    RTI_DL_ADMIN_StateKind* sample) {
    *sample = RTI_DL_STATE_INITIALIZING;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_StateKind_initialize_ex(
    RTI_DL_ADMIN_StateKind* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_StateKind_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_StateKind_initialize_w_params(
    RTI_DL_ADMIN_StateKind* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = RTI_DL_STATE_INITIALIZING;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_StateKind_finalize_w_return(
    RTI_DL_ADMIN_StateKind* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void RTI_DL_ADMIN_StateKind_finalize(
    RTI_DL_ADMIN_StateKind* sample)
{

    if (sample==NULL) {
        return;
    }
}

void RTI_DL_ADMIN_StateKind_finalize_ex(
    RTI_DL_ADMIN_StateKind* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_StateKind_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_StateKind_finalize_w_params(
    RTI_DL_ADMIN_StateKind* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_DL_ADMIN_StateKind_finalize_optional_members(
    RTI_DL_ADMIN_StateKind* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_DL_ADMIN_StateKind_copy(
    RTI_DL_ADMIN_StateKind* dst,
    const RTI_DL_ADMIN_StateKind* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_StateKind' sequence class.
*/
#define T RTI_DL_ADMIN_StateKind
#define TSeq RTI_DL_ADMIN_StateKindSeq

#define T_initialize_w_params RTI_DL_ADMIN_StateKind_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_StateKind_finalize_w_params
#define T_copy       RTI_DL_ADMIN_StateKind_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_StateTYPENAME = "RTI::DL::ADMIN::State";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_State_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_DL_ADMIN_State_g_tc_applicationKind_string = DDS_INITIALIZE_STRING_TYPECODE(((RTI_DL_ADMIN_MAX_APPLICATION_KIND_LENGTH)));
    static DDS_TypeCode RTI_DL_ADMIN_State_g_tc_rtiLoggerVerbosities_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,5, NULL,NULL);

    static DDS_TypeCode_Member RTI_DL_ADMIN_State_g_tc_members[7]=
    {

        {
            (char *)"hostAndAppId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"administrationDomainId",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"state",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"applicationKind",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"filterLevel",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"rtiLoggerVerbosities",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"rtiLoggerPrintFormat",/* Member name */
            {
                6,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_State_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_MUTABLE_EXTENSIBILITY, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::State", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            RTI_DL_ADMIN_State_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_State*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_State_g_tc;
    }

    RTI_DL_ADMIN_State_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_DL_ADMIN_State_g_tc_rtiLoggerVerbosities_array._data._typeCode =(RTICdrTypeCode *)RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_typecode();
    RTI_DL_ADMIN_State_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_HostAndAppId_get_typecode();
    RTI_DL_ADMIN_State_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    RTI_DL_ADMIN_State_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_StateKind_get_typecode();
    RTI_DL_ADMIN_State_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&RTI_DL_ADMIN_State_g_tc_applicationKind_string;
    RTI_DL_ADMIN_State_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    RTI_DL_ADMIN_State_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& RTI_DL_ADMIN_State_g_tc_rtiLoggerVerbosities_array;
    RTI_DL_ADMIN_State_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_RTILoggerPrintFormat_get_typecode();

    /* Initialize the values for member annotations. */

    RTI_DL_ADMIN_State_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_State_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    RTI_DL_ADMIN_State_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_State_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_DL_ADMIN_State_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_State_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_DL_ADMIN_State_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_State_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

    RTI_DL_ADMIN_State_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_DL_ADMIN_State_g_tc_members[3]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_DL_ADMIN_State_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_State_g_tc_members[4]._annotations._defaultValue._u.long_value = 0;
    RTI_DL_ADMIN_State_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_State_g_tc_members[4]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_DL_ADMIN_State_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_State_g_tc_members[4]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_DL_ADMIN_State_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_State_g_tc_members[6]._annotations._defaultValue._u.enumerated_value = 0;

    RTI_DL_ADMIN_State_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_State_get_sample_access_info();
    RTI_DL_ADMIN_State_g_tc._data._typePlugin =
    RTI_DL_ADMIN_State_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_State_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_State_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_State_g_memberAccessInfos[7] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_State_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_State_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_State_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_State *)NULL)->hostAndAppId);

    RTI_DL_ADMIN_State_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_State *)NULL)->administrationDomainId);

    RTI_DL_ADMIN_State_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_State *)NULL)->state);

    RTI_DL_ADMIN_State_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_State *)NULL)->applicationKind);

    RTI_DL_ADMIN_State_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_State *)NULL)->filterLevel);

    RTI_DL_ADMIN_State_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_State *)NULL)->rtiLoggerVerbosities);

    RTI_DL_ADMIN_State_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_State *)NULL)->rtiLoggerPrintFormat);

    RTI_DL_ADMIN_State_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_State_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_State);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_State_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_State_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_State_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_State_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_State_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_State_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_State_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_State_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_State_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_State_initialize(
    RTI_DL_ADMIN_State* sample) {
    return RTI_DL_ADMIN_State_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_DL_ADMIN_State_initialize_ex(
    RTI_DL_ADMIN_State* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_State_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_State_initialize_w_params(
    RTI_DL_ADMIN_State* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_HostAndAppId_initialize_w_params(&sample->hostAndAppId,
    allocParams)) {
        return RTI_FALSE;
    }

    sample->administrationDomainId = 0;

    sample->state = RTI_DL_STATE_INITIALIZING;

    if (allocParams->allocate_memory) {
        sample->applicationKind = DDS_String_alloc(((RTI_DL_ADMIN_MAX_APPLICATION_KIND_LENGTH)));
        RTICdrType_copyStringEx(
            &sample->applicationKind,
            "",
            ((RTI_DL_ADMIN_MAX_APPLICATION_KIND_LENGTH)),
            RTI_FALSE);
        if (sample->applicationKind == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->applicationKind != NULL) {
            RTICdrType_copyStringEx(
                &sample->applicationKind,
                "",
                ((RTI_DL_ADMIN_MAX_APPLICATION_KIND_LENGTH)),
                RTI_FALSE);
            if (sample->applicationKind == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->filterLevel = 0;

    {
        int i = 0;
        RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* elem =
        (RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*) &sample->rtiLoggerVerbosities[0];

        for (i = 0; i < (int) ((5)); ++i, ++elem) {
            if (!RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_w_params(elem,allocParams)) {
                return RTI_FALSE;
            }
        }
    }
    sample->rtiLoggerPrintFormat = RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEFAULT;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_State_finalize_w_return(
    RTI_DL_ADMIN_State* sample)
{
    RTI_DL_ADMIN_State_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_DL_ADMIN_State_finalize(
    RTI_DL_ADMIN_State* sample)
{

    RTI_DL_ADMIN_State_finalize_ex(sample,RTI_TRUE);
}

void RTI_DL_ADMIN_State_finalize_ex(
    RTI_DL_ADMIN_State* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_State_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_State_finalize_w_params(
    RTI_DL_ADMIN_State* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_DL_HostAndAppId_finalize_w_params(&sample->hostAndAppId,deallocParams);

    RTI_DL_ADMIN_StateKind_finalize_w_params(&sample->state,deallocParams);

    if (sample->applicationKind != NULL) {
        DDS_String_free(sample->applicationKind);
        sample->applicationKind=NULL;

    }

    {
        int i = 0;
        RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* elem =
        (RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*) &sample->rtiLoggerVerbosities[0];

        for (i = 0; i < (int) ((5)); ++i, ++elem) {
            RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_w_params(elem,deallocParams);
        }
    }

    RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_params(&sample->rtiLoggerPrintFormat,deallocParams);

}

void RTI_DL_ADMIN_State_finalize_optional_members(
    RTI_DL_ADMIN_State* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    RTI_DL_HostAndAppId_finalize_optional_members(&sample->hostAndAppId, deallocParams->delete_pointers);
    RTI_DL_ADMIN_StateKind_finalize_optional_members(&sample->state, deallocParams->delete_pointers);
    {
        int i = 0;
        RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* elem =
        (RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*) &sample->rtiLoggerVerbosities[0];

        for (i = 0; i < (int) ((5)); ++i, ++elem) {
            RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_optional_members(elem, deallocParams->delete_pointers);
        }
    }
    RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_optional_members(&sample->rtiLoggerPrintFormat, deallocParams->delete_pointers);
}

RTIBool RTI_DL_ADMIN_State_copy(
    RTI_DL_ADMIN_State* dst,
    const RTI_DL_ADMIN_State* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_HostAndAppId_copy(
        &dst->hostAndAppId,(const RTI_DL_HostAndAppId*)&src->hostAndAppId)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyLong (
        &dst->administrationDomainId, &src->administrationDomainId)) { 
        return RTI_FALSE;
    }
    if (!RTI_DL_ADMIN_StateKind_copy(
        &dst->state,(const RTI_DL_ADMIN_StateKind*)&src->state)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyStringEx (
        &dst->applicationKind, src->applicationKind, 
        ((RTI_DL_ADMIN_MAX_APPLICATION_KIND_LENGTH)) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->filterLevel, &src->filterLevel)) { 
        return RTI_FALSE;
    }
    {
        int i = 0;
        RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* elemOut = (RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*) &dst->rtiLoggerVerbosities[0];
        const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* elemIn = (const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*) &src->rtiLoggerVerbosities[0];
        for (i = 0; i < (int) ((5));++i, ++elemOut, ++elemIn) {
            if (!RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_copy (elemOut,(const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*)elemIn)) {
                return RTI_FALSE;
            }
        }
    }
    if (!RTI_DL_ADMIN_RTILoggerPrintFormat_copy(
        &dst->rtiLoggerPrintFormat,(const RTI_DL_ADMIN_RTILoggerPrintFormat*)&src->rtiLoggerPrintFormat)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_State' sequence class.
*/
#define T RTI_DL_ADMIN_State
#define TSeq RTI_DL_ADMIN_StateSeq

#define T_initialize_w_params RTI_DL_ADMIN_State_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_State_finalize_w_params
#define T_copy       RTI_DL_ADMIN_State_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_CommandKindTYPENAME = "RTI::DL::ADMIN::CommandKind";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_CommandKind_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_ADMIN_CommandKind_g_tc_members[3]=
    {

        {
            (char *)"RTI_DL_SET_LOG_LEVEL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_SET_LOG_LEVEL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_SET_RTI_LOGGER_LEVEL",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_SET_RTI_LOGGER_LEVEL, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_SET_RTI_LOGGER_PRINT_FORMAT",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_SET_RTI_LOGGER_PRINT_FORMAT, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_CommandKind_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::CommandKind", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            RTI_DL_ADMIN_CommandKind_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_CommandKind*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_CommandKind_g_tc;
    }

    RTI_DL_ADMIN_CommandKind_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    RTI_DL_ADMIN_CommandKind_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_CommandKind_g_tc._data._annotations._defaultValue._u.long_value = 0;

    RTI_DL_ADMIN_CommandKind_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_CommandKind_get_sample_access_info();
    RTI_DL_ADMIN_CommandKind_g_tc._data._typePlugin =
    RTI_DL_ADMIN_CommandKind_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_CommandKind_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_CommandKind_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_CommandKind_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_CommandKind_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_CommandKind_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_CommandKind_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_DL_ADMIN_CommandKind_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_CommandKind_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_CommandKind);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_CommandKind_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_CommandKind_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_CommandKind_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_CommandKind_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_CommandKind_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_CommandKind_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_CommandKind_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_CommandKind_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_CommandKind_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_CommandKind_initialize(
    RTI_DL_ADMIN_CommandKind* sample) {
    *sample = RTI_DL_SET_LOG_LEVEL;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_CommandKind_initialize_ex(
    RTI_DL_ADMIN_CommandKind* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_CommandKind_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_CommandKind_initialize_w_params(
    RTI_DL_ADMIN_CommandKind* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = RTI_DL_SET_LOG_LEVEL;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_CommandKind_finalize_w_return(
    RTI_DL_ADMIN_CommandKind* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void RTI_DL_ADMIN_CommandKind_finalize(
    RTI_DL_ADMIN_CommandKind* sample)
{

    if (sample==NULL) {
        return;
    }
}

void RTI_DL_ADMIN_CommandKind_finalize_ex(
    RTI_DL_ADMIN_CommandKind* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_CommandKind_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_CommandKind_finalize_w_params(
    RTI_DL_ADMIN_CommandKind* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_DL_ADMIN_CommandKind_finalize_optional_members(
    RTI_DL_ADMIN_CommandKind* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_DL_ADMIN_CommandKind_copy(
    RTI_DL_ADMIN_CommandKind* dst,
    const RTI_DL_ADMIN_CommandKind* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_CommandKind' sequence class.
*/
#define T RTI_DL_ADMIN_CommandKind
#define TSeq RTI_DL_ADMIN_CommandKindSeq

#define T_initialize_w_params RTI_DL_ADMIN_CommandKind_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_CommandKind_finalize_w_params
#define T_copy       RTI_DL_ADMIN_CommandKind_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_CommandTYPENAME = "RTI::DL::ADMIN::Command";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_Command_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_DL_ADMIN_Command_g_tc_categoryAndVerbosity_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((5),NULL);

    static DDS_TypeCode_Member RTI_DL_ADMIN_Command_g_tc_members[3]=
    {

        {
            (char *)"filterLevel",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (RTI_DL_SET_LOG_LEVEL), /* First label C (RTI_DL_SET_LOG_LEVEL) */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"categoryAndVerbosity",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (RTI_DL_SET_RTI_LOGGER_LEVEL), /* First label C (RTI_DL_SET_RTI_LOGGER_LEVEL) */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"printFormat",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (RTI_DL_SET_RTI_LOGGER_PRINT_FORMAT), /* First label C (RTI_DL_SET_RTI_LOGGER_PRINT_FORMAT) */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_Command_g_tc =
    {{
            DDS_TK_UNION| DDS_TK_MUTABLE_EXTENSIBILITY, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::Command", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            RTI_DL_ADMIN_Command_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_Command*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_Command_g_tc;
    }

    RTI_DL_ADMIN_Command_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_DL_ADMIN_Command_g_tc_categoryAndVerbosity_sequence._data._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_typecode();
    RTI_DL_ADMIN_Command_g_tc_categoryAndVerbosity_sequence._data._sampleAccessInfo = &DDS_g_sai_seq;
    RTI_DL_ADMIN_Command_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    RTI_DL_ADMIN_Command_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& RTI_DL_ADMIN_Command_g_tc_categoryAndVerbosity_sequence;
    RTI_DL_ADMIN_Command_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_RTILoggerPrintFormat_get_typecode();

    /* Initialize the values for member annotations. */
    RTI_DL_ADMIN_Command_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_Command_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
    RTI_DL_ADMIN_Command_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_Command_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_DL_ADMIN_Command_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_Command_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_DL_ADMIN_Command_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_Command_g_tc_members[2]._annotations._defaultValue._u.enumerated_value = 0;

    /* Discriminator type code */
    RTI_DL_ADMIN_Command_g_tc._data._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_CommandKind_get_typecode();

    RTI_DL_ADMIN_Command_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_Command_get_sample_access_info();
    RTI_DL_ADMIN_Command_g_tc._data._typePlugin =
    RTI_DL_ADMIN_Command_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_Command_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_Command_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_Command_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_Command_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_Command_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_Command_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_Command *)NULL)->_d);

    RTI_DL_ADMIN_Command_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_Command *)NULL)->_u.filterLevel);

    RTI_DL_ADMIN_Command_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_Command *)NULL)->_u.categoryAndVerbosity);

    RTI_DL_ADMIN_Command_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_Command *)NULL)->_u.printFormat);

    RTI_DL_ADMIN_Command_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_Command_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_Command);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_Command_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_Command_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_Command_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_Command_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_Command_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_Command_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_Command_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_Command_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_Command_g_typePlugin;
}
#endif

DDS_LongLong RTI_DL_ADMIN_Command_getDefaultDiscriminator(){

    return 0;
}

RTIBool RTI_DL_ADMIN_Command_initialize(
    RTI_DL_ADMIN_Command* sample) {
    return RTI_DL_ADMIN_Command_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_DL_ADMIN_Command_initialize_ex(
    RTI_DL_ADMIN_Command* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_Command_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_Command_initialize_w_params(
    RTI_DL_ADMIN_Command* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->_d = (RTI_DL_ADMIN_CommandKind)RTI_DL_ADMIN_Command_getDefaultDiscriminator();

    sample->_u.filterLevel = 0;

    if (allocParams->allocate_memory) {
        if(!RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_initialize(&sample->_u.categoryAndVerbosity )){
            return RTI_FALSE;
        };
        if(!RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_set_element_allocation_params(&sample->_u.categoryAndVerbosity ,allocParams)){
            return RTI_FALSE;
        };
        if(!RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_set_absolute_maximum(&sample->_u.categoryAndVerbosity , (5))){
            return RTI_FALSE;
        }
        if (!RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_set_maximum(&sample->_u.categoryAndVerbosity, (5))) {
            return RTI_FALSE;
        }
    } else { 
        if(!RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_set_length(&sample->_u.categoryAndVerbosity, 0)){
            return RTI_FALSE;
        }    
    }
    sample->_u.printFormat = RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEFAULT;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_Command_finalize_w_return(
    RTI_DL_ADMIN_Command* sample)
{
    RTI_DL_ADMIN_Command_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_DL_ADMIN_Command_finalize(
    RTI_DL_ADMIN_Command* sample)
{

    RTI_DL_ADMIN_Command_finalize_ex(sample,RTI_TRUE);
}

void RTI_DL_ADMIN_Command_finalize_ex(
    RTI_DL_ADMIN_Command* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_Command_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_Command_finalize_w_params(
    RTI_DL_ADMIN_Command* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if(!RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_set_element_deallocation_params(
        &sample->_u.categoryAndVerbosity,deallocParams)){
        return; 
    }
    if(!RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_finalize(&sample->_u.categoryAndVerbosity)){
        return;
    }

    RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_params(&sample->_u.printFormat,deallocParams);

}

void RTI_DL_ADMIN_Command_finalize_optional_members(
    RTI_DL_ADMIN_Command* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    switch(sample->_d) {
        case (RTI_DL_SET_LOG_LEVEL):
            {
        } break ;
        case (RTI_DL_SET_RTI_LOGGER_LEVEL):
            {
                {
                    DDS_UnsignedLong i, length;
                    length = RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_get_length(
                        &sample->_u.categoryAndVerbosity);

                    for (i = 0; i < length; i++) {
                        RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_optional_members(
                            RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_get_reference(
                                &sample->_u.categoryAndVerbosity, i), deallocParams->delete_pointers);
                }
            }  

        } break ;
        case (RTI_DL_SET_RTI_LOGGER_PRINT_FORMAT):
            {
                RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_optional_members(&sample->_u.printFormat, deallocParams->delete_pointers);
        } break ;
    }
}

RTIBool RTI_DL_ADMIN_Command_copy(
    RTI_DL_ADMIN_Command* dst,
    const RTI_DL_ADMIN_Command* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_ADMIN_CommandKind_copy(
        &dst->_d,(const RTI_DL_ADMIN_CommandKind*)&src->_d)) {
        return RTI_FALSE;
    } 

    switch(src->_d) {

        case (RTI_DL_SET_LOG_LEVEL):
            {
                if (!RTICdrType_copyLong (
                    &dst->_u.filterLevel, &src->_u.filterLevel)) { 
                    return RTI_FALSE;
            }
        } break ;
        case (RTI_DL_SET_RTI_LOGGER_LEVEL):
            {
                if (!RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq_copy(&dst->_u.categoryAndVerbosity ,
                &src->_u.categoryAndVerbosity )) {
                    return RTI_FALSE;
            }
        } break ;
        case (RTI_DL_SET_RTI_LOGGER_PRINT_FORMAT):
            {
                if (!RTI_DL_ADMIN_RTILoggerPrintFormat_copy(
                    &dst->_u.printFormat,(const RTI_DL_ADMIN_RTILoggerPrintFormat*)&src->_u.printFormat)) {
                    return RTI_FALSE;
            } 
        } break ;

    }
    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_Command' sequence class.
*/
#define T RTI_DL_ADMIN_Command
#define TSeq RTI_DL_ADMIN_CommandSeq

#define T_initialize_w_params RTI_DL_ADMIN_Command_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_Command_finalize_w_params
#define T_copy       RTI_DL_ADMIN_Command_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_CommandRequestTYPENAME = "RTI::DL::ADMIN::CommandRequest";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_CommandRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_ADMIN_CommandRequest_g_tc_members[4]=
    {

        {
            (char *)"targetHostAndAppId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"originatorHostAndAppId",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"invocation",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"command",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_CommandRequest_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_MUTABLE_EXTENSIBILITY, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::CommandRequest", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            RTI_DL_ADMIN_CommandRequest_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_CommandRequest*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_CommandRequest_g_tc;
    }

    RTI_DL_ADMIN_CommandRequest_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_DL_ADMIN_CommandRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_HostAndAppId_get_typecode();
    RTI_DL_ADMIN_CommandRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_HostAndAppId_get_typecode();
    RTI_DL_ADMIN_CommandRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    RTI_DL_ADMIN_CommandRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_Command_get_typecode();

    /* Initialize the values for member annotations. */

    RTI_DL_ADMIN_CommandRequest_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_CommandRequest_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
    RTI_DL_ADMIN_CommandRequest_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_CommandRequest_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_DL_ADMIN_CommandRequest_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_CommandRequest_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_DL_ADMIN_CommandRequest_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_CommandRequest_get_sample_access_info();
    RTI_DL_ADMIN_CommandRequest_g_tc._data._typePlugin =
    RTI_DL_ADMIN_CommandRequest_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_CommandRequest_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_CommandRequest_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_CommandRequest_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_CommandRequest_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_CommandRequest_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_CommandRequest_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandRequest *)NULL)->targetHostAndAppId);

    RTI_DL_ADMIN_CommandRequest_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandRequest *)NULL)->originatorHostAndAppId);

    RTI_DL_ADMIN_CommandRequest_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandRequest *)NULL)->invocation);

    RTI_DL_ADMIN_CommandRequest_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandRequest *)NULL)->command);

    RTI_DL_ADMIN_CommandRequest_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_CommandRequest_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_CommandRequest);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_CommandRequest_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_CommandRequest_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_CommandRequest_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_CommandRequest_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_CommandRequest_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_CommandRequest_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_CommandRequest_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_CommandRequest_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_CommandRequest_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_CommandRequest_initialize(
    RTI_DL_ADMIN_CommandRequest* sample) {
    return RTI_DL_ADMIN_CommandRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_DL_ADMIN_CommandRequest_initialize_ex(
    RTI_DL_ADMIN_CommandRequest* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_CommandRequest_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_CommandRequest_initialize_w_params(
    RTI_DL_ADMIN_CommandRequest* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_HostAndAppId_initialize_w_params(&sample->targetHostAndAppId,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!RTI_DL_HostAndAppId_initialize_w_params(&sample->originatorHostAndAppId,
    allocParams)) {
        return RTI_FALSE;
    }

    sample->invocation = 0;

    if (!RTI_DL_ADMIN_Command_initialize_w_params(&sample->command,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_CommandRequest_finalize_w_return(
    RTI_DL_ADMIN_CommandRequest* sample)
{
    RTI_DL_ADMIN_CommandRequest_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_DL_ADMIN_CommandRequest_finalize(
    RTI_DL_ADMIN_CommandRequest* sample)
{

    RTI_DL_ADMIN_CommandRequest_finalize_ex(sample,RTI_TRUE);
}

void RTI_DL_ADMIN_CommandRequest_finalize_ex(
    RTI_DL_ADMIN_CommandRequest* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_CommandRequest_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_CommandRequest_finalize_w_params(
    RTI_DL_ADMIN_CommandRequest* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_DL_HostAndAppId_finalize_w_params(&sample->targetHostAndAppId,deallocParams);

    RTI_DL_HostAndAppId_finalize_w_params(&sample->originatorHostAndAppId,deallocParams);

    RTI_DL_ADMIN_Command_finalize_w_params(&sample->command,deallocParams);

}

void RTI_DL_ADMIN_CommandRequest_finalize_optional_members(
    RTI_DL_ADMIN_CommandRequest* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    RTI_DL_HostAndAppId_finalize_optional_members(&sample->targetHostAndAppId, deallocParams->delete_pointers);
    RTI_DL_HostAndAppId_finalize_optional_members(&sample->originatorHostAndAppId, deallocParams->delete_pointers);
    RTI_DL_ADMIN_Command_finalize_optional_members(&sample->command, deallocParams->delete_pointers);
}

RTIBool RTI_DL_ADMIN_CommandRequest_copy(
    RTI_DL_ADMIN_CommandRequest* dst,
    const RTI_DL_ADMIN_CommandRequest* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_HostAndAppId_copy(
        &dst->targetHostAndAppId,(const RTI_DL_HostAndAppId*)&src->targetHostAndAppId)) {
        return RTI_FALSE;
    } 
    if (!RTI_DL_HostAndAppId_copy(
        &dst->originatorHostAndAppId,(const RTI_DL_HostAndAppId*)&src->originatorHostAndAppId)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyLong (
        &dst->invocation, &src->invocation)) { 
        return RTI_FALSE;
    }
    if (!RTI_DL_ADMIN_Command_copy(
        &dst->command,(const RTI_DL_ADMIN_Command*)&src->command)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_CommandRequest' sequence class.
*/
#define T RTI_DL_ADMIN_CommandRequest
#define TSeq RTI_DL_ADMIN_CommandRequestSeq

#define T_initialize_w_params RTI_DL_ADMIN_CommandRequest_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_CommandRequest_finalize_w_params
#define T_copy       RTI_DL_ADMIN_CommandRequest_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_CommandResultTYPENAME = "RTI::DL::ADMIN::CommandResult";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_CommandResult_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_DL_ADMIN_CommandResult_g_tc_members[3]=
    {

        {
            (char *)"RTI_DL_COMMAND_RESULT_OK",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_COMMAND_RESULT_OK, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_COMMAND_RESULT_NOT_SUPPORTED",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_COMMAND_RESULT_NOT_SUPPORTED, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"RTI_DL_COMMAND_RESULT_ERROR",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            RTI_DL_COMMAND_RESULT_ERROR, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_CommandResult_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::CommandResult", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            RTI_DL_ADMIN_CommandResult_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_CommandResult*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_CommandResult_g_tc;
    }

    RTI_DL_ADMIN_CommandResult_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    RTI_DL_ADMIN_CommandResult_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_CommandResult_g_tc._data._annotations._defaultValue._u.long_value = 0;

    RTI_DL_ADMIN_CommandResult_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_CommandResult_get_sample_access_info();
    RTI_DL_ADMIN_CommandResult_g_tc._data._typePlugin =
    RTI_DL_ADMIN_CommandResult_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_CommandResult_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_CommandResult_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_CommandResult_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_CommandResult_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_CommandResult_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_CommandResult_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_DL_ADMIN_CommandResult_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_CommandResult_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_CommandResult);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_CommandResult_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_CommandResult_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_CommandResult_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_CommandResult_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_CommandResult_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_CommandResult_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_CommandResult_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_CommandResult_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_CommandResult_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_CommandResult_initialize(
    RTI_DL_ADMIN_CommandResult* sample) {
    *sample = RTI_DL_COMMAND_RESULT_OK;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_CommandResult_initialize_ex(
    RTI_DL_ADMIN_CommandResult* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_CommandResult_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_CommandResult_initialize_w_params(
    RTI_DL_ADMIN_CommandResult* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = RTI_DL_COMMAND_RESULT_OK;
    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_CommandResult_finalize_w_return(
    RTI_DL_ADMIN_CommandResult* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void RTI_DL_ADMIN_CommandResult_finalize(
    RTI_DL_ADMIN_CommandResult* sample)
{

    if (sample==NULL) {
        return;
    }
}

void RTI_DL_ADMIN_CommandResult_finalize_ex(
    RTI_DL_ADMIN_CommandResult* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_CommandResult_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_CommandResult_finalize_w_params(
    RTI_DL_ADMIN_CommandResult* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_DL_ADMIN_CommandResult_finalize_optional_members(
    RTI_DL_ADMIN_CommandResult* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_DL_ADMIN_CommandResult_copy(
    RTI_DL_ADMIN_CommandResult* dst,
    const RTI_DL_ADMIN_CommandResult* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_CommandResult' sequence class.
*/
#define T RTI_DL_ADMIN_CommandResult
#define TSeq RTI_DL_ADMIN_CommandResultSeq

#define T_initialize_w_params RTI_DL_ADMIN_CommandResult_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_CommandResult_finalize_w_params
#define T_copy       RTI_DL_ADMIN_CommandResult_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_DL_ADMIN_CommandResponseTYPENAME = "RTI::DL::ADMIN::CommandResponse";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_DL_ADMIN_CommandResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_DL_ADMIN_CommandResponse_g_tc_message_string = DDS_INITIALIZE_STRING_TYPECODE(((RTI_DL_ADMIN_COMMAND_RESPONSE_MAX_LENGTH)));

    static DDS_TypeCode_Member RTI_DL_ADMIN_CommandResponse_g_tc_members[5]=
    {

        {
            (char *)"hostAndAppId",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"originatorHostAndAppId",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"invocation",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"commandResult",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"message",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_DL_ADMIN_CommandResponse_g_tc =
    {{
            DDS_TK_STRUCT| DDS_TK_MUTABLE_EXTENSIBILITY, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::DL::ADMIN::CommandResponse", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            RTI_DL_ADMIN_CommandResponse_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_DL_ADMIN_CommandResponse*/

    if (is_initialized) {
        return &RTI_DL_ADMIN_CommandResponse_g_tc;
    }

    RTI_DL_ADMIN_CommandResponse_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_DL_ADMIN_CommandResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_HostAndAppId_get_typecode();
    RTI_DL_ADMIN_CommandResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_HostAndAppId_get_typecode();
    RTI_DL_ADMIN_CommandResponse_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    RTI_DL_ADMIN_CommandResponse_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)RTI_DL_ADMIN_CommandResult_get_typecode();
    RTI_DL_ADMIN_CommandResponse_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&RTI_DL_ADMIN_CommandResponse_g_tc_message_string;

    /* Initialize the values for member annotations. */

    RTI_DL_ADMIN_CommandResponse_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_CommandResponse_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
    RTI_DL_ADMIN_CommandResponse_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_CommandResponse_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_DL_ADMIN_CommandResponse_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_DL_ADMIN_CommandResponse_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_DL_ADMIN_CommandResponse_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_DL_ADMIN_CommandResponse_g_tc_members[3]._annotations._defaultValue._u.enumerated_value = 0;

    RTI_DL_ADMIN_CommandResponse_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_DL_ADMIN_CommandResponse_g_tc_members[4]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_DL_ADMIN_CommandResponse_g_tc._data._sampleAccessInfo =
    RTI_DL_ADMIN_CommandResponse_get_sample_access_info();
    RTI_DL_ADMIN_CommandResponse_g_tc._data._typePlugin =
    RTI_DL_ADMIN_CommandResponse_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_DL_ADMIN_CommandResponse_g_tc;
}

RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_CommandResponse_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_DL_ADMIN_CommandResponse_g_memberAccessInfos[5] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_DL_ADMIN_CommandResponse_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_CommandResponse_g_sampleAccessInfo;
    }

    RTI_DL_ADMIN_CommandResponse_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandResponse *)NULL)->hostAndAppId);

    RTI_DL_ADMIN_CommandResponse_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandResponse *)NULL)->originatorHostAndAppId);

    RTI_DL_ADMIN_CommandResponse_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandResponse *)NULL)->invocation);

    RTI_DL_ADMIN_CommandResponse_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandResponse *)NULL)->commandResult);

    RTI_DL_ADMIN_CommandResponse_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((RTI_DL_ADMIN_CommandResponse *)NULL)->message);

    RTI_DL_ADMIN_CommandResponse_g_sampleAccessInfo.memberAccessInfos = 
    RTI_DL_ADMIN_CommandResponse_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_DL_ADMIN_CommandResponse);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_DL_ADMIN_CommandResponse_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_DL_ADMIN_CommandResponse_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_DL_ADMIN_CommandResponse_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_DL_ADMIN_CommandResponse_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_DL_ADMIN_CommandResponse_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_DL_ADMIN_CommandResponse_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_DL_ADMIN_CommandResponse_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_DL_ADMIN_CommandResponse_finalize_w_return,
        NULL
    };

    return &RTI_DL_ADMIN_CommandResponse_g_typePlugin;
}
#endif

RTIBool RTI_DL_ADMIN_CommandResponse_initialize(
    RTI_DL_ADMIN_CommandResponse* sample) {
    return RTI_DL_ADMIN_CommandResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_DL_ADMIN_CommandResponse_initialize_ex(
    RTI_DL_ADMIN_CommandResponse* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_DL_ADMIN_CommandResponse_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_DL_ADMIN_CommandResponse_initialize_w_params(
    RTI_DL_ADMIN_CommandResponse* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_HostAndAppId_initialize_w_params(&sample->hostAndAppId,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!RTI_DL_HostAndAppId_initialize_w_params(&sample->originatorHostAndAppId,
    allocParams)) {
        return RTI_FALSE;
    }

    sample->invocation = 0;

    sample->commandResult = RTI_DL_COMMAND_RESULT_OK;

    if (allocParams->allocate_memory) {
        sample->message = DDS_String_alloc(((RTI_DL_ADMIN_COMMAND_RESPONSE_MAX_LENGTH)));
        RTICdrType_copyStringEx(
            &sample->message,
            "",
            ((RTI_DL_ADMIN_COMMAND_RESPONSE_MAX_LENGTH)),
            RTI_FALSE);
        if (sample->message == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->message != NULL) {
            RTICdrType_copyStringEx(
                &sample->message,
                "",
                ((RTI_DL_ADMIN_COMMAND_RESPONSE_MAX_LENGTH)),
                RTI_FALSE);
            if (sample->message == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool RTI_DL_ADMIN_CommandResponse_finalize_w_return(
    RTI_DL_ADMIN_CommandResponse* sample)
{
    RTI_DL_ADMIN_CommandResponse_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_DL_ADMIN_CommandResponse_finalize(
    RTI_DL_ADMIN_CommandResponse* sample)
{

    RTI_DL_ADMIN_CommandResponse_finalize_ex(sample,RTI_TRUE);
}

void RTI_DL_ADMIN_CommandResponse_finalize_ex(
    RTI_DL_ADMIN_CommandResponse* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_DL_ADMIN_CommandResponse_finalize_w_params(
        sample,&deallocParams);
}

void RTI_DL_ADMIN_CommandResponse_finalize_w_params(
    RTI_DL_ADMIN_CommandResponse* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_DL_HostAndAppId_finalize_w_params(&sample->hostAndAppId,deallocParams);

    RTI_DL_HostAndAppId_finalize_w_params(&sample->originatorHostAndAppId,deallocParams);

    RTI_DL_ADMIN_CommandResult_finalize_w_params(&sample->commandResult,deallocParams);

    if (sample->message != NULL) {
        DDS_String_free(sample->message);
        sample->message=NULL;

    }
}

void RTI_DL_ADMIN_CommandResponse_finalize_optional_members(
    RTI_DL_ADMIN_CommandResponse* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    RTI_DL_HostAndAppId_finalize_optional_members(&sample->hostAndAppId, deallocParams->delete_pointers);
    RTI_DL_HostAndAppId_finalize_optional_members(&sample->originatorHostAndAppId, deallocParams->delete_pointers);
    RTI_DL_ADMIN_CommandResult_finalize_optional_members(&sample->commandResult, deallocParams->delete_pointers);
}

RTIBool RTI_DL_ADMIN_CommandResponse_copy(
    RTI_DL_ADMIN_CommandResponse* dst,
    const RTI_DL_ADMIN_CommandResponse* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_DL_HostAndAppId_copy(
        &dst->hostAndAppId,(const RTI_DL_HostAndAppId*)&src->hostAndAppId)) {
        return RTI_FALSE;
    } 
    if (!RTI_DL_HostAndAppId_copy(
        &dst->originatorHostAndAppId,(const RTI_DL_HostAndAppId*)&src->originatorHostAndAppId)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyLong (
        &dst->invocation, &src->invocation)) { 
        return RTI_FALSE;
    }
    if (!RTI_DL_ADMIN_CommandResult_copy(
        &dst->commandResult,(const RTI_DL_ADMIN_CommandResult*)&src->commandResult)) {
        return RTI_FALSE;
    } 
    if (!RTICdrType_copyStringEx (
        &dst->message, src->message, 
        ((RTI_DL_ADMIN_COMMAND_RESPONSE_MAX_LENGTH)) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_DL_ADMIN_CommandResponse' sequence class.
*/
#define T RTI_DL_ADMIN_CommandResponse
#define TSeq RTI_DL_ADMIN_CommandResponseSeq

#define T_initialize_w_params RTI_DL_ADMIN_CommandResponse_initialize_w_params

#define T_finalize_w_params   RTI_DL_ADMIN_CommandResponse_finalize_w_params
#define T_copy       RTI_DL_ADMIN_CommandResponse_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

