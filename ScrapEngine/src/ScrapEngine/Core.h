#pragma once

#ifdef SE_PLATFORM_WINDOWS
   #ifdef SE_BUILD_DLL
      #define SCRAPENGINE_API __declspec(dllexport)
   #else
      #define SCRAPENGINE_API __declspec(dllimport)
   #endif 
#else
   #error ScrapEngine only supports Windows!
#endif

#define BIT(x) (1 << x)