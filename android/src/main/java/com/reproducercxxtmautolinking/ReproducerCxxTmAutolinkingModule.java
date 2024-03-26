package com.reproducercxxtmautolinking;

import androidx.annotation.NonNull;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.module.annotations.ReactModule;

@ReactModule(name = ReproducerCxxTmAutolinkingModule.NAME)
public class ReproducerCxxTmAutolinkingModule extends NativeReproducerCxxTmAutolinkingSpec {
  public static final String NAME = "ReproducerCxxTmAutolinking";

  public ReproducerCxxTmAutolinkingModule(ReactApplicationContext reactContext) {
    super(reactContext);
  }

  @Override
  @NonNull
  public String getName() {
    return NAME;
  }

  static {
    System.loadLibrary("react-native-reproducer-cxx-tm-autolinking");
  }

  private static native double nativeMultiply(double a, double b);

  // Example method
  // See https://reactnative.dev/docs/native-modules-android
  @Override
  public double multiply(double a, double b) {
    return nativeMultiply(a, b);
  }
}
