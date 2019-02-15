#pragma once

#include "ClassMacros.h"

class TimeOfDay {
public:
	DefineSingleton(TimeOfDay, 0x41426b);

	DefineConstMethod(GetHour, 0x4126d4, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMinute, 0x4126d8, unsigned int, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSetTime, 0x8ffd7f, void, Params(unsigned long unk1, unsigned long unk2), Args(unk1, unk2));
};
