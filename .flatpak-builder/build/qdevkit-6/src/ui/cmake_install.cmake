# Install script for directory: /run/build/qdevkit/src/ui

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/run/build/qdevkit/src/ui/libqdevkitui.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qdevkit" TYPE FILE FILES
    "/run/build/qdevkit/src/ui/qdevkitui_export.h"
    "/run/build/qdevkit/src/ui/connection.h"
    "/run/build/qdevkit/src/ui/connectiontabs.h"
    "/run/build/qdevkit/src/ui/devicetree.h"
    "/run/build/qdevkit/src/ui/devicedialog.h"
    "/run/build/qdevkit/src/ui/devicecustomdialog.h"
    "/run/build/qdevkit/src/ui/highlighter.h"
    "/run/build/qdevkit/src/ui/mainwindow.h"
    "/run/build/qdevkit/src/ui/toolbar.h"
    "/run/build/qdevkit/src/ui/actioncollection.h"
    "/run/build/qdevkit/src/ui/objectsettings.h"
    "/run/build/qdevkit/src/ui/fktreewidget.h"
    "/run/build/qdevkit/src/ui/errordialog.h"
    "/run/build/qdevkit/src/ui/processjob.h"
    "/run/build/qdevkit/src/ui/fileselector.h"
    "/run/build/qdevkit/src/ui/settings.h"
    "/run/build/qdevkit/src/ui/configcomponent.h"
    "/run/build/qdevkit/src/ui/generalconfig.h"
    "/run/build/qdevkit/src/ui/lookconfig.h"
    "/run/build/qdevkit/src/ui/deviceconfig.h"
    "/run/build/qdevkit/src/ui/pluginconfig.h"
    "/run/build/qdevkit/src/ui/fktreeconfig.h"
    "/run/build/qdevkit/src/ui/remoteconfig.h"
    "/run/build/qdevkit/src/ui/rbuildjob.h"
    "/run/build/qdevkit/src/ui/jobwidget.h"
    "/run/build/qdevkit/src/ui/overlaywidget.h"
    )
endif()

