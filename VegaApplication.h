#ifndef VEGAAPPLICATION_H
#define VEGAAPPLICATION_H

#include "../polaris/source/runtime/core/Application.h"

namespace vega {

class VegaApplication : public polaris::Application {
public:
    VegaApplication();
    ~VegaApplication() override;

    void OnCreated() override;
};

} // namespace vega

#endif // VEGAAPPLICATION_H 