# Project
project(Amarok2)
set(project amarok2)

set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${QT_INCLUDES}
                    ${CMAKE_BINARY_DIR}
                    ${CMAKE_CURRENT_BINARY_DIR})


set(plugin_py   amarok2.py
                amarokdbus.py
                unicode2ascii.py
                )

# Install
install( DIRECTORY
         DESTINATION ${PLUGIN_PREFIX}/${project}
         DIRECTORY_PERMISSIONS OWNER_READ OWNER_EXECUTE OWNER_WRITE
                               GROUP_READ GROUP_EXECUTE 
                               WORLD_READ WORLD_EXECUTE
         COMPONENT amarok2
         )

install( FILES ${plugin_py} plugin.xml amarok.png
         DESTINATION ${PLUGIN_PREFIX}/${project}
         PERMISSIONS OWNER_READ OWNER_EXECUTE OWNER_WRITE
                     GROUP_READ GROUP_EXECUTE
                     WORLD_READ WORLD_EXECUTE
         COMPONENT amarok2
         )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} amarok2 PARENT_SCOPE)
set(CPACK_COMPONENT_AMAROK2_DISPLAY_NAME "Amarok2 - Now playing" PARENT_SCOPE)
set(CPACK_COMPONENT_AMAROK2_DESCRIPTION
"Show 'Now playing' status from Amarok2 using D-Bus and FITKit application 'display'.")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

