#ifndef VEGAAPPLICATION_H
#define VEGAAPPLICATION_H

#include "../polaris/source/runtime/core/Application.h"

namespace vega {

class VegaApplication : public polaris::Application {
public:
    /**
     * @brief Constructs a VegaApplication object.
     */
    VegaApplication();

    /**
     * @brief Destroys the VegaApplication object.
     */
    ~VegaApplication() override;

    /**
     * @brief Called when the application is created and the window is available.
     * This method is overridden to include Vega-specific initialization logic.
     */
    void OnCreated() override;

    /**
     * @brief Called when the application is being destroyed.
     * This method is overridden to include Vega-specific cleanup logic.
     */
    void onDestroy() override;
};

} // namespace vega

#endif // VEGAAPPLICATION_H 