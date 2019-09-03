# Package information
set(CPACK_PACKAGE_NAME                 ${PROJECT_NAME})
set(CPACK_PACKAGE_VERSION              ${VERSION_STRING})
set(CPACK_PACKAGE_CONTACT              "Zdenek Vasicek, vasicek@fit.vutbr.cz")
set(CPACK_PACKAGE_DESCRIPTION          "Makefile generator for FITKit applications.")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY  ${CPACK_PACKAGE_DESCRIPTION}
                                       )



# Install targets
install( FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME}-config.cmake
         DESTINATION ${LIBDIR}/${PROJECT_NAME}
         COMPONENT libraries
       )

# Components
set(CPACK_COMPONENTS_ALL application libraries headers)
set(CPACK_COMPONENT_APPLICATION_DISPLAY_NAME "Executable")
set(CPACK_COMPONENT_LIBRARIES_DISPLAY_NAME "Shared libraries")
set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "C++ Headers")

# Package settings
if(${UNIX})
   set(CPACK_PACKAGE_NAME                 ${PROJECT_NAME})
   set(CPACK_GENERATOR                    "DEB;RPM")
   set(CPACK_CMAKE_GENERATOR              "Unix Makefiles")
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION})
endif(${UNIX})

if(${WIN32})
   set(CPACK_GENERATOR                    "NSIS")
   set(CPACK_CMAKE_GENERATOR              "MinGW Makefiles")
   set(CPACK_PACKAGE_NAME                 ${PROJECT_NAME})
   set(CPACK_PACKAGE_VENDOR               "VUT FIT")
   set(CPACK_PACKAGE_INSTALL_DIRECTORY    "FCMake")
   set(CPACK_PACKAGE_FILE_NAME            "${PROJECT_NAME}-${VERSION_STRING}-win32")
   set(CPACK_NSIS_DISPLAY_NAME            "FCMake")
   set(CPACK_NSIS_HELP_LINK               "http://www.fit.vutbr.cz/fitkit")
   set(CPACK_NSIS_URL_INFO_ABOUT          "http://www.fit.vutbr.cz/fitkit")
   set(CPACK_NSIS_MODIFY_PATH             "ON")
endif(${WIN32})

set(CPACK_RESOURCE_FILE_LICENSE        ${CMAKE_SOURCE_DIR}/COPYING)
set(CPACK_PACKAGE_EXECUTABLES          "${PROJECT_NAME};FCMake")

# General
set(REVISION                           0)

# Debian
if("${PACKAGE}" STREQUAL "Debian")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "libqt4-core, libqt4-xml" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "cmake, libqt4-dev" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Debian")

# Ubuntu
if("${PACKAGE}" STREQUAL "Ubuntu")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION}ubuntu PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}ubuntu PARENT_SCOPE)

   # Dependencies
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "libqt4-core" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "cmake, libqt4-dev" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Ubuntu")

# SuSE
if("${PACKAGE}" STREQUAL "Suse")

   # Settings
   set(CPACK_GENERATOR                    "RPM" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION} PARENT_SCOPE)
   set(CPACK_RPM_PACKAGE_RELEASE          ${REVISION} PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_RPM_PACKAGE_DEPENDS          "libqt4" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Suse")

# Include CPack
include(CPack)
