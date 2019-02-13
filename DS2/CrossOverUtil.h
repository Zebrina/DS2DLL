#pragma once

#include "ClassMacros.h"

class CrossOverUtil {
public:
	DefineSingleton(CrossOverUtil, 0x4013d7);

	/*CrossOverUtil*/ private: /*static*/ CrossOverUtil* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004013d7
	DefineMethod(ActivateMasterCode, 0x401da0, void, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(HideCrossoverInterface, 0x401d70, void, Params(), Args());
	DefineMethod(RCShowCrossoverInterface, 0x402584, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(ShowCrossoverInterface, 0x40240a, void, Params(), Args());
	DefineMethod(SShowCrossoverInterface, 0x402668, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
};
