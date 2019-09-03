# General
set(REVISION                           9)

# Debian
if("${PACKAGE}" STREQUAL "Debian")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "python, libkitclient (>= 0.2.7)" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "python, libkitclient (>= 0.2.7)" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Debian")

# Ubuntu
if("${PACKAGE}" STREQUAL "Ubuntu")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION}ubuntu PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}ubuntu PARENT_SCOPE)

   # Dependencies
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "python, libkitclient (>= 0.2.7)" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "python, libkitclient (>= 0.2.7)" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Ubuntu")

# SuSE
if("${PACKAGE}" STREQUAL "Suse")

   # Settings
   set(CPACK_GENERATOR                    "RPM" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION} PARENT_SCOPE)
   set(CPACK_RPM_PACKAGE_RELEASE          ${REVISION} PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_RPM_PACKAGE_DEPENDS          "python, libkitclient" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Suse")
