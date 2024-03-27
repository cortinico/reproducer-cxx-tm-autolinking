#include "NativeCxxModuleExample.h"

namespace facebook::react
{

    NativeCxxModuleExample::NativeCxxModuleExample(
        std::shared_ptr<CallInvoker> jsInvoker)
        : NativeReproducerCxxTmAutolinkingCxxSpec(std::move(jsInvoker)) {}

    double NativeCxxModuleExample::multiply(jsi::Runtime &rt, double a, double b)
    {
        return a * b;
    }
}