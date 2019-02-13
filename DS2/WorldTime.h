#pragma once

#include "ClassMacros.h"

class WorldTime {
public:
	DefineSingleton(WorldTime, 0x40a611);

	/*WorldTime*/ private: /*static*/ WorldTime* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a611
	DefineMethod(RCSetServerTime, 0x83a6f6, void, Params(double unk1), Args(double unk1));
	DefineConstMethod(GetRealTime, 0x409631, double, Params(), Args());
	DefineConstMethod(GetTime, 0x40962d, double, Params(), Args());
	DefineConstMethod(GetSecondsElapsed, 0x409637, float, Params(), Args());
	/*WorldTime*/ public: unsigned int /*__thiscall*/ GetSimCount() const; //0x0040963b
};
