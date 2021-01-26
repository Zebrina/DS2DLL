#pragma once

#include "CameraAgent.h"
#include "Enums.h"
#include "FrustumId.h"
#include "FuBi.h"
#include "GoidScid.h"
#include "Memory.h"
#include "SiegePos.h"

class Go;
struct CameraPosition;
struct GoidColl;
struct GopColl;
typedef struct PlayerId_ PlayerId;

//      ____   __                          ____     __    __ ____   __                          ____     __        _ 
//     / __ \ / /____ _ __  __ ___   _____/  _/____/ /  _/_// __ \ / /____ _ __  __ ___   _____/  _/____/ /       | |
//    / /_/ // // __ `// / / // _ \ / ___// / / __  /  / / / /_/ // // __ `// / / // _ \ / ___// / / __  /        / /
//   / ____// // /_/ // /_/ //  __// /  _/ / / /_/ /  / / / ____// // /_/ // /_/ //  __// /  _/ / / /_/ /        / / 
//  /_/    /_/ \__,_/ \__, / \___//_/  /___/ \__,_/  / / /_/    /_/ \__,_/ \__, / \___//_/  /___/ \__,_/______ _/_/  
//                   /____/                          |_|                  /____/                       /_____//_/  
struct PlayerId_ {
	static const PlayerId* Invalid;

	//$StaticMethod(0x00502d48, GetInvalidPlayerId, const PlayerId*);

	$ConstMethod(0x00502d3d, IsValid, bool);

	// 0x00
	uint handle;
};

STATIC_ASSERT(sizeof(PlayerId_) == sizeof(uint));

$Function(0x004a47e6, MakeInt, uint, const PlayerId* playerId);
$Function(0x00502d32, MakeIndex, int, const PlayerId* playerId);
$Function(0x00424167, MakePlayerId, const PlayerId*, uint value);

