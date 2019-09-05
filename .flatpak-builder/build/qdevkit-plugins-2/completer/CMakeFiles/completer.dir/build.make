# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /run/build/qdevkit-plugins

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /run/build/qdevkit-plugins

# Include any dependencies generated for this target.
include completer/CMakeFiles/completer.dir/depend.make

# Include the progress variables for this target.
include completer/CMakeFiles/completer.dir/progress.make

# Include the compile flags for this target's objects.
include completer/CMakeFiles/completer.dir/flags.make

completer/completer.moc: completer/completer.h
completer/completer.moc: completer/completer.moc_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/run/build/qdevkit-plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating completer.moc"
	cd /run/build/qdevkit-plugins/completer && /app/bin/moc @/run/build/qdevkit-plugins/completer/completer.moc_parameters

completer/qrc_completer.cxx: completer/completer.png
completer/qrc_completer.cxx: completer/completer.qrc.depends
completer/qrc_completer.cxx: completer/completer.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/run/build/qdevkit-plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_completer.cxx"
	cd /run/build/qdevkit-plugins/completer && /app/bin/rcc -name completer -o /run/build/qdevkit-plugins/completer/qrc_completer.cxx /run/build/qdevkit-plugins/completer/completer.qrc

completer/CMakeFiles/completer.dir/completer.cpp.o: completer/CMakeFiles/completer.dir/flags.make
completer/CMakeFiles/completer.dir/completer.cpp.o: completer/completer.cpp
completer/CMakeFiles/completer.dir/completer.cpp.o: completer/completer.moc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/run/build/qdevkit-plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object completer/CMakeFiles/completer.dir/completer.cpp.o"
	cd /run/build/qdevkit-plugins/completer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/completer.dir/completer.cpp.o -c /run/build/qdevkit-plugins/completer/completer.cpp

completer/CMakeFiles/completer.dir/completer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/completer.dir/completer.cpp.i"
	cd /run/build/qdevkit-plugins/completer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /run/build/qdevkit-plugins/completer/completer.cpp > CMakeFiles/completer.dir/completer.cpp.i

completer/CMakeFiles/completer.dir/completer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/completer.dir/completer.cpp.s"
	cd /run/build/qdevkit-plugins/completer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /run/build/qdevkit-plugins/completer/completer.cpp -o CMakeFiles/completer.dir/completer.cpp.s

completer/CMakeFiles/completer.dir/qrc_completer.cxx.o: completer/CMakeFiles/completer.dir/flags.make
completer/CMakeFiles/completer.dir/qrc_completer.cxx.o: completer/qrc_completer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/run/build/qdevkit-plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object completer/CMakeFiles/completer.dir/qrc_completer.cxx.o"
	cd /run/build/qdevkit-plugins/completer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/completer.dir/qrc_completer.cxx.o -c /run/build/qdevkit-plugins/completer/qrc_completer.cxx

completer/CMakeFiles/completer.dir/qrc_completer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/completer.dir/qrc_completer.cxx.i"
	cd /run/build/qdevkit-plugins/completer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /run/build/qdevkit-plugins/completer/qrc_completer.cxx > CMakeFiles/completer.dir/qrc_completer.cxx.i

completer/CMakeFiles/completer.dir/qrc_completer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/completer.dir/qrc_completer.cxx.s"
	cd /run/build/qdevkit-plugins/completer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /run/build/qdevkit-plugins/completer/qrc_completer.cxx -o CMakeFiles/completer.dir/qrc_completer.cxx.s

# Object files for target completer
completer_OBJECTS = \
"CMakeFiles/completer.dir/completer.cpp.o" \
"CMakeFiles/completer.dir/qrc_completer.cxx.o"

# External object files for target completer
completer_EXTERNAL_OBJECTS =

completer/libcompleter.so: completer/CMakeFiles/completer.dir/completer.cpp.o
completer/libcompleter.so: completer/CMakeFiles/completer.dir/qrc_completer.cxx.o
completer/libcompleter.so: completer/CMakeFiles/completer.dir/build.make
completer/libcompleter.so: /app/lib/libqdevkitcore.so
completer/libcompleter.so: /app/lib/libkitclient.so
completer/libcompleter.so: /app/lib/libQtGui.so
completer/libcompleter.so: /app/lib/libQtXml.so
completer/libcompleter.so: /app/lib/libQtNetwork.so
completer/libcompleter.so: /app/lib/libQtCore.so
completer/libcompleter.so: completer/CMakeFiles/completer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/run/build/qdevkit-plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library libcompleter.so"
	cd /run/build/qdevkit-plugins/completer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/completer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
completer/CMakeFiles/completer.dir/build: completer/libcompleter.so

.PHONY : completer/CMakeFiles/completer.dir/build

completer/CMakeFiles/completer.dir/clean:
	cd /run/build/qdevkit-plugins/completer && $(CMAKE_COMMAND) -P CMakeFiles/completer.dir/cmake_clean.cmake
.PHONY : completer/CMakeFiles/completer.dir/clean

completer/CMakeFiles/completer.dir/depend: completer/completer.moc
completer/CMakeFiles/completer.dir/depend: completer/qrc_completer.cxx
	cd /run/build/qdevkit-plugins && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /run/build/qdevkit-plugins /run/build/qdevkit-plugins/completer /run/build/qdevkit-plugins /run/build/qdevkit-plugins/completer /run/build/qdevkit-plugins/completer/CMakeFiles/completer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : completer/CMakeFiles/completer.dir/depend

