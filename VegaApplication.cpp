#include "VegaApplication.h"
#include <iostream>
#include <Logger.h>
#include <stdexcept>

namespace vega {
    VegaApplication::VegaApplication() {
        LOG_INFO("VegaApplication constructed");
    }

    VegaApplication::~VegaApplication() {
        LOG_INFO("VegaApplication destructed");
    }


    void VegaApplication::OnCreated() {

        // Print Vega-specific window creation logic first
        LOG_INFO("VegaApplication OnCreated: Window is now available to the application!");

        // Then call base class OnCreated
        polaris::Application::OnCreated();

        // Additional Vega-specific initialization can go here
        // e.g., initialize game systems, load resources, etc.
    }

    void VegaApplication::onDestroy() {
        // Print Vega-specific cleanup logic first
        LOG_INFO("VegaApplication onDestroy: Cleaning up Vega-specific resources.");
        
        // Then call base class onDestroy
        polaris::Application::onDestroy();
        
        // Additional Vega-specific cleanup can go here
        // e.g., save game state, cleanup game systems, etc.
    }
} // namespace vega