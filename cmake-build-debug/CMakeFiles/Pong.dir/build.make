# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/tristochi/CLION/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/tristochi/CLION/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tristochi/Desktop/C++_Projects/Pong

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pong.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pong.dir/flags.make

CMakeFiles/Pong.dir/main.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pong.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/main.cpp.o -c /home/tristochi/Desktop/C++_Projects/Pong/main.cpp

CMakeFiles/Pong.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tristochi/Desktop/C++_Projects/Pong/main.cpp > CMakeFiles/Pong.dir/main.cpp.i

CMakeFiles/Pong.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tristochi/Desktop/C++_Projects/Pong/main.cpp -o CMakeFiles/Pong.dir/main.cpp.s

CMakeFiles/Pong.dir/Bat.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/Bat.cpp.o: ../Bat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Pong.dir/Bat.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/Bat.cpp.o -c /home/tristochi/Desktop/C++_Projects/Pong/Bat.cpp

CMakeFiles/Pong.dir/Bat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/Bat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tristochi/Desktop/C++_Projects/Pong/Bat.cpp > CMakeFiles/Pong.dir/Bat.cpp.i

CMakeFiles/Pong.dir/Bat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/Bat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tristochi/Desktop/C++_Projects/Pong/Bat.cpp -o CMakeFiles/Pong.dir/Bat.cpp.s

CMakeFiles/Pong.dir/Ball.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/Ball.cpp.o: ../Ball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Pong.dir/Ball.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/Ball.cpp.o -c /home/tristochi/Desktop/C++_Projects/Pong/Ball.cpp

CMakeFiles/Pong.dir/Ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/Ball.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tristochi/Desktop/C++_Projects/Pong/Ball.cpp > CMakeFiles/Pong.dir/Ball.cpp.i

CMakeFiles/Pong.dir/Ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/Ball.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tristochi/Desktop/C++_Projects/Pong/Ball.cpp -o CMakeFiles/Pong.dir/Ball.cpp.s

# Object files for target Pong
Pong_OBJECTS = \
"CMakeFiles/Pong.dir/main.cpp.o" \
"CMakeFiles/Pong.dir/Bat.cpp.o" \
"CMakeFiles/Pong.dir/Ball.cpp.o"

# External object files for target Pong
Pong_EXTERNAL_OBJECTS =

Pong: CMakeFiles/Pong.dir/main.cpp.o
Pong: CMakeFiles/Pong.dir/Bat.cpp.o
Pong: CMakeFiles/Pong.dir/Ball.cpp.o
Pong: CMakeFiles/Pong.dir/build.make
Pong: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
Pong: /usr/lib/x86_64-linux-gnu/libsfml-audio.so.2.5.1
Pong: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
Pong: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
Pong: CMakeFiles/Pong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Pong"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pong.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pong.dir/build: Pong

.PHONY : CMakeFiles/Pong.dir/build

CMakeFiles/Pong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pong.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pong.dir/clean

CMakeFiles/Pong.dir/depend:
	cd /home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tristochi/Desktop/C++_Projects/Pong /home/tristochi/Desktop/C++_Projects/Pong /home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug /home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug /home/tristochi/Desktop/C++_Projects/Pong/cmake-build-debug/CMakeFiles/Pong.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pong.dir/depend

