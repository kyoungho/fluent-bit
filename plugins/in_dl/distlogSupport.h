
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from distlog.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef distlogSupport_478707146_h
#define distlogSupport_478707146_h

/* Uses */
#include "distlog.h"

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)

#endif

/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_C(RTI_DL_LogMessageTypeSupport, RTI_DL_LogMessage);
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_C(RTI_DL_LogMessageDataWriter, RTI_DL_LogMessage);
DDS_DATAREADER_C(RTI_DL_LogMessageDataReader, RTI_DL_LogMessageSeq, RTI_DL_LogMessage);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_C(RTI_DL_ADMIN_StateTypeSupport, RTI_DL_ADMIN_State);
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_C(RTI_DL_ADMIN_StateDataWriter, RTI_DL_ADMIN_State);
DDS_DATAREADER_C(RTI_DL_ADMIN_StateDataReader, RTI_DL_ADMIN_StateSeq, RTI_DL_ADMIN_State);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_C(RTI_DL_ADMIN_CommandRequestTypeSupport, RTI_DL_ADMIN_CommandRequest);
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_C(RTI_DL_ADMIN_CommandRequestDataWriter, RTI_DL_ADMIN_CommandRequest);
DDS_DATAREADER_C(RTI_DL_ADMIN_CommandRequestDataReader, RTI_DL_ADMIN_CommandRequestSeq, RTI_DL_ADMIN_CommandRequest);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
/* ========================================================================= */
/**
Uses:     T

Defines:  TTypeSupport, TDataWriter, TDataReader

Organized using the well-documented "Generics Pattern" for
implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)

#endif

DDS_TYPESUPPORT_C(RTI_DL_ADMIN_CommandResponseTypeSupport, RTI_DL_ADMIN_CommandResponse);
DDS_DATAWRITER_WITH_DATA_CONSTRUCTOR_METHODS_C(RTI_DL_ADMIN_CommandResponseDataWriter, RTI_DL_ADMIN_CommandResponse);
DDS_DATAREADER_C(RTI_DL_ADMIN_CommandResponseDataReader, RTI_DL_ADMIN_CommandResponseSeq, RTI_DL_ADMIN_CommandResponse);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif  /* distlogSupport_478707146_h */

