# Set components
set(CPACK_COMPONENTS_ALL sharedlibs staticlibs headers)
set(CPACK_COMPONENT_SHAREDLIBS_DISPLAY_NAME "Shared libraries")
set(CPACK_COMPONENT_STATICLIBS_DISPLAY_NAME "Static libraries")
set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "C++ Headers")

set(CPACK_COMPONENT_SHAREDLIBS_DESCRIPTION
"Shared library for general use.")
set(CPACK_COMPONENT_STATICLIBS_DESCRIPTION
"Static library, good if you want to embed libkitclient in your application.")
set(CPACK_COMPONENT_HEADERS_DESCRIPTION
"C/C++ header files.")

set(CPACK_COMPONENT_SHAREDLIBS_GROUP "Development")
set(CPACK_COMPONENT_STATICLIBS_GROUP "Development")
set(CPACK_COMPONENT_HEADERS_GROUP "Development")

# Package information
set(CPACK_PACKAGE_VERSION              ${VERSION_STRING})
set(CPACK_PACKAGE_CONTACT              "Marek Vavrusa <marek@vavrusa.com>, Zdenek Vasicek <vasicek@fit.vutbr.cz>")
set(CPACK_PACKAGE_DESCRIPTION          "FITKit multiplatform library.")
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
  set(CPACK_PACKAGE_INSTALL_DIRECTORY    "libkitclient")
  set(CPACK_PACKAGE_FILE_NAME            "${PROJECT_NAME}-${VERSION_STRING}-win32")
  set(CPACK_NSIS_DISPLAY_NAME            "FITKit libraries (libkitclient)")
  set(CPACK_NSIS_MODIFY_PATH             "ON")
endif(${WIN32})
set(CPACK_RESOURCE_FILE_LICENSE        ${CMAKE_SOURCE_DIR}/COPYING)

# General
set(REVISION                           0)

# Debian
if("${PACKAGE}" STREQUAL "Debian")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "libusb" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "cmake, libusb-dev" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_RECOMMENDS          "swig" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Debian")

# Ubuntu
if("${PACKAGE}" STREQUAL "Ubuntu")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION}ubuntu PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}ubuntu PARENT_SCOPE)

   # Dependencies
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "libusb" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "cmake, libusb-dev" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_RECOMMENDS          "swig" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Ubuntu")

# SUSE
if("${PACKAGE}" STREQUAL "Suse")

   # Settings
   set(CPACK_GENERATOR                    "RPM" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION} PARENT_SCOPE)
   set(CPACK_RPM_PACKAGE_RELEASE          ${REVISION} PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_RPM_PACKAGE_DEPENDS          "libusb" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Suse")

# Include CPack
include(CPack)
