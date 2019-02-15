#pragma once

#include "ClassMacros.h"

class TimeColl {
public:
	DefineConstMethod(Empty, 0x503520, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(Get, 0x50352b, float, Params(int unk1), Args(unk1));
	DefineConstMethod(Size, 0x503517, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Append, 0x503c46, void, Params(float unk1), Args(unk1));
	DefineMethod(Set, 0x50353a, void, Params(int unk1, float unk2), Args(unk1, unk2));
};
