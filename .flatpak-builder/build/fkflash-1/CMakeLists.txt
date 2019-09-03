# Project
project(fkflash)
set(MAJOR_VERSION 0)
set(MINOR_VERSION 1)
set(PATCH_VERSION 7)
set(VERSION_STRING ${MAJOR_VERSION}.${MINOR_VERSION}.${PATCH_VERSION})

# Print paths
message(STATUS "Installation prefix: ${CMAKE_INSTALL_PREFIX}")

# packaging fix
if("${CPACK_ROOTFIX}" STREQUAL "yes")
  set(CPACK_PACKAGING_INSTALL_PREFIX "/usr") 
endif("${CPACK_ROOTFIX}" STREQUAL "yes")

# CMake
if("${CMAKE_BUILD_TYPE}" STREQUAL "")
   set(CMAKE_BUILD_TYPE     Release)
endif("${CMAKE_BUILD_TYPE}" STREQUAL "")
set(CMAKE_COLOR_MAKEFILE ON)
cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

include_directories(${CMAKE_CURRENT_BINARY_DIR}
                    ${CMAKE_CURRENT_SOURCE_DIR})

# Python
find_package(PythonLibs)
if (NOT PYTHONLIBS_FOUND)
   message(FATAL_ERROR "Python not found.")
endif (NOT PYTHONLIBS_FOUND)

# Paths
execute_process(COMMAND python -c "import sys;from distutils.sysconfig import get_python_lib;sys.stdout.write(get_python_lib())"
                        OUTPUT_VARIABLE PYTHON_SITEDIR
                        )

message(STATUS "Python site dir: ${PYTHON_SITEDIR}")
                
if("${CPACK_ROOTFIX}" STREQUAL "yes")
   file(RELATIVE_PATH PYTHON_SITEDIR ${CPACK_PACKAGING_INSTALL_PREFIX} ${PYTHON_SITEDIR})
else("${CPACK_ROOTFIX}" STREQUAL "yes")
   file(RELATIVE_PATH PYTHON_SITEDIR ${CMAKE_INSTALL_PREFIX} ${PYTHON_SITEDIR})
endif("${CPACK_ROOTFIX}" STREQUAL "yes")
                    
message("-- Installing python files to ${PYTHON_SITEDIR}")


if(${UNIX})
   install(FILES fkflash.py
           DESTINATION bin
           COMPONENT exec
           RENAME fkflash
           PERMISSIONS  OWNER_EXECUTE OWNER_READ GROUP_EXECUTE GROUP_READ
                        WORLD_EXECUTE WORLD_READ
           )
endif(${UNIX})

if(${WIN32})
   install(FILES fkflash.py
           DESTINATION bin 
           COMPONENT exec
           PERMISSIONS  OWNER_EXECUTE OWNER_READ GROUP_EXECUTE GROUP_READ
                        WORLD_EXECUTE WORLD_READ
           )
endif(${WIN32})

install (DIRECTORY fkutils mspgcc
         DESTINATION ${PYTHON_SITEDIR}
         COMPONENT contrib
         PATTERN ".svn" EXCLUDE
         PATTERN "*.pyc" EXCLUDE
         )

# Set components
set(CPACK_COMPONENTS_ALL exec contrib)
set(CPACK_COMPONENT_EXEC_DISPLAY_NAME "FKFlash")
set(CPACK_COMPONENT_CONTRIB_DISPLAY_NAME "Libraries")
set(CPACK_COMPONENT_EXEC_DESCRIPTION
"FKFlash Python script.")
set(CPACK_COMPONENT_CONTRIB_DESCRIPTION
"Contribution libraries. FKUtils, MSP-GCC")

# Package information
set(CPACK_PACKAGE_VERSION              ${VERSION_STRING})
set(CPACK_PACKAGE_CONTACT              "Marek Vavrusa <marek@vavrusa.com>, Zdenek Vasicek <vasicek@fit.vutbr.cz>")
set(CPACK_PACKAGE_DESCRIPTION          "FKFlash, FITKit flash toolkit.")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY  ${CPACK_PACKAGE_DESCRIPTION}
                                       )
# Package settings
if(${UNIX})
  set(CPACK_GENERATOR                    "DEB;RPM")
  set(CPACK_CMAKE_GENERATOR              "Unix Makefiles")
  set(CPACK_PACKAGE_NAME                 ${PROJECT_NAME})
  set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION})
endif(${UNIX})

if(${WIN32})
  set(CPACK_GENERATOR                    "NSIS")
  set(CPACK_CMAKE_GENERATOR              "MinGW Makefiles")
  set(CPACK_PACKAGE_NAME                 "${PROJECT_NAME}")
  set(CPACK_PACKAGE_VENDOR               "VUT FIT")
  set(CPACK_PACKAGE_INSTALL_DIRECTORY    "fkflash")
  set(CPACK_PACKAGE_FILE_NAME            "${PROJECT_NAME}-${VERSION_STRING}-win32")
  set(CPACK_NSIS_DISPLAY_NAME            "FKFlash")
  set(CPACK_NSIS_MODIFY_PATH             "ON")
endif(${WIN32})

set(CPACK_RESOURCE_FILE_LICENSE        ${CMAKE_SOURCE_DIR}/COPYING)

# Subdirectories
#set(CPACK_SET_DESTDIR "ON")
add_subdirectory(packages)

include(CPack)

