

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from fb.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
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

#include "fb.h"

#ifndef NDDS_STANDALONE_TYPE
#include "fbPlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *RecordTYPENAME = "Record";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* Record_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Record_g_tc_key_string = DDS_INITIALIZE_STRING_TYPECODE((255));

    static DDS_TypeCode_Member Record_g_tc_members[2]=
    {

        {
            (char *)"key",/* Member name */
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
            (char *)"value",/* Member name */
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

    static DDS_TypeCode Record_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Record", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Record_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Record*/

    if (is_initialized) {
        return &Record_g_tc;
    }

    Record_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Record_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Record_g_tc_key_string;
    Record_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double_w_new;

    /* Initialize the values for member annotations. */
    Record_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    Record_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    Record_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    Record_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
    Record_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    Record_g_tc_members[1]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    Record_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    Record_g_tc_members[1]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    Record_g_tc._data._sampleAccessInfo =
    Record_get_sample_access_info();
    Record_g_tc._data._typePlugin =
    Record_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Record_g_tc;
}

#define TSeq RecordSeq
#define T Record
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *Record_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo Record_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RecordSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RecordSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &Record_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *Record_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    Record *sample;

    static RTIXCdrMemberAccessInfo Record_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Record_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Record_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        Record);
    if (sample == NULL) {
        return NULL;
    }

    Record_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->key - (char *)sample);

    Record_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->value - (char *)sample);

    Record_g_sampleAccessInfo.memberAccessInfos = 
    Record_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Record);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            Record_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            Record_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Record_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    Record_g_sampleAccessInfo.getMemberValuePointerFcn = 
    Record_get_member_value_pointer;

    Record_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Record_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Record_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Record_g_typePlugin = 
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
        Record_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Record_finalize_w_return,
        NULL
    };

    return &Record_g_typePlugin;
}
#endif

RTIBool Record_initialize(
    Record* sample) {
    return Record_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Record_initialize_ex(
    Record* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Record_initialize_w_params(
        sample,&allocParams);

}

RTIBool Record_initialize_w_params(
    Record* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->key = DDS_String_alloc((255));
        RTICdrType_copyStringEx(
            &sample->key,
            "",
            (255),
            RTI_FALSE);
        if (sample->key == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->key != NULL) {
            RTICdrType_copyStringEx(
                &sample->key,
                "",
                (255),
                RTI_FALSE);
            if (sample->key == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->value = 0.0;

    return RTI_TRUE;
}

RTIBool Record_finalize_w_return(
    Record* sample)
{
    Record_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Record_finalize(
    Record* sample)
{

    Record_finalize_ex(sample,RTI_TRUE);
}

void Record_finalize_ex(
    Record* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Record_finalize_w_params(
        sample,&deallocParams);
}

void Record_finalize_w_params(
    Record* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->key != NULL) {
        DDS_String_free(sample->key);
        sample->key=NULL;

    }

}

void Record_finalize_optional_members(
    Record* sample, RTIBool deletePointers)
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

RTIBool Record_copy(
    Record* dst,
    const Record* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->key, src->key, 
            (255) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyDouble (
            &dst->value, &src->value)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Record' sequence class.
*/
#define T Record
#define TSeq RecordSeq

#define T_initialize_w_params Record_initialize_w_params

#define T_finalize_w_params   Record_finalize_w_params
#define T_copy       Record_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *FBTypeTYPENAME = "FBType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* FBType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode FBType_g_tc_tag_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode FBType_g_tc_records_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(((MAX_RECORDS)),NULL);

    static DDS_TypeCode_Member FBType_g_tc_members[3]=
    {

        {
            (char *)"ts",/* Member name */
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
            (char *)"tag",/* Member name */
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
            (char *)"records",/* Member name */
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
        }
    };

    static DDS_TypeCode FBType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"FBType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            FBType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for FBType*/

    if (is_initialized) {
        return &FBType_g_tc;
    }

    FBType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    FBType_g_tc_records_sequence._data._typeCode = (RTICdrTypeCode *)Record_get_typecode();
    FBType_g_tc_records_sequence._data._sampleAccessInfo = Record_get_sample_seq_access_info();
    FBType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong_w_new;
    FBType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&FBType_g_tc_tag_string;
    FBType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& FBType_g_tc_records_sequence;

    /* Initialize the values for member annotations. */
    FBType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    FBType_g_tc_members[0]._annotations._defaultValue._u.long_long_value = 0ll;
    FBType_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    FBType_g_tc_members[0]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    FBType_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    FBType_g_tc_members[0]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

    FBType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    FBType_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    FBType_g_tc._data._sampleAccessInfo =
    FBType_get_sample_access_info();
    FBType_g_tc._data._typePlugin =
    FBType_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &FBType_g_tc;
}

#define TSeq FBTypeSeq
#define T FBType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *FBType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo FBType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(FBTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        FBTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &FBType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *FBType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    FBType *sample;

    static RTIXCdrMemberAccessInfo FBType_g_memberAccessInfos[3] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo FBType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &FBType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        FBType);
    if (sample == NULL) {
        return NULL;
    }

    FBType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->ts - (char *)sample);

    FBType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->tag - (char *)sample);

    FBType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->records - (char *)sample);

    FBType_g_sampleAccessInfo.memberAccessInfos = 
    FBType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(FBType);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            FBType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            FBType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    FBType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    FBType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    FBType_get_member_value_pointer;

    FBType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &FBType_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *FBType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin FBType_g_typePlugin = 
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
        FBType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        FBType_finalize_w_return,
        NULL
    };

    return &FBType_g_typePlugin;
}
#endif

