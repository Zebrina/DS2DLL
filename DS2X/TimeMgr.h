#pragma once

class TimeMgr {
public:
	DefineSingleton(TimeMgr, 0x42438f);

	DefineMethod(AddPreGUIRapiFader, 0x8ffcab, void, Params(bool unk1, float unk2), Args(unk1, unk2));
	DefineMethod(AddRapiFader, 0x8ffc31, void, Params(bool unk1, float unk2), Args(unk1, unk2));
	DefineMethod(AddRapiFader, 0x8ffc6f, void, Params(bool unk1, float unk2, unsigned long unk3), Args(unk1, unk2, unk3));
} typedef TimeManager;
