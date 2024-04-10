module.exports = {
  dependency: {
    platforms: {
      android: {
        cxxModuleCMakeListsModuleName: "react-native-reproducer-cxx-tm-autolinking",
        cxxModuleCMakeListsPath: "./CMakeLists.txt",
        cxxModuleHeaderName: "NativeCxxModuleExample"
      },
    },
  },
};