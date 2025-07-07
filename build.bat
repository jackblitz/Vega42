@echo off
setlocal

set BUILD_TYPE=Debug

if /I "%1"=="-release" (
    set BUILD_TYPE=Release
) else if /I NOT "%1"=="-debug" (
    if NOT "%1"=="" (
        echo "Invalid argument: %1"
        echo "Usage: build.bat [-debug ^| -release]"
        exit /b 1
    )
)

set BUILD_DIR=vs_build\%BUILD_TYPE%



echo "Building %BUILD_TYPE% configuration..."
cmake --build %BUILD_DIR%

endlocal
