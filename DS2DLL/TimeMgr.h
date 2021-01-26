#pragma once

class TimeMgr {
public:
	$Singleton(TimeMgr, 0x0042438f);

	$Method(0x008ffcab, AddPreGUIRapiFader, void, bool unk1, float unk2);
	$Method(0x008ffc31, AddRapiFader, void, bool unk1, float unk2);
	$Method(0x008ffc6f, AddRapiFader, void, bool unk1, float unk2, uint unk3);
};

typedef TimeMgr TimeManager;
