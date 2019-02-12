#pragma once

#include "ClassMacros.h"

class CrossOverUtil {
public:
	DefineSingleton(CrossOverUtil, 0x4013d7);

	/*CrossOverUtil*/ private: /*static*/ CrossOverUtil* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004013d7
	/*CrossOverUtil*/ public: void /*__thiscall*/ ActivateMasterCode(const char* unk1); //0x00401da0
	/*CrossOverUtil*/ public: void /*__thiscall*/ HideCrossoverInterface(); //0x00401d70
	/*CrossOverUtil*/ public: void /*__thiscall*/ RCShowCrossoverInterface(unsigned long unk1); //0x00402584
	/*CrossOverUtil*/ public: void /*__thiscall*/ ShowCrossoverInterface(); //0x0040240a
	/*CrossOverUtil*/ public: void /*__thiscall*/ SShowCrossoverInterface(const Goid_* unk1); //0x00402668
};
