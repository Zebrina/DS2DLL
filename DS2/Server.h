#pragma once

#include "ClassMacros.h"

enum eDropInvOption;
enum ePlayerController;

class Server {
public:
	DefineSingleton(Server, 0x503684);

	/*Server*/ private: /*static*/ Server* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00503684
	DefineMethod(RCCreatePlayerOnMachine, 0x7c610c, FuBi::Cookie__*, Params(unsigned long unk1, const unsigned short* unk2, const PlayerId_* unk3, ePlayerController unk4, unsigned long unk5), Args(unsigned long unk1, const unsigned short* unk2, const PlayerId_* unk3, ePlayerController unk4, unsigned long unk5));
	DefineMethod(RCInitTeams, 0x7c7a5c, FuBi::Cookie__*, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCMarkPlayerForDeletion, 0x7c5caf, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RCSetGamePassword, 0x7c7899, FuBi::Cookie__*, Params(const gpbstring<unsigned short>& unk1), Args(const gpbstring<unsigned short>& unk1));
	DefineMethod(RCSyncOnMachineHelper, 0x7c3e62, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2), Args(unsigned long unk1, const_mem_ptr unk2));
	DefineMethod(RCKeepMeAlive, 0x7c3165, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RSKeepMeAlive, 0x7c3088, void, Params(), Args());
	DefineMethod(SetLatencyQueryFrequency, 0x7c3270, void, Params(int unk1), Args(int unk1));
	DefineMethod(GetFriendlyHumanCharacters, 0x7c54bc, bool, Params(Go* unk1, bool unk2, bool unk3, GopColl& unk4), Args(Go* unk1, bool unk2, bool unk3, GopColl& unk4));
	DefineConstMethod(GetMachineIdsInWorldFrustum, 0x7c5984, bool, Params(const SiegePos& unk1, IntColl& unk2), Args(const SiegePos& unk1, IntColl& unk2));
	DefineConstMethod(HasPlayer, 0x7c47b7, bool, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(IsPlayerHost, 0x7c4778, bool, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(GetScreenHero, 0x7c3de3, Go*, Params(), Args());
	DefineMethod(GetScreenParty, 0x7c3dd4, Go*, Params(), Args());
	DefineMethod(GetScreenStash, 0x7c3e03, Go*, Params(), Args());
	DefineMethod(GetComputerPlayer, 0x7c47cc, Player*, Params(), Args());
	DefineMethod(GetHumanPlayerOnMachine, 0x7c3b5e, Player*, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(GetLocalHumanPlayer, 0x7c3bc1, Player*, Params(), Args());
	DefineConstMethod(GetPlayer, 0x7c45c5, Player*, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineConstMethod(GetPlayerAtIndex, 0x7c3a91, Player*, Params(int unk1), Args(int unk1));
	DefineConstMethod(GetDropInvOption, 0x7c3240, eDropInvOption, Params(), Args());
	DefineConstMethod(GetAveragePlayerLatency, 0x7c3d23, float, Params(), Args());
	DefineConstMethod(GetMaxPlayerLatency, 0x7c3c96, float, Params(), Args());
	DefineMethod(GetAllHumanPartyMembers, 0x7c3c41, int, Params(GopColl& unk1), Args(GopColl& unk1));
	DefineMethod(GetAllHumanPlayerHeros, 0x7c590b, int, Params(GopColl& unk1), Args(GopColl& unk1));
	DefineMethod(GetFriendlyHumanParties, 0x7c55c4, int, Params(Go* unk1, bool unk2, bool unk3, GopColl& unk4), Args(Go* unk1, bool unk2, bool unk3, GopColl& unk4));
	DefineMethod(GetLocalHumanPlayerTeamId, 0x7c3c2e, int, Params(), Args());
	DefineMethod(GetMaxCharacters, 0x502dba, int, Params(), Args());
	DefineMethod(GetMaxPlayers, 0x502db6, int, Params(), Args());
	DefineMethod(GetNumHumanPlayers, 0x7c3adf, int, Params(), Args());
	DefineMethod(GetPlayerTeamId, 0x7c45df, int, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RSCreatePlayerRetail, 0x7c7b69, FuBi::Cookie__*, Params(const unsigned short* unk1, ePlayerController unk2), Args(const unsigned short* unk1, ePlayerController unk2));
	/*Server*/ public: unsigned long /*__thiscall*/ GetTeamId(const PlayerId_* unk1); //0x007c45fc
	DefineMethod(RCScreenText, 0x7c4dbb, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5), Args(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5));
	DefineMethod(RSDisablePlayerPartyMembers, 0x7c5a7e, void, Params(const PlayerId_* unk1, bool unk2), Args(const PlayerId_* unk1, bool unk2));
	DefineMethod(RSEnablePlayerPartyMembers, 0x7c4c4d, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(SScreenText, 0x7c5bef, void, Params(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5), Args(unsigned long unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5));
};
