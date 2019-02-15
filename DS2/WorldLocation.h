#pragma once

#include "ClassMacros.h"

struct WorldLocation {
	DefineStaticMethod(FUBI_PodGetSize, 0x403ede, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMinor, 0x403ee5, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetClothMapHideGroup, 0x4060e0, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetClothMapRollover, 0x4060b4, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetClothMapShowGroup, 0x4060ca, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetClothMapWindow, 0x4060f6, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetName, 0x40609e, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetScreenNameAnsi, 0x405341, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetClothMapPos, 0x403ee9, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetId, 0x403ee2, int, NO_PARAMS, NO_ARGS);
};
