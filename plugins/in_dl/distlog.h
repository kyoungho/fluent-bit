

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from distlog.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef distlog_478707146_h
#define distlog_478707146_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#define RTI_DL_DEFAULT_LOG_TOPIC_NAME ("rti/distlog")
#define RTI_DL_DEFAULT_STATE_TOPIC_NAME ("rti/distlog/administration/state")
#define RTI_DL_DEFAULT_COMMAND_REQUEST_TOPIC_NAME ("rti/distlog/administration/command_request")
#define RTI_DL_DEFAULT_COMMAND_RESPONSE_TOPIC_NAME ("rti/distlog/administration/command_response")
#define RTI_DL_LOG_MESSAGE_TYPE_NAME ("com::rti::dl::LogMessage")
#define RTI_DL_STATE_TYPE_NAME ("com::rti::dl::admin::State")
#define RTI_DL_COMMAND_REQUEST_TYPE_NAME ("com::rti::dl::admin::CommandRequest")
#define RTI_DL_COMMAND_RESPONSE_TYPE_NAME ("com::rti::dl::admin::CommandResponse")
#define RTI_DL_SILENT_LEVEL (0)
#define RTI_DL_FATAL_LEVEL (100)
#define RTI_DL_SEVERE_LEVEL (200)
#define RTI_DL_ERROR_LEVEL (300)
#define RTI_DL_WARNING_LEVEL (400)
#define RTI_DL_NOTICE_LEVEL (500)
#define RTI_DL_INFO_LEVEL (600)
#define RTI_DL_DEBUG_LEVEL (700)
#define RTI_DL_TRACE_LEVEL (800)
#define RTI_DL_DEFAULT_CATEGORY ("")
#define RTI_DL_DEFAULT_LEVEL ((RTI_DL_INFO_LEVEL))
#define RTI_DL_MAX_CATEGORY_LENGTH (512)
#define RTI_DL_MAX_LOG_MESSAGE_LENGTH (4096)

extern const char *RTI_DL_HostAndAppIdTYPENAME;

typedef struct RTI_DL_HostAndAppId {

    DDS_Long   rtps_host_id ;
    DDS_Long   rtps_app_id ;

} RTI_DL_HostAndAppId ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_HostAndAppId_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_HostAndAppId_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_HostAndAppId_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_HostAndAppIdSeq, RTI_DL_HostAndAppId);

NDDSUSERDllExport
RTIBool RTI_DL_HostAndAppId_initialize(
    RTI_DL_HostAndAppId* self);

