# libssh
find_library(LIBSSH ssh)
if(NOT EXISTS ${LIBSSH})
    message(FATAL_ERROR "libssh not found, please install libssh-dev")
else(NOT EXISTS ${LIBSSH})
    message(STATUS "libssh found: ${LIBSSH}")
endif(NOT EXISTS ${LIBSSH}) 

# Add directories
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/ui
    )

# Sources
set(qdevkit_cpp
    qdevkit.cpp
    scriptengine.cpp
    script.cpp
    qdevicemgr.cpp
    trayicon.cpp
    pluginmgr.cpp
    pluginloader.cpp
    pluginbase.cpp
    pluginscripted.cpp
    pluginbinary.cpp
    component.cpp
    components.cpp
    jobscheduler.cpp
    job.cpp
    tunnel.cpp
    buildserver.cpp
    )

# Headers
set(qdevkit_h
    qdevkit.h
    qdevkit_export.h
    plugin_export.h
    scriptengine.h
    script.h
    qdevicemgr.h
    trayicon.h
    pluginmgr.h
    plugin.h
    plugininterfaces.h
    pluginloader.h
    pluginbase.h
    pluginscripted.h
    pluginbinary.h
    component.h
    components.h
    jobscheduler.h
    job.h
    tunnel.h
    buildserver.h
    )
    
# Exports
add_definitions(-DQDEVKIT_DO_EXPORT)

# Qt4 meta objects and resources
qt4_automoc(${qdevkit_cpp})
qt4_add_resources(qdevkit_cpp ${ICONS_DIR}/icons.qrc)
qt4_add_translation(qdevkit_i18n i18n/${PROJECT_NAME}_cs.ts)

# Targets
add_library(${PROJECT_NAME}core SHARED ${qdevkit_cpp} ${qdevkit_i18n})

# Subdirectories
add_subdirectory(ui)

# OS specific
if(${UNIX})
    include_directories(/opt/local/include)

    # Install localization
    install(
        DIRECTORY
        DESTINATION share/${PROJECT_NAME}
        DIRECTORY_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE
                              GROUP_READ GROUP_EXECUTE
                              WORLD_READ WORLD_EXECUTE
        COMPONENT locales)
    install(
        DIRECTORY
        DESTINATION share/${PROJECT_NAME}/locale
        DIRECTORY_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE
                              GROUP_READ GROUP_EXECUTE
                              WORLD_READ WORLD_EXECUTE
        COMPONENT locales)
    install(
        FILES ${qdevkit_i18n}
        DESTINATION share/${PROJECT_NAME}/locale
        COMPONENT locales)

    # XDG application
    install(FILES ${PROJECT_NAME}.desktop DESTINATION share/applications)
endif(${UNIX})

# System-specific
if(${WIN32})

# Install localization
install(FILES ${qdevkit_i18n} DESTINATION locale COMPONENT locales)

endif(${WIN32})

# Linking
if(${WIN32})
    target_link_libraries(
        ${PROJECT_NAME}core
        ${PROJECT_NAME}ui
        ${QT_LIBRARIES}
        ${LIBKITCLIENT_LIBRARIES}
        ${LIBKITCLIENT_FTDI_LIBRARIES}
        ${PYTHON_LIBRARIES}
        ${PYTHONQT_LIBRARIES}
        ${FCMAKE_LIBRARIES}
        ${LIBSSH}
        ws2_32)
        
        if(${CMAKE_BUILD_TYPE} STREQUAL Debug)
            target_link_libraries(${PROJECT_NAME}core ${PYTHON_DEBUG_LIBRARIES})
        endif(${CMAKE_BUILD_TYPE} STREQUAL Debug)
        
endif(${WIN32})

if(${UNIX})
    target_link_libraries(
        ${PROJECT_NAME}core
        ${PROJECT_NAME}ui
        ${QT_LIBRARIES}
        ${LIBKITCLIENT_LIBRARIES}
        ${PYTHON_LIBRARIES}
        ${PYTHONQT_LIBRARIES}
        ${FCMAKE_LIBRARIES}
        ${LIBSSH})

endif(${UNIX})

# Installation
install(
    TARGETS ${PROJECT_NAME}core
    DESTINATION ${LIBDIR}
    COMPONENT libraries)

install(
    DIRECTORY
    DESTINATION include/${PROJECT_NAME}
    DIRECTORY_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE
                          GROUP_READ GROUP_EXECUTE
                          WORLD_READ WORLD_EXECUTE
    COMPONENT headers)

install(
    FILES ${qdevkit_h}
    DESTINATION include/${PROJECT_NAME}
    COMPONENT headers)

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

