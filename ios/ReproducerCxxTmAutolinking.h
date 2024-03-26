#ifdef __cplusplus
#import "react-native-reproducer-cxx-tm-autolinking.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNReproducerCxxTmAutolinkingSpec.h"

@interface ReproducerCxxTmAutolinking : NSObject <NativeReproducerCxxTmAutolinkingSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ReproducerCxxTmAutolinking : NSObject <RCTBridgeModule>
#endif

@end
