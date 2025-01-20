#pragma once

#include "../util/config/config.h"

namespace dxvk {

  struct DxvkOptions {
    DxvkOptions() { }
    DxvkOptions(const Config& config);

    /// Enable state cache
    bool enableStateCache;

    /// Enables OpenVR loading
    bool enableOpenVR;

    /// Number of compiler threads
    /// when using the state cache
    int32_t numCompilerThreads;

    // Enable async pipelines
    bool enableAsync;

    /// Number of compiler threads
    /// when using async pipelines
    int32_t numAsyncThreads;

    /// Shader-related options
    Tristate useRawSsbo;
    Tristate useEarlyDiscard;

    /// HUD elements
    std::string hud;
  };

}