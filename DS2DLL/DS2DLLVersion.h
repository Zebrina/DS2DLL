#pragma once

#define DS2DLL_VERSION_MAJOR 0
#define DS2DLL_VERSION_MINOR 1
#define DS2DLL_VERSION_PATCH 0
#define __DS2DLL_VERSION_STR2(major, minor, patch) #major "." #minor "." #patch
#define __DS2DLL_VERSION_STR1(major, minor, patch) __DS2DLL_VERSION_STR2(major, minor, patch)
#define DS2DLL_VERSION __DS2DLL_VERSION_STR1(DS2DLL_VERSION_MAJOR, DS2DLL_VERSION_MINOR, DS2DLL_VERSION_PATCH)
