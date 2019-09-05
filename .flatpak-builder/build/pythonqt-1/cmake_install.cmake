# Install script for directory: /run/build/pythonqt

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/run/build/pythonqt/libPythonQt.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libPythonQt.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/PythonQt" TYPE FILE FILES
    "/run/build/pythonqt/src/PythonQtBoolResult.h"
    "/run/build/pythonqt/src/PythonQtClassInfo.h"
    "/run/build/pythonqt/src/PythonQtClassWrapper.h"
    "/run/build/pythonqt/src/PythonQtConversion.h"
    "/run/build/pythonqt/src/PythonQtCppWrapperFactory.h"
    "/run/build/pythonqt/src/PythonQtDoc.h"
    "/run/build/pythonqt/src/PythonQt.h"
    "/run/build/pythonqt/src/PythonQtImporter.h"
    "/run/build/pythonqt/src/PythonQtImportFileInterface.h"
    "/run/build/pythonqt/src/PythonQtInstanceWrapper.h"
    "/run/build/pythonqt/src/PythonQtMethodInfo.h"
    "/run/build/pythonqt/src/PythonQtMisc.h"
    "/run/build/pythonqt/src/PythonQtObjectPtr.h"
    "/run/build/pythonqt/src/PythonQtQFileImporter.h"
    "/run/build/pythonqt/src/PythonQtSignalReceiver.h"
    "/run/build/pythonqt/src/PythonQtSlot.h"
    "/run/build/pythonqt/src/PythonQtSignal.h"
    "/run/build/pythonqt/src/PythonQtStdDecorators.h"
    "/run/build/pythonqt/src/PythonQtStdIn.h"
    "/run/build/pythonqt/src/PythonQtStdOut.h"
    "/run/build/pythonqt/src/PythonQtSystem.h"
    "/run/build/pythonqt/src/PythonQtUtils.h"
    "/run/build/pythonqt/src/PythonQtVariants.h"
    "/run/build/pythonqt/src/PythonQtPythonInclude.h"
    "/run/build/pythonqt/generated_cpp_48/PythonQt_QtBindings.h"
    "/run/build/pythonqt/extensions/PythonQt_QtAll/PythonQt_QtAll.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/run/build/pythonqt/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
