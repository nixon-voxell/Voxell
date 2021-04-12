#pragma once

#ifdef VX_PLATFORM_WINDOWS

  #ifdef VX_BUILD_DLL
    #define VOXELL_API __declspec(dllexport)
  #else
    #define VOXELL_API __declspec(dllimport)
  #endif

#else
  #error Voxell only supports Windows!
#endif