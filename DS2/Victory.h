#pragma once

#include "ClassMacros.h"

enum eGameStat;

class Victory {
public:
	DefineSingleton(Victory, 0x4243b9);

	/*Victory*/ private: /*static*/ Victory* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004243b9
	DefineMethod(IsVictoryConditionMet, 0x8ee12f, bool, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(IsVictoryConditionMet, 0x8ee0ec, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(SetVictoryConditionValue, 0x8ee24e, bool, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(GetGameTimeElapsed, 0x8eccf5, double, Params(), Args());
	DefineMethod(GetGameStat, 0x8ebcb6, int, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(GetPlayerStat, 0x8ebc89, int, Params(const char* unk1, const PlayerId_* unk2), Args(const char* unk1, const PlayerId_* unk2));
	DefineMethod(GetTeamStat, 0x8ebc9e, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(GetVictoryConditionValue, 0x8ee211, int, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RCSetGameEnded, 0x8f2296, FuBi::Cookie__*, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetGameType, 0x8ebc6e, FuBi::Cookie__*, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(const gpbstring<char>& unk1, unsigned long unk2));
	DefineMethod(RCSetPlayerStat, 0x8ee55b, FuBi::Cookie__*, Params(int unk1, int unk2, int unk3, unsigned long unk4), Args(int unk1, int unk2, int unk3, unsigned long unk4));
	DefineMethod(RCSetTeamStat, 0x8ee6e3, FuBi::Cookie__*, Params(int unk1, int unk2, int unk3, unsigned long unk4), Args(int unk1, int unk2, int unk3, unsigned long unk4));
	DefineMethod(RSRequestGameEnd, 0x8f6ea6, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RSSetGameEnded, 0x8f7019, FuBi::Cookie__*, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCClearPlayerStats, 0x8ee3ab, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCDisplayMessage, 0x8ebcc5, void, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RCSetMainCampaignWon, 0x8f1940, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetTeamVictoryConditionMet, 0x8ef03c, void, Params(const char* unk1, bool unk2, int unk3), Args(const char* unk1, bool unk2, int unk3));
	DefineMethod(RCSetVictoryConditionMet, 0x8eef54, void, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(RCSyncEndGameTimeline, 0x8f66ca, void, Params(unsigned long unk1, const_mem_ptr unk2), Args(unsigned long unk1, const_mem_ptr unk2));
	DefineMethod(RSSetMainCampaignWon, 0x8f238a, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SDisplayMessage, 0x8ef4f9, void, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(SDisplayMessage1Party, 0x8ef544, void, Params(const char* unk1, Go* unk2), Args(const char* unk1, Go* unk2));
	DefineMethod(SDisplayMessage2Party, 0x8ef5ba, void, Params(const char* unk1, Go* unk2, Go* unk3), Args(const char* unk1, Go* unk2, Go* unk3));
	DefineMethod(SIncrementStat, 0x8ef1a3, void, Params(const char* unk1, Player* unk2, int unk3), Args(const char* unk1, Player* unk2, int unk3));
	DefineMethod(SLeaderMessage, 0x8ef6a5, void, Params(eGameStat unk1, const char* unk2), Args(eGameStat unk1, const char* unk2));
	DefineMethod(SRequestGameEndAll, 0x8f6ff9, void, Params(), Args());
	DefineMethod(SSetTeamVictoryConditionMet, 0x8ef4ad, void, Params(const char* unk1, bool unk2, int unk3), Args(const char* unk1, bool unk2, int unk3));
	DefineMethod(SSetVictoryConditionMet, 0x8ef4a4, void, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
};
