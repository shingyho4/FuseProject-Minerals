@echo off
pushd "%~dp0"

REM Setup variables
set SDK_DIR=C:\ProgramData\Uno\SDKs\AndroidSDK
set ADB=%SDK_DIR%\platform-tools\adb.exe

REM %ADB% kill-server || goto ERROR

echo # Trying to uninstall existing version of APK
%ADB% uninstall com.MyMineral || goto ERROR

echo.
echo # Installing new version of APK
%ADB% install -r bin/MyMineral-debug.apk || goto ERROR

echo.
echo # Starting APK on device
%ADB% shell am start -a android.intent.action.MAIN -c [android.intent.category.LAUNCHER] -f 0x10200000 -n com.MyMineral/com.MyMineral.MyMineral || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