RTIBool FBType_initialize(
    FBType* sample) {
    return FBType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool FBType_initialize_ex(
    FBType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return FBType_initialize_w_params(
        sample,&allocParams);

}

RTIBool FBType_initialize_w_params(
    FBType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->ts = 0ll;

    if (allocParams->allocate_memory) {
        sample->tag = DDS_String_alloc((255));
        RTICdrType_copyStringEx(
            &sample->tag,
            "",
            (255),
            RTI_FALSE);
        if (sample->tag == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->tag != NULL) {
            RTICdrType_copyStringEx(
                &sample->tag,
                "",
                (255),
                RTI_FALSE);
            if (sample->tag == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (allocParams->allocate_memory) {
        if(!RecordSeq_initialize(&sample->records )){
            return RTI_FALSE;
        };
        if(!RecordSeq_set_element_allocation_params(&sample->records ,allocParams)){
            return RTI_FALSE;
        };
        if(!RecordSeq_set_absolute_maximum(&sample->records , ((MAX_RECORDS)))){
            return RTI_FALSE;
        }
        if (!RecordSeq_set_maximum(&sample->records, ((MAX_RECORDS)))) {
            return RTI_FALSE;
        }
    } else { 
        if(!RecordSeq_set_length(&sample->records, 0)){
            return RTI_FALSE;
        }    
    }
    return RTI_TRUE;
}

RTIBool FBType_finalize_w_return(
    FBType* sample)
{
    FBType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void FBType_finalize(
    FBType* sample)
{

    FBType_finalize_ex(sample,RTI_TRUE);
}

void FBType_finalize_ex(
    FBType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    FBType_finalize_w_params(
        sample,&deallocParams);
}

void FBType_finalize_w_params(
    FBType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->tag != NULL) {
        DDS_String_free(sample->tag);
        sample->tag=NULL;

    }
    if(!RecordSeq_set_element_deallocation_params(
        &sample->records,deallocParams)){
        return; 
    }
    if(!RecordSeq_finalize(&sample->records)){
        return;
    }

}

void FBType_finalize_optional_members(
    FBType* sample, RTIBool deletePointers)
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

    {
        DDS_UnsignedLong i, length;
        length = RecordSeq_get_length(
            &sample->records);

        for (i = 0; i < length; i++) {
            Record_finalize_optional_members(
                RecordSeq_get_reference(
                    &sample->records, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool FBType_copy(
    FBType* dst,
    const FBType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyLongLong (
            &dst->ts, &src->ts)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyStringEx (
            &dst->tag, src->tag, 
            (255) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RecordSeq_copy(&dst->records ,
        &src->records )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'FBType' sequence class.
*/
#define T FBType
#define TSeq FBTypeSeq

#define T_initialize_w_params FBType_initialize_w_params

#define T_finalize_w_params   FBType_finalize_w_params
#define T_copy       FBType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<Record>::get() 
        {
            return (const RTIXCdrTypeCode *) Record_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<FBType>::get() 
        {
            return (const RTIXCdrTypeCode *) FBType_get_typecode();
        }

    } 
}
#endif
