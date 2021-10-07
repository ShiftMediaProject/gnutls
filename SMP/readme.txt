
This is a small list of steps in order to build libgnutls into a msvc dll and/or lib file.

The project contains Release and Debug builds for static lib files (Debug/Release)
  as well as dynamic shared dll files (DebugDLL/ReleaseDLL). Along with the standard
  windows dll/lib configurations mentioned above there are also equivalent variants that
  can be used to compile for WinRT/UWP (These configurations have a WinRT suffix).
There are also architecture configurations for either 32bit (x86) or 64bit (x64) compilation.
Choose whichever project configuration meets your requirements.

The project configurations support being built with various different windows SDK versions.
  By default they will use the lowest SDK version that would be available for Visual Studio
  version 2013 and up (This is the 8.1 SDK). However a batch file is also included 
  (libgnutls_with_latest_sdk.bat) which can be used to auto detect the newest available SDK 
  installed on the host machine and then open the project using that as the compilation SDK.
  
When using the WinRT/UWP project configurations the projects will automatically compile towards
  the default application target for the Version of Visual Studio being used:
  VS 2013: 8.1
  VS 2015: 8.1
  VS 2017+: 10.0.10240.0


*** Building with YASM ***

In order to build libgnutls using msvc you must first download and install YASM.
YASM is required to compile all assembly files.

1) Visual Studio YASM integration can be downloaded from https://github.com/ShiftMediaProject/VSYASM/releases/latest

2) Once downloaded simply follow the install instructions included in the download.


*** Building with Gnulib+libtasn1 submodules ***

In order to build libgnutls you must first ensure that the gnulib submodule and the libtasn1 submodule are both correctly initialised.

1) If not already installed then download and install git for windows.

2) Either run the supplied 'project_get_dependencies.bat' file or manually execute 'git submodule update --init' from within the project folder.