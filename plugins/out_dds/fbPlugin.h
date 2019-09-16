

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from fb.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef fbPlugin_1282814526_h
#define fbPlugin_1282814526_h

#include "fb.h"

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

extern "C" {

    #define RecordPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RecordPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RecordPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RecordPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RecordPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Record*
    RecordPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Record*
    RecordPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Record*
    RecordPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RecordPluginSupport_copy_data(
        Record *out,
        const Record *in);

    NDDSUSERDllExport extern void 
    RecordPluginSupport_destroy_data_w_params(
        Record *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RecordPluginSupport_destroy_data_ex(
        Record *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RecordPluginSupport_destroy_data(
        Record *sample);

    NDDSUSERDllExport extern void 
    RecordPluginSupport_print_data(
        const Record *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RecordPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RecordPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RecordPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RecordPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RecordPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Record *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RecordPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Record *out,
        const Record *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RecordPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Record *sample); 

    NDDSUSERDllExport extern RTIBool
    RecordPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Record *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RecordPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        Record **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RecordPlugin_deserialize_from_cdr_buffer(
        Record *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RecordPlugin_data_to_string(
        const Record *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RecordPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RecordPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RecordPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RecordPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RecordPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Record ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RecordPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RecordPlugin_new(void);

    NDDSUSERDllExport extern void
    RecordPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct FBType
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct FBType)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * FBType must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct FBType.
    */
    typedef  class FBType FBTypeKeyHolder;

    #define FBTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define FBTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define FBTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define FBTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define FBTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define FBTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define FBTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern FBType*
    FBTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern FBType*
    FBTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern FBType*
    FBTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    FBTypePluginSupport_copy_data(
        FBType *out,
        const FBType *in);

    NDDSUSERDllExport extern void 
    FBTypePluginSupport_destroy_data_w_params(
        FBType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    FBTypePluginSupport_destroy_data_ex(
        FBType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    FBTypePluginSupport_destroy_data(
        FBType *sample);

    NDDSUSERDllExport extern void 
    FBTypePluginSupport_print_data(
        const FBType *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern FBType*
    FBTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern FBType*
    FBTypePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    FBTypePluginSupport_destroy_key_ex(
        FBTypeKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    FBTypePluginSupport_destroy_key(
        FBTypeKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    FBTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    FBTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    FBTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    FBTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    FBTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        FBType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    FBTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        FBType *out,
        const FBType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    FBTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const FBType *sample); 

    NDDSUSERDllExport extern RTIBool
    FBTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const FBType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    FBTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        FBType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    FBTypePlugin_deserialize_from_cdr_buffer(
        FBType *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    FBTypePlugin_data_to_string(
        const FBType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    FBTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    FBTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    FBTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    FBTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    FBTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        FBType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    FBTypePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        FBTypeKeyHolder *key, 
        const FBType *instance);

    NDDSUSERDllExport extern RTIBool 
    FBTypePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        FBType *instance, 
        const FBTypeKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    FBTypePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const FBType *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    FBTypePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *FBTypePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    FBTypePlugin_new(void);

    NDDSUSERDllExport extern void
    FBTypePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* fbPlugin_1282814526_h */

