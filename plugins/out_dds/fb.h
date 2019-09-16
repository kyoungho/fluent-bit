

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from fb.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef fb_1282814526_h
#define fb_1282814526_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#define MAX_RECORDS (128)

extern const char *RecordTYPENAME;

typedef struct Record {

    DDS_Char *   key ;
    DDS_Double   value ;

} Record ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* Record_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Record_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Record_get_sample_access_info(void);
#endif

DDS_SEQUENCE(RecordSeq, Record);

NDDSUSERDllExport
RTIBool Record_initialize(
    Record* self);

NDDSUSERDllExport
RTIBool Record_initialize_ex(
    Record* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Record_initialize_w_params(
    Record* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Record_finalize_w_return(
    Record* self);

NDDSUSERDllExport
void Record_finalize(
    Record* self);

NDDSUSERDllExport
void Record_finalize_ex(
    Record* self,RTIBool deletePointers);

NDDSUSERDllExport
void Record_finalize_w_params(
    Record* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Record_finalize_optional_members(
    Record* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Record_copy(
    Record* dst,
    const Record* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

extern const char *FBTypeTYPENAME;

typedef struct FBType {

    DDS_LongLong   ts ;
    DDS_Char *   tag ;
    struct    RecordSeq  records ;

} FBType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* FBType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *FBType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *FBType_get_sample_access_info(void);
#endif

DDS_SEQUENCE(FBTypeSeq, FBType);

NDDSUSERDllExport
RTIBool FBType_initialize(
    FBType* self);

NDDSUSERDllExport
RTIBool FBType_initialize_ex(
    FBType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool FBType_initialize_w_params(
    FBType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool FBType_finalize_w_return(
    FBType* self);

NDDSUSERDllExport
void FBType_finalize(
    FBType* self);

NDDSUSERDllExport
void FBType_finalize_ex(
    FBType* self,RTIBool deletePointers);

NDDSUSERDllExport
void FBType_finalize_w_params(
    FBType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void FBType_finalize_optional_members(
    FBType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool FBType_copy(
    FBType* dst,
    const FBType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* fb */

