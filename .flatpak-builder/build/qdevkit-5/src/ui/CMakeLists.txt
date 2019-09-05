# Add directories
include_directories(
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(qdevkitui_cpp
    aboutdialog.cpp
    closedialog.cpp
    rebuilddialog.cpp
    errordialog.cpp
    connection.cpp
    connectiontabs.cpp
    devicetree.cpp
    devicedialog.cpp
    devicecustomdialog.cpp
    highlighter.cpp
    mainwindow.cpp
    toolbar.cpp
    actioncollection.cpp
    objectsettings.cpp
    fktreewidget.cpp
    processjob.cpp
    fileselector.cpp
    settings.cpp
    configcomponent.cpp
    generalconfig.cpp
    lookconfig.cpp
    deviceconfig.cpp
    pluginconfig.cpp
    fktreeconfig.cpp
    remoteconfig.cpp
    rbuildjob.cpp
    jobwidget.cpp
    overlaywidget.cpp
    )

# Headers
set(qdevkitui_h
    qdevkitui_export.h
    connection.h
    connectiontabs.h
    devicetree.h
    devicedialog.h
    devicecustomdialog.h
    highlighter.h
    mainwindow.h
    toolbar.h
    actioncollection.h
    objectsettings.h
    fktreewidget.h
    errordialog.h
    processjob.h
    fileselector.h
    settings.h
    configcomponent.h
    generalconfig.h
    lookconfig.h
    deviceconfig.h
    pluginconfig.h
    fktreeconfig.h
    remoteconfig.h
    rbuildjob.h
    jobwidget.h
    overlaywidget.h
    )
    
# Export UI symbols
add_definitions(-DQDEVKITUI_DO_EXPORT)

# UI files
set(qdevkitui_ui
    aboutdialog.ui
    closedialog.ui
    rebuilddialog.ui)

# Qt4 meta objects and resources
qt4_automoc(${qdevkitui_cpp})
qt4_wrap_ui(qdevkitui_cpp ${qdevkitui_ui})

# Targets
add_library(${PROJECT_NAME}ui STATIC ${qdevkitui_cpp} ${qdevkitui_h})
target_link_libraries(${PROJECT_NAME}ui ${QT_LIBRARIES} ${LIBKITCLIENT_LIBRARIES})

# FIX: x86_64 static libs complain
if("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "x86_64")
    set_target_properties(${PROJECT_NAME}ui PROPERTIES COMPILE_FLAGS -fPIC)
endif("${CMAKE_SYSTEM_PROCESSOR}" STREQUAL "x86_64")

# Installation
install(
    TARGETS ${PROJECT_NAME}ui
    DESTINATION ${LIBDIR}
    COMPONENT libraries)

# Installation
install(
    FILES ${qdevkitui_h}
    DESTINATION include/${PROJECT_NAME}
    COMPONENT headers)

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

