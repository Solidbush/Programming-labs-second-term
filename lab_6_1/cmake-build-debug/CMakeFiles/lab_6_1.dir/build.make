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
CMAKE_SOURCE_DIR = D:\Prog_2_sem\lab_6_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Prog_2_sem\lab_6_1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab_6_1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lab_6_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_6_1.dir/flags.make

CMakeFiles/lab_6_1.dir/main.cpp.obj: CMakeFiles/lab_6_1.dir/flags.make
CMakeFiles/lab_6_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Prog_2_sem\lab_6_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab_6_1.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab_6_1.dir\main.cpp.obj -c D:\Prog_2_sem\lab_6_1\main.cpp

CMakeFiles/lab_6_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_6_1.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Prog_2_sem\lab_6_1\main.cpp > CMakeFiles\lab_6_1.dir\main.cpp.i

CMakeFiles/lab_6_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_6_1.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Prog_2_sem\lab_6_1\main.cpp -o CMakeFiles\lab_6_1.dir\main.cpp.s

CMakeFiles/lab_6_1.dir/fun.cpp.obj: CMakeFiles/lab_6_1.dir/flags.make
CMakeFiles/lab_6_1.dir/fun.cpp.obj: ../fun.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Prog_2_sem\lab_6_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab_6_1.dir/fun.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab_6_1.dir\fun.cpp.obj -c D:\Prog_2_sem\lab_6_1\fun.cpp

CMakeFiles/lab_6_1.dir/fun.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_6_1.dir/fun.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Prog_2_sem\lab_6_1\fun.cpp > CMakeFiles\lab_6_1.dir\fun.cpp.i

CMakeFiles/lab_6_1.dir/fun.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_6_1.dir/fun.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Prog_2_sem\lab_6_1\fun.cpp -o CMakeFiles\lab_6_1.dir\fun.cpp.s

# Object files for target lab_6_1
lab_6_1_OBJECTS = \
"CMakeFiles/lab_6_1.dir/main.cpp.obj" \
"CMakeFiles/lab_6_1.dir/fun.cpp.obj"

# External object files for target lab_6_1
lab_6_1_EXTERNAL_OBJECTS =

lab_6_1.exe: CMakeFiles/lab_6_1.dir/main.cpp.obj
lab_6_1.exe: CMakeFiles/lab_6_1.dir/fun.cpp.obj
lab_6_1.exe: CMakeFiles/lab_6_1.dir/build.make
lab_6_1.exe: CMakeFiles/lab_6_1.dir/linklibs.rsp
lab_6_1.exe: CMakeFiles/lab_6_1.dir/objects1.rsp
lab_6_1.exe: CMakeFiles/lab_6_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Prog_2_sem\lab_6_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab_6_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab_6_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_6_1.dir/build: lab_6_1.exe
.PHONY : CMakeFiles/lab_6_1.dir/build

CMakeFiles/lab_6_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab_6_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab_6_1.dir/clean

CMakeFiles/lab_6_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Prog_2_sem\lab_6_1 D:\Prog_2_sem\lab_6_1 D:\Prog_2_sem\lab_6_1\cmake-build-debug D:\Prog_2_sem\lab_6_1\cmake-build-debug D:\Prog_2_sem\lab_6_1\cmake-build-debug\CMakeFiles\lab_6_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_6_1.dir/depend

