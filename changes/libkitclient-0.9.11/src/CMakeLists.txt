# Add directories
include_directories(
    ${urpc_path}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(libkitclient_cpp
    device.cpp
    devicemgr.cpp
    deviceutils.cpp)

# Headers
set(libkitclient_h
    device.h
    devicemgr.h
    deviceutils.h
    libkitclient_export.h)

# Nicer includes
set(libkitclient_h
    ${libkitclient_h}
    libkitclient)

# Add submodules
include(qtapi/qtapi.cmake)
include(ftdi/ftdi.cmake)
include(ip/ip.cmake)

# Qt4 features
if(QT4_FOUND)
    qt4_automoc(${libkitclient_cpp})
    add_definitions(-DUSE_QT_THREADS)
    set(THREAD_LIBRARY      "")
else(QT4_FOUND)
    set(QT_LIBRARIES        "")
    set(THREAD_LIBRARY      "pthread")
    add_definitions(-DUSE_PTHREADS)
endif(QT4_FOUND)

# Targets
add_definitions("-DKITCLIENT_DO_EXPORT")
add_library(kitclient SHARED ${libkitclient_cpp} ${libkitclient_h})
add_library(kitclient_static STATIC ${libkitclient_cpp} ${libkitclient_h})
#set_target_properties(kitclient_static PROPERTIES OUTPUT_NAME "kitclient")

# FIX: x86_64 static libs complain
if("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "x86_64")
    set_target_properties(kitclient_static PROPERTIES COMPILE_FLAGS -fPIC)
endif("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "x86_64")


# Linking
find_library(RT_LIBRARY NAMES rt)
if (NOT RT_LIBRARY)
	set(RT_LIBRARY "")
endif(NOT RT_LIBRARY)
if(${WIN32})
    target_link_libraries(
        kitclient
        ${FTD2XX_LIBRARIES}
        ${QT_LIBRARIES}
        ws2_32
	${THREAD_LIBRARY})
    target_link_libraries(
        kitclient_static
        ${FTD2XX_LIBRARIES}
        ${QT_LIBRARIES}
        ws2_32
        ${THREAD_LIBRARY})
endif(${WIN32})
if(${UNIX})
    target_link_libraries(
        kitclient
        ${LIBFTDI1}
        ${QT_LIBRARIES}
        ${THREAD_LIBRARY}
        ${RT_LIBRARY})
    target_link_libraries(
        kitclient_static
        ${LIBFTDI1}
        ${QT_LIBRARIES}
        ${THREAD_LIBRARY}
        ${RT_LIBRARY})
endif(${UNIX})

# Installation
install(
    TARGETS kitclient
    DESTINATION ${LIBDIR}
    COMPONENT sharedlibs)

install(
    TARGETS kitclient_static
    DESTINATION ${LIBDIR}
    COMPONENT staticlibs)

install(
    FILES ${libkitclient_h}
    DESTINATION include/${PROJECT_NAME}
    COMPONENT headers)

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

