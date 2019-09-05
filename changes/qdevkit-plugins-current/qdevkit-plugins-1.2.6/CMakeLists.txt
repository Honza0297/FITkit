# Project
project(qdevkit-plugins)
set(MAJOR_VERSION 1)
set(MINOR_VERSION 2)
set(PATCH_VERSION 6)
set(VERSION_STRING ${MAJOR_VERSION}.${MINOR_VERSION}.${PATCH_VERSION})

# Visual Studio specifics
if (MSVC)
    message(STATUS "Using MSVC specifics")
    set(VS_KEYWORD "Qt4VSv1.0")
    add_definitions("/W3 /D_CRT_SECURE_NO_WARNINGS /nologo")
    add_definitions("/wd4571 /wd4127 /wd4365 /wd4820 /wd4548 /wd4661 /wd4512")
    add_definitions("/wd4668 /wd4660 /wd4711 /wd4619 /wd4625 /wd4626 /wd4826")
    add_definitions("/wd4946 /wd4640 /wd4628")
endif(MSVC)

# Defines
cmake_minimum_required(VERSION 2.6)
cmake_policy(SET CMP0003 NEW)
cmake_policy(SET CMP0005 NEW)
add_definitions(-Wall -D__VERSION="${VERSION_STRING}")

# Find QDevKit
find_package(qdevkit REQUIRED)
if(NOT QDEVKIT_LIBRARIES)
    message(FATAL_ERROR "'libqdevkit' library not found")
endif(NOT QDEVKIT_LIBRARIES)
include_directories(${QDEVKIT_INCLUDE_PATH})
set(PLUGIN_INCLUDE ${QDEVKIT_INCLUDE_DIR})

# Find libkitclient
find_package(libkitclient REQUIRED)
if(NOT LIBKITCLIENT_LIBRARIES)
    message(FATAL_ERROR "'libkitclient' shared library not found")
endif(NOT LIBKITCLIENT_LIBRARIES)
include_directories(${LIBKITCLIENT_INCLUDE_PATH})

# Find PythonQt
set(PYTHONQT_LIBRARIES "/app/lib/libPythonQt.so")
set(PYTHONQT_INCLUDE_PATH "/app/include;/app/include/PythonQt")

# Find Python
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_PATH})

# Includes overview
message(STATUS "qdevkit libraries:  ${QDEVKIT_LIBRARIES}")
message(STATUS "qdevkit include dir:  ${QDEVKIT_INCLUDE_PATH}")
message(STATUS "libkitclient libraries: ${LIBKITCLIENT_LIBRARIES}")
message(STATUS "libkitclient include dir: ${LIBKITCLIENT_INCLUDE_PATH}")
message(STATUS "pythonqt libraries: ${PYTHONQT_LIBRARIES}")
message(STATUS "pythonqt include dir: ${PYTHONQT_INCLUDE_PATH}")

# Qt4
set(QT_MIN_VERSION 4.3.0)
find_package(Qt4 REQUIRED)
set(QT_USE_QTXML     1)
set(QT_USE_QTSVG     1)
set(QT_USE_QTNETWORK 1)
include(${QT_USE_FILE})

# Debug build
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif(NOT CMAKE_BUILD_TYPE)
if(${CMAKE_BUILD_TYPE} STREQUAL Debug)
    add_definitions(-DDEBUG)
endif(${CMAKE_BUILD_TYPE} STREQUAL Debug)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

# Windows Plugin support will be broken otherwise
message("-- Build type: ${CMAKE_BUILD_TYPE}")
if(NOT ${CMAKE_BUILD_TYPE} STREQUAL Debug)
    add_definitions(-DQT_NO_DEBUG)
endif(NOT ${CMAKE_BUILD_TYPE} STREQUAL Debug)

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
    set(LIBDIR lib)
    set(PLUGIN_PREFIX  share/qdevkit/plugins)
    add_definitions(-D__UNIX)
endif(${UNIX})
if(${WIN32})
    set(LIBDIR bin)
    set(PLUGIN_PREFIX plugins)
    add_definitions(-D__WIN32)
endif(${WIN32})

# Exports
add_definitions(-DQDKPLUGIN_DO_EXPORT)

# Plugins
set(PLUGIN_LIST "")

#add_subdirectory(amarok2)
add_subdirectory(fkflash)
add_subdirectory(rstbrowser)
#add_subdirectory(pyquotes)
#add_subdirectory(scriptconsole)
add_subdirectory(pythonqtconsole)
add_subdirectory(completer)
add_subdirectory(filetransfer)
add_subdirectory(releaseinfo)
if(${WIN32})
#  add_subdirectory(virtualkit)
endif(${WIN32})

# Packages
message(STATUS "Enabled plugins: ${PLUGIN_LIST}")
include(Packages.cmake)
