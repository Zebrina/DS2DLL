#pragma once

#include "ClassMacros.h"

class TimeMgr {
public:
	DefineSingleton(TimeMgr, 0x42438f);

	/*TimeMgr*/ private: /*static*/ TimeMgr* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0042438f
	DefineMethod(AddPreGUIRapiFader, 0x8ffcab, void, Params(bool unk1, float unk2), Args(bool unk1, float unk2));
	DefineMethod(AddRapiFader, 0x8ffc6f, void, Params(bool unk1, float unk2, unsigned long unk3), Args(bool unk1, float unk2, unsigned long unk3));
	DefineMethod(AddRapiFader, 0x8ffc31, void, Params(bool unk1, float unk2), Args(bool unk1, float unk2));
} typedef TimeManager;
