#pragma once

#include "ClassMacros.h"

struct VoidPtr;

namespace Memory {
	DefineFunction(Malloc, 0x99630f, VoidPtr*, Params(int unk1), Args(unk1));
	DefineFunction(Realloc, 0x99631d, VoidPtr*, Params(VoidPtr* unk1, int unk2), Args(unk1, unk2));
	DefineFunction(Free, 0x99632f, void, Params(VoidPtr* unk1), Args(unk1));
};

struct const_mem_ptr {

} typedef ConstMemPtr;

struct VoidPtr {

};
