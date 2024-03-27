cmake_minimum_required(VERSION 3.4.1)
project(ReproducerCxxTmAutolinking)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 17)

add_library(react-native-reproducer-cxx-tm-autolinking            SHARED
            ../cpp/react-native-reproducer-cxx-tm-autolinking.cpp
            ../cpp/NativeCxxModuleExample.cpp
            cpp-adapter.cpp
)
target_link_libraries(react-native-reproducer-cxx-tm-autolinking react_codegen_RNReproducerCxxTmAutolinkingSpec)

# Specifies a path to native header files.
target_include_directories(react-native-reproducer-cxx-tm-autolinking PUBLIC ../cpp)
