#include <iostream>
#include "../polaris/library.h"

int main(int argc, char **argv) {

    std::cout << "Vega Win32 Application" << std::endl;

    // Call the hello function which creates the SDL3 window with Vulkan
    //polaris::Renderer *renderer = new polaris::Renderer();

    /*while (true) {
        renderer->render();
    }*/
    hello();
    return 0;
}




