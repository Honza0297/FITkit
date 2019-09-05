# Project
project(CompleterPlugin)
set(project completer)
set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(project_src  completer.cpp)
set(project_moc  completer.h)

# Qt4
qt4_add_resources(project_src completer.qrc)
qt4_automoc(${project_src})

# Create library
add_library(${project} SHARED ${project_src})
target_link_libraries(${project} ${QDEVKIT_LIBRARIES} ${LIBKITCLIENT_LIBRARIES} ${QT_LIBRARIES})

# Install
install(TARGETS ${project}
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT completer
        )

install(FILES plugin.xml
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT completer
        )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} completer PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DISPLAY_NAME "Completer" PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DESCRIPTION
"Text completion based on FITKit menu.")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

