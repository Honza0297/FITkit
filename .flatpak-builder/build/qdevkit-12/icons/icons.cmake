# Export directory
set(ICONS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/icons)

# Install on UNIX
if(${UNIX})
    install(FILES icons/scalable/fitkit.svg DESTINATION share/icons/hicolor/scalable/apps)
    install(FILES icons/128x128/fitkit.png DESTINATION share/icons/hicolor/128x128/apps)
    install(FILES icons/64x64/fitkit.png DESTINATION share/icons/hicolor/64x64/apps)
    install(FILES icons/48x48/fitkit.png DESTINATION share/icons/hicolor/48x48/apps)
    install(FILES icons/16x16/fitkit.png DESTINATION share/icons/hicolor/16x16/apps)
    install(FILES icons/22x22/fitkit.png DESTINATION share/icons/hicolor/22x22/apps)
    install(FILES icons/24x24/fitkit.png DESTINATION share/icons/hicolor/24x24/apps)
    install(FILES icons/32x32/fitkit.png DESTINATION share/icons/hicolor/32x32/apps)
    install(FILES icons/36x36/fitkit.png DESTINATION share/icons/hicolor/36x36/apps)
    install(FILES icons/72x72/fitkit.png DESTINATION share/icons/hicolor/72x72/apps)
    install(FILES icons/96x96/fitkit.png DESTINATION share/icons/hicolor/96x96/apps)
endif(${UNIX})
