#pragma once

#include "Enums.h"
#include "FuBi.h"

#include "ClassMacros.h"

class WorldState {
public:
	DefineSingleton(WorldState, 0x40a1d2);

	/*WorldState*/ private: /*static*/ WorldState* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a1d2
	DefineMethod(RCSetPreviousWorldStateOnMachine, 0x7d5d7d, FuBi::Cookie__*, Params(unsigned long unk1, eWorldState unk2, double unk3), Args(unsigned long unk1, eWorldState unk2, double unk3));
	DefineMethod(RCSetWorldStateOnMachine, 0x7d5c39, FuBi::Cookie__*, Params(unsigned long unk1, eWorldState unk2, eWorldState unk3, double unk4), Args(unsigned long unk1, eWorldState unk2, eWorldState unk3, double unk4));
	DefineMethod(IsStateChangePending, 0x408352, bool, Params(), Args());
	DefineMethod(IsTransitionValid, 0x7d6036, bool, Params(eWorldState unk1), Args(eWorldState unk1));
	DefineConstMethod(GetCurrentState, 0x40834a, eWorldState, Params(), Args());
	DefineConstMethod(GetPendingState, 0x40834e, eWorldState, Params(), Args());
	DefineConstMethod(GetPreviousState, 0x408346, eWorldState, Params(), Args());
	DefineMethod(Request, 0x7d5ae0, int, Params(eWorldState unk1, double unk2), Args(eWorldState unk1, double unk2));
	DefineMethod(Request, 0x40832b, int, Params(eWorldState unk1), Args(eWorldState unk1));
	DefineMethod(ForceUpdate, 0x408341, void, Params(), Args());
	DefineMethod(RCSetWorldStateIfInGame, 0x7d5ee4, void, Params(unsigned long unk1, eWorldState unk2), Args(unsigned long unk1, eWorldState unk2));
};
