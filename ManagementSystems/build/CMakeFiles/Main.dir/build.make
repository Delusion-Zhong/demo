# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = D:\A_App\cMake\bin\cmake.exe

# The command to remove a file.
RM = D:\A_App\cMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = Z:\ManagementSystems

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = Z:\ManagementSystems\build

# Include any dependencies generated for this target.
include CMakeFiles/Main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Main.dir/flags.make

CMakeFiles/Main.dir/src/employee.cpp.obj: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/src/employee.cpp.obj: CMakeFiles/Main.dir/includes_CXX.rsp
CMakeFiles/Main.dir/src/employee.cpp.obj: Z:/ManagementSystems/src/employee.cpp
CMakeFiles/Main.dir/src/employee.cpp.obj: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=Z:\ManagementSystems\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Main.dir/src/employee.cpp.obj"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/src/employee.cpp.obj -MF CMakeFiles\Main.dir\src\employee.cpp.obj.d -o CMakeFiles\Main.dir\src\employee.cpp.obj -c Z:\ManagementSystems\src\employee.cpp

CMakeFiles/Main.dir/src/employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Main.dir/src/employee.cpp.i"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E Z:\ManagementSystems\src\employee.cpp > CMakeFiles\Main.dir\src\employee.cpp.i

CMakeFiles/Main.dir/src/employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Main.dir/src/employee.cpp.s"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S Z:\ManagementSystems\src\employee.cpp -o CMakeFiles\Main.dir\src\employee.cpp.s

CMakeFiles/Main.dir/src/main.cpp.obj: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/src/main.cpp.obj: CMakeFiles/Main.dir/includes_CXX.rsp
CMakeFiles/Main.dir/src/main.cpp.obj: Z:/ManagementSystems/src/main.cpp
CMakeFiles/Main.dir/src/main.cpp.obj: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=Z:\ManagementSystems\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Main.dir/src/main.cpp.obj"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/src/main.cpp.obj -MF CMakeFiles\Main.dir\src\main.cpp.obj.d -o CMakeFiles\Main.dir\src\main.cpp.obj -c Z:\ManagementSystems\src\main.cpp

CMakeFiles/Main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Main.dir/src/main.cpp.i"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E Z:\ManagementSystems\src\main.cpp > CMakeFiles\Main.dir\src\main.cpp.i

CMakeFiles/Main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Main.dir/src/main.cpp.s"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S Z:\ManagementSystems\src\main.cpp -o CMakeFiles\Main.dir\src\main.cpp.s

CMakeFiles/Main.dir/src/workManager.cpp.obj: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/src/workManager.cpp.obj: CMakeFiles/Main.dir/includes_CXX.rsp
CMakeFiles/Main.dir/src/workManager.cpp.obj: Z:/ManagementSystems/src/workManager.cpp
CMakeFiles/Main.dir/src/workManager.cpp.obj: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=Z:\ManagementSystems\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Main.dir/src/workManager.cpp.obj"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/src/workManager.cpp.obj -MF CMakeFiles\Main.dir\src\workManager.cpp.obj.d -o CMakeFiles\Main.dir\src\workManager.cpp.obj -c Z:\ManagementSystems\src\workManager.cpp

CMakeFiles/Main.dir/src/workManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Main.dir/src/workManager.cpp.i"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E Z:\ManagementSystems\src\workManager.cpp > CMakeFiles\Main.dir\src\workManager.cpp.i

CMakeFiles/Main.dir/src/workManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Main.dir/src/workManager.cpp.s"
	E:\vs_code\cpp\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S Z:\ManagementSystems\src\workManager.cpp -o CMakeFiles\Main.dir\src\workManager.cpp.s

# Object files for target Main
Main_OBJECTS = \
"CMakeFiles/Main.dir/src/employee.cpp.obj" \
"CMakeFiles/Main.dir/src/main.cpp.obj" \
"CMakeFiles/Main.dir/src/workManager.cpp.obj"

# External object files for target Main
Main_EXTERNAL_OBJECTS =

Z:/ManagementSystems/bin/Main.exe: CMakeFiles/Main.dir/src/employee.cpp.obj
Z:/ManagementSystems/bin/Main.exe: CMakeFiles/Main.dir/src/main.cpp.obj
Z:/ManagementSystems/bin/Main.exe: CMakeFiles/Main.dir/src/workManager.cpp.obj
Z:/ManagementSystems/bin/Main.exe: CMakeFiles/Main.dir/build.make
Z:/ManagementSystems/bin/Main.exe: CMakeFiles/Main.dir/linkLibs.rsp
Z:/ManagementSystems/bin/Main.exe: CMakeFiles/Main.dir/objects1.rsp
Z:/ManagementSystems/bin/Main.exe: CMakeFiles/Main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=Z:\ManagementSystems\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Z:\ManagementSystems\bin\Main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Main.dir/build: Z:/ManagementSystems/bin/Main.exe
.PHONY : CMakeFiles/Main.dir/build

CMakeFiles/Main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Main.dir/clean

CMakeFiles/Main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" Z:\ManagementSystems Z:\ManagementSystems Z:\ManagementSystems\build Z:\ManagementSystems\build Z:\ManagementSystems\build\CMakeFiles\Main.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Main.dir/depend

