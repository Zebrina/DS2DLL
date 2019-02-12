#pragma once

#include "ClassMacros.h"

enum eDropInvOption;
enum ePlayerController;

class Server {
public:
	DefineSingleton(Server, 0x503684);

	/*Server*/ private: /*static*/ Server* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00503684
	/*Server*/ private: FuBi::Cookie__* /*__thiscall*/ RCCreatePlayerOnMachine(unsigned long unk1, const unsigned short* unk2, const PlayerId_* unk3, ePlayerController unk4, unsigned long unk5); //0x007c610c
	/*Server*/ private: FuBi::Cookie__* /*__thiscall*/ RCInitTeams(unsigned long unk1); //0x007c7a5c
	/*Server*/ private: FuBi::Cookie__* /*__thiscall*/ RCMarkPlayerForDeletion(const PlayerId_* unk1); //0x007c5caf
	/*Server*/ private: FuBi::Cookie__* /*__thiscall*/ RCSetGamePassword(const gpbstring<unsigned short>& unk1); //0x007c7899
	/*Server*/ private: FuBi::Cookie__* /*__thiscall*/ RCSyncOnMachineHelper(unsigned long unk1, const_mem_ptr unk2); //0x007c3e62
	/*Server*/ private: void /*__thiscall*/ RCKeepMeAlive(unsigned long unk1); //0x007c3165
	/*Server*/ private: void /*__thiscall*/ RSKeepMeAlive(); //0x007c3088
	/*Server*/ private: void /*__thiscall*/ SetLatencyQueryFrequency(int unk1); //0x007c3270
	/*Server*/ public: bool /*__thiscall*/ GetFriendlyHumanCharacters(Go* unk1, bool unk2, bool unk3, GopColl& unk4); //0x007c54bc
	/*Server*/ public: bool /*__thiscall*/ GetMachineIdsInWorldFrustum(const SiegePos& unk1, IntColl& unk2) const; //0x007c5984
	/*Server*/ public: bool /*__thiscall*/ HasPlayer(const PlayerId_* unk1) const; //0x007c47b7
	/*Server*/ public: bool /*__thiscall*/ IsPlayerHost(const PlayerId_* unk1); //0x007c4778
	/*Server*/ public: Go* /*__thiscall*/ GetScreenHero(); //0x007c3de3
	/*Server*/ public: Go* /*__thiscall*/ GetScreenParty(); //0x007c3dd4
	/*Server*/ public: Go* /*__thiscall*/ GetScreenStash(); //0x007c3e03
	/*Server*/ public: Player* /*__thiscall*/ GetComputerPlayer(); //0x007c47cc
	/*Server*/ public: Player* /*__thiscall*/ GetHumanPlayerOnMachine(unsigned long unk1); //0x007c3b5e
	/*Server*/ public: Player* /*__thiscall*/ GetLocalHumanPlayer(); //0x007c3bc1
	/*Server*/ public: Player* /*__thiscall*/ GetPlayer(const PlayerId_* unk1) const; //0x007c45c5
	/*Server*/ public: Player* /*__thiscall*/ GetPlayerAtIndex(int unk1) const; //0x007c3a91
	/*Server*/ public: eDropInvOption /*__thiscall*/ GetDropInvOption() const; //0x007c3240
	/*Server*/ public: float /*__thiscall*/ GetAveragePlayerLatency() const; //0x007c3d23
	/*Server*/ public: float /*__thiscall*/ GetMaxPlayerLatency() const; //0x007c3c96
	/*Server*/ public: int /*__thiscall*/ GetAllHumanPartyMembers(GopColl& unk1); //0x007c3c41
	/*Server*/ public: int /*__thiscall*/ GetAllHumanPlayerHeros(GopColl& unk1); //0x007c590b
	/*Server*/ public: int /*__thiscall*/ GetFriendlyHumanParties(Go* unk1, bool unk2, bool unk3, GopColl& unk4); //0x007c55c4
	/*Server*/ public: int /*__thiscall*/ GetLocalHumanPlayerTeamId(); //0x007c3c2e
	/*Server*/ public: int /*__thiscall*/ GetMaxCharacters(); //0x00502dba
	/*Server*/ public: int /*__thiscall*/ GetMaxPlayers(); //0x00502db6
	/*Server*/ public: int /*__thiscall*/ GetNumHumanPlayers(); //0x007c3adf
	/*Server*/ public: int /*__thiscall*/ GetPlayerTeamId(const PlayerId_* unk1); //0x007c45df
	/*Server*/ public: FuBi::Cookie__* /*__thiscall*/ RSCreatePlayerRetail(const unsigned short* unk1, ePlayerController unk2); //0x007c7b69
	/*Server*/ public: unsigned long /*__thiscall*/ GetTeamId(const PlayerId_* unk1); //0x007c45fc
	/*Server*/ public: void /*__thiscall*/ RCScreenText(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5); //0x007c4dbb
	/*Server*/ public: void /*__thiscall*/ RSDisablePlayerPartyMembers(const PlayerId_* unk1, bool unk2); //0x007c5a7e
	/*Server*/ public: void /*__thiscall*/ RSEnablePlayerPartyMembers(const PlayerId_* unk1); //0x007c4c4d
	/*Server*/ public: void /*__thiscall*/ SScreenText(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5); //0x007c5bef
};
