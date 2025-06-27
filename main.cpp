#include <iostream>
#include <memory>

#include "VegaApplication.h"


int main(int argc, char **argv) {
    std::cout << "Vega Win32 Main" << std::endl;

    // Create the application
    const auto app = std::make_unique<vega::VegaApplication>();
    app->initialize();

    return 0;
}




