#pragma once

#include "CameraAgent.h"
#include "GPBString.h"
#include "Quat.h"
#include "RegionId.h"
#include "Siege.h"
#include "SiegePos.h"

class WorldMap {
public:
	DefineSingleton(WorldMap, 0x404805);

	DefineConstMethod(GetDefaultStartingGroup, 0x7cf343, bool, Params(gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetFirstStartingPosition, 0x7ccbb8, bool, Params(const char* unk1, SiegePos& unk2, CameraPosition& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetObjectFuelPlacement, 0x7cdfba, bool, Params(const Scid_* unk1, const RegionId_* unk2, SiegePos& unk3, Quat& unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetObjectFuelPlacement, 0x7ce05e, bool, Params(const Scid_* unk1, const RegionId_* unk2, SiegePos& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetObjectFuelPlacement, 0x7ce03a, bool, Params(const Scid_* unk1, SiegePos& unk2, Quat& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetObjectFuelPlacement, 0x7ce0cd, bool, Params(const Scid_* unk1, SiegePos& unk2), Args(unk1, unk2));
	DefineConstMethod(GetRandomStartingPosition, 0x7ccc26, bool, Params(const char* unk1, SiegePos& unk2, CameraPosition& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetStartingGroupMoodName, 0x7cf3ee, bool, Params(const char* unk1, gpbstring<char>& unk2), Args(unk1, unk2));
	DefineConstMethod(GetStartingGroupName, 0x7cf2d7, bool, Params(unsigned int unk1, gpbstring<char>& unk2), Args(unk1, unk2));
	DefineConstMethod(GetStartingGroupNameFromId, 0x7cf310, bool, Params(int unk1, gpbstring<char>& unk2), Args(unk1, unk2));
	DefineConstMethod(GetStartingGroupScreenName, 0x7cf38b, bool, Params(const char* unk1, gpbstring<char>& unk2), Args(unk1, unk2));
	DefineConstMethod(GetWorldLocationScreenName, 0x7cf43d, bool, Params(unsigned int unk1, gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(IsScidInAnyWorldFrustum, 0x7ce0fa, bool, Params(const Scid_* unk1), Args(unk1));
	DefineConstMethod(IsScidName, 0x7cd630, bool, Params(const RegionId_* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineConstMethod(IsScidName, 0x7cd24b, bool, Params(const RegionId_* unk1, const Scid_* unk2), Args(unk1, unk2));
	DefineConstMethod(IsScidName, 0x7cd26e, bool, Params(const Scid_* unk1), Args(unk1));
	DefineConstMethod(IsStartingGroupEnabled, 0x7cc14e, bool, Params(const char* unk1), Args(unk1));
	DefineConstMethod(IsStartingGroupEnabled, 0x7c9df2, bool, Params(int unk1), Args(unk1));
	DefineMethod(IsTownPortalAllowed, 0x7cc368, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(SEnableStartGroup, 0x7ccce1, bool, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(GetStartGroupName, 0x7ce1cb, gpbstring<char>, Params(int unk1), Args(unk1));
	DefineConstMethod(MakeMapDirAddress, 0x7cdc41, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMapName, 0x403eed, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMpWorldName, 0x403ef1, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRegionNameForNode, 0x7cd0d4, const gpbstring<char>&, Params(const siege::database_guid& unk1), Args(unk1));
	DefineConstMethod(GetScidNameString, 0x7ccb15, const gpbstring<char>&, Params(const RegionId_* unk1, const Scid_* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetScidNameString, 0x7cd2c1, const gpbstring<char>&, Params(const Scid_* unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(GetStartingGroupClothMapRollover, 0x7cc10b, const gpbstring<char>&, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetWorldLocationName, 0x7ccd2c, const gpbstring<char>&, Params(unsigned int unk1), Args(unk1));
	DefineConstMethod(FindScidNameRegion, 0x7cbdce, const RegionId_*, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(FindScidNameRegion, 0x7ccb57, const RegionId_*, Params(const Scid_* unk1), Args(unk1));
	DefineConstMethod(GetScidRegionId, 0x7cca5e, const RegionId_*, Params(const Scid_* unk1), Args(unk1));
	DefineConstMethod(GetScidNameScid, 0x7cd651, const Scid_*, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(GetScidNameScid, 0x7cd283, const Scid_*, Params(const RegionId_* unk1, const gpbstring<char>& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetStartingGroupClothMapPos, 0x7cc0c8, const vector_3&, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetWorldLocationById, 0x7ccd7e, const WorldLocation*, Params(unsigned int unk1), Args(unk1));
	DefineConstMethod(GetWorldLocationByIndex, 0x4047dd, const WorldLocation*, Params(unsigned int unk1), Args(unk1));
	DefineConstMethod(GetWorldLocationByName, 0x7ccda1, const WorldLocation*, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetWorldFrustumRadius, 0x403ef5, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDefaultStartingGroupId, 0x7c9dba, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNumStartingGroups, 0x7c9dad, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNumWorldLocations, 0x4047d0, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetStartGroupId, 0x7cc18e, int, Params(const char* unk1), Args(unk1));
	DefineMethod(RCSet, 0x7d2810, FuBi::Cookie__*, Params(const char* unk1, const char* unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetMpWorld, 0x7d0103, FuBi::Cookie__*, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCSyncOnMachineHelper, 0x7ceaef, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2), Args(unk1, unk2));
	DefineConstMethod(GetWorldLocationId, 0x7cc330, unsigned int, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RCEnableStartGroup, 0x7caff5, void, Params(int unk1, bool unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetDefaultStartGroup, 0x7cb0df, void, Params(int unk1, bool unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetJoinGameGroup, 0x7c8632, void, Params(int unk1), Args(unk1));
	DefineMethod(SEnableStartGroup, 0x7cc1cd, void, Params(int unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SEnableStartGroupForPlayer, 0x7cc1e1, void, Params(int unk1, bool unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(SSetDefaultStartGroup, 0x7cc1ea, void, Params(int unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SSetDefaultStartGroupForPlayer, 0x7cc28b, void, Params(int unk1, bool unk2, unsigned long unk3), Args(unk1, unk2, unk3));

	// 0x00
	FillStruct(0x00, 0x04);
	// 0x04
	gpbstring<char> mapName;
	// 0x08
	gpbstring<char> mpWorldName;
	// 0x0c
	FillStruct(0x0c, 0x38);
	// 0x38
	float worldFrustumRadius;
};

STATIC_ASSERT_OFFSETOF(WorldMap, mpWorldName, 0x08);
STATIC_ASSERT_OFFSETOF(WorldMap, worldFrustumRadius, 0x38);