NDDSUSERDllExport
RTIBool RTI_DL_HostAndAppId_initialize_ex(
    RTI_DL_HostAndAppId* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_HostAndAppId_initialize_w_params(
    RTI_DL_HostAndAppId* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_HostAndAppId_finalize_w_return(
    RTI_DL_HostAndAppId* self);

NDDSUSERDllExport
void RTI_DL_HostAndAppId_finalize(
    RTI_DL_HostAndAppId* self);

NDDSUSERDllExport
void RTI_DL_HostAndAppId_finalize_ex(
    RTI_DL_HostAndAppId* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_HostAndAppId_finalize_w_params(
    RTI_DL_HostAndAppId* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_HostAndAppId_finalize_optional_members(
    RTI_DL_HostAndAppId* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_HostAndAppId_copy(
    RTI_DL_HostAndAppId* dst,
    const RTI_DL_HostAndAppId* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *RTI_DL_LogMessageTYPENAME;

typedef struct RTI_DL_LogMessage {

    RTI_DL_HostAndAppId   hostAndAppId ;
    DDS_Long   level ;
    DDS_Char *   category ;
    DDS_Char *   message ;
    DDS_LongLong   messageId ;

} RTI_DL_LogMessage ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_LogMessage_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_LogMessage_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_LogMessage_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_LogMessageSeq, RTI_DL_LogMessage);

NDDSUSERDllExport
RTIBool RTI_DL_LogMessage_initialize(
    RTI_DL_LogMessage* self);

NDDSUSERDllExport
RTIBool RTI_DL_LogMessage_initialize_ex(
    RTI_DL_LogMessage* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_LogMessage_initialize_w_params(
    RTI_DL_LogMessage* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_LogMessage_finalize_w_return(
    RTI_DL_LogMessage* self);

NDDSUSERDllExport
void RTI_DL_LogMessage_finalize(
    RTI_DL_LogMessage* self);

NDDSUSERDllExport
void RTI_DL_LogMessage_finalize_ex(
    RTI_DL_LogMessage* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_LogMessage_finalize_w_params(
    RTI_DL_LogMessage* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_LogMessage_finalize_optional_members(
    RTI_DL_LogMessage* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_LogMessage_copy(
    RTI_DL_LogMessage* dst,
    const RTI_DL_LogMessage* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum RTI_DL_ADMIN_RTILoggerVerbosity
{
    RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_SILENT ,      
    RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_ERROR ,      
    RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_WARNING ,      
    RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_LOCAL ,      
    RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_REMOTE ,      
    RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL      
} RTI_DL_ADMIN_RTILoggerVerbosity;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_RTILoggerVerbosity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_RTILoggerVerbosity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_RTILoggerVerbosity_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_RTILoggerVerbositySeq, RTI_DL_ADMIN_RTILoggerVerbosity);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_initialize(
    RTI_DL_ADMIN_RTILoggerVerbosity* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_initialize_ex(
    RTI_DL_ADMIN_RTILoggerVerbosity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_initialize_w_params(
    RTI_DL_ADMIN_RTILoggerVerbosity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_finalize_w_return(
    RTI_DL_ADMIN_RTILoggerVerbosity* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerVerbosity_finalize(
    RTI_DL_ADMIN_RTILoggerVerbosity* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerVerbosity_finalize_ex(
    RTI_DL_ADMIN_RTILoggerVerbosity* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerVerbosity_finalize_w_params(
    RTI_DL_ADMIN_RTILoggerVerbosity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerVerbosity_finalize_optional_members(
    RTI_DL_ADMIN_RTILoggerVerbosity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerVerbosity_copy(
    RTI_DL_ADMIN_RTILoggerVerbosity* dst,
    const RTI_DL_ADMIN_RTILoggerVerbosity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#define RTI_DL_ADMIN_DEFAULT_RTI_LOGGER_VERBOSITY ((RTI_DL_NDDS_CONFIG_LOG_VERBOSITY_WARNING))
typedef enum RTI_DL_ADMIN_RTILoggerCategory
{
    RTI_DL_NDDS_CONFIG_LOG_CATEGORY_PLATFORM ,      
    RTI_DL_NDDS_CONFIG_LOG_CATEGORY_COMMUNICATION ,      
    RTI_DL_NDDS_CONFIG_LOG_CATEGORY_DATABASE ,      
    RTI_DL_NDDS_CONFIG_LOG_CATEGORY_ENTITIES ,      
    RTI_DL_NDDS_CONFIG_LOG_CATEGORY_API      
} RTI_DL_ADMIN_RTILoggerCategory;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_RTILoggerCategory_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_RTILoggerCategory_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_RTILoggerCategory_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_RTILoggerCategorySeq, RTI_DL_ADMIN_RTILoggerCategory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategory_initialize(
    RTI_DL_ADMIN_RTILoggerCategory* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategory_initialize_ex(
    RTI_DL_ADMIN_RTILoggerCategory* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategory_initialize_w_params(
    RTI_DL_ADMIN_RTILoggerCategory* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategory_finalize_w_return(
    RTI_DL_ADMIN_RTILoggerCategory* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerCategory_finalize(
    RTI_DL_ADMIN_RTILoggerCategory* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerCategory_finalize_ex(
    RTI_DL_ADMIN_RTILoggerCategory* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerCategory_finalize_w_params(
    RTI_DL_ADMIN_RTILoggerCategory* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerCategory_finalize_optional_members(
    RTI_DL_ADMIN_RTILoggerCategory* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategory_copy(
    RTI_DL_ADMIN_RTILoggerCategory* dst,
    const RTI_DL_ADMIN_RTILoggerCategory* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum RTI_DL_ADMIN_RTILoggerPrintFormat
{
    RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEFAULT ,      
    RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_TIMESTAMPED ,      
    RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_VERBOSE ,      
    RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_VERBOSE_TIMESTAMPED ,      
    RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_DEBUG ,      
    RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_MINIMAL ,      
    RTI_DL_NDDS_CONFIG_LOG_PRINT_FORMAT_MAXIMAL      
} RTI_DL_ADMIN_RTILoggerPrintFormat;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_RTILoggerPrintFormat_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_RTILoggerPrintFormat_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_RTILoggerPrintFormat_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_RTILoggerPrintFormatSeq, RTI_DL_ADMIN_RTILoggerPrintFormat);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_initialize(
    RTI_DL_ADMIN_RTILoggerPrintFormat* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_initialize_ex(
    RTI_DL_ADMIN_RTILoggerPrintFormat* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_initialize_w_params(
    RTI_DL_ADMIN_RTILoggerPrintFormat* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_return(
    RTI_DL_ADMIN_RTILoggerPrintFormat* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerPrintFormat_finalize(
    RTI_DL_ADMIN_RTILoggerPrintFormat* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_ex(
    RTI_DL_ADMIN_RTILoggerPrintFormat* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_w_params(
    RTI_DL_ADMIN_RTILoggerPrintFormat* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerPrintFormat_finalize_optional_members(
    RTI_DL_ADMIN_RTILoggerPrintFormat* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerPrintFormat_copy(
    RTI_DL_ADMIN_RTILoggerPrintFormat* dst,
    const RTI_DL_ADMIN_RTILoggerPrintFormat* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *RTI_DL_ADMIN_RTILoggerCategoryAndVerbosityTYPENAME;

typedef struct RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity {

    RTI_DL_ADMIN_RTILoggerCategory   category ;
    RTI_DL_ADMIN_RTILoggerVerbosity   verbosity ;

} RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq, RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_ex(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_initialize_w_params(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_w_return(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_ex(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_w_params(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_finalize_optional_members(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity_copy(
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* dst,
    const RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum RTI_DL_ADMIN_StateKind
{
    RTI_DL_STATE_INITIALIZING ,      
    RTI_DL_STATE_OPERATIONAL ,      
    RTI_DL_STATE_NONOPERATIONAL ,      
    RTI_DL_STATE_SHUTTING_DOWN      
} RTI_DL_ADMIN_StateKind;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_StateKind_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_StateKind_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_StateKind_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_StateKindSeq, RTI_DL_ADMIN_StateKind);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_StateKind_initialize(
    RTI_DL_ADMIN_StateKind* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_StateKind_initialize_ex(
    RTI_DL_ADMIN_StateKind* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_StateKind_initialize_w_params(
    RTI_DL_ADMIN_StateKind* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_StateKind_finalize_w_return(
    RTI_DL_ADMIN_StateKind* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_StateKind_finalize(
    RTI_DL_ADMIN_StateKind* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_StateKind_finalize_ex(
    RTI_DL_ADMIN_StateKind* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_StateKind_finalize_w_params(
    RTI_DL_ADMIN_StateKind* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_StateKind_finalize_optional_members(
    RTI_DL_ADMIN_StateKind* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_StateKind_copy(
    RTI_DL_ADMIN_StateKind* dst,
    const RTI_DL_ADMIN_StateKind* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#define RTI_DL_ADMIN_MAX_APPLICATION_KIND_LENGTH (256)
#define RTI_DL_ADMIN_MAX_COMMAND_LINE_LENGTH (8192)

extern const char *RTI_DL_ADMIN_StateTYPENAME;

typedef struct RTI_DL_ADMIN_State {

    RTI_DL_HostAndAppId   hostAndAppId ;
    DDS_Long   administrationDomainId ;
    RTI_DL_ADMIN_StateKind   state ;
    DDS_Char *   applicationKind ;
    DDS_Long   filterLevel ;
    RTI_DL_ADMIN_RTILoggerCategoryAndVerbosity   rtiLoggerVerbosities [5];
    RTI_DL_ADMIN_RTILoggerPrintFormat   rtiLoggerPrintFormat ;

} RTI_DL_ADMIN_State ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_State_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_State_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_State_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_StateSeq, RTI_DL_ADMIN_State);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_State_initialize(
    RTI_DL_ADMIN_State* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_State_initialize_ex(
    RTI_DL_ADMIN_State* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_State_initialize_w_params(
    RTI_DL_ADMIN_State* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_State_finalize_w_return(
    RTI_DL_ADMIN_State* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_State_finalize(
    RTI_DL_ADMIN_State* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_State_finalize_ex(
    RTI_DL_ADMIN_State* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_State_finalize_w_params(
    RTI_DL_ADMIN_State* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_State_finalize_optional_members(
    RTI_DL_ADMIN_State* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_State_copy(
    RTI_DL_ADMIN_State* dst,
    const RTI_DL_ADMIN_State* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum RTI_DL_ADMIN_CommandKind
{
    RTI_DL_SET_LOG_LEVEL ,      
    RTI_DL_SET_RTI_LOGGER_LEVEL ,      
    RTI_DL_SET_RTI_LOGGER_PRINT_FORMAT      
} RTI_DL_ADMIN_CommandKind;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_CommandKind_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_CommandKind_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_CommandKind_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_CommandKindSeq, RTI_DL_ADMIN_CommandKind);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandKind_initialize(
    RTI_DL_ADMIN_CommandKind* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandKind_initialize_ex(
    RTI_DL_ADMIN_CommandKind* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandKind_initialize_w_params(
    RTI_DL_ADMIN_CommandKind* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandKind_finalize_w_return(
    RTI_DL_ADMIN_CommandKind* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandKind_finalize(
    RTI_DL_ADMIN_CommandKind* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandKind_finalize_ex(
    RTI_DL_ADMIN_CommandKind* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandKind_finalize_w_params(
    RTI_DL_ADMIN_CommandKind* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandKind_finalize_optional_members(
    RTI_DL_ADMIN_CommandKind* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandKind_copy(
    RTI_DL_ADMIN_CommandKind* dst,
    const RTI_DL_ADMIN_CommandKind* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *RTI_DL_ADMIN_CommandTYPENAME;

typedef struct RTI_DL_ADMIN_Command {

    RTI_DL_ADMIN_CommandKind _d;
    struct RTI_DL_ADMIN_Command_u 
    {

        DDS_Long   filterLevel ;
        struct    RTI_DL_ADMIN_RTILoggerCategoryAndVerbositySeq  categoryAndVerbosity ;
        RTI_DL_ADMIN_RTILoggerPrintFormat   printFormat ;
    }_u;

} RTI_DL_ADMIN_Command ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_Command_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_Command_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_Command_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_CommandSeq, RTI_DL_ADMIN_Command);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_Command_initialize(
    RTI_DL_ADMIN_Command* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_Command_initialize_ex(
    RTI_DL_ADMIN_Command* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_Command_initialize_w_params(
    RTI_DL_ADMIN_Command* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_Command_finalize_w_return(
    RTI_DL_ADMIN_Command* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_Command_finalize(
    RTI_DL_ADMIN_Command* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_Command_finalize_ex(
    RTI_DL_ADMIN_Command* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_Command_finalize_w_params(
    RTI_DL_ADMIN_Command* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_Command_finalize_optional_members(
    RTI_DL_ADMIN_Command* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_Command_copy(
    RTI_DL_ADMIN_Command* dst,
    const RTI_DL_ADMIN_Command* src);

NDDSUSERDllExport
DDS_LongLong RTI_DL_ADMIN_Command_getDefaultDiscriminator();

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *RTI_DL_ADMIN_CommandRequestTYPENAME;

typedef struct RTI_DL_ADMIN_CommandRequest {

    RTI_DL_HostAndAppId   targetHostAndAppId ;
    RTI_DL_HostAndAppId   originatorHostAndAppId ;
    DDS_Long   invocation ;
    RTI_DL_ADMIN_Command   command ;

} RTI_DL_ADMIN_CommandRequest ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_CommandRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_CommandRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_CommandRequest_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_CommandRequestSeq, RTI_DL_ADMIN_CommandRequest);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandRequest_initialize(
    RTI_DL_ADMIN_CommandRequest* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandRequest_initialize_ex(
    RTI_DL_ADMIN_CommandRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandRequest_initialize_w_params(
    RTI_DL_ADMIN_CommandRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandRequest_finalize_w_return(
    RTI_DL_ADMIN_CommandRequest* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandRequest_finalize(
    RTI_DL_ADMIN_CommandRequest* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandRequest_finalize_ex(
    RTI_DL_ADMIN_CommandRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandRequest_finalize_w_params(
    RTI_DL_ADMIN_CommandRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandRequest_finalize_optional_members(
    RTI_DL_ADMIN_CommandRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandRequest_copy(
    RTI_DL_ADMIN_CommandRequest* dst,
    const RTI_DL_ADMIN_CommandRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#define RTI_DL_ADMIN_COMMAND_RESPONSE_MAX_LENGTH (2048)
typedef enum RTI_DL_ADMIN_CommandResult
{
    RTI_DL_COMMAND_RESULT_OK ,      
    RTI_DL_COMMAND_RESULT_NOT_SUPPORTED ,      
    RTI_DL_COMMAND_RESULT_ERROR      
} RTI_DL_ADMIN_CommandResult;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_CommandResult_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_CommandResult_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_CommandResult_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_CommandResultSeq, RTI_DL_ADMIN_CommandResult);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResult_initialize(
    RTI_DL_ADMIN_CommandResult* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResult_initialize_ex(
    RTI_DL_ADMIN_CommandResult* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResult_initialize_w_params(
    RTI_DL_ADMIN_CommandResult* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResult_finalize_w_return(
    RTI_DL_ADMIN_CommandResult* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandResult_finalize(
    RTI_DL_ADMIN_CommandResult* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandResult_finalize_ex(
    RTI_DL_ADMIN_CommandResult* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandResult_finalize_w_params(
    RTI_DL_ADMIN_CommandResult* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandResult_finalize_optional_members(
    RTI_DL_ADMIN_CommandResult* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResult_copy(
    RTI_DL_ADMIN_CommandResult* dst,
    const RTI_DL_ADMIN_CommandResult* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *RTI_DL_ADMIN_CommandResponseTYPENAME;

typedef struct RTI_DL_ADMIN_CommandResponse {

    RTI_DL_HostAndAppId   hostAndAppId ;
    RTI_DL_HostAndAppId   originatorHostAndAppId ;
    DDS_Long   invocation ;
    RTI_DL_ADMIN_CommandResult   commandResult ;
    DDS_Char *   message ;

} RTI_DL_ADMIN_CommandResponse ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_DL_ADMIN_CommandResponse_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_DL_ADMIN_CommandResponse_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_DL_ADMIN_CommandResponse_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RTI_DL_ADMIN_CommandResponseSeq, RTI_DL_ADMIN_CommandResponse);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResponse_initialize(
    RTI_DL_ADMIN_CommandResponse* self);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResponse_initialize_ex(
    RTI_DL_ADMIN_CommandResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResponse_initialize_w_params(
    RTI_DL_ADMIN_CommandResponse* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResponse_finalize_w_return(
    RTI_DL_ADMIN_CommandResponse* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandResponse_finalize(
    RTI_DL_ADMIN_CommandResponse* self);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandResponse_finalize_ex(
    RTI_DL_ADMIN_CommandResponse* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandResponse_finalize_w_params(
    RTI_DL_ADMIN_CommandResponse* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_DL_ADMIN_CommandResponse_finalize_optional_members(
    RTI_DL_ADMIN_CommandResponse* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_DL_ADMIN_CommandResponse_copy(
    RTI_DL_ADMIN_CommandResponse* dst,
    const RTI_DL_ADMIN_CommandResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* distlog */

