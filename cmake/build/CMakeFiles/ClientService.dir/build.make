# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /home/white_kung/.local/bin/cmake

# The command to remove a file.
RM = /home/white_kung/.local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/white_kung/SharedFolder/cpp_sharing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/white_kung/SharedFolder/cpp_sharing/cmake/build

# Include any dependencies generated for this target.
include CMakeFiles/ClientService.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClientService.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClientService.dir/flags.make

CMakeFiles/ClientService.dir/src/ClientService.cpp.o: CMakeFiles/ClientService.dir/flags.make
CMakeFiles/ClientService.dir/src/ClientService.cpp.o: ../../src/ClientService.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/white_kung/SharedFolder/cpp_sharing/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClientService.dir/src/ClientService.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClientService.dir/src/ClientService.cpp.o -c /home/white_kung/SharedFolder/cpp_sharing/src/ClientService.cpp

CMakeFiles/ClientService.dir/src/ClientService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClientService.dir/src/ClientService.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/white_kung/SharedFolder/cpp_sharing/src/ClientService.cpp > CMakeFiles/ClientService.dir/src/ClientService.cpp.i

CMakeFiles/ClientService.dir/src/ClientService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClientService.dir/src/ClientService.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/white_kung/SharedFolder/cpp_sharing/src/ClientService.cpp -o CMakeFiles/ClientService.dir/src/ClientService.cpp.s

# Object files for target ClientService
ClientService_OBJECTS = \
"CMakeFiles/ClientService.dir/src/ClientService.cpp.o"

# External object files for target ClientService
ClientService_EXTERNAL_OBJECTS =

ClientService: CMakeFiles/ClientService.dir/src/ClientService.cpp.o
ClientService: CMakeFiles/ClientService.dir/build.make
ClientService: libhw_grpc_proto.a
ClientService: /home/white_kung/.local/lib/libgrpc++_reflection.a
ClientService: /home/white_kung/.local/lib/libgrpc++.a
ClientService: /home/white_kung/.local/lib/libprotobuf.a
ClientService: /home/white_kung/.local/lib/libgrpc.a
ClientService: /home/white_kung/.local/lib/libz.a
ClientService: /home/white_kung/.local/lib/libcares.a
ClientService: /home/white_kung/.local/lib/libaddress_sorting.a
ClientService: /home/white_kung/.local/lib/libre2.a
ClientService: /home/white_kung/.local/lib/libabsl_hash.a
ClientService: /home/white_kung/.local/lib/libabsl_city.a
ClientService: /home/white_kung/.local/lib/libabsl_wyhash.a
ClientService: /home/white_kung/.local/lib/libabsl_raw_hash_set.a
ClientService: /home/white_kung/.local/lib/libabsl_hashtablez_sampler.a
ClientService: /home/white_kung/.local/lib/libabsl_exponential_biased.a
ClientService: /home/white_kung/.local/lib/libabsl_statusor.a
ClientService: /home/white_kung/.local/lib/libabsl_bad_variant_access.a
ClientService: /home/white_kung/.local/lib/libgpr.a
ClientService: /home/white_kung/.local/lib/libupb.a
ClientService: /home/white_kung/.local/lib/libabsl_status.a
ClientService: /home/white_kung/.local/lib/libabsl_cord.a
ClientService: /home/white_kung/.local/lib/libabsl_str_format_internal.a
ClientService: /home/white_kung/.local/lib/libabsl_synchronization.a
ClientService: /home/white_kung/.local/lib/libabsl_stacktrace.a
ClientService: /home/white_kung/.local/lib/libabsl_symbolize.a
ClientService: /home/white_kung/.local/lib/libabsl_debugging_internal.a
ClientService: /home/white_kung/.local/lib/libabsl_demangle_internal.a
ClientService: /home/white_kung/.local/lib/libabsl_graphcycles_internal.a
ClientService: /home/white_kung/.local/lib/libabsl_malloc_internal.a
ClientService: /home/white_kung/.local/lib/libabsl_time.a
ClientService: /home/white_kung/.local/lib/libabsl_strings.a
ClientService: /home/white_kung/.local/lib/libabsl_throw_delegate.a
ClientService: /home/white_kung/.local/lib/libabsl_strings_internal.a
ClientService: /home/white_kung/.local/lib/libabsl_base.a
ClientService: /home/white_kung/.local/lib/libabsl_spinlock_wait.a
ClientService: /home/white_kung/.local/lib/libabsl_int128.a
ClientService: /home/white_kung/.local/lib/libabsl_civil_time.a
ClientService: /home/white_kung/.local/lib/libabsl_time_zone.a
ClientService: /home/white_kung/.local/lib/libabsl_bad_optional_access.a
ClientService: /home/white_kung/.local/lib/libabsl_raw_logging_internal.a
ClientService: /home/white_kung/.local/lib/libabsl_log_severity.a
ClientService: /home/white_kung/.local/lib/libssl.a
ClientService: /home/white_kung/.local/lib/libcrypto.a
ClientService: CMakeFiles/ClientService.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/white_kung/SharedFolder/cpp_sharing/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ClientService"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClientService.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClientService.dir/build: ClientService

.PHONY : CMakeFiles/ClientService.dir/build

CMakeFiles/ClientService.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClientService.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClientService.dir/clean

CMakeFiles/ClientService.dir/depend:
	cd /home/white_kung/SharedFolder/cpp_sharing/cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/white_kung/SharedFolder/cpp_sharing /home/white_kung/SharedFolder/cpp_sharing /home/white_kung/SharedFolder/cpp_sharing/cmake/build /home/white_kung/SharedFolder/cpp_sharing/cmake/build /home/white_kung/SharedFolder/cpp_sharing/cmake/build/CMakeFiles/ClientService.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClientService.dir/depend
