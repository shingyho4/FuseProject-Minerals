@echo off
pushd "%~dp0"

REM Setup variables
set ANT_DIR=C:\ProgramData\Uno\SDKs\Ant
set JAVA_HOME=C:\Program Files\Java\jdk1.7.0_45
set NDK_DIR=C:\ProgramData\Uno\SDKs\AndroidNDK
set SDK_DIR=C:\ProgramData\Uno\SDKs\AndroidSDK

if exist %ANT_DIR%\bin\ant.bat (
    set ANT=call %ANT_DIR%\bin\ant.bat
) else (
    echo ERROR: ant.bat was not found in '%ANT_DIR%\bin'
    goto ERROR
)

if exist %NDK_DIR%\prebuilt\windows\bin\make.exe (
    set MAKE=%NDK_DIR%\prebuilt\windows\bin\make.exe
) else if exist %NDK_DIR%\prebuilt\windows-x86_32\bin\make.exe (
    set MAKE=%NDK_DIR%\prebuilt\windows-x86_32\bin\make.exe
) else if exist %NDK_DIR%\prebuilt\windows-x86_64\bin\make.exe (
    set MAKE=%NDK_DIR%\prebuilt\windows-x86_64\bin\make.exe
) else (
    echo ERROR: make.exe was not found in '%NDK_DIR%\prebuilt'
    goto ERROR
)

if exist %NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows
) else if exist %NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows-x86_32 (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows-x86_32
) else if exist %NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows-x86_64 (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows-x86_64
) else (
    echo ERROR: arm-linux-androideabi-4.6 compilers was not found in '%NDK_DIR%\toolchains'
    goto ERROR
)

set CC=%TOOLCHAIN_DIR%\bin\arm-linux-androideabi-gcc.exe
set CXX=%TOOLCHAIN_DIR%\bin\arm-linux-androideabi-g++.exe
set STRIP=%TOOLCHAIN_DIR%\bin\arm-linux-androideabi-strip.exe

echo.
echo # Building SO
%MAKE% -j %NUMBER_OF_PROCESSORS% || goto ERROR

echo.
echo # Pre-Build Tasks


echo.
echo # Building APK
%ANT% debug || goto ERROR

echo.
echo # Done!
echo APK: %~dp0bin\MyMineral-debug.apk

popd && exit /b 0

:ERROR
popd && exit /b 1
