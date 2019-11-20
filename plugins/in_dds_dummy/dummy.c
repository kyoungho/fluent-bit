

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from dummy.idl using "rtiddsgen".
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

#include "dummy.h"

#ifndef NDDS_STANDALONE_TYPE
#include "dummyPlugin.h"
#endif

/* ========================================================================= */
const char *DummyTYPENAME = "Dummy";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* Dummy_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Dummy_g_tc_message_string = DDS_INITIALIZE_STRING_TYPECODE((255));

    static DDS_TypeCode_Member Dummy_g_tc_members[2]=
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
            (char *)"message",/* Member name */
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

    static DDS_TypeCode Dummy_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"Dummy", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            Dummy_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for Dummy*/

    if (is_initialized) {
        return &Dummy_g_tc;
    }

    Dummy_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    Dummy_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    Dummy_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Dummy_g_tc_message_string;

    /* Initialize the values for member annotations. */
    Dummy_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
    Dummy_g_tc_members[0]._annotations._defaultValue._u.double_value = 0.0;
    Dummy_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
    Dummy_g_tc_members[0]._annotations._minValue._u.double_value = RTIXCdrDouble_MIN;
    Dummy_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
    Dummy_g_tc_members[0]._annotations._maxValue._u.double_value = RTIXCdrDouble_MAX;

    Dummy_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    Dummy_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    Dummy_g_tc._data._sampleAccessInfo =
    Dummy_get_sample_access_info();
    Dummy_g_tc._data._typePlugin =
    Dummy_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &Dummy_g_tc;
}

RTIXCdrSampleAccessInfo *Dummy_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo Dummy_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo Dummy_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &Dummy_g_sampleAccessInfo;
    }

    Dummy_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((Dummy *)NULL)->ts);

    Dummy_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) RTIXCdrUtility_pointerToULongLong(&((Dummy *)NULL)->message);

    Dummy_g_sampleAccessInfo.memberAccessInfos = 
    Dummy_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(Dummy);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            Dummy_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            Dummy_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    Dummy_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_C ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &Dummy_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *Dummy_get_type_plugin_info()
{
    static RTIXCdrTypePlugin Dummy_g_typePlugin = 
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
        Dummy_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        Dummy_finalize_w_return,
        NULL
    };

    return &Dummy_g_typePlugin;
}
#endif

RTIBool Dummy_initialize(
    Dummy* sample) {
    return Dummy_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool Dummy_initialize_ex(
    Dummy* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return Dummy_initialize_w_params(
        sample,&allocParams);

}

RTIBool Dummy_initialize_w_params(
    Dummy* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->ts = 0.0;

    if (allocParams->allocate_memory) {
        sample->message = DDS_String_alloc((255));
        RTICdrType_copyStringEx(
            &sample->message,
            "",
            (255),
            RTI_FALSE);
        if (sample->message == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->message != NULL) {
            RTICdrType_copyStringEx(
                &sample->message,
                "",
                (255),
                RTI_FALSE);
            if (sample->message == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool Dummy_finalize_w_return(
    Dummy* sample)
{
    Dummy_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void Dummy_finalize(
    Dummy* sample)
{

    Dummy_finalize_ex(sample,RTI_TRUE);
}

void Dummy_finalize_ex(
    Dummy* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    Dummy_finalize_w_params(
        sample,&deallocParams);
}

void Dummy_finalize_w_params(
    Dummy* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->message != NULL) {
        DDS_String_free(sample->message);
        sample->message=NULL;

    }
}

void Dummy_finalize_optional_members(
    Dummy* sample, RTIBool deletePointers)
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

RTIBool Dummy_copy(
    Dummy* dst,
    const Dummy* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyDouble (
        &dst->ts, &src->ts)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->message, src->message, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Dummy' sequence class.
*/
#define T Dummy
#define TSeq DummySeq

#define T_initialize_w_params Dummy_initialize_w_params

#define T_finalize_w_params   Dummy_finalize_w_params
#define T_copy       Dummy_copy

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

