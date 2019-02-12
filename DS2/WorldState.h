#pragma once

#include "Enums.h"
#include "FuBi.h"

#include "ClassMacros.h"

class WorldState {
public:
	DefineSingleton(WorldState, 0x40a1d2);

	/*WorldState*/ private: /*static*/ WorldState* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a1d2
	/*WorldState*/ private: FuBi::Cookie__* /*__thiscall*/ RCSetPreviousWorldStateOnMachine(unsigned long unk1, eWorldState unk2, double unk3); //0x007d5d7d
	/*WorldState*/ private: FuBi::Cookie__* /*__thiscall*/ RCSetWorldStateOnMachine(unsigned long unk1, eWorldState unk2, eWorldState unk3, double unk4); //0x007d5c39
	/*WorldState*/ public: bool /*__thiscall*/ IsStateChangePending(); //0x00408352
	/*WorldState*/ public: bool /*__thiscall*/ IsTransitionValid(eWorldState unk1); //0x007d6036
	/*WorldState*/ public: eWorldState /*__thiscall*/ GetCurrentState() const; //0x0040834a
	/*WorldState*/ public: eWorldState /*__thiscall*/ GetPendingState() const; //0x0040834e
	/*WorldState*/ public: eWorldState /*__thiscall*/ GetPreviousState() const; //0x00408346
	/*WorldState*/ public: int /*__thiscall*/ Request(eWorldState unk1, double unk2); //0x007d5ae0
	/*WorldState*/ public: int /*__thiscall*/ Request(eWorldState unk1); //0x0040832b
	/*WorldState*/ public: void /*__thiscall*/ ForceUpdate(); //0x00408341
	/*WorldState*/ public: void /*__thiscall*/ RCSetWorldStateIfInGame(unsigned long unk1, eWorldState unk2); //0x007d5ee4
};
