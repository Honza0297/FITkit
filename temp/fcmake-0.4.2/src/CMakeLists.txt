# Add directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(fcmake_cpp
    app.cpp
    tree.cpp
    category.cpp
    filelist.cpp
    key.cpp
    keychain.cpp
    remote.cpp
    )

# Headers
set(fcmake_h
    app.h
    tree.h
    category.h
    filelist.h
    key.h
    keychain.h
    remote.h
    fcmake_export.h
    )

# Nicer includes
# TODO: name collides with output binary on some systems
#set(fcmake_h
#    ${fcmake_h}
#    fcmake)

# Targets
add_definitions(-DFCMAKE_DO_EXPORT)
add_library(fcmakecore SHARED ${fcmake_cpp})

# System-specific
if(${WIN32})

# Visual Studio
if(MSVC)

    # Targets
    set(fcmake_rc ${CMAKE_CURRENT_SOURCE_DIR}/fcmake.rc)
    add_executable(fcmake-bin main.cpp ${fcmake_rc})
    set_target_properties(fcmake-bin PROPERTIES OUTPUT_NAME "fcmake")
    add_executable(fcmake-scan main-scan.cpp ${fcmake_rc})

else(MSVC)

   # Apps icon
    set(fcmake_rc_obj ${CMAKE_CURRENT_BINARY_DIR}/fcmake_rc.o)
    add_custom_command(
        OUTPUT ${fcmake_rc_obj}
        COMMAND windres.exe -I${CMAKE_CURRENT_SOURCE_DIR}
                            -i${CMAKE_CURRENT_SOURCE_DIR}/fcmake.rc
                            -o${fcmake_rc_obj})
    # Targets
    add_executable(fcmake-bin main.cpp ${fcmake_rc_obj})
    set_target_properties(fcmake-bin PROPERTIES OUTPUT_NAME "fcmake")
    add_executable(fcmake-scan main-scan.cpp ${fcmake_rc_obj})

endif(MSVC)

endif(${WIN32})

# Unix
if(${UNIX})
    add_executable(fcmake-bin main.cpp)
    set_target_properties(fcmake-bin PROPERTIES OUTPUT_NAME "fcmake")
    add_executable(fcmake-scan main-scan.cpp)
endif(${UNIX})

# Linking
target_link_libraries(fcmakecore ${QT_LIBRARIES} ${LIBSSH})
target_link_libraries(fcmake-scan ${QT_LIBRARIES} fcmakecore)
target_link_libraries(fcmake-bin ${QT_LIBRARIES} fcmakecore)

# Installation
install(
    TARGETS fcmake-bin
    DESTINATION bin
    COMPONENT application)

install(
    TARGETS fcmakecore
    DESTINATION ${LIBDIR}
    COMPONENT libraries)

install(
    FILES ${fcmake_h}
    DESTINATION include/${PROJECT_NAME}
    COMPONENT headers)

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

