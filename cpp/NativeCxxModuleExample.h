#ifndef AUTOLINKEDMODULE_H
#define AUTOLINKEDMODULE_H

#include <RNReproducerCxxTmAutolinkingSpecJSI.h>

namespace facebook::react
{

    class NativeCxxModuleExample
        : public NativeReproducerCxxTmAutolinkingCxxSpec<NativeCxxModuleExample>
    {
    public:
        NativeCxxModuleExample(std::shared_ptr<CallInvoker> jsInvoker);

        double multiply(jsi::Runtime &rt, double a, double b);
    };
}

#endif
