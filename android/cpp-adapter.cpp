#include <jni.h>
#include "react-native-reproducer-cxx-tm-autolinking.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_reproducercxxtmautolinking_ReproducerCxxTmAutolinkingModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return reproducercxxtmautolinking::multiply(a, b);
}
