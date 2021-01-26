#pragma once

#include "FuBi.h"
#include "GPString.h"
#include "Player.h"
#include "UIListReport.h"

class UIMultiplayer {
public:
	$Singleton(UIMultiplayer, 0x004013e3);

	$Method(0x004f0455, AcceptGamelistColumnChanges, bool, UIListbox* unk1);
	$Method(0x004f031c, IsPartyCountValid, bool);
	$Method(0x004efa39, RCEndGameActivateStagingReturn, FuBiCookie*);
	$Method(0x004f01bc, RCStartNetworkGame, FuBiCookie*);
	$Method(0x004f044a, HideLobbyInterface, void);
	$Method(0x004f0473, RefreshClientGroupStatus, void, uint unk1);
	$Method(0x004f0464, RefreshGamelistColumnHeaders, void, UIListReport* unk1);
	$Method(0x004f2a19, ShowFirstTimeHelp, void, const GPBString& unk1);
	$Method(0x004f043f, ShowLobbyInterface, void);
	$Method(0x004f04da, TeamManagerCalculateColumns, void, uint unk1);
	$Method(0x004f049e, TeamManagerCastSpell, void, uint unk1, uint unk2);
	$Method(0x004f04bc, TeamManagerRolloffPortrait, void, uint unk1, uint unk2);
	$Method(0x004f04cb, TeamManagerRolloverPortrait, void, uint unk1, uint unk2);
	$Method(0x004f04ad, TeamManagerSetFollow, void, uint unk1, uint unk2);
	$Method(0x004f0484, UpdateGroupStatusRollover, void, uint unk1);
	$Method(0x004f5fe6, TransitionFromPartyConvert, bool);
	$Method(0x004f4af8, TransitionFromPartyImport, bool);
	$Method(0x004f04f3, TransitionToPartyConvert, bool);
	$Method(0x004f05ac, TransitionToPartyImport, bool);
	$Method(0x004f0635, TransitionToPartySelect, bool);
	$Method(0x004f0ecf, SKickPlayer, void, const PlayerId* unk1);

    // 0x00
    $Padding(0x00, 0xb0);
};

STATIC_ASSERT(sizeof(UIMultiplayer) == 0xb0);
