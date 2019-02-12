#pragma once

#include "ClassMacros.h"

class FuelSys {
public:
	DefineSingleton(FuelSys, 0x40a63d);

	/*FuelSys*/ private: /*static*/ FuelSys* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a63d
	/*FuelSys*/ public: bool /*__thiscall*/ DebugShowHandleAccess(); //0x00409714
	/*FuelSys*/ public: void /*__thiscall*/ DebugSetShowHandleAccess(bool unk1); //0x00409707
	/*FuelSys*/ public: void /*__thiscall*/ SetUncachingEnabled(bool unk1); //0x00640c04
	/*FuelSys*/ public: void /*__thiscall*/ Unload(); //0x00640b84
};
