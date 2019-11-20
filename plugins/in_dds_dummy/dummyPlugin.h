

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from dummy.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef dummyPlugin_1418989514_h
#define dummyPlugin_1418989514_h

#include "dummy.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define DummyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define DummyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DummyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define DummyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DummyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Dummy*
DummyPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Dummy*
DummyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Dummy*
DummyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DummyPluginSupport_copy_data(
    Dummy *out,
    const Dummy *in);

NDDSUSERDllExport extern void 
DummyPluginSupport_destroy_data_w_params(
    Dummy *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DummyPluginSupport_destroy_data_ex(
    Dummy *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DummyPluginSupport_destroy_data(
    Dummy *sample);

NDDSUSERDllExport extern void 
DummyPluginSupport_print_data(
    const Dummy *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DummyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DummyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
DummyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DummyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
DummyPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Dummy *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
DummyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Dummy *out,
    const Dummy *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
DummyPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const Dummy *sample); 

NDDSUSERDllExport extern RTIBool
DummyPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const Dummy *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
DummyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Dummy **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
DummyPlugin_deserialize_from_cdr_buffer(
    Dummy *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
DummyPlugin_data_to_string(
    const Dummy *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
DummyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
DummyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DummyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DummyPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DummyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Dummy ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *DummyPlugin_get_programs();

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DummyPlugin_new(void);

NDDSUSERDllExport extern void
DummyPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* dummyPlugin_1418989514_h */

