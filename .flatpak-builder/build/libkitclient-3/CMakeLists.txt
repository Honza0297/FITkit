# Project
project(libkitclient)
set(MAJOR_VERSION 0)
set(MINOR_VERSION 9)
set(PATCH_VERSION 11)
set(VERSION_STRING ${MAJOR_VERSION}.${MINOR_VERSION}.${PATCH_VERSION})

# Visual Studio specifics
if (MSVC)
    message(STATUS "Using MSVC specifics")
    set(VS_KEYWORD "Qt4VSv1.0")
    add_definitions("/W3 /D_CRT_SECURE_NO_WARNINGS /nologo")
    add_definitions("/wd4571 /wd4127 /wd4365 /wd4820 /wd4548 /wd4661 /wd4512")
    add_definitions("/wd4668 /wd4660 /wd4711 /wd4619 /wd4710 /wd4514 /wd4625")
    add_definitions("/wd4626 /wd4505 /wd4251")
endif(MSVC)

# Defines
cmake_minimum_required(VERSION 2.6)
cmake_policy(SET CMP0003 NEW)
cmake_policy(SET CMP0005 NEW)
add_definitions(-Wall -D__VERSION="${VERSION_STRING}")

# Qt4
find_package(Qt4 4.2)
set(QT_DONT_USE_QTGUI 1)
include(${QT_USE_FILE})

# Includes
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR})

# Debug build
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif(NOT CMAKE_BUILD_TYPE)
if(${CMAKE_BUILD_TYPE} STREQUAL Debug)
    add_definitions(-DDEBUG)
endif(${CMAKE_BUILD_TYPE} STREQUAL Debug)
if(${CMAKE_BUILD_TYPE} STREQUAL RelWithDebInfo)
    add_definitions(-DDEBUG)
endif(${CMAKE_BUILD_TYPE} STREQUAL RelWithDebInfo)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

if("${DBG}" STREQUAL 1)
  ADD_DEFINITIONS(-DDEBUG=1)
endif("${DBG}" STREQUAL 1)

# Root directory fix
if("${CPACK_ROOTFIX}" STREQUAL "yes")
    set(ROOT_DIR "../")
    set(CPACK_PACKAGING_INSTALL_PREFIX "/usr")
else("${CPACK_ROOTFIX}" STREQUAL "yes")
    set(ROOT_DIR "/")
endif("${CPACK_ROOTFIX}" STREQUAL "yes")
message(STATUS "Root directory: ${ROOT_DIR}")  

# OS specific
if(${UNIX})
    message(STATUS "Implementation: libftdi (UNIX)")
    add_definitions(-D__UNIX)
    if(${CMAKE_SYSTEM_PROCESSOR} STREQUAL x86_64)
        set(LIBDIR lib64)
    else(${CMAKE_SYSTEM_PROCESSOR} STREQUAL x86_64)
        set(LIBDIR lib)
    endif(${CMAKE_SYSTEM_PROCESSOR} STREQUAL x86_64)
    set(CMOD_DIR ${LIBDIR}/${PROJECT_NAME})
endif(${UNIX})

if(${WIN32})
    message(STATUS "Implementation: ftd2xx (Win32)")
    add_definitions(-D__WIN32)
    set(LIBDIR bin)   
    set(CMOD_DIR ${LIBDIR}/${PROJECT_NAME})
endif(${WIN32})

# Doxygen
find_package(Doxygen)
if(DOXYGEN_FOUND)
    # Find config
    set(DOXY_FILE "Doxy.config")
    set(DOXY_CONFIG "${CMAKE_CURRENT_SOURCE_DIR}/${DOXY_FILE}.in")

    # Copy Doxy.config.in
    message(STATUS "Doxygen found, generating documentation")
    configure_file("${DOXY_CONFIG}" "${CMAKE_CURRENT_BINARY_DIR}/${DOXY_FILE}")
    add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${DOXY_FILE})
else(DOXYGEN_FOUND)
    message(STATUS "Doxygen not found, won't generate documentation")
endif(DOXYGEN_FOUND)

# Modules
include(Packages.cmake)
include(contrib/contrib.cmake)

# Module file
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/Module.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
    IMMEDIATE @ONLY)
install(
    DIRECTORY
    DESTINATION ${CMOD_DIR}
    DIRECTORY_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE
                          GROUP_READ GROUP_EXECUTE
                          WORLD_READ WORLD_EXECUTE
    COMPONENT libraries)
install(
    FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME}-config.cmake
    DESTINATION ${CMOD_DIR}
    COMPONENT libraries)

# Uninstall
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/UninstallTarget.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/UninstallTarget.cmake"
    IMMEDIATE @ONLY)
add_custom_target(
    uninstall
    "${CMAKE_COMMAND}" -P "${CMAKE_CURRENT_BINARY_DIR}/UninstallTarget.cmake")

# Subdirectories
add_subdirectory(src)
add_subdirectory(examples)
add_subdirectory(swig)
