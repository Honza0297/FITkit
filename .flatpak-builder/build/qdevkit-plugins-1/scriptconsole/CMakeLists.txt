 # Project
project(ScriptConsolePlugin)
set(project scriptconsole)
set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(project_src  scriptconsole.cpp)
set(project_moc  scriptconsole.h)

# Qt4
qt4_automoc(${project_src})

# Create library
add_library(${project} SHARED ${project_src})
target_link_libraries(${project} ${QDEVKIT_LIBRARIES} ${LIBKITCLIENT_LIBRARIES} ${QT_LIBRARIES})

# Install
install(TARGETS ${project}
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT console
        )

install(FILES plugin.xml console.png
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT console
        )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} scriptconsole PARENT_SCOPE)
set(CPACK_COMPONENT_SCRIPTCONSOLE_DISPLAY_NAME "Scripting Console" PARENT_SCOPE)
set(CPACK_COMPONENT_SCRIPTCONSOLE_DESCRIPTION
"Interactive console for ScriptEngine.")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

