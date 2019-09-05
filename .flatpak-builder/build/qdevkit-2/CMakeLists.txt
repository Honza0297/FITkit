# Project
project(qdevkit)
set(MAJOR_VERSION 1)
set(MINOR_VERSION 2)
set(PATCH_VERSION 7)
set(VERSION_STRING ${MAJOR_VERSION}.${MINOR_VERSION}.${PATCH_VERSION})

# Visual Studio specifics
if (MSVC)
    message(STATUS "Using MSVC specifics")
    set(VS_KEYWORD "Qt4VSv1.0")
    add_definitions("/W3 /D_CRT_SECURE_NO_WARNINGS /nologo")
    add_definitions("/wd4571 /wd4127 /wd4365 /wd4820 /wd4548 /wd4661 /wd4512")
    add_definitions("/wd4668 /wd4660 /wd4711 /wd4619 /wd4710 /wd4514 /wd4625")
    add_definitions("/wd4626 /wd4505 /wd4946 /wd4826")
endif(MSVC)

# Defines
cmake_minimum_required(VERSION 2.6)
cmake_policy(SET CMP0003 NEW)
cmake_policy(SET CMP0005 NEW)
add_definitions(-Wall -D__VERSION="${VERSION_STRING}")

# Find libkitclient
find_package(libkitclient REQUIRED)
include_directories(${LIBKITCLIENT_INCLUDE_PATH})

# Find fcmake
find_package(fcmake REQUIRED)
include_directories(${FCMAKE_INCLUDE_PATH})

# Find Python
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_PATH})

# Find PythonQt
set(PYTHONQT_LIBRARIES "/app/lib/libPythonQt.so")
set(PYTHONQT_INCLUDE_PATH "/app/include;/app/include/PythonQt")

# Find libftdi
set(FTDI_LIBRARIES "/app/lib64/libftdi.so;/app/lib64/libftdi.so.1")
set(FTDI_INCLUDE_PATH "/app/include")

# Includes overview
message(STATUS "libftdi libraries: ${FTDI_LIBRARIES}")
message(STATUS "libftdi include dir: ${FTDI_INCLUDE_PATH}")
message(STATUS "libkitclient libraries: ${LIBKITCLIENT_LIBRARIES}")
message(STATUS "libkitclient include dir: ${LIBKITCLIENT_INCLUDE_PATH}")
message(STATUS "pythonqt libraries: ${PYTHONQT_LIBRARIES}")
message(STATUS "pythonqt include dir: ${PYTHONQT_INCLUDE_PATH}")
message(STATUS "fcmake libraries: ${FCMAKE_LIBRARIES}")
message(STATUS "fcmake include dir: ${FCMAKE_INCLUDE_PATH}")

# Includes
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_BINARY_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui
    ${CMAKE_CURRENT_BINARY_DIR}/src/ui)

# Debug build
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif(NOT CMAKE_BUILD_TYPE)
if(${CMAKE_BUILD_TYPE} STREQUAL Debug)
    add_definitions(-DDEBUG)
endif(${CMAKE_BUILD_TYPE} STREQUAL Debug)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

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
    add_definitions(-D__UNIX)
    set(LIBDIR lib)
    set(CMOD_DIR ${LIBDIR}/${PROJECT_NAME})
endif(${UNIX})
if(${WIN32})
    add_definitions(-D__WIN32)
    set(LIBDIR bin)
    set(CMOD_DIR ${LIBDIR}/${PROJECT_NAME})
endif(${WIN32})

# Qt4
find_package(Qt4 4.3 REQUIRED)
set(QT_USE_QTXML     1)
set(QT_USE_QTSVG     1)
set(QT_USE_QTNETWORK 1)
set(QT_USE_QTGUI     1)
set(QT_USE_QTMAIN    1)
include(${QT_USE_FILE})

# Windows Plugin support will be broken otherwise
message("-- Build type: ${CMAKE_BUILD_TYPE}")
if(NOT ${CMAKE_BUILD_TYPE} STREQUAL Debug)
    add_definitions(-DQT_NO_DEBUG)
endif(NOT ${CMAKE_BUILD_TYPE} STREQUAL Debug)

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
include(icons/icons.cmake)

# Subdirectories
add_subdirectory(src)

# OS specific
if(${UNIX})
    add_executable(${PROJECT_NAME} main.cpp)
endif(${UNIX})

# System-specific
if(${WIN32})

# Visual Studio
if(MSVC)

    # Targets
    set(qdevkit_rc ${CMAKE_CURRENT_SOURCE_DIR}/src/qdevkit.rc)
    add_executable(${PROJECT_NAME} main.cpp ${qdevkit_rc})
    
    # Remove console window
    if(NOT ${CMAKE_BUILD_TYPE} STREQUAL Debug AND NOT ${CMAKE_BUILD_TYPE} STREQUAL RelWithDebInfo)
        set_target_properties(
            ${PROJECT_NAME}
            PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS")
    endif(NOT ${CMAKE_BUILD_TYPE} STREQUAL Debug AND NOT ${CMAKE_BUILD_TYPE} STREQUAL RelWithDebInfo)
    target_link_libraries(${PROJECT_NAME} ${QT_QTMAIN_LIBRARY})
    
else(MSVC)

   # Apps icon
    set(qdevkit_rc_obj ${CMAKE_CURRENT_BINARY_DIR}/qdevkit.o)
    add_custom_command(
        OUTPUT ${qdevkit_rc_obj}
        COMMAND windres.exe -I${CMAKE_CURRENT_SOURCE_DIR}
                            -i${CMAKE_CURRENT_SOURCE_DIR}/src/qdevkit.rc
                            -o${qdevkit_rc_obj})
    # Targets
    add_executable(${PROJECT_NAME} main.cpp ${qdevkit_rc_obj})
    
    # Remove console window
    if(NOT ${CMAKE_BUILD_TYPE} STREQUAL Debug AND NOT ${CMAKE_BUILD_TYPE} STREQUAL RelWithDebInfo)
        set_target_properties(
            ${PROJECT_NAME}
            PROPERTIES LINK_FLAGS "-Wl,-subsystem,windows")
    endif(NOT ${CMAKE_BUILD_TYPE} STREQUAL Debug AND NOT ${CMAKE_BUILD_TYPE} STREQUAL RelWithDebInfo)

endif(MSVC)

endif(${WIN32})

#
# That should solve linkage error on Mac when the project is used in a superbuild setup
# See http://blog.onesadcookie.com/2008/01/installname-magic.html
#
set_target_properties(PythonQt  PROPERTIES
  INSTALL_NAME_DIR "${CMAKE_INSTALL_PREFIX}/lib"
  )
  
# Linking
target_link_libraries(
    ${PROJECT_NAME}
    ${PROJECT_NAME}core
    ${PROJECT_NAME}ui 
    ${QT_LIBRARIES}
    ${FTDI_LIBRARIES}
    ${PYTHONQT_LIBRARIES}
    )
    
# Installation
install(
    TARGETS ${PROJECT_NAME}
    DESTINATION bin
    COMPONENT application)








