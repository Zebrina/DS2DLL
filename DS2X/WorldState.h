#pragma once

#include "Enums.h"
#include "FuBi.h"

class WorldState {
public:
	DefineSingleton(WorldState, 0x40a1d2);

	DefineMethod(RCSetPreviousWorldStateOnMachine, 0x7d5d7d, FuBi::Cookie__*, Params(unsigned long unk1, eWorldState unk2, double unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetWorldStateOnMachine, 0x7d5c39, FuBi::Cookie__*, Params(unsigned long unk1, eWorldState unk2, eWorldState unk3, double unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(IsStateChangePending, 0x408352, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsTransitionValid, 0x7d6036, bool, Params(eWorldState unk1), Args(unk1));
	DefineConstMethod(GetCurrentState, 0x40834a, eWorldState, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPendingState, 0x40834e, eWorldState, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPreviousState, 0x408346, eWorldState, NO_PARAMS, NO_ARGS);
	DefineMethod(Request, 0x7d5ae0, int, Params(eWorldState unk1, double unk2), Args(unk1, unk2));
	DefineMethod(Request, 0x40832b, int, Params(eWorldState unk1), Args(unk1));
	DefineMethod(ForceUpdate, 0x408341, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSetWorldStateIfInGame, 0x7d5ee4, void, Params(unsigned long unk1, eWorldState unk2), Args(unk1, unk2));
};
