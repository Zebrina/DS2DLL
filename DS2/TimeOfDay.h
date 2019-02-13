#pragma once

#include "ClassMacros.h"

class TimeOfDay {
public:
	DefineSingleton(TimeOfDay, 0x41426b);

	/*TimeOfDay*/ private: /*static*/ TimeOfDay* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0041426b
	/*TimeOfDay*/ public: unsigned int /*__thiscall*/ GetHour() const; //0x004126d4
	/*TimeOfDay*/ public: unsigned int /*__thiscall*/ GetMinute() const; //0x004126d8
	DefineMethod(RCSetTime, 0x8ffd7f, void, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
};
