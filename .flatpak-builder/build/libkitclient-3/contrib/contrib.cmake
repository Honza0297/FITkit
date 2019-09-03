# Contrib dir
set(CONTRIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/contrib)
include_directories(${CONTRIB_DIR})

# UDev rules
if(${UNIX} AND NOT("${PACKAGE}" STREQUAL Fedora))
    message(STATUS "Installing udev rules to ${ROOT_DIR}etc/udev/rules.d/")
    install(
        FILES ${CONTRIB_DIR}/99-libftdi.rules
        DESTINATION "${ROOT_DIR}etc/udev/rules.d")
endif(${UNIX} AND NOT("${PACKAGE}" STREQUAL Fedora))

# ftd2xx
if(${WIN32})
    message(STATUS "FTD2xx directory: ${CONTRIB_DIR}/d2xx")

    # Export library
    set(FTD2XX_INCLUDE_PATH ${CONTRIB_DIR}/d2xx)
    set(FTD2XX_LIBRARIES    ${FTD2XX_INCLUDE_PATH}/libftd2xx.a)
    if (MSVC)
    set(FTD2XX_LIBRARIES    ${FTD2XX_INCLUDE_PATH}/msvc/ftd2xx.lib)
    endif(MSVC)
    set(FTDI_LIBNAME        "ftd2xx")
    mark_as_advanced(FTDI_LIBNAME)
    mark_as_advanced(FTD2XX_INCLUDE_PATH)
    mark_as_advanced(FTD2XX_LIBRARIES)
    include_directories(${FTD2XX_INCLUDE_PATH})

    # Install ftd2xx bundle
    install(
        FILES ${FTD2XX_INCLUDE_PATH}/ftd2xx.dll
        DESTINATION ${LIBDIR}
        COMPONENT sharedlibs)
    install(
        FILES ${FTD2XX_INCLUDE_PATH}/msvc/ftd2xx.lib
        DESTINATION ${LIBDIR}
        COMPONENT sharedlibs)
endif(${WIN32})

# libftdi
if(${UNIX})
    # Find library
    find_library(FTDI_LIBRARIES NAMES ftdi)
    if(NOT FTDI_LIBRARIES)
        message(FATAL_ERROR "!! libftdi library or development headers not found")
    endif(NOT FTDI_LIBRARIES)
    set(FTDI_LIBNAME "ftdi")
    mark_as_advanced(FTDI_LIBNAME)
    mark_as_advanced(FTDI_LIBRARIES)
endif(${UNIX})

# liburpc (branch snapshot)
include(${CONTRIB_DIR}/liburpc_copy/liburpc_copy.cmake)
