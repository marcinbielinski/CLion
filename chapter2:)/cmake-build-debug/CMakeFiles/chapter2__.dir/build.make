# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/123/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/123/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/marcin/CLionProjects/chapter2:)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/marcin/CLionProjects/chapter2:)/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/chapter2__.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chapter2__.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chapter2__.dir/flags.make

CMakeFiles/chapter2__.dir/main.cpp.o: CMakeFiles/chapter2__.dir/flags.make
CMakeFiles/chapter2__.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/marcin/CLionProjects/chapter2:)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chapter2__.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chapter2__.dir/main.cpp.o -c "/home/marcin/CLionProjects/chapter2:)/main.cpp"

CMakeFiles/chapter2__.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter2__.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/marcin/CLionProjects/chapter2:)/main.cpp" > CMakeFiles/chapter2__.dir/main.cpp.i

CMakeFiles/chapter2__.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter2__.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/marcin/CLionProjects/chapter2:)/main.cpp" -o CMakeFiles/chapter2__.dir/main.cpp.s

# Object files for target chapter2__
chapter2___OBJECTS = \
"CMakeFiles/chapter2__.dir/main.cpp.o"

# External object files for target chapter2__
chapter2___EXTERNAL_OBJECTS =

chapter2__: CMakeFiles/chapter2__.dir/main.cpp.o
chapter2__: CMakeFiles/chapter2__.dir/build.make
chapter2__: CMakeFiles/chapter2__.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/marcin/CLionProjects/chapter2:)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chapter2__"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chapter2__.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chapter2__.dir/build: chapter2__

.PHONY : CMakeFiles/chapter2__.dir/build

CMakeFiles/chapter2__.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chapter2__.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chapter2__.dir/clean

CMakeFiles/chapter2__.dir/depend:
	cd "/home/marcin/CLionProjects/chapter2:)/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/marcin/CLionProjects/chapter2:)" "/home/marcin/CLionProjects/chapter2:)" "/home/marcin/CLionProjects/chapter2:)/cmake-build-debug" "/home/marcin/CLionProjects/chapter2:)/cmake-build-debug" "/home/marcin/CLionProjects/chapter2:)/cmake-build-debug/CMakeFiles/chapter2__.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/chapter2__.dir/depend

