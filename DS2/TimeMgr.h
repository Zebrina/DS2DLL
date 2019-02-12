#pragma once

#include "ClassMacros.h"

class TimeMgr {
public:
	DefineSingleton(TimeMgr, 0x42438f);

	/*TimeMgr*/ private: /*static*/ TimeMgr* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0042438f
	/*TimeMgr*/ public: void /*__thiscall*/ AddPreGUIRapiFader(bool unk1, float unk2); //0x008ffcab
	/*TimeMgr*/ public: void /*__thiscall*/ AddRapiFader(bool unk1, float unk2, unsigned long unk3); //0x008ffc6f
	/*TimeMgr*/ public: void /*__thiscall*/ AddRapiFader(bool unk1, float unk2); //0x008ffc31
} typedef TimeManager;
