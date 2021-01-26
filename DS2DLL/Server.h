#pragma once

#include "Enums.h"
#include "Go.h"
#include "GoidScid.h"
#include "IntColl.h"
#include "Memory.h"
#include "Player.h"

class Server {
public:
    // ??
    class Machine {
    public:
        static Machine* GetSingleton() {
            return (Machine*)0x00d1dce8;
        }
    };

	$Singleton(Server, 0x00503684);

	$Method(0x007c610c, RCCreatePlayerOnMachine, FuBiCookie*, uint unk1, const unsigned short* unk2, const PlayerId* unk3, ePlayerController unk4, uint unk5);
	$Method(0x007c7a5c, RCInitTeams, FuBiCookie*, uint unk1);
	$Method(0x007c5caf, RCMarkPlayerForDeletion, FuBiCookie*, const PlayerId* unk1);
	$Method(0x007c7899, RCSetGamePassword, FuBiCookie*, const GPWString& unk1);
	$Method(0x007c3e62, RCSyncOnMachineHelper, FuBiCookie*, uint unk1, const_mem_ptr unk2);
	$Method(0x007c3165, RCKeepMeAlive, void, uint unk1);
	$Method(0x007c3088, RSKeepMeAlive, void);
	$Method(0x007c3270, SetLatencyQueryFrequency, void, int unk1);
	$Method(0x007c54bc, GetFriendlyHumanCharacters, bool, Go* unk1, bool unk2, bool unk3, GopColl& unk4);
	$ConstMethod(0x007c5984, GetMachineIdsInWorldFrustum, bool, const SiegePos& unk1, IntColl& unk2);
	$ConstMethod(0x007c47b7, HasPlayer, bool, const PlayerId* unk1);
	$Method(0x007c4778, IsPlayerHost, bool, const PlayerId* unk1);
	$Method(0x007c3de3, GetScreenHero, Go*);
	$Method(0x007c3dd4, GetScreenParty, Go*);
	$Method(0x007c3e03, GetScreenStash, Go*);
	$Method(0x007c47cc, GetComputerPlayer, Player*);
	$Method(0x007c3b5e, GetHumanPlayerOnMachine, Player*, uint unk1);
	$Method(0x007c3bc1, GetLocalHumanPlayer, Player*);
	$ConstMethod(0x007c45c5, GetPlayer, Player*, const PlayerId* unk1);
	$ConstMethod(0x007c3a91, GetPlayerAtIndex, Player*, int unk1);
	$ConstMethod(0x007c3240, GetDropInvOption, eDropInvOption);
	$ConstMethod(0x007c3d23, GetAveragePlayerLatency, float);
	$ConstMethod(0x007c3c96, GetMaxPlayerLatency, float);
	$Method(0x007c3c41, GetAllHumanPartyMembers, int, GopColl& unk1);
	$Method(0x007c590b, GetAllHumanPlayerHeros, int, GopColl& unk1);
	$Method(0x007c55c4, GetFriendlyHumanParties, int, Go* unk1, bool unk2, bool unk3, GopColl& unk4);
	$Method(0x007c3c2e, GetLocalHumanPlayerTeamId, int);
	$Method(0x00502dba, GetMaxCharacters, int);
	$Method(0x00502db6, GetMaxPlayers, int);
	$Method(0x007c3adf, GetNumHumanPlayers, int);
	$Method(0x007c45df, GetPlayerTeamId, int, const PlayerId* unk1);
	$Method(0x007c7b69, RSCreatePlayerRetail, FuBiCookie*, const unsigned short* unk1, ePlayerController unk2);
	$Method(0x007c45fc, GetTeamId, uint, const PlayerId* unk1);
	$Method(0x007c4dbb, RCScreenText, void, uint unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5);
	$Method(0x007c5a7e, RSDisablePlayerPartyMembers, void, const PlayerId* unk1, bool unk2);
	$Method(0x007c4c4d, RSEnablePlayerPartyMembers, void, const PlayerId* unk1);
	$Method(0x007c5bef, SScreenText, void, uint unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5);

    $ConstMethod(0x007c3251, IsLocal, bool);
    $ConstMethod(0x007c3269, IsMultiPlayer, bool);

	// 0x00
	$Padding(0x00, 0x14);
	// 0x14
	Player* screenPlayer;
    // 0x18
    $Padding(0x18, 0x70);
};

STATIC_ASSERT(sizeof(Server) == 0x70);

$Function(0x007ed4bd, IsServerLocal, bool);
$Function(0x00413255, IsServerRemote, bool);
$Function(0x007ec726, GetServerMachineId, uint);
