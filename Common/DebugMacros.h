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

#define OFFSETOF(s, m) offsetof(s, m)

#define _ExpandArg(arg) #arg

#define ASSERT(boolexpr) if (boolexpr) {}
#define STATIC_ASSERT(boolexpr) static_assert(boolexpr, #boolexpr)
#define STATIC_ASSERT_SIZEOF(type, size) static_assert(sizeof(type) == size, "Size of " #type " must be " _ExpandArg(size) " bytes.")
#define STATIC_ASSERT_OFFSETOF(type, member, offset) static_assert(offsetof(type, member) == offset, "Offset of " _ExpandArg(member) " in " _ExpandArg(type) " must be " _ExpandArg(offset) " bytes.")

STATIC_ASSERT_SIZEOF(bool, 0x1);
STATIC_ASSERT_SIZEOF(short, 0x2);
STATIC_ASSERT_SIZEOF(int, 0x4);
STATIC_ASSERT_SIZEOF(long, 0x4);
STATIC_ASSERT_SIZEOF(long long, 0x8);
