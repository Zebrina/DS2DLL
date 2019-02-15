#pragma once

#include "ClassMacros.h"

class CrossOverUtil {
public:
	DefineSingleton(CrossOverUtil, 0x4013d7);

	DefineMethod(ActivateMasterCode, 0x401da0, void, Params(const char* unk1), Args(unk1));
	DefineMethod(HideCrossoverInterface, 0x401d70, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCShowCrossoverInterface, 0x402584, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(ShowCrossoverInterface, 0x40240a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SShowCrossoverInterface, 0x402668, void, Params(const Goid_* unk1), Args(unk1));
};
