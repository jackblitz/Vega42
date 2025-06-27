#include <iostream>
#include <memory>

#include "VegaApplication.h"
#include "../polaris/source/runtime/core/Logger.h"

int main(int argc, char **argv) {
    // Initialize logger first
    polaris::Logger::getInstance().initialize("vega42.log");
    
    // Set log level based on build type
#ifdef NDEBUG
    // Release build - only show info and above
    polaris::Logger::getInstance().setLogLevel(polaris::LogLevel::INFO);
    LOG_INFO("Vega42 starting in RELEASE mode");
#else
    // Debug build - show debug logs
    polaris::Logger::getInstance().setLogLevel(polaris::LogLevel::DEBUG_LEVEL);
    LOG_INFO("Vega42 starting in DEBUG mode");
#endif
    
    LOG_INFO("Vega Win32 Main starting");
    
    try {
        // Create the application
        const auto app = std::make_unique<vega::VegaApplication>();
        
        app->initialize();
        LOG_INFO("Application created successfully");
        app->run();
        // The application will handle its own lifecycle
        // Engine shutdown will be called automatically
        
    } catch (const std::exception& e) {
        LOG_ERROR("Application failed: " + std::string(e.what()));
        return 1;
    }
    
    LOG_INFO("Vega Win32 Main completed");
    
    // Shutdown logger last
    polaris::Logger::getInstance().shutdown();
    
    return 0;
}




