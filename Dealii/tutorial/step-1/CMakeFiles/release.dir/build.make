# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /cvmfs/soft.computecanada.ca/nix/store/678hyhmplmrgwg96yyyxdvbpchb8maya-cmake-cursesUI-qt4UI-3.8.2/bin/cmake

# The command to remove a file.
RM = /cvmfs/soft.computecanada.ca/nix/store/678hyhmplmrgwg96yyyxdvbpchb8maya-cmake-cursesUI-qt4UI-3.8.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/superran/myGitHub/cpp/Dealii/tutorial/step-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/superran/myGitHub/cpp/Dealii/tutorial/step-1

# Utility rule file for release.

# Include the progress variables for this target.
include CMakeFiles/release.dir/progress.make

CMakeFiles/release:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/superran/myGitHub/cpp/Dealii/tutorial/step-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Switch CMAKE_BUILD_TYPE to Release"
	/cvmfs/soft.computecanada.ca/nix/store/678hyhmplmrgwg96yyyxdvbpchb8maya-cmake-cursesUI-qt4UI-3.8.2/bin/cmake -DCMAKE_BUILD_TYPE=Release /home/superran/myGitHub/cpp/Dealii/tutorial/step-1
	/cvmfs/soft.computecanada.ca/nix/store/678hyhmplmrgwg96yyyxdvbpchb8maya-cmake-cursesUI-qt4UI-3.8.2/bin/cmake --build /home/superran/myGitHub/cpp/Dealii/tutorial/step-1 --target all

release: CMakeFiles/release
release: CMakeFiles/release.dir/build.make

.PHONY : release

# Rule to build all files generated by this target.
CMakeFiles/release.dir/build: release

.PHONY : CMakeFiles/release.dir/build

CMakeFiles/release.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/release.dir/cmake_clean.cmake
.PHONY : CMakeFiles/release.dir/clean

CMakeFiles/release.dir/depend:
	cd /home/superran/myGitHub/cpp/Dealii/tutorial/step-1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/superran/myGitHub/cpp/Dealii/tutorial/step-1 /home/superran/myGitHub/cpp/Dealii/tutorial/step-1 /home/superran/myGitHub/cpp/Dealii/tutorial/step-1 /home/superran/myGitHub/cpp/Dealii/tutorial/step-1 /home/superran/myGitHub/cpp/Dealii/tutorial/step-1/CMakeFiles/release.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/release.dir/depend

