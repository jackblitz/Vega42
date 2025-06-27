#include "VegaApplication.h"
#include <iostream>

namespace vega {
    VegaApplication::VegaApplication() {
        std::cout << "VegaApplication constructed." << std::endl;
    }

    VegaApplication::~VegaApplication() {
        std::cout << "VegaApplication destructed." << std::endl;
    }


    void VegaApplication::OnCreated() {
        // Print Vega-specific window creation logic first
        std::cout << "VegaApplication OnCreated: Window is now available to the application!" << std::endl;

        // Then call base class OnCreated
        polaris::Application::OnCreated();
    }
} // namespace vega