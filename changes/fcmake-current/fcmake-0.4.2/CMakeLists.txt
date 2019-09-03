# Project
project(fcmake)
set(MAJOR_VERSION 0)
set(MINOR_VERSION 4)
set(PATCH_VERSION 2)
set(VERSION_STRING ${MAJOR_VERSION}.${MINOR_VERSION}.${PATCH_VERSION})

# Visual Studio specifics
if (MSVC)
    message(STATUS "Using MSVC specifics")
    set(VS_KEYWORD "Qt4VSv1.0")
    add_definitions("/W3 /D_CRT_SECURE_NO_WARNINGS /nologo")
    add_definitions("/wd4571 /wd4127 /wd4365 /wd4820 /wd4548 /wd4661 /wd4512")
    add_definitions("/wd4668 /wd4660 /wd4711 /wd4619")
endif(MSVC)

# Defines
cmake_minimum_required(VERSION 2.6)
cmake_policy(SET CMP0003 NEW)
cmake_policy(SET CMP0005 NEW)
add_definitions(-Wall -D__VERSION="${VERSION_STRING}")

# libssh
find_library(LIBSSH ssh)
if(NOT EXISTS ${LIBSSH})
    message(FATAL_ERROR "libssh not found, please install libssh-dev")
else(NOT EXISTS ${LIBSSH})
    message(STATUS "libssh found: ${LIBSSH}")
endif(NOT EXISTS ${LIBSSH})

  get_filename_component(_LIBSSH_DIR ${LIBSSH} PATH)

  find_path(LIBSSH_INCLUDE_DIR
    NAMES
      libssh/libssh.h
    PATHS
      ${_LIBSSH_DIR}/include
      ${_LIBSSH_INCLUDEDIR}/include
      /usr/include
      /usr/local/include
      /opt/local/include
  )
  mark_as_advanced(LIBSSH_INCLUDE_DIR)  
  message(STATUS "libssh found: ${LIBSSH_INCLUDE_DIR}")

  set(LIBSSH_INCLUDE_DIRS
    ${LIBSSH_INCLUDE_DIR}
  )
include_directories(${LIBSSH_INCLUDE_DIR})

# Qt4
find_package(Qt4 4.2)
set(QT_DONT_USE_QTGUI 1)
set(QT_USE_QTXML 1)
#set(QT_USE_QTNETWORK 1)
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
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

# Select OS specific installation variables
if(${UNIX})
    add_definitions(-D__UNIX)
    set(LIBDIR lib)
    set(CMOD_DIR ${LIBDIR}/${PROJECT_NAME})
endif(${UNIX})
if(${WIN32})
    add_definitions(-D__WIN32)
    set(LIBDIR bin)
    set(CMOD_DIR ${LIBDIR}/${PROJECT_NAME})
endif(${WIN32})

# Module file
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/Module.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
    IMMEDIATE @ONLY)
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

# Modules
include(Packages.cmake)

# Subdirectories
add_subdirectory(src)
