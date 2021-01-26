#pragma once

#include <cstddef>

#ifdef _DEBUG
#define DEBUG_ONLY(proc) do { proc; } while (false)
#define DEBUG_ONLY_IF(boolexpr, proc) do { if (boolexpr) { proc; } } while (false)
#define RELEASE_ONLY(proc)
#define RELEASE_ONLY_IF(boolexpr, proc)
#else
#define DEBUG_ONLY(proc)
#define DEBUG_ONLY_IF(boolexpr, proc)
#define RELEASE_ONLY(proc) do { proc; } while (false)
#define RELEASE_ONLY_IF(boolexpr, proc) do { if (boolexpr) { proc; } } while (false)
#endif // __DEBUG

#define _ExpandArg(arg) #arg

#define ASSERT(boolexpr) if (!(boolexpr)) {}
#define STATIC_ASSERT(boolexpr) static_assert(boolexpr, #boolexpr)
#define STATIC_ASSERT_OFFSETOF(type, member, offset) static_assert(offsetof(type, member) == offset, "Offset of " _ExpandArg(member) " in " _ExpandArg(type) " must be " _ExpandArg(offset) " bytes.")

STATIC_ASSERT(sizeof(bool) == 0x1);
STATIC_ASSERT(sizeof(short) == 0x2);
STATIC_ASSERT(sizeof(int) == 0x4);
STATIC_ASSERT(sizeof(long) == 0x4);
STATIC_ASSERT(sizeof(long long) == 0x8);
