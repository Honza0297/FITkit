 # Project
project(FileTransferPlugin)
set(project filetransfer)
set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(project_src  filetransfer.cpp)
set(project_moc  filetransfer.h)

# Qt4
qt4_add_resources(project_src filetransfer.qrc)
qt4_automoc(${project_src})

# Create library
add_library(${project} SHARED ${project_src})
target_link_libraries(${project} ${QDEVKIT_LIBRARIES} ${LIBKITCLIENT_LIBRARIES} ${QT_LIBRARIES} ${PYTHONQT_LIBRARIES} ${PYTHON_LIBRARIES})

# Install
install(TARGETS ${project}
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT filetransfer
        )

install(FILES plugin.xml
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT filetransfer
        )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} filetransfer PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DISPLAY_NAME "FileTransfer" PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DESCRIPTION  "")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

