
This is a small list of steps in order to build gnutls into a msvc DLL and lib file.

The project contains Release and Debug builds for static lib files (Debug/Release)
  as well as dynamic shared dll files (DebugDLL/ReleaseDLL).
Choose whichever project configuration meets your requirements.

*** Building with YASM ***

In order to build gnutls using msvc you must first download and install YASM.
YASM is required to compile all gnutls assembly files.

1) Download yasm for Visual Studio from here:
http://yasm.tortall.net/Download.html

Currently only up to VS2010 is supported on the web page so just download that.

2) Follow the instructions found within the downloaded archive for installing YASM
    Note: With newer version of VS the BuildCustomization path should be the version specific to the VS version you are using.
        so for instance the path for Visual Studio 2013 is:
        C:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V120\BuildCustomizations
        and the path for Visual Studio 2015 would be:
        C:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V140\BuildCustomizations
    Note: For best compatibility the vsyasm executable should be copied to the VS tools folder.
        for Visual Studio 2013 this would be:
        C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools
        and for Visual Studio 2015 would be:
        C:\Program Files (x86)\Microsoft Visual Studio 14.0\Common7\Tools

3) In order to use version 1.3.0 of vsyasm you will also have to fix a error in the distributed build customizations
    a) Open vsyasm.props
    b) Replace the 1 occurrence of $(Platform) with win$(PlatformArchitecture)


*** Generating ASM files ***

The build system requires several of the asm files to be built automatically. This should have already been done and the resulting
source files will be found in the SMP\lib\accelerated\x86\nasm directory. If these files are missing then the project will try 
and automatically generate new ones. If the files need to be forced to update then they can be simply deleted which will result in new files
being generated the next time the project is built.

In order for new files to be generated the project needs access to 'perl'. Ensure that perl has been correctly installed and is accessible
by Visual Studio. 