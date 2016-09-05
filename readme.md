Building Static QT Application with Command Line Prompt on Windows

Download Qt:
  1.	Download Qt executable (qt-unified-windows-x86-2.0.3-1-online.exe) from site: https://www.qt.io/download-open-source/
  2.	Run Qt executable (you will need to sign up, or log in if you have already QT account)
  3.	Specify folder where Qt will be installed, by default: C:\Qt
  4.	In Select component wizard, select Qt 5.7 -> MinGW 5.3.0 32 bit, and Tools -> MinGW 5.3.0
  5.	Finish installation

Download static Qt
  1.	Download the script named windows-build-qt-static.ps1 and execute it. (It will took a long time to finish this step) More about: http://wiki.qt.io/Building_a_static_Qt_for_Windows_using_MinGW
  2.	If you are using default location and also want to install Qt static to different location, nothing need to be edited in script, this script will install static Qt to C:\Qt\Static

Building
  1.	Run command prompt 
  2.	Create folder Build
  3.	Navigate to Build folder where you have created and run C:\Qt\Static\5.7.0\bin\qmake.exe <path to IguanaServer.pro> -r -spec win32-g++
  4.	Run C:\Qt\5.7\mingw53_32\bin\qtenv2.bat
  5.	Run C:\Qt\Tools\mingw530_32\bin\mingw32-make.exe -f Makefile.Release
  6.	Run IguanaServer.exe

Building QT Application with terminal on Linux

Download Qt
  1.	Download qt-opensource-linux-x64-5.7.0.run : https://www.qt.io/download-open-source/#section-2
  2.	Run qt-opensource-linux-x64-5.7.0.run in terminal
  3.	Default installation folder: /home/<user>/Qt5.7.0
  4.	In Select Components Wizard: Install Qt 5.7 -> Desktop gcc 64-bit and Tools
  5.	Finish installation


Building:
  1.	Mkdir build folder
  2.	Run terminal and navigate to build folder
  3.	Run /home/<user>/Qt5.7.0/5.7/gcc_64/bin/qmake <path_to_IguanaServer.pro>
  4.	Step 3 will create Makefile in folder build, which need to be edited
  5.	Change LFLAGS in Makefile to be like LFLAGS = -Wl, -rpath, /home/<user>/Qt5.7.0/5.7/gcc_64/lib
  6.	Run make
  7.	Run ./IguanaServer
