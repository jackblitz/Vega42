# Project Setup

This project uses CMake for building. To configure the project, use the provided scripts.

## CLion Users

If you are using CLion, you can open the `workspace` directory as the project root. CLion will automatically detect the `CMakeLists.txt` file and configure the project for you.

## Command Line Users

For command-line users, scripts are provided to configure the project for different build types.

### Windows

Use the `install.bat` script with one of the following options:

```batch
install.bat -debug
install.bat -release
```

### macOS and Linux

Use the `install.sh` script. You may need to make it executable first:

```bash
chmod +x install.sh
```

Then, run it with one of the following options:

```bash
./install.sh -debug
./install.sh -release
```

## Building the Project

After configuring the project, you can build it using the following scripts:

### Windows

```batch
build.bat -debug
build.bat -release
```

### macOS and Linux

```bash
./build.sh -debug
./build.sh -release
```

## Running and Testing Builds

After a successful build on GitHub Actions, you can download the generated artifacts and run them.

### 1. Download Build Artifacts

*   Go to your GitHub repository in your web browser.
*   Click on the "Actions" tab.
*   Find the workflow run that corresponds to your latest push (e.g., to `dev` for debug builds, or `main` for release builds).
*   Click on the specific workflow run.
*   On the summary page for that run, scroll down to the "Artifacts" section.
*   Download the desired artifact (e.g., `Vega42-linux-debug-build`, `Vega42-macos-debug-build`, `Vega42-linux.tar.gz`, `Vega42-macos.tar.gz`).

### 2. Run and Test the Builds

#### For Linux Builds

*   **If it's a debug build artifact (e.g., `Vega42-linux-debug-build`):**
    *   Unzip the downloaded artifact.
    *   Open a terminal.
    *   Navigate to the directory where you unzipped the files (e.g., `cd path/to/Vega42-linux-debug-build/build/Debug`).
    *   Make the executable runnable: `chmod +x Vega42`
    *   Run the executable: `./Vega42`
*   **If it's a release build artifact (e.g., `Vega42-linux.tar.gz`):**
    *   Extract the tar.gz file: `tar -xzvf Vega42-linux.tar.gz`
    *   Navigate into the extracted directory (e.g., `cd release_assets`).
    *   Make the executable runnable: `chmod +x Vega42`
    *   Run the executable: `./Vega42`

#### For macOS Builds

*   **If it's a debug build artifact (e.g., `Vega42-macos-debug-build`):**
    *   Unzip the downloaded artifact.
    *   Open a terminal.
    *   Navigate to the executable (e.g., `cd path/to/Vega42-macos-debug-build/build/Debug`).
    *   Make the executable runnable: `chmod +x Vega42`
    *   Run the executable: `./Vega42`
*   **If it's a release build artifact (e.g., `Vega42-macos.tar.gz`):**
    *   Extract the tar.gz file: `tar -xzvf Vega42-macos.tar.gz`
    *   Navigate into the extracted directory (e.g., `cd release_assets`).
    *   Make the executable runnable: `chmod +x Vega42`
    *   Run the executable: `./Vega42`

Remember to replace `path/to/` with the actual path where you downloaded and extracted the files.