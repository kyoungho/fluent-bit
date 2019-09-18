if (NOT DEFINED NDDSHOME)
  if (DEFINED ENV{NDDSHOME})
    set(NDDSHOME $ENV{NDDSHOME})
  else()
    message(FATAL_ERROR "$NDDSHOME not specified. Please set -DNDDSHOME= to your RTI Connext DDS installation directory")
  endif()
endif()

# We need to know the RTI Connext DDS libraries to compile against
if (NOT DEFINED ARCHITECTURE)
  if (DEFINED ENV{ARCHITECTURE})
    set(ARCHITECTURE $ENV{ARCHITECTURE})
  else()
    message(FATAL_ERROR "$ARCHITECTURE not specified. Please set -DARCHITECTURE= to your RTI Connext DDS architecture")
  endif()
endif()

# Connext DDS Definitions
if (CMAKE_SYSTEM_NAME MATCHES "Linux")
  set(Connext_DEFINITIONS
     "-DRTI_UNIX -DRTI_LINUX"
  )
  set(nddscore_libname libnddscorez.a)
  set(nddsc_libname libnddscz.a)
  set(external_libs "-ldl -lm -lpthread -lrt")
elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
  set(Connext_DEFINITIONS
    "-DWIN32_LEAN_AND_MEAN -DWIN32 -D_WINDOWS -DRTI_WIN32 -D_BIND_TO_CURRENT_MFC_VERSION=1 -D_BIND_TO_CURRENT_CRT_VERSION=1 -D_CRT_SECURE_NO_WARNING")
  set(nddscore_libname nddscorez.lib)
  set(nddsc_libname nddscz.lib)
  set(external_libs ws2_32 netapi32 version)
elseif(CMAKE_SYSTEM_NAME MATCHES "Darwin")
  # Build for Mac
  set(Connext_DEFINITIONS  "-DRTI_UNIX -DRTI_DARWIN -DRTI_DARWIN10 -DRTI_64BIT")
  set(nddscore_libname libnddscorez.a)
  set(nddsc_libname libnddscz.a)
endif()

# Find ndds_c.h header file
find_path(Connext_INCLUDE_DIRS_NDDS
  NAMES ndds_c.h
  PATHS ${NDDSHOME}/include/ndds
  )

# We need to include both include and include/ndds directories
set(Connext_INCLUDE_DIRS
  ${NDDSHOME}/include
  ${Connext_INCLUDE_DIRS_NDDS}
  )

# Add Core, C, and C++ libraries for the given architecture
find_library(nddscore_lib
  NAMES ${nddscore_libname}
  PATHS ${NDDSHOME}/lib/${ARCHITECTURE}
  )

find_library(nddsc_lib
  NAMES ${nddsc_libname}
  PATHS ${NDDSHOME}/lib/${ARCHITECTURE}
  )

set(Connext_LIBRARIES
  ${nddsc_lib}
  ${nddscore_lib}
  ${CMAKE_DL_LIBS}
  ${external_libs}
  )

IF (Connext_INCLUDE_DIRS AND Connext_LIBRARIES)
    SET(Connext_FOUND TRUE)
ENDIF (Connext_INCLUDE_DIRS AND Connext_LIBRARIES)

IF (Connext_FOUND)
    MESSAGE(STATUS "Found Connext DDS libraries: ${Connext_LIBRARIES}")
ELSE (Connext_FOUND)
    IF (Connext_FIND_REQUIRED)
        MESSAGE(FATAL_ERROR "Could not find Connext DDS")
    ENDIF (Connext_FIND_REQUIRED)
ENDIF (Connext_FOUND)

set (ARCHITECTURE x64Linux4gcc7.3.0)
include_directories(${Connext_INCLUDE_DIRS})
add_definitions(${Connext_DEFINITIONS})

set(src
  out_dds.c
  fb.c
  fbPlugin.c
  fbSupport.c)

FLB_PLUGIN(out_dds "${src}" "${Connext_LIBRARIES}")
