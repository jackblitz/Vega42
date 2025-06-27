#include "VegaApplication.h"
#include <iostream>
#include <Logger.h>
#include <stdexcept>

namespace vega {
    /**
     * @brief Constructs a VegaApplication object.
     * Initializes Vega-specific components and logs the construction.
     */
    VegaApplication::VegaApplication() {
        LOG_INFO("VegaApplication constructed");
    }

    /**
     * @brief Destroys the VegaApplication object.
     * Cleans up Vega-specific resources and logs the destruction.
     */
    VegaApplication::~VegaApplication() {
        LOG_INFO("VegaApplication destructed");
    }


    /**
     * @brief Called when the application is created and the window is available.
     * This method is overridden to include Vega-specific initialization logic.
     * It logs the event and then calls the base class's OnCreated method.
     */
    void VegaApplication::OnCreated() {

        // Print Vega-specific window creation logic first
        LOG_INFO("VegaApplication OnCreated: Window is now available to the application!");

        // Then call base class OnCreated
        polaris::Application::OnCreated();

        // Additional Vega-specific initialization can go here
        // e.g., initialize game systems, load resources, etc.
    }

    /**
     * @brief Called when the application is being destroyed.
     * This method is overridden to include Vega-specific cleanup logic.
     * It logs the event and then calls the base class's onDestroy method.
     */
    void VegaApplication::onDestroy() {
        // Print Vega-specific cleanup logic first
        LOG_INFO("VegaApplication onDestroy: Cleaning up Vega-specific resources.");
        
        // Then call base class onDestroy
        polaris::Application::onDestroy();
        
        // Additional Vega-specific cleanup can go here
        // e.g., save game state, cleanup game systems, etc.
    }
} // namespace vega