# Vega42 Game Engine

A C++ game engine built with Polaris core architecture, featuring SDL3 integration and cross-platform support.

## Quick Start

### Download Pre-built Releases

The easiest way to get started is to download the latest pre-built release:

1. Go to the [Releases](https://github.com/your-username/Vega42/releases) page
2. Download the latest release for your platform:
   - **Windows**: `Vega42-windows-release.zip`
   - **Linux**: `Vega42-ubuntu-latest-release.tar.gz`
   - **Android**: `Vega42-android-release.apk`

### Running the Application

#### Windows
1. Extract the zip file
2. Run `Vega42.exe`

#### Linux
1. Extract the tar.gz file: `tar -xzvf Vega42-ubuntu-latest-release.tar.gz`
2. Make the executable runnable: `chmod +x Vega42`
3. Run the executable: `./Vega42`

#### Android
1. Install the APK on your Android device
2. Launch the Vega42 app

## Development Setup

### CLion Users

Open the `workspace` directory as the project root. CLion will automatically detect the `CMakeLists.txt` file and configure the project.

### Command Line Build

#### Windows
```batch
install.bat -debug    # or -release
build.bat -debug      # or -release
```

#### Linux
```bash
chmod +x install.sh build.sh
./install.sh -debug   # or -release
./build.sh -debug     # or -release
```

## Development Builds

For development builds from GitHub Actions:

1. Go to the [Actions](https://github.com/your-username/Vega42/actions) tab
2. Find the latest successful workflow run
3. Download the artifact for your platform
4. Extract and run as described above