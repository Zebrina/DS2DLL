#pragma once

#include "ClassMacros.h"

class UIWindowVec {
public:
	DefineConstMethod(Empty, 0x50356d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get, 0x503a2e, UIWindow*, Params(int unk1), Args(unk1));
	DefineConstMethod(Size, 0x503568, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Add, 0x504023, void, Params(UIWindow* unk1), Args(unk1));
	DefineMethod(Clear, 0x503c56, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Set, 0x503a40, void, Params(int unk1, UIWindow* unk2), Args(unk1, unk2));
};
