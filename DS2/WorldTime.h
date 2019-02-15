#pragma once

#include "ClassMacros.h"

class WorldTime {
public:
	DefineSingleton(WorldTime, 0x40a611);

	DefineMethod(RCSetServerTime, 0x83a6f6, void, Params(double unk1), Args(unk1));
	DefineConstMethod(GetRealTime, 0x409631, double, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTime, 0x40962d, double, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSecondsElapsed, 0x409637, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSimCount, 0x40963b, unsigned int, NO_PARAMS, NO_ARGS);
};
