#pragma once

#include "CameraAgent.h"
#include "GPString.h"
#include "GPMath.h"
#include "RegionId.h"
#include "Siege.h"
#include "SiegePos.h"
#include "WorldLocation.h"

class WorldMap {
public:
	$Singleton(WorldMap, 0x00404805);

	$ConstMethod(0x007cf343, GetDefaultStartingGroup, bool, GPBString& unk1);
	$ConstMethod(0x007ccbb8, GetFirstStartingPosition, bool, const char* unk1, SiegePos& unk2, CameraPosition& unk3);
	$ConstMethod(0x007cdfba, GetObjectFuelPlacement, bool, const Scid* unk1, const RegionId* unk2, SiegePos& unk3, Quat& unk4);
	$ConstMethod(0x007ce05e, GetObjectFuelPlacement, bool, const Scid* unk1, const RegionId* unk2, SiegePos& unk3);
	$ConstMethod(0x007ce03a, GetObjectFuelPlacement, bool, const Scid* unk1, SiegePos& unk2, Quat& unk3);
	$ConstMethod(0x007ce0cd, GetObjectFuelPlacement, bool, const Scid* unk1, SiegePos& unk2);
	$ConstMethod(0x007ccc26, GetRandomStartingPosition, bool, const char* unk1, SiegePos& unk2, CameraPosition& unk3);
	$ConstMethod(0x007cf3ee, GetStartingGroupMoodName, bool, const char* unk1, GPBString& unk2);
	$ConstMethod(0x007cf2d7, GetStartingGroupName, bool, uint unk1, GPBString& unk2);
	$ConstMethod(0x007cf310, GetStartingGroupNameFromId, bool, int unk1, GPBString& unk2);
	$ConstMethod(0x007cf38b, GetStartingGroupScreenName, bool, const char* unk1, GPBString& unk2);
	$ConstMethod(0x007cf43d, GetWorldLocationScreenName, bool, uint unk1, GPBString& unk2);
	$Method(0x007ce0fa, IsScidInAnyWorldFrustum, bool, const Scid* unk1);
	$ConstMethod(0x007cd630, IsScidName, bool, const RegionId* unk1, const GPBString& unk2);
	$ConstMethod(0x007cd24b, IsScidName, bool, const RegionId* unk1, const Scid* unk2);
	$ConstMethod(0x007cd26e, IsScidName, bool, const Scid* unk1);
	$ConstMethod(0x007cc14e, IsStartingGroupEnabled, bool, const char* unk1);
	$ConstMethod(0x007c9df2, IsStartingGroupEnabled, bool, int unk1);
	$Method(0x007cc368, IsTownPortalAllowed, bool, const SiegePos& unk1);
	$Method(0x007ccce1, SEnableStartGroup, bool, const char* unk1, bool unk2);
	$Method(0x007ce1cb, GetStartGroupName, GPBString, int unk1);
	$ConstMethod(0x007cdc41, MakeMapDirAddress, GPBString);
	$ConstMethod(0x00403eed, GetMapName, const GPBString&);
	$ConstMethod(0x00403ef1, GetMpWorldName, const GPBString&);
	$ConstMethod(0x007cd0d4, GetRegionNameForNode, const GPBString&, const siege::database_guid& unk1);
	$ConstMethod(0x007ccb15, GetScidNameString, const GPBString&, const RegionId* unk1, const Scid* unk2, bool unk3);
	$ConstMethod(0x007cd2c1, GetScidNameString, const GPBString&, const Scid* unk1, bool unk2);
	$ConstMethod(0x007cc10b, GetStartingGroupClothMapRollover, const GPBString&, const char* unk1);
	$ConstMethod(0x007ccd2c, GetWorldLocationName, const GPBString&, uint unk1);
	$ConstMethod(0x007cbdce, FindScidNameRegion, const RegionId*, const GPBString& unk1);
	$ConstMethod(0x007ccb57, FindScidNameRegion, const RegionId*, const Scid* unk1);
	$ConstMethod(0x007cca5e, GetScidRegionId, const RegionId*, const Scid* unk1);
	$ConstMethod(0x007cd651, GetScidNameScid, const Scid*, const GPBString& unk1, bool unk2);
	$ConstMethod(0x007cd283, GetScidNameScid, const Scid*, const RegionId* unk1, const GPBString& unk2, bool unk3);
	$ConstMethod(0x007cc0c8, GetStartingGroupClothMapPos, const Vector3&, const char* unk1);
	$ConstMethod(0x007ccd7e, GetWorldLocationById, const WorldLocation*, uint id);
	$ConstMethod(0x004047dd, GetWorldLocationByIndex, const WorldLocation*, uint index);
	$ConstMethod(0x007ccda1, GetWorldLocationByName, const WorldLocation*, const GPBString& name);
	$ConstMethod(0x00403ef5, GetWorldFrustumRadius, float);
	$ConstMethod(0x007c9dba, GetDefaultStartingGroupId, int);
	$ConstMethod(0x007c9dad, GetNumStartingGroups, int);
	$ConstMethod(0x004047d0, GetNumWorldLocations, int);
	$Method(0x007cc18e, GetStartGroupId, int, const char* unk1);
	$Method(0x007d2810, RCSet, FuBiCookie*, const char* unk1, const char* unk2, uint unk3);
	$Method(0x007d0103, RCSetMpWorld, FuBiCookie*, const GPBString& unk1, uint unk2);
	$Method(0x007ceaef, RCSyncOnMachineHelper, FuBiCookie*, uint unk1, const_mem_ptr unk2);
	$ConstMethod(0x007cc330, GetWorldLocationId, uint, const GPBString& unk1);
	$Method(0x007caff5, RCEnableStartGroup, void, int unk1, bool unk2, uint unk3);
	$Method(0x007cb0df, RCSetDefaultStartGroup, void, int unk1, bool unk2, uint unk3);
	$Method(0x007c8632, RCSetJoinGameGroup, void, int unk1);
	$Method(0x007cc1cd, SEnableStartGroup, void, int unk1, bool unk2);
	$Method(0x007cc1e1, SEnableStartGroupForPlayer, void, int unk1, bool unk2, uint unk3);
	$Method(0x007cc1ea, SSetDefaultStartGroup, void, int unk1, bool unk2);
	$Method(0x007cc28b, SSetDefaultStartGroupForPlayer, void, int unk1, bool unk2, uint unk3);

	// 0x00
	$Padding(0x00, 0x04);
	// 0x04
	GPBString mapName;
	// 0x08
	GPBString mpWorldName;
	// 0x0c
	$Padding(0x0c, 0x38);
	// 0x38
	float worldFrustumRadius;
    // 0x3c
    $Padding(0x3c, 0xc0);
};

STATIC_ASSERT(sizeof(WorldMap) == 0xc0);
STATIC_ASSERT_OFFSETOF(WorldMap, mpWorldName, 0x08);
STATIC_ASSERT_OFFSETOF(WorldMap, worldFrustumRadius, 0x38);
