# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.5/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/moonchaeyeong/Desktop/NFT_Trading_System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/moonchaeyeong/Desktop/NFT_Trading_System/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: /Users/moonchaeyeong/Desktop/NFT_Trading_System/main.cpp
CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/moonchaeyeong/Desktop/NFT_Trading_System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.o -MF CMakeFiles/main.dir/main.cpp.o.d -o CMakeFiles/main.dir/main.cpp.o -c /Users/moonchaeyeong/Desktop/NFT_Trading_System/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonchaeyeong/Desktop/NFT_Trading_System/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonchaeyeong/Desktop/NFT_Trading_System/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/blockchain/blockchain.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/blockchain/blockchain.cpp.o: /Users/moonchaeyeong/Desktop/NFT_Trading_System/blockchain/blockchain.cpp
CMakeFiles/main.dir/blockchain/blockchain.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/moonchaeyeong/Desktop/NFT_Trading_System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/blockchain/blockchain.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/blockchain/blockchain.cpp.o -MF CMakeFiles/main.dir/blockchain/blockchain.cpp.o.d -o CMakeFiles/main.dir/blockchain/blockchain.cpp.o -c /Users/moonchaeyeong/Desktop/NFT_Trading_System/blockchain/blockchain.cpp

CMakeFiles/main.dir/blockchain/blockchain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/blockchain/blockchain.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonchaeyeong/Desktop/NFT_Trading_System/blockchain/blockchain.cpp > CMakeFiles/main.dir/blockchain/blockchain.cpp.i

CMakeFiles/main.dir/blockchain/blockchain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/blockchain/blockchain.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonchaeyeong/Desktop/NFT_Trading_System/blockchain/blockchain.cpp -o CMakeFiles/main.dir/blockchain/blockchain.cpp.s

CMakeFiles/main.dir/encryption/encryption.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/encryption/encryption.cpp.o: /Users/moonchaeyeong/Desktop/NFT_Trading_System/encryption/encryption.cpp
CMakeFiles/main.dir/encryption/encryption.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/moonchaeyeong/Desktop/NFT_Trading_System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/encryption/encryption.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/encryption/encryption.cpp.o -MF CMakeFiles/main.dir/encryption/encryption.cpp.o.d -o CMakeFiles/main.dir/encryption/encryption.cpp.o -c /Users/moonchaeyeong/Desktop/NFT_Trading_System/encryption/encryption.cpp

CMakeFiles/main.dir/encryption/encryption.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/encryption/encryption.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonchaeyeong/Desktop/NFT_Trading_System/encryption/encryption.cpp > CMakeFiles/main.dir/encryption/encryption.cpp.i

CMakeFiles/main.dir/encryption/encryption.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/encryption/encryption.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonchaeyeong/Desktop/NFT_Trading_System/encryption/encryption.cpp -o CMakeFiles/main.dir/encryption/encryption.cpp.s

CMakeFiles/main.dir/zkp/zkp.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/zkp/zkp.cpp.o: /Users/moonchaeyeong/Desktop/NFT_Trading_System/zkp/zkp.cpp
CMakeFiles/main.dir/zkp/zkp.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/moonchaeyeong/Desktop/NFT_Trading_System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/zkp/zkp.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/zkp/zkp.cpp.o -MF CMakeFiles/main.dir/zkp/zkp.cpp.o.d -o CMakeFiles/main.dir/zkp/zkp.cpp.o -c /Users/moonchaeyeong/Desktop/NFT_Trading_System/zkp/zkp.cpp

CMakeFiles/main.dir/zkp/zkp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/zkp/zkp.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonchaeyeong/Desktop/NFT_Trading_System/zkp/zkp.cpp > CMakeFiles/main.dir/zkp/zkp.cpp.i

CMakeFiles/main.dir/zkp/zkp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/zkp/zkp.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonchaeyeong/Desktop/NFT_Trading_System/zkp/zkp.cpp -o CMakeFiles/main.dir/zkp/zkp.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/blockchain/blockchain.cpp.o" \
"CMakeFiles/main.dir/encryption/encryption.cpp.o" \
"CMakeFiles/main.dir/zkp/zkp.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/blockchain/blockchain.cpp.o
main: CMakeFiles/main.dir/encryption/encryption.cpp.o
main: CMakeFiles/main.dir/zkp/zkp.cpp.o
main: CMakeFiles/main.dir/build.make
main: /opt/homebrew/Cellar/openssl@3/3.3.0/lib/libssl.dylib
main: /opt/homebrew/Cellar/openssl@3/3.3.0/lib/libcrypto.dylib
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/moonchaeyeong/Desktop/NFT_Trading_System/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /Users/moonchaeyeong/Desktop/NFT_Trading_System/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/moonchaeyeong/Desktop/NFT_Trading_System /Users/moonchaeyeong/Desktop/NFT_Trading_System /Users/moonchaeyeong/Desktop/NFT_Trading_System/build /Users/moonchaeyeong/Desktop/NFT_Trading_System/build /Users/moonchaeyeong/Desktop/NFT_Trading_System/build/CMakeFiles/main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/main.dir/depend
