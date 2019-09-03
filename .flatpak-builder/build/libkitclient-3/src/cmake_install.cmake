# Install script for directory: /run/build/libkitclient/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/app")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsharedlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkitclient.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkitclient.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkitclient.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES "/run/build/libkitclient/src/libkitclient.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkitclient.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkitclient.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkitclient.so"
         OLD_RPATH "/app/lib64:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libkitclient.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsharedlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xstaticlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE STATIC_LIBRARY FILES "/run/build/libkitclient/src/libkitclient_static.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libkitclient" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libkitclient" TYPE FILE FILES
    "/run/build/libkitclient/src/device.h"
    "/run/build/libkitclient/src/devicemgr.h"
    "/run/build/libkitclient/src/deviceutils.h"
    "/run/build/libkitclient/src/libkitclient_export.h"
    "/run/build/libkitclient/src/libkitclient"
    "/run/build/libkitclient/src/qtapi/qtapi_device.h"
    "/run/build/libkitclient/src/qtapi/qtapi_iochannel.h"
    "/run/build/libkitclient/src/qtapi/qtapi"
    "/run/build/libkitclient/src/ftdi/ftdibackend.h"
    "/run/build/libkitclient/src/ftdi/ftdidevice.h"
    "/run/build/libkitclient/src/ftdi/ftdi"
    "/run/build/libkitclient/src/ip/ipbackend.h"
    "/run/build/libkitclient/src/ip/ipdevice.h"
    "/run/build/libkitclient/src/ip/ipservice.h"
    "/run/build/libkitclient/src/ip/ipdiscovery.h"
    "/run/build/libkitclient/src/ip/ip"
    "/run/build/libkitclient/contrib/liburpc_copy/liburpc_export.h"
    "/run/build/libkitclient/contrib/liburpc_copy/pstdint.h"
    "/run/build/libkitclient/contrib/liburpc_copy/common.h"
    "/run/build/libkitclient/contrib/liburpc_copy/protobase.h"
    "/run/build/libkitclient/contrib/liburpc_copy/protocol.h"
    "/run/build/libkitclient/contrib/liburpc_copy/protocol.hpp"
    "/run/build/libkitclient/contrib/liburpc_copy/socket.hpp"
    "/run/build/libkitclient/contrib/liburpc_copy/clientsocket.hpp"
    "/run/build/libkitclient/contrib/liburpc_copy/serversocket.hpp"
    "/run/build/libkitclient/contrib/liburpc_copy/cmdflags.hpp"
    )
endif()

