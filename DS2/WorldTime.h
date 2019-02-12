#pragma once

#include "ClassMacros.h"

class WorldTime {
public:
	DefineSingleton(WorldTime, 0x40a611);

	/*WorldTime*/ private: /*static*/ WorldTime* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a611
	/*WorldTime*/ private: void /*__thiscall*/ RCSetServerTime(double unk1); //0x0083a6f6
	/*WorldTime*/ public: double /*__thiscall*/ GetRealTime() const; //0x00409631
	/*WorldTime*/ public: double /*__thiscall*/ GetTime() const; //0x0040962d
	/*WorldTime*/ public: float /*__thiscall*/ GetSecondsElapsed() const; //0x00409637
	/*WorldTime*/ public: unsigned int /*__thiscall*/ GetSimCount() const; //0x0040963b
};
