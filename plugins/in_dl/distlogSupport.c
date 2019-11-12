
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from distlog.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "distlogSupport.h"
#include "distlogPlugin.h"

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_DL_LogMessage' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_DL_LogMessageTYPENAME

/* Defines */
#define TDataWriter RTI_DL_LogMessageDataWriter
#define TData       RTI_DL_LogMessage

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_DL_LogMessageTYPENAME

/* Defines */
#define TDataReader RTI_DL_LogMessageDataReader
#define TDataSeq    RTI_DL_LogMessageSeq
#define TData       RTI_DL_LogMessage

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_DL_LogMessageTYPENAME
#define TPlugin_new  RTI_DL_LogMessagePlugin_new
#define TPlugin_delete  RTI_DL_LogMessagePlugin_delete

/* Defines */
#define TTypeSupport RTI_DL_LogMessageTypeSupport
#define TData        RTI_DL_LogMessage
#define TDataReader  RTI_DL_LogMessageDataReader
#define TDataWriter  RTI_DL_LogMessageDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_c/generic/dds_c_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_DL_ADMIN_State' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_DL_ADMIN_StateTYPENAME

/* Defines */
#define TDataWriter RTI_DL_ADMIN_StateDataWriter
#define TData       RTI_DL_ADMIN_State

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_DL_ADMIN_StateTYPENAME

/* Defines */
#define TDataReader RTI_DL_ADMIN_StateDataReader
#define TDataSeq    RTI_DL_ADMIN_StateSeq
#define TData       RTI_DL_ADMIN_State

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_DL_ADMIN_StateTYPENAME
#define TPlugin_new  RTI_DL_ADMIN_StatePlugin_new
#define TPlugin_delete  RTI_DL_ADMIN_StatePlugin_delete

/* Defines */
#define TTypeSupport RTI_DL_ADMIN_StateTypeSupport
#define TData        RTI_DL_ADMIN_State
#define TDataReader  RTI_DL_ADMIN_StateDataReader
#define TDataWriter  RTI_DL_ADMIN_StateDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_c/generic/dds_c_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_DL_ADMIN_CommandRequest' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_DL_ADMIN_CommandRequestTYPENAME

/* Defines */
#define TDataWriter RTI_DL_ADMIN_CommandRequestDataWriter
#define TData       RTI_DL_ADMIN_CommandRequest

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_DL_ADMIN_CommandRequestTYPENAME

/* Defines */
#define TDataReader RTI_DL_ADMIN_CommandRequestDataReader
#define TDataSeq    RTI_DL_ADMIN_CommandRequestSeq
#define TData       RTI_DL_ADMIN_CommandRequest

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_DL_ADMIN_CommandRequestTYPENAME
#define TPlugin_new  RTI_DL_ADMIN_CommandRequestPlugin_new
#define TPlugin_delete  RTI_DL_ADMIN_CommandRequestPlugin_delete

/* Defines */
#define TTypeSupport RTI_DL_ADMIN_CommandRequestTypeSupport
#define TData        RTI_DL_ADMIN_CommandRequest
#define TDataReader  RTI_DL_ADMIN_CommandRequestDataReader
#define TDataWriter  RTI_DL_ADMIN_CommandRequestDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_c/generic/dds_c_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_DL_ADMIN_CommandResponse' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_DL_ADMIN_CommandResponseTYPENAME

/* Defines */
#define TDataWriter RTI_DL_ADMIN_CommandResponseDataWriter
#define TData       RTI_DL_ADMIN_CommandResponse

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_DL_ADMIN_CommandResponseTYPENAME

/* Defines */
#define TDataReader RTI_DL_ADMIN_CommandResponseDataReader
#define TDataSeq    RTI_DL_ADMIN_CommandResponseSeq
#define TData       RTI_DL_ADMIN_CommandResponse

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_DL_ADMIN_CommandResponseTYPENAME
#define TPlugin_new  RTI_DL_ADMIN_CommandResponsePlugin_new
#define TPlugin_delete  RTI_DL_ADMIN_CommandResponsePlugin_delete

/* Defines */
#define TTypeSupport RTI_DL_ADMIN_CommandResponseTypeSupport
#define TData        RTI_DL_ADMIN_CommandResponse
#define TDataReader  RTI_DL_ADMIN_CommandResponseDataReader
#define TDataWriter  RTI_DL_ADMIN_CommandResponseDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_c/generic/dds_c_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

