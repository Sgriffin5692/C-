# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\C++\CSC232\RecursionMaxArray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\C++\CSC232\RecursionMaxArray\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\RecursionMaxArray.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\RecursionMaxArray.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\RecursionMaxArray.dir\flags.make

CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.obj: CMakeFiles\RecursionMaxArray.dir\flags.make
CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.obj: ..\RecursionMaxArray\pch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\C++\CSC232\RecursionMaxArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RecursionMaxArray.dir/RecursionMaxArray/pch.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.obj /FdCMakeFiles\RecursionMaxArray.dir\ /FS -c E:\C++\CSC232\RecursionMaxArray\RecursionMaxArray\pch.cpp
<<

CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RecursionMaxArray.dir/RecursionMaxArray/pch.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\C++\CSC232\RecursionMaxArray\RecursionMaxArray\pch.cpp
<<

CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RecursionMaxArray.dir/RecursionMaxArray/pch.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.s /c E:\C++\CSC232\RecursionMaxArray\RecursionMaxArray\pch.cpp
<<

CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.obj: CMakeFiles\RecursionMaxArray.dir\flags.make
CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.obj: ..\RecursionMaxArray\RecursionMaxArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\C++\CSC232\RecursionMaxArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RecursionMaxArray.dir/RecursionMaxArray/RecursionMaxArray.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.obj /FdCMakeFiles\RecursionMaxArray.dir\ /FS -c E:\C++\CSC232\RecursionMaxArray\RecursionMaxArray\RecursionMaxArray.cpp
<<

CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RecursionMaxArray.dir/RecursionMaxArray/RecursionMaxArray.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\C++\CSC232\RecursionMaxArray\RecursionMaxArray\RecursionMaxArray.cpp
<<

CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RecursionMaxArray.dir/RecursionMaxArray/RecursionMaxArray.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.s /c E:\C++\CSC232\RecursionMaxArray\RecursionMaxArray\RecursionMaxArray.cpp
<<

# Object files for target RecursionMaxArray
RecursionMaxArray_OBJECTS = \
"CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.obj" \
"CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.obj"

# External object files for target RecursionMaxArray
RecursionMaxArray_EXTERNAL_OBJECTS =

RecursionMaxArray.exe: CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\pch.cpp.obj
RecursionMaxArray.exe: CMakeFiles\RecursionMaxArray.dir\RecursionMaxArray\RecursionMaxArray.cpp.obj
RecursionMaxArray.exe: CMakeFiles\RecursionMaxArray.dir\build.make
RecursionMaxArray.exe: CMakeFiles\RecursionMaxArray.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\C++\CSC232\RecursionMaxArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable RecursionMaxArray.exe"
	"C:\Program Files\JetBrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\RecursionMaxArray.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\RecursionMaxArray.dir\objects1.rsp @<<
 /out:RecursionMaxArray.exe /implib:RecursionMaxArray.lib /pdb:E:\C++\CSC232\RecursionMaxArray\cmake-build-debug\RecursionMaxArray.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\RecursionMaxArray.dir\build: RecursionMaxArray.exe

.PHONY : CMakeFiles\RecursionMaxArray.dir\build

CMakeFiles\RecursionMaxArray.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RecursionMaxArray.dir\cmake_clean.cmake
.PHONY : CMakeFiles\RecursionMaxArray.dir\clean

CMakeFiles\RecursionMaxArray.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\C++\CSC232\RecursionMaxArray E:\C++\CSC232\RecursionMaxArray E:\C++\CSC232\RecursionMaxArray\cmake-build-debug E:\C++\CSC232\RecursionMaxArray\cmake-build-debug E:\C++\CSC232\RecursionMaxArray\cmake-build-debug\CMakeFiles\RecursionMaxArray.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\RecursionMaxArray.dir\depend

