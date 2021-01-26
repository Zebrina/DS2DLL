#pragma once

#include "Enums.h"
#include "FuBi.h"

class Victory {
public:
	$Singleton(Victory, 0x004243b9);

	$Method(0x008ee12f, IsVictoryConditionMet, bool, const char* unk1, int unk2);
	$Method(0x008ee0ec, IsVictoryConditionMet, bool, const char* unk1);
	$Method(0x008ee24e, SetVictoryConditionValue, bool, const char* unk1, int unk2);
	$Method(0x008eccf5, GetGameTimeElapsed, double);
	$Method(0x008ebcb6, GetGameStat, int, const char* unk1);
	$Method(0x008ebc89, GetPlayerStat, int, const char* unk1, const PlayerId* unk2);
	$Method(0x008ebc9e, GetTeamStat, int, const char* unk1, int unk2);
	$Method(0x008ee211, GetVictoryConditionValue, int, const char* unk1);
	$Method(0x008f2296, RCSetGameEnded, FuBiCookie*, bool unk1);
	$Method(0x008ebc6e, RCSetGameType, FuBiCookie*, const GPBString& unk1, uint unk2);
	$Method(0x008ee55b, RCSetPlayerStat, FuBiCookie*, int unk1, int unk2, int unk3, uint unk4);
	$Method(0x008ee6e3, RCSetTeamStat, FuBiCookie*, int unk1, int unk2, int unk3, uint unk4);
	$Method(0x008f6ea6, RSRequestGameEnd, FuBiCookie*, const PlayerId* unk1);
	$Method(0x008f7019, RSSetGameEnded, FuBiCookie*, bool unk1);
	$Method(0x008ee3ab, RCClearPlayerStats, void, uint unk1);
	$Method(0x008ebcc5, RCDisplayMessage, void, const char* unk1);
	$Method(0x008f1940, RCSetMainCampaignWon, void, bool unk1);
	$Method(0x008ef03c, RCSetTeamVictoryConditionMet, void, const char* unk1, bool unk2, int unk3);
	$Method(0x008eef54, RCSetVictoryConditionMet, void, const char* unk1, bool unk2);
	$Method(0x008f66ca, RCSyncEndGameTimeline, void, uint unk1, const_mem_ptr unk2);
	$Method(0x008f238a, RSSetMainCampaignWon, void, bool unk1);
	$Method(0x008ef4f9, SDisplayMessage, void, const char* unk1);
	$Method(0x008ef544, SDisplayMessage1Party, void, const char* unk1, Go* unk2);
	$Method(0x008ef5ba, SDisplayMessage2Party, void, const char* unk1, Go* unk2, Go* unk3);
	$Method(0x008ef1a3, SIncrementStat, void, const char* unk1, Player* unk2, int unk3);
	$Method(0x008ef6a5, SLeaderMessage, void, eGameStat unk1, const char* unk2);
	$Method(0x008f6ff9, SRequestGameEndAll, void);
	$Method(0x008ef4ad, SSetTeamVictoryConditionMet, void, const char* unk1, bool unk2, int unk3);
	$Method(0x008ef4a4, SSetVictoryConditionMet, void, const char* unk1, bool unk2);
};
