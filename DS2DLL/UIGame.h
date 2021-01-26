#pragma once

#include "FuBi.h"
#include "GoidScid.h"
#include "GPString.h"
#include "RegionId.h"
#include "SiegePos.h"
#include "UICommands.h"
#include "UIGameConsole.h"
#include "UIInventoryManager.h"
#include "UIMenuManager.h"
#include "UIMiniGame.h"
#include "UIPartyManager.h"
#include "UIPetManager.h"
#include "UISkillManager.h"
#include "UIStoreManager.h"

class UIGame {
public:
	$Singleton(UIGame, 0x0040a5ed);

	$Method(0x004092cf, IsSelectionDown, bool);
	$Method(0x0047713e, SelectAllPartyMembers, bool);
	$Method(0x0047cad8, SelectLastPlayer, bool);
	$Method(0x0047cabb, SelectNextPlayer, bool);
	$Method(0x0047d705, ShowSocialWindowFriendslist, bool);
	$ConstMethod(0x00474e6d, TeleportGameObject, bool, const Goid* unk1, const SiegePos& unk2, bool unk3, bool unk4);
	$ConstMethod(0x00474e50, TeleportGameObject, bool, const Goid* unk1, const SiegePos& unk2, bool unk3);
	$ConstMethod(0x00474e7c, TeleportGameObject, bool, const Scid* unk1, const RegionId* unk2, const SiegePos& unk3, bool unk4);
	$Method(0x0047af10, ToggleClothMap, bool);
	$Method(0x0047b039, ToggleJournal, bool);
	$Method(0x004092a8, GetJournalTabGroup, const GPBString&);
	$Method(0x0047916d, ClosestSelectedCharacter, const Goid*, const Goid* unk1);
	$Method(0x004775ac, ClosestSelectedCharacter, const Goid*, const SiegePos& unk1);
	$Method(0x00474d6c, GetActorWhoCarriesObject, const Goid*, const Goid* unk1);
	$ConstMethod(0x00476404, RSTeleportGameObject, FuBiCookie*, const Goid* unk1, const SiegePos& unk2, bool unk3);
	$Method(0x004795eb, GetSelectedItems, GoidColl&);
	$ConstMethod(0x0047d801, DisplayMsgF, void, const char* format, ...);
	$ConstMethod(0x0047da24, DisplayMsgSoundF, void, const char* unk1, const char* unk2, ...);
	$ConstMethod(0x0047dadf, SDisplayMsgF, void, uint unk1, const char* unk2, ...);
	$ConstMethod(0x0047db68, SDisplayMsgSoundF, void, uint unk1, const char* unk2, const char* unk3, ...);
	$ConstMethod(0x0047e859, SScreenMsgToPlayersF, void, const SiegePos& pos, const char* format, ...);
	$ConstMethod(0x0047b6af, DisplayMsgSound, void, const char* unk1, const char* unk2);
	$ConstMethod(0x0047b574, DisplayMsgSoundEx, void, const char* unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7);
	$Method(0x00477e13, RankPartyMembers, void);
	$ConstMethod(0x0047d716, RCDisplayMsg, void, uint unk1, const char* unk2);
	$ConstMethod(0x0047b382, RCDisplayMsgEx, void, uint unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7);
	$ConstMethod(0x0047d843, RCDisplayMsgSound, void, uint unk1, const char* unk2, const char* unk3);
	$ConstMethod(0x0047d92c, RCDisplayMsgSoundEx, void, uint unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8);
	$Method(0x00480d92, RequestClassDamageWatch, void, const Goid* unk1, float unk2);
	$ConstMethod(0x0047db39, SDisplayMsg, void, uint unk1, const char* unk2);
	$ConstMethod(0x0047d70d, SDisplayMsgEx, void, uint unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7);
	$ConstMethod(0x0047dbab, SDisplayMsgSound, void, uint unk1, const char* unk2, const char* unk3);
	$ConstMethod(0x0047dbb4, SDisplayMsgSoundEx, void, uint unk1, const char* unk2, const char* unk3, const char* unk4, const char* unk5, const char* unk6, const char* unk7, const char* unk8);
	$Method(0x004730cc, SetRadarIconVisibility, void, const GPBString& unk1, bool unk2);
	$ConstMethod(0x0047da88, SScreenMsgToPlayers, void, const SiegePos& unk1, const char* unk2);

    $Method(0x004730a9, SetRadarVisible, void, bool flag);
	$Method(0x004730e0, ToggleRadar, void);

    FEX bool GetEscNisToFrontEnd() const;
    $Method(0x004092bf, SetEscNisToFrontEnd, void, bool flag);
    FEX bool GetSingleSelect() const;
    $Method(0x004092af, SetSingleSelect, void, bool flag);

    FEX hexcolorcode GetPartyMemberGlowColor() const;
    FEX void SetPartyMemberGlowColor(hexcolorcode color);
    FEX hexcolorcode GetFocusPartyMemberGlowColor() const;
    FEX void SetFocusPartyMemberGlowColor(hexcolorcode color);

	// 0x000
	$Padding(0x000, 0x020);
	// 0x020
	UICommands* commands;
	// 0x024
	UIPartyManager* partyManager;
	// 0x028
	UIInventoryManager* inventoryManager;
	// 0x02c
	UIMenuManager* menuManager;
	// 0x030
	UIStoreManager* storeManager;
	// 0x034
	UISkillManager* skillManager;
	// 0x038
	$Padding(0x038, 0x040);
	// 0x040
	UIGameConsole* gameConsole;
	// 0x044
	$Padding(0x044, 0x058);
	// 0x058
	UIMiniGame* miniGame;
	// 0x05c
	UIPetManager* petManager;
	// 0x060
	$Padding(0x060, 0x090);
    // 0x090
    bool bSelectionDown;
    bool b091;
    bool b092;
    bool b093;
	// 0x094
	bool b094; // 0x0042d73d
	bool b095;
	bool b096;
	bool b097;
	// 0x098
	$Padding(0x098, 0x468);
    // 0x468
    hexcolorcode itemColor;
    // 0x46c
    hexcolorcode enemyColor;
    // 0x470
    hexcolorcode friendColor;
    // 0x474
    // Party member ring color.
    hexcolorcode partyMemberColor;
    // 0x478
    // Portrait glow and selected party member ring color.
    hexcolorcode partyMemberFocusColor;
    // 0x47c
    hexcolorcode focusGoColor;
    // 0x480
    hexcolorcode deadEnemyMemberColor;
    // 0x484
    hexcolorcode deadFriendMemberColor;
    // 0x488
    hexcolorcode selectionFullHealthColor;
    // 0x48c
    hexcolorcode selectionMidHealthColor;
    // 0x490
    hexcolorcode selectionEmptyHealthColor;
    // 0x494
    float selectionLeaderScale; // ??
    // 0x498
    float selectionStandardScale; // ??
    // 0x49c
    float selectionRingHeight; // ??
    // 0x4a0
    float selectionRingCenterHeight; // ??
    // 0x4a4
    $Padding(0x4a4, 0x4f0);
	// 0x4f0
	bool bUseLargeLabels; // ?? 0x004acff8
	bool b4F1;
	bool bEscNisToFrontEnd;
	bool b4F3;
	// 0x4f4
	$Padding(0x4f4, 0x518);
    // 0x518
    bool bSingleSelect;
    // 0x51c
    GPBString journalTabGroup;
};

STATIC_ASSERT(sizeof(UIGame) == 0x520);
STATIC_ASSERT_OFFSETOF(UIGame, petManager, 0x05c);
