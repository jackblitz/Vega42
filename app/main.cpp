#include <iostream>
#include "VegaApplication.h"
#include <Logger.h> // Include the Logger header
#include <SDL3/SDL_main.h>

int main(int argc, char *argv[]){
    // Initialize the logger at the very beginning
    polaris::Logger::getInstance().initialize("vega42.log"); // You can specify a log file name

    LOG_INFO("Vega Win32 Application starting..."); // Example log message

    vega::VegaApplication *application = new vega::VegaApplication();
    application->initialize();
    application->run();

    delete application; // Don't forget to delete dynamically allocated objects

    LOG_INFO("Vega Win32 Application shutting down."); // Example log message

    // Shutdown the logger at the very end
    polaris::Logger::getInstance().shutdown();

    return 0;
}
