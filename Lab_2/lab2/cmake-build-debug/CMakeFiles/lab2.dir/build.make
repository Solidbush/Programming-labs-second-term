# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Prog_2_sem\Lab_2\lab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Prog_2_sem\Lab_2\lab2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2.dir/flags.make

CMakeFiles/lab2.dir/main.cpp.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Prog_2_sem\Lab_2\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab2.dir\main.cpp.obj -c D:\Prog_2_sem\Lab_2\lab2\main.cpp

CMakeFiles/lab2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Prog_2_sem\Lab_2\lab2\main.cpp > CMakeFiles\lab2.dir\main.cpp.i

CMakeFiles/lab2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Prog_2_sem\Lab_2\lab2\main.cpp -o CMakeFiles\lab2.dir\main.cpp.s

CMakeFiles/lab2.dir/fun.cpp.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/fun.cpp.obj: ../fun.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Prog_2_sem\Lab_2\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab2.dir/fun.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab2.dir\fun.cpp.obj -c D:\Prog_2_sem\Lab_2\lab2\fun.cpp

CMakeFiles/lab2.dir/fun.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/fun.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Prog_2_sem\Lab_2\lab2\fun.cpp > CMakeFiles\lab2.dir\fun.cpp.i

CMakeFiles/lab2.dir/fun.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/fun.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Prog_2_sem\Lab_2\lab2\fun.cpp -o CMakeFiles\lab2.dir\fun.cpp.s

# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/main.cpp.obj" \
"CMakeFiles/lab2.dir/fun.cpp.obj"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2.exe: CMakeFiles/lab2.dir/main.cpp.obj
lab2.exe: CMakeFiles/lab2.dir/fun.cpp.obj
lab2.exe: CMakeFiles/lab2.dir/build.make
lab2.exe: CMakeFiles/lab2.dir/linklibs.rsp
lab2.exe: CMakeFiles/lab2.dir/objects1.rsp
lab2.exe: CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Prog_2_sem\Lab_2\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2.dir/build: lab2.exe
.PHONY : CMakeFiles/lab2.dir/build

CMakeFiles/lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab2.dir/clean

CMakeFiles/lab2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Prog_2_sem\Lab_2\lab2 D:\Prog_2_sem\Lab_2\lab2 D:\Prog_2_sem\Lab_2\lab2\cmake-build-debug D:\Prog_2_sem\Lab_2\lab2\cmake-build-debug D:\Prog_2_sem\Lab_2\lab2\cmake-build-debug\CMakeFiles\lab2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab2.dir/depend

