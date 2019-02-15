#pragma once

#include "ClassMacros.h"

struct Vector3Coll {
	DefineConstMethod(Empty, 0x503481, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get, 0x50348c, const vector_3&, Params(int unk1), Args(unk1));
	DefineConstMethod(Size, 0x503475, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Get, 0x50349e, vector_3&, Params(int unk1), Args(unk1));
	DefineMethod(Append, 0x503c34, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(Set, 0x5034b0, void, Params(int unk1, const vector_3& unk2), Args(unk1, unk2));
};
