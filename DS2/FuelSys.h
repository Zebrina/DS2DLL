#pragma once

#include "ClassMacros.h"

class FuelSys {
public:
	DefineSingleton(FuelSys, 0x40a63d);

	/*FuelSys*/ private: /*static*/ FuelSys* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a63d
	DefineMethod(DebugShowHandleAccess, 0x409714, bool, Params(), Args());
	DefineMethod(DebugSetShowHandleAccess, 0x409707, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetUncachingEnabled, 0x640c04, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(Unload, 0x640b84, void, Params(), Args());
};
