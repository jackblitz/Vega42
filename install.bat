@echo off
setlocal

set BUILD_TYPE=debug

if /I "%1"=="-release" (
    set BUILD_TYPE=release
) else if /I NOT "%1"=="-debug" (
    if NOT "%1"=="" (
        echo "Invalid argument: %1"
        echo "Usage: install.bat [-debug ^| -release]"
        exit /b 1
    )
)

set BUILD_DIR=bin\%BUILD_TYPE%

echo "Configuring for %BUILD_TYPE% build in %BUILD_DIR% directory..."

if not exist %BUILD_DIR% (
    mkdir %BUILD_DIR%
)

cd %BUILD_DIR%
cmake ../.. -DCMAKE_BUILD_TYPE=%BUILD_TYPE% -G "Visual Studio 17 2022"

endlocal
