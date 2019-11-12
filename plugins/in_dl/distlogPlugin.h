

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from distlog.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef distlogPlugin_478707146_h
#define distlogPlugin_478707146_h

#include "distlog.h"

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

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct HostAndAppId
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct HostAndAppId)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* HostAndAppId must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct HostAndAppId.
*/
typedef  struct RTI_DL_HostAndAppId RTI_DL_HostAndAppIdKeyHolder;

#define RTI_DL_HostAndAppIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define RTI_DL_HostAndAppIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTI_DL_HostAndAppIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RTI_DL_HostAndAppIdPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define RTI_DL_HostAndAppIdPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define RTI_DL_HostAndAppIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTI_DL_HostAndAppIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTI_DL_HostAndAppId*
RTI_DL_HostAndAppIdPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTI_DL_HostAndAppId*
RTI_DL_HostAndAppIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_HostAndAppId*
RTI_DL_HostAndAppIdPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTI_DL_HostAndAppIdPluginSupport_copy_data(
    RTI_DL_HostAndAppId *out,
    const RTI_DL_HostAndAppId *in);

NDDSUSERDllExport extern void 
RTI_DL_HostAndAppIdPluginSupport_destroy_data_w_params(
    RTI_DL_HostAndAppId *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTI_DL_HostAndAppIdPluginSupport_destroy_data_ex(
    RTI_DL_HostAndAppId *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_HostAndAppIdPluginSupport_destroy_data(
    RTI_DL_HostAndAppId *sample);

NDDSUSERDllExport extern void 
RTI_DL_HostAndAppIdPluginSupport_print_data(
    const RTI_DL_HostAndAppId *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern RTI_DL_HostAndAppId*
RTI_DL_HostAndAppIdPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_HostAndAppId*
RTI_DL_HostAndAppIdPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
RTI_DL_HostAndAppIdPluginSupport_destroy_key_ex(
    RTI_DL_HostAndAppIdKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_HostAndAppIdPluginSupport_destroy_key(
    RTI_DL_HostAndAppIdKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RTI_DL_HostAndAppIdPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_HostAndAppId *out,
    const RTI_DL_HostAndAppId *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RTI_DL_HostAndAppIdPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RTI_DL_HostAndAppId *sample); 

NDDSUSERDllExport extern RTIBool
RTI_DL_HostAndAppIdPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_DL_HostAndAppId *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
RTI_DL_HostAndAppIdPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_HostAndAppId **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTI_DL_HostAndAppIdPlugin_deserialize_from_cdr_buffer(
    RTI_DL_HostAndAppId *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
RTI_DL_HostAndAppIdPlugin_data_to_string(
    const RTI_DL_HostAndAppId *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
RTI_DL_HostAndAppIdPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTI_DL_HostAndAppIdPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTI_DL_HostAndAppIdPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_HostAndAppIdPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTI_DL_HostAndAppIdPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_HostAndAppId ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTI_DL_HostAndAppIdPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_HostAndAppIdKeyHolder *key, 
    const RTI_DL_HostAndAppId *instance);

NDDSUSERDllExport extern RTIBool 
RTI_DL_HostAndAppIdPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_HostAndAppId *instance, 
    const RTI_DL_HostAndAppIdKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
RTI_DL_HostAndAppIdPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_DL_HostAndAppId *instance,
    RTIEncapsulationId encapsulationId);

NDDSUSERDllExport extern RTIBool 
RTI_DL_HostAndAppIdPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *RTI_DL_HostAndAppIdPlugin_get_programs();

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct LogMessage
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct LogMessage)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* LogMessage must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct LogMessage.
*/
typedef  struct RTI_DL_LogMessage RTI_DL_LogMessageKeyHolder;

#define RTI_DL_LogMessagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define RTI_DL_LogMessagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTI_DL_LogMessagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RTI_DL_LogMessagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define RTI_DL_LogMessagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define RTI_DL_LogMessagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTI_DL_LogMessagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTI_DL_LogMessage*
RTI_DL_LogMessagePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTI_DL_LogMessage*
RTI_DL_LogMessagePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_LogMessage*
RTI_DL_LogMessagePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTI_DL_LogMessagePluginSupport_copy_data(
    RTI_DL_LogMessage *out,
    const RTI_DL_LogMessage *in);

NDDSUSERDllExport extern void 
RTI_DL_LogMessagePluginSupport_destroy_data_w_params(
    RTI_DL_LogMessage *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTI_DL_LogMessagePluginSupport_destroy_data_ex(
    RTI_DL_LogMessage *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_LogMessagePluginSupport_destroy_data(
    RTI_DL_LogMessage *sample);

NDDSUSERDllExport extern void 
RTI_DL_LogMessagePluginSupport_print_data(
    const RTI_DL_LogMessage *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern RTI_DL_LogMessage*
RTI_DL_LogMessagePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_LogMessage*
RTI_DL_LogMessagePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
RTI_DL_LogMessagePluginSupport_destroy_key_ex(
    RTI_DL_LogMessageKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_LogMessagePluginSupport_destroy_key(
    RTI_DL_LogMessageKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RTI_DL_LogMessagePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RTI_DL_LogMessagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
RTI_DL_LogMessagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RTI_DL_LogMessagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
RTI_DL_LogMessagePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_LogMessage *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
RTI_DL_LogMessagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_LogMessage *out,
    const RTI_DL_LogMessage *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RTI_DL_LogMessagePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RTI_DL_LogMessage *sample); 

NDDSUSERDllExport extern RTIBool
RTI_DL_LogMessagePlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_DL_LogMessage *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
RTI_DL_LogMessagePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_LogMessage **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTI_DL_LogMessagePlugin_deserialize_from_cdr_buffer(
    RTI_DL_LogMessage *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
RTI_DL_LogMessagePlugin_data_to_string(
    const RTI_DL_LogMessage *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
RTI_DL_LogMessagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTI_DL_LogMessagePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTI_DL_LogMessagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_LogMessagePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTI_DL_LogMessagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_LogMessage ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTI_DL_LogMessagePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_LogMessageKeyHolder *key, 
    const RTI_DL_LogMessage *instance);

NDDSUSERDllExport extern RTIBool 
RTI_DL_LogMessagePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_LogMessage *instance, 
    const RTI_DL_LogMessageKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
RTI_DL_LogMessagePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_DL_LogMessage *instance,
    RTIEncapsulationId encapsulationId);

NDDSUSERDllExport extern RTIBool 
RTI_DL_LogMessagePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *RTI_DL_LogMessagePlugin_get_programs();

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RTI_DL_LogMessagePlugin_new(void);

NDDSUSERDllExport extern void
RTI_DL_LogMessagePlugin_delete(struct PRESTypePlugin *);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerVerbosityPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerVerbosityPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerVerbosityPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RTI_DL_ADMIN_RTILoggerVerbosityPluginSupport_print_data(
    const RTI_DL_ADMIN_RTILoggerVerbosity *sample, const char *desc, int indent_level);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerCategoryPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerCategoryPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerCategoryPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RTI_DL_ADMIN_RTILoggerCategoryPluginSupport_print_data(
    const RTI_DL_ADMIN_RTILoggerCategory *sample, const char *desc, int indent_level);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerPrintFormatPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerPrintFormatPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerPrintFormatPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RTI_DL_ADMIN_RTILoggerPrintFormatPluginSupport_print_data(
    const RTI_DL_ADMIN_RTILoggerPrintFormat *sample, const char *desc, int indent_level);

#define RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity*
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPluginSupport_copy_data(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *out,
    const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *in);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPluginSupport_destroy_data_w_params(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPluginSupport_destroy_data_ex(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPluginSupport_destroy_data(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *sample);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPluginSupport_print_data(
    const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *out,
    const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *sample); 

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_deserialize_from_cdr_buffer(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_data_to_string(
    const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityPlugin_get_programs();

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_StateKindPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_StateKindPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_StateKindPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RTI_DL_ADMIN_StateKindPluginSupport_print_data(
    const RTI_DL_ADMIN_StateKind *sample, const char *desc, int indent_level);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct State
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct State)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* State must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct State.
*/
typedef  struct RTI_DL_ADMIN_State RTI_DL_ADMIN_StateKeyHolder;

#define RTI_DL_ADMIN_StatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define RTI_DL_ADMIN_StatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTI_DL_ADMIN_StatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RTI_DL_ADMIN_StatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define RTI_DL_ADMIN_StatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define RTI_DL_ADMIN_StatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTI_DL_ADMIN_StatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTI_DL_ADMIN_State*
RTI_DL_ADMIN_StatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTI_DL_ADMIN_State*
RTI_DL_ADMIN_StatePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_ADMIN_State*
RTI_DL_ADMIN_StatePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_StatePluginSupport_copy_data(
    RTI_DL_ADMIN_State *out,
    const RTI_DL_ADMIN_State *in);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_StatePluginSupport_destroy_data_w_params(
    RTI_DL_ADMIN_State *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_StatePluginSupport_destroy_data_ex(
    RTI_DL_ADMIN_State *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_StatePluginSupport_destroy_data(
    RTI_DL_ADMIN_State *sample);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_StatePluginSupport_print_data(
    const RTI_DL_ADMIN_State *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern RTI_DL_ADMIN_State*
RTI_DL_ADMIN_StatePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_ADMIN_State*
RTI_DL_ADMIN_StatePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_StatePluginSupport_destroy_key_ex(
    RTI_DL_ADMIN_StateKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_StatePluginSupport_destroy_key(
    RTI_DL_ADMIN_StateKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RTI_DL_ADMIN_StatePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_StatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
RTI_DL_ADMIN_StatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_StatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
RTI_DL_ADMIN_StatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_State *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_StatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_State *out,
    const RTI_DL_ADMIN_State *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_StatePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RTI_DL_ADMIN_State *sample); 

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_StatePlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_DL_ADMIN_State *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_StatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_State **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_StatePlugin_deserialize_from_cdr_buffer(
    RTI_DL_ADMIN_State *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
RTI_DL_ADMIN_StatePlugin_data_to_string(
    const RTI_DL_ADMIN_State *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_StatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTI_DL_ADMIN_StatePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_StatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_StatePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_StatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_State ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_StatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_StateKeyHolder *key, 
    const RTI_DL_ADMIN_State *instance);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_StatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_State *instance, 
    const RTI_DL_ADMIN_StateKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_StatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_DL_ADMIN_State *instance,
    RTIEncapsulationId encapsulationId);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_StatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *RTI_DL_ADMIN_StatePlugin_get_programs();

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RTI_DL_ADMIN_StatePlugin_new(void);

NDDSUSERDllExport extern void
RTI_DL_ADMIN_StatePlugin_delete(struct PRESTypePlugin *);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandKindPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandKindPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandKindPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RTI_DL_ADMIN_CommandKindPluginSupport_print_data(
    const RTI_DL_ADMIN_CommandKind *sample, const char *desc, int indent_level);

#define RTI_DL_ADMIN_CommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define RTI_DL_ADMIN_CommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTI_DL_ADMIN_CommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RTI_DL_ADMIN_CommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTI_DL_ADMIN_CommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTI_DL_ADMIN_Command*
RTI_DL_ADMIN_CommandPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTI_DL_ADMIN_Command*
RTI_DL_ADMIN_CommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_ADMIN_Command*
RTI_DL_ADMIN_CommandPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandPluginSupport_copy_data(
    RTI_DL_ADMIN_Command *out,
    const RTI_DL_ADMIN_Command *in);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandPluginSupport_destroy_data_w_params(
    RTI_DL_ADMIN_Command *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandPluginSupport_destroy_data_ex(
    RTI_DL_ADMIN_Command *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandPluginSupport_destroy_data(
    RTI_DL_ADMIN_Command *sample);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandPluginSupport_print_data(
    const RTI_DL_ADMIN_Command *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_Command *out,
    const RTI_DL_ADMIN_Command *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RTI_DL_ADMIN_Command *sample); 

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_DL_ADMIN_Command *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_Command **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandPlugin_deserialize_from_cdr_buffer(
    RTI_DL_ADMIN_Command *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
RTI_DL_ADMIN_CommandPlugin_data_to_string(
    const RTI_DL_ADMIN_Command *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTI_DL_ADMIN_CommandPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_Command ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *RTI_DL_ADMIN_CommandPlugin_get_programs();

#define RTI_DL_ADMIN_CommandRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define RTI_DL_ADMIN_CommandRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTI_DL_ADMIN_CommandRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RTI_DL_ADMIN_CommandRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTI_DL_ADMIN_CommandRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTI_DL_ADMIN_CommandRequest*
RTI_DL_ADMIN_CommandRequestPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTI_DL_ADMIN_CommandRequest*
RTI_DL_ADMIN_CommandRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_ADMIN_CommandRequest*
RTI_DL_ADMIN_CommandRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandRequestPluginSupport_copy_data(
    RTI_DL_ADMIN_CommandRequest *out,
    const RTI_DL_ADMIN_CommandRequest *in);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandRequestPluginSupport_destroy_data_w_params(
    RTI_DL_ADMIN_CommandRequest *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandRequestPluginSupport_destroy_data_ex(
    RTI_DL_ADMIN_CommandRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandRequestPluginSupport_destroy_data(
    RTI_DL_ADMIN_CommandRequest *sample);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandRequestPluginSupport_print_data(
    const RTI_DL_ADMIN_CommandRequest *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RTI_DL_ADMIN_CommandRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
RTI_DL_ADMIN_CommandRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
RTI_DL_ADMIN_CommandRequestPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandRequest *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandRequest *out,
    const RTI_DL_ADMIN_CommandRequest *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandRequestPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RTI_DL_ADMIN_CommandRequest *sample); 

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandRequestPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_DL_ADMIN_CommandRequest *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandRequestPlugin_deserialize_from_cdr_buffer(
    RTI_DL_ADMIN_CommandRequest *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
RTI_DL_ADMIN_CommandRequestPlugin_data_to_string(
    const RTI_DL_ADMIN_CommandRequest *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTI_DL_ADMIN_CommandRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandRequestPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *RTI_DL_ADMIN_CommandRequestPlugin_get_programs();

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RTI_DL_ADMIN_CommandRequestPlugin_new(void);

NDDSUSERDllExport extern void
RTI_DL_ADMIN_CommandRequestPlugin_delete(struct PRESTypePlugin *);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandResultPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandResultPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandResultPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
RTI_DL_ADMIN_CommandResultPluginSupport_print_data(
    const RTI_DL_ADMIN_CommandResult *sample, const char *desc, int indent_level);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct CommandResponse
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct CommandResponse)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* CommandResponse must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct CommandResponse.
*/
typedef  struct RTI_DL_ADMIN_CommandResponse RTI_DL_ADMIN_CommandResponseKeyHolder;

#define RTI_DL_ADMIN_CommandResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

#define RTI_DL_ADMIN_CommandResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RTI_DL_ADMIN_CommandResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define RTI_DL_ADMIN_CommandResponsePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define RTI_DL_ADMIN_CommandResponsePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define RTI_DL_ADMIN_CommandResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RTI_DL_ADMIN_CommandResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTI_DL_ADMIN_CommandResponse*
RTI_DL_ADMIN_CommandResponsePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RTI_DL_ADMIN_CommandResponse*
RTI_DL_ADMIN_CommandResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_ADMIN_CommandResponse*
RTI_DL_ADMIN_CommandResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandResponsePluginSupport_copy_data(
    RTI_DL_ADMIN_CommandResponse *out,
    const RTI_DL_ADMIN_CommandResponse *in);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandResponsePluginSupport_destroy_data_w_params(
    RTI_DL_ADMIN_CommandResponse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandResponsePluginSupport_destroy_data_ex(
    RTI_DL_ADMIN_CommandResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandResponsePluginSupport_destroy_data(
    RTI_DL_ADMIN_CommandResponse *sample);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandResponsePluginSupport_print_data(
    const RTI_DL_ADMIN_CommandResponse *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern RTI_DL_ADMIN_CommandResponse*
RTI_DL_ADMIN_CommandResponsePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RTI_DL_ADMIN_CommandResponse*
RTI_DL_ADMIN_CommandResponsePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandResponsePluginSupport_destroy_key_ex(
    RTI_DL_ADMIN_CommandResponseKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandResponsePluginSupport_destroy_key(
    RTI_DL_ADMIN_CommandResponseKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RTI_DL_ADMIN_CommandResponsePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandResponsePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
RTI_DL_ADMIN_CommandResponsePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RTI_DL_ADMIN_CommandResponsePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
RTI_DL_ADMIN_CommandResponsePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandResponse *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandResponse *out,
    const RTI_DL_ADMIN_CommandResponse *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandResponsePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const RTI_DL_ADMIN_CommandResponse *sample); 

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandResponsePlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_DL_ADMIN_CommandResponse *sample,
    DDS_DataRepresentationId_t representation);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
RTI_DL_ADMIN_CommandResponsePlugin_deserialize_from_cdr_buffer(
    RTI_DL_ADMIN_CommandResponse *sample,
    const char * buffer,
    unsigned int length);    
#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport extern DDS_ReturnCode_t
RTI_DL_ADMIN_CommandResponsePlugin_data_to_string(
    const RTI_DL_ADMIN_CommandResponse *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    
#endif

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
RTI_DL_ADMIN_CommandResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RTI_DL_ADMIN_CommandResponsePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandResponsePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandResponseKeyHolder *key, 
    const RTI_DL_ADMIN_CommandResponse *instance);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandResponsePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_DL_ADMIN_CommandResponse *instance, 
    const RTI_DL_ADMIN_CommandResponseKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandResponsePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_DL_ADMIN_CommandResponse *instance,
    RTIEncapsulationId encapsulationId);

NDDSUSERDllExport extern RTIBool 
RTI_DL_ADMIN_CommandResponsePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

NDDSUSERDllExport extern
struct RTIXCdrInterpreterPrograms *RTI_DL_ADMIN_CommandResponsePlugin_get_programs();

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RTI_DL_ADMIN_CommandResponsePlugin_new(void);

NDDSUSERDllExport extern void
RTI_DL_ADMIN_CommandResponsePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* distlogPlugin_478707146_h */

