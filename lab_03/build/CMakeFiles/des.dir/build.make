# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lev/Desktop/lab_03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lev/Desktop/lab_03/build

# Include any dependencies generated for this target.
include CMakeFiles/des.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/des.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/des.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/des.dir/flags.make

CMakeFiles/des.dir/main.cpp.o: CMakeFiles/des.dir/flags.make
CMakeFiles/des.dir/main.cpp.o: ../main.cpp
CMakeFiles/des.dir/main.cpp.o: CMakeFiles/des.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lev/Desktop/lab_03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/des.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/des.dir/main.cpp.o -MF CMakeFiles/des.dir/main.cpp.o.d -o CMakeFiles/des.dir/main.cpp.o -c /home/lev/Desktop/lab_03/main.cpp

CMakeFiles/des.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/des.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lev/Desktop/lab_03/main.cpp > CMakeFiles/des.dir/main.cpp.i

CMakeFiles/des.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/des.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lev/Desktop/lab_03/main.cpp -o CMakeFiles/des.dir/main.cpp.s

CMakeFiles/des.dir/des.cpp.o: CMakeFiles/des.dir/flags.make
CMakeFiles/des.dir/des.cpp.o: ../des.cpp
CMakeFiles/des.dir/des.cpp.o: CMakeFiles/des.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lev/Desktop/lab_03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/des.dir/des.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/des.dir/des.cpp.o -MF CMakeFiles/des.dir/des.cpp.o.d -o CMakeFiles/des.dir/des.cpp.o -c /home/lev/Desktop/lab_03/des.cpp

CMakeFiles/des.dir/des.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/des.dir/des.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lev/Desktop/lab_03/des.cpp > CMakeFiles/des.dir/des.cpp.i

CMakeFiles/des.dir/des.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/des.dir/des.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lev/Desktop/lab_03/des.cpp -o CMakeFiles/des.dir/des.cpp.s

# Object files for target des
des_OBJECTS = \
"CMakeFiles/des.dir/main.cpp.o" \
"CMakeFiles/des.dir/des.cpp.o"

# External object files for target des
des_EXTERNAL_OBJECTS =

des: CMakeFiles/des.dir/main.cpp.o
des: CMakeFiles/des.dir/des.cpp.o
des: CMakeFiles/des.dir/build.make
des: CMakeFiles/des.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lev/Desktop/lab_03/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable des"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/des.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/des.dir/build: des
.PHONY : CMakeFiles/des.dir/build

CMakeFiles/des.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/des.dir/cmake_clean.cmake
.PHONY : CMakeFiles/des.dir/clean

CMakeFiles/des.dir/depend:
	cd /home/lev/Desktop/lab_03/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lev/Desktop/lab_03 /home/lev/Desktop/lab_03 /home/lev/Desktop/lab_03/build /home/lev/Desktop/lab_03/build /home/lev/Desktop/lab_03/build/CMakeFiles/des.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/des.dir/depend

