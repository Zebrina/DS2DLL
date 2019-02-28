#pragma once

#define _MakeVersion(major, minor, rev) major##_##minor##_##rev
#define _MakeVersionStrEx(version) #version
#define _MakeVersionStr(major, minor, rev) _MakeVersionStrEx(major.minor.rev)

#define LOADER_VERSION_MAJOR 0
#define LOADER_VERSION_MINOR 1
#define LOADER_VERSION_REV 0

#define LOADER_VERSION _MakeVersion(LOADER_VERSION_MAJOR, LOADER_VERSION_MINOR, LOADER_VERSION_REV)
#define LOADER_VERSION_STR _MakeVersionStr(LOADER_VERSION_MAJOR, LOADER_VERSION_MINOR, LOADER_VERSION_REV)
