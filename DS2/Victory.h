#pragma once

#include "ClassMacros.h"

enum eGameStat;

class Victory {
public:
	DefineSingleton(Victory, 0x4243b9);

	/*Victory*/ private: /*static*/ Victory* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004243b9
	/*Victory*/ public: bool /*__thiscall*/ IsVictoryConditionMet(const char* unk1, int unk2); //0x008ee12f
	/*Victory*/ public: bool /*__thiscall*/ IsVictoryConditionMet(const char* unk1); //0x008ee0ec
	/*Victory*/ public: bool /*__thiscall*/ SetVictoryConditionValue(const char* unk1, int unk2); //0x008ee24e
	/*Victory*/ public: double /*__thiscall*/ GetGameTimeElapsed(); //0x008eccf5
	/*Victory*/ public: int /*__thiscall*/ GetGameStat(const char* unk1); //0x008ebcb6
	/*Victory*/ public: int /*__thiscall*/ GetPlayerStat(const char* unk1, const PlayerId_* unk2); //0x008ebc89
	/*Victory*/ public: int /*__thiscall*/ GetTeamStat(const char* unk1, int unk2); //0x008ebc9e
	/*Victory*/ public: int /*__thiscall*/ GetVictoryConditionValue(const char* unk1); //0x008ee211
	/*Victory*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetGameEnded(bool unk1); //0x008f2296
	/*Victory*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetGameType(const gpbstring<char>& unk1, unsigned long unk2); //0x008ebc6e
	/*Victory*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetPlayerStat(int unk1, int unk2, int unk3, unsigned long unk4); //0x008ee55b
	/*Victory*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetTeamStat(int unk1, int unk2, int unk3, unsigned long unk4); //0x008ee6e3
	/*Victory*/ public: FuBi::Cookie__* /*__thiscall*/ RSRequestGameEnd(const PlayerId_* unk1); //0x008f6ea6
	/*Victory*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetGameEnded(bool unk1); //0x008f7019
	/*Victory*/ public: void /*__thiscall*/ RCClearPlayerStats(unsigned long unk1); //0x008ee3ab
	/*Victory*/ public: void /*__thiscall*/ RCDisplayMessage(const char* unk1); //0x008ebcc5
	/*Victory*/ public: void /*__thiscall*/ RCSetMainCampaignWon(bool unk1); //0x008f1940
	/*Victory*/ public: void /*__thiscall*/ RCSetTeamVictoryConditionMet(const char* unk1, bool unk2, int unk3); //0x008ef03c
	/*Victory*/ public: void /*__thiscall*/ RCSetVictoryConditionMet(const char* unk1, bool unk2); //0x008eef54
	/*Victory*/ public: void /*__thiscall*/ RCSyncEndGameTimeline(unsigned long unk1, const_mem_ptr unk2); //0x008f66ca
	/*Victory*/ public: void /*__thiscall*/ RSSetMainCampaignWon(bool unk1); //0x008f238a
	/*Victory*/ public: void /*__thiscall*/ SDisplayMessage(const char* unk1); //0x008ef4f9
	/*Victory*/ public: void /*__thiscall*/ SDisplayMessage1Party(const char* unk1, Go* unk2); //0x008ef544
	/*Victory*/ public: void /*__thiscall*/ SDisplayMessage2Party(const char* unk1, Go* unk2, Go* unk3); //0x008ef5ba
	/*Victory*/ public: void /*__thiscall*/ SIncrementStat(const char* unk1, Player* unk2, int unk3); //0x008ef1a3
	/*Victory*/ public: void /*__thiscall*/ SLeaderMessage(eGameStat unk1, const char* unk2); //0x008ef6a5
	/*Victory*/ public: void /*__thiscall*/ SRequestGameEndAll(); //0x008f6ff9
	/*Victory*/ public: void /*__thiscall*/ SSetTeamVictoryConditionMet(const char* unk1, bool unk2, int unk3); //0x008ef4ad
	/*Victory*/ public: void /*__thiscall*/ SSetVictoryConditionMet(const char* unk1, bool unk2); //0x008ef4a4
};
