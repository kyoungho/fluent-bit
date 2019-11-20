

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from dummy.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef dummy_1418989514_h
#define dummy_1418989514_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern const char *DummyTYPENAME;

typedef struct Dummy {

    DDS_Double   ts ;
    DDS_Char *   message ;

} Dummy ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* Dummy_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *Dummy_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *Dummy_get_sample_access_info(void);
#endif

DDS_SEQUENCE(DummySeq, Dummy);

NDDSUSERDllExport
RTIBool Dummy_initialize(
    Dummy* self);

NDDSUSERDllExport
RTIBool Dummy_initialize_ex(
    Dummy* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool Dummy_initialize_w_params(
    Dummy* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool Dummy_finalize_w_return(
    Dummy* self);

NDDSUSERDllExport
void Dummy_finalize(
    Dummy* self);

NDDSUSERDllExport
void Dummy_finalize_ex(
    Dummy* self,RTIBool deletePointers);

NDDSUSERDllExport
void Dummy_finalize_w_params(
    Dummy* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Dummy_finalize_optional_members(
    Dummy* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool Dummy_copy(
    Dummy* dst,
    const Dummy* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* dummy */