//      ____   __                         
//     / __ \ / /____ _ __  __ ___   _____
//    / /_/ // // __ `// / / // _ \ / ___/
//   / ____// // /_/ // /_/ //  __// /    
//  /_/    /_/ \__,_/ \__, / \___//_/     
//                   /____/  
class Player {
public:
	$StaticMethod(0x00502da9, FUBI_NetToInstance, Player*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00502da0, FUBI_InstanceToNet, uint, Player* unk1);
	$Method(0x007bb9fe, RCSetReadyToPlay, FuBiCookie*, bool unk1);
	$Method(0x007c1ffa, RCSyncOnMachineHelper, FuBiCookie*, uint unk1, const_mem_ptr unk2, bool unk3);
	$Method(0x007bab43, RCSetLoadProgress, void, float unk1);
	$Method(0x007bbcd2, RSSetLoadProgress, void, float unk1);
	$StaticMethod(0x004efd85, GetHumanPlayerCount, int);
	$Method(0x007bc2f4, GetIsEnemy, bool, Player* unk1);
	$Method(0x007bc33e, GetIsFriend, bool, Player* unk1);
	$Method(0x007be8cb, GetLootLabelFilterOption, bool, eLootFilter unk1);
	$Method(0x007be7ec, GetLootPickupFilterOption, bool, eLootFilter unk1);
	$Method(0x007be8e0, IsAllowedLootLabel, bool, const Goid* unk1);
	$Method(0x007be801, IsAllowedLootPickup, bool, const Goid* unk1);
	$ConstMethod(0x004132e9, IsComputerPlayer, bool);
	$ConstMethod(0x0050366a, IsHeroSpecReady, bool);
	$ConstMethod(0x00435b67, IsHumanPlayer, bool);
	$Method(0x00502d79, IsReadyToPlay, bool);
	$ConstMethod(0x007bb9e7, IsScreenPlayer, bool);
	$Method(0x007bc2b6, GetParty, Go*);
	$ConstMethod(0x007bc1c5, GetWorldLocationName, const GPBString&);
	$ConstMethod(0x00413305, GetHero, const Goid*);
	$Method(0x00472ed1, GetStash, const Goid*);
	$ConstMethod(0x004132da, GetId, const PlayerId*);
	$Method(0x007be824, BuildLootLabelFilter, eLootFilter);
	$Method(0x007be745, BuildLootPickupFilter, eLootFilter);
	$Method(0x007be88c, GetLootLabelFilter, eLootFilter);
	$Method(0x007be7ad, GetLootPickupFilter, eLootFilter);
	$ConstMethod(0x00472ebf, GetController, ePlayerController);
	$Method(0x007be0f4, GetPartyMembers, int, GoidColl& unk1);
	$Method(0x007be14b, GetPartyMembers, int, GopColl& unk1);
	$Method(0x007bb026, GetTeam, int);
	$Method(0x007be197, GetTeamMembers, int, GopColl& unk1);
	$Method(0x007c1d2f, RCAddStartingPosition, FuBiCookie*, const SiegePos& unk1);
	$Method(0x007bc352, RCSetFriendTo, FuBiCookie*, uint unk1);
	$Method(0x007bf074, RCSetHeroHead, FuBiCookie*, const GPBString& unk1);
	$Method(0x007c07b5, RCSetHeroName, FuBiCookie*, const GPWString& unk1);
	$Method(0x007bef6d, RCSetHeroSkin, FuBiCookie*, ePlayerSkin unk1, const GPBString& unk2);
	$Method(0x007bcf90, RCSetHeroUberLevel, FuBiCookie*, float unk1);
	$Method(0x007bbb3d, RCSetIsOnZone, FuBiCookie*, bool unk1);
	$Method(0x007baa4d, RCSetJIP, FuBiCookie*, bool unk1);
	$Method(0x007bfa25, RCSetName, FuBiCookie*, const GPWString& unk1);
	$Method(0x007bd362, RCSetPvPRequests, FuBiCookie*, uint unk1, uint unk2);
	$Method(0x007c0400, RCSetStartingGroup, FuBiCookie*, const GPBString& unk1);
	$Method(0x007bd463, RCSetTeamId, FuBiCookie*, uint unk1);
	$Method(0x007bbfaa, RCSetWorldLocation, FuBiCookie*, const Goid* unk1, uint unk2, bool unk3);
	$Method(0x007bbe75, RCSetWorldState, FuBiCookie*, eWorldState unk1);
	$Method(0x007bfd46, RSSetHeroHead, FuBiCookie*, const GPBString& unk1);
	$Method(0x007bfc49, RSSetHeroSkin, FuBiCookie*, ePlayerSkin unk1, const GPBString& unk2);
	$Method(0x007bd8b5, RSSetHeroUberLevel, FuBiCookie*, float unk1);
	$Method(0x007bca90, RSSetIsOnZone, FuBiCookie*, bool unk1);
	$Method(0x007c06ba, RSSetName, FuBiCookie*, const GPWString& unk1);
	$Method(0x007bc995, RSSetReadyToPlay, FuBiCookie*, bool unk1);
	$Method(0x007c09d0, RSSetStartingGroup, FuBiCookie*, const GPBString& unk1);
	$Method(0x007bdca8, RSSetTeamId, FuBiCookie*, uint unk1);
	$Method(0x007bd1f3, RSSetTradeGoldAmount, FuBiCookie*, int unk1);
	$Method(0x007bd089, RSSetWorldState, FuBiCookie*, eWorldState unk1);
	$ConstMethod(0x007bad0f, GetWorldLocationId, uint);
	$ConstMethod(0x004132f3, GetMachineId, uint);
	$Method(0x00472ec3, GetTeamId, uint);
	$ConstMethod(0x00503fa0, GetName, void, GPBString& unk1);
	$ConstMethod(0x007bf502, GetWorldLocationScreenName, void, GPBString& unk1);
	$Method(0x007bcdd5, RCAddFrustum, void, uint unk1, const FrustumId* unk2, const SiegePos& unk3);
	$Method(0x007bf177, RCImportCharacter, void, uint unk1, const GPBString& unk2, int unk3);
	$Method(0x007bf3da, RCImportStash, void, uint unk1, const GPBString& unk2);
	$Method(0x007bb095, RCMarkTalking, void, bool unk1);
	$Method(0x007be435, RCQueryLatency, void, float unk1);
	$Method(0x007bedcf, RCResetStartingPositions, void);
	$Method(0x007bcb8b, RCSetCameraPosition, void, const CameraPosition& unk1);
	$Method(0x007bcca1, RCSetInitialFrustum, void, uint unk1, const FrustumId* unk2, const SiegePos& unk3, const CameraPosition& unk4);
	$Method(0x007c2479, RCSetMemberData, void, int unk1, const GPBString& unk2, const_mem_ptr unk3, const SiegePos& unk4, const GPBString& unk5);
	$Method(0x007bac29, RCSetStash, void, const Goid* unk1);
	$Method(0x007bfb61, RCSetStashCloneSourceTemplate, void, const GPBString& unk1, const GPBString& unk2);
	$Method(0x007baeba, RCSetTradeGoldAmount, void, int unk1, uint unk2);
	$Method(0x007bdf16, RSAckLatency, void, float unk1);
	$Method(0x007bfe40, RSImportCharacter, void, const GPBString& unk1, int unk2);
	$Method(0x007c024b, RSImportStash, void, const GPBString& unk1);
	$Method(0x007bc4e0, RSMarkTalking, void, bool unk1);
	$Method(0x007bb265, RSSetCrossoverCodeEnabled, void, bool unk1);
	$Method(0x007c0de7, RSSetHeroName, void, const GPWString& unk1);
	$Method(0x007c2c9f, RSSetMemberData, void, int unk1, const GPBString& unk2, const_mem_ptr unk3, const SiegePos& unk4, const GPBString& unk5);
	$Method(0x007c08aa, RSSetStashCloneSourceTemplate, void, const GPBString& unk1, const GPBString& unk2);
	$Method(0x007bb17a, RSSetWatchingMovie, void, bool unk1);
	$Method(0x007beeb6, SCreateStash, void);
	$Method(0x00502d90, SetLootLabelFilter, void, eLootFilter filter);
	$Method(0x007be8a1, SetLootLabelFilterOption, void, eLootFilter filter, bool value);
	$Method(0x00502d80, SetLootPickupFilter, void, eLootFilter filter);
	$Method(0x007be7c2, SetLootPickupFilterOption, void, eLootFilter filter, bool value);
	$Method(0x007bdb46, RSSetLootLabelFilter, void, eLootFilter filter);
	$Method(0x007bd9e4, RSSetLootPickupFilter, void, eLootFilter filter);
	$Method(0x007bc21b, SetPartyDirty, void);
	$Method(0x007bd9c0, SSetWorldLocation, void, const Goid* unk1, const GPBString& unk2);
	$Method(0x007bd184, SSetWorldLocation, void, const Goid* unk1, uint unk2);

	// 0x000
	$Padding(0x000, 0x008);
	// 0x008
	PlayerId* id;
	// 0x00c
	$Padding(0x00c, 0x090);
	// 0x090
	Goid* stash;
	// 0x094
	$Padding(0x094, 0x0a8);
	// 0x0a8
	Goid* hero;
	// 0x0ac
	$Padding(0x0ac, 0x0f8);
	// 0x0f8
	Goid* party;
	// 0x0fc
	$Padding(0x0fc, 0x100);
    // 0x100
    float maxPartySavePeriod;
    // 0x104
    float minPartySavePeriod;
    // 0x108
    $Padding(0x108, 0x114);
	// 0x114
	uint teamId;
	// 0x118
	$Padding(0x118, 0x1d0);
	// 0x1d0
	eLootFilter lootPickupFilter;
	// 0x1d4
	eLootFilter lootLabelFilter;
};

STATIC_ASSERT_OFFSETOF(Player, stash, 0x090);
STATIC_ASSERT_OFFSETOF(Player, hero, 0x0a8);
STATIC_ASSERT_OFFSETOF(Player, teamId, 0x114);
STATIC_ASSERT_OFFSETOF(Player, lootPickupFilter, 0x1d0);
