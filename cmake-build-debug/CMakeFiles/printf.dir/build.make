# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Users/sdoughnu/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Users/sdoughnu/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sdoughnu/Desktop/printf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sdoughnu/Desktop/printf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/printf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/printf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printf.dir/flags.make

CMakeFiles/printf.dir/assoc.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/assoc.c.o: ../assoc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/printf.dir/assoc.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/assoc.c.o   -c /Users/sdoughnu/Desktop/printf/assoc.c

CMakeFiles/printf.dir/assoc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/assoc.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sdoughnu/Desktop/printf/assoc.c > CMakeFiles/printf.dir/assoc.c.i

CMakeFiles/printf.dir/assoc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/assoc.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sdoughnu/Desktop/printf/assoc.c -o CMakeFiles/printf.dir/assoc.c.s

CMakeFiles/printf.dir/float.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/float.c.o: ../float.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/printf.dir/float.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/float.c.o   -c /Users/sdoughnu/Desktop/printf/float.c

CMakeFiles/printf.dir/float.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/float.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sdoughnu/Desktop/printf/float.c > CMakeFiles/printf.dir/float.c.i

CMakeFiles/printf.dir/float.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/float.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sdoughnu/Desktop/printf/float.c -o CMakeFiles/printf.dir/float.c.s

CMakeFiles/printf.dir/print_di.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/print_di.c.o: ../print_di.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/printf.dir/print_di.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/print_di.c.o   -c /Users/sdoughnu/Desktop/printf/print_di.c

CMakeFiles/printf.dir/print_di.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/print_di.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sdoughnu/Desktop/printf/print_di.c > CMakeFiles/printf.dir/print_di.c.i

CMakeFiles/printf.dir/print_di.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/print_di.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sdoughnu/Desktop/printf/print_di.c -o CMakeFiles/printf.dir/print_di.c.s

CMakeFiles/printf.dir/ft_printf.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/ft_printf.c.o: ../ft_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/printf.dir/ft_printf.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/ft_printf.c.o   -c /Users/sdoughnu/Desktop/printf/ft_printf.c

CMakeFiles/printf.dir/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/ft_printf.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sdoughnu/Desktop/printf/ft_printf.c > CMakeFiles/printf.dir/ft_printf.c.i

CMakeFiles/printf.dir/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/ft_printf.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sdoughnu/Desktop/printf/ft_printf.c -o CMakeFiles/printf.dir/ft_printf.c.s

CMakeFiles/printf.dir/func_str.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/func_str.c.o: ../func_str.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/printf.dir/func_str.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/func_str.c.o   -c /Users/sdoughnu/Desktop/printf/func_str.c

CMakeFiles/printf.dir/func_str.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/func_str.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sdoughnu/Desktop/printf/func_str.c > CMakeFiles/printf.dir/func_str.c.i

CMakeFiles/printf.dir/func_str.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/func_str.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sdoughnu/Desktop/printf/func_str.c -o CMakeFiles/printf.dir/func_str.c.s

CMakeFiles/printf.dir/parse.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/parse.c.o: ../parse.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/printf.dir/parse.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/parse.c.o   -c /Users/sdoughnu/Desktop/printf/parse.c

CMakeFiles/printf.dir/parse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/parse.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sdoughnu/Desktop/printf/parse.c > CMakeFiles/printf.dir/parse.c.i

CMakeFiles/printf.dir/parse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/parse.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sdoughnu/Desktop/printf/parse.c -o CMakeFiles/printf.dir/parse.c.s

CMakeFiles/printf.dir/treatment.c.o: CMakeFiles/printf.dir/flags.make
CMakeFiles/printf.dir/treatment.c.o: ../treatment.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/printf.dir/treatment.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf.dir/treatment.c.o   -c /Users/sdoughnu/Desktop/printf/treatment.c

CMakeFiles/printf.dir/treatment.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf.dir/treatment.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/sdoughnu/Desktop/printf/treatment.c > CMakeFiles/printf.dir/treatment.c.i

CMakeFiles/printf.dir/treatment.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf.dir/treatment.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/sdoughnu/Desktop/printf/treatment.c -o CMakeFiles/printf.dir/treatment.c.s

# Object files for target printf
printf_OBJECTS = \
"CMakeFiles/printf.dir/assoc.c.o" \
"CMakeFiles/printf.dir/float.c.o" \
"CMakeFiles/printf.dir/print_di.c.o" \
"CMakeFiles/printf.dir/ft_printf.c.o" \
"CMakeFiles/printf.dir/func_str.c.o" \
"CMakeFiles/printf.dir/parse.c.o" \
"CMakeFiles/printf.dir/treatment.c.o"

# External object files for target printf
printf_EXTERNAL_OBJECTS =

printf: CMakeFiles/printf.dir/assoc.c.o
printf: CMakeFiles/printf.dir/float.c.o
printf: CMakeFiles/printf.dir/print_di.c.o
printf: CMakeFiles/printf.dir/ft_printf.c.o
printf: CMakeFiles/printf.dir/func_str.c.o
printf: CMakeFiles/printf.dir/parse.c.o
printf: CMakeFiles/printf.dir/treatment.c.o
printf: CMakeFiles/printf.dir/build.make
printf: CMakeFiles/printf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable printf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/printf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printf.dir/build: printf

.PHONY : CMakeFiles/printf.dir/build

CMakeFiles/printf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/printf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/printf.dir/clean

CMakeFiles/printf.dir/depend:
	cd /Users/sdoughnu/Desktop/printf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sdoughnu/Desktop/printf /Users/sdoughnu/Desktop/printf /Users/sdoughnu/Desktop/printf/cmake-build-debug /Users/sdoughnu/Desktop/printf/cmake-build-debug /Users/sdoughnu/Desktop/printf/cmake-build-debug/CMakeFiles/printf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printf.dir/depend

