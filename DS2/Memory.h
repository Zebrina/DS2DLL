#pragma once

#include <cstdint>

#include "ClassMacros.h"

struct const_mem_ptr {

} typedef ConstMemPtr;

struct VoidPtr {

};

namespace Memory {
	/*Memory*/ VoidPtr* /*__cdecl*/ Malloc(int unk1); //0x0099630f
	/*Memory*/ VoidPtr* /*__cdecl*/ Realloc(VoidPtr* unk1, int unk2); //0x0099631d
	/*Memory*/ void /*__cdecl*/ Free(VoidPtr* unk1); //0x0099632f
};

struct VoidPtr {

};
