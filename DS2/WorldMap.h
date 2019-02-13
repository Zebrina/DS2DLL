#pragma once

#include "ClassMacros.h"

class WorldMap {
public:
	DefineSingleton(WorldMap, 0x404805);

	/*WorldMap*/ private: /*static*/ WorldMap* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00404805
	DefineConstMethod(GetDefaultStartingGroup, 0x7cf343, bool, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
	DefineConstMethod(GetFirstStartingPosition, 0x7ccbb8, bool, Params(const char* unk1, SiegePos& unk2, CameraPosition& unk3), Args(const char* unk1, SiegePos& unk2, CameraPosition& unk3));
	DefineConstMethod(GetObjectFuelPlacement, 0x7cdfba, bool, Params(const Scid_* unk1, const RegionId_* unk2, SiegePos& unk3, Quat& unk4), Args(const Scid_* unk1, const RegionId_* unk2, SiegePos& unk3, Quat& unk4));
	DefineConstMethod(GetObjectFuelPlacement, 0x7ce05e, bool, Params(const Scid_* unk1, const RegionId_* unk2, SiegePos& unk3), Args(const Scid_* unk1, const RegionId_* unk2, SiegePos& unk3));
	DefineConstMethod(GetObjectFuelPlacement, 0x7ce03a, bool, Params(const Scid_* unk1, SiegePos& unk2, Quat& unk3), Args(const Scid_* unk1, SiegePos& unk2, Quat& unk3));
	DefineConstMethod(GetObjectFuelPlacement, 0x7ce0cd, bool, Params(const Scid_* unk1, SiegePos& unk2), Args(const Scid_* unk1, SiegePos& unk2));
	DefineConstMethod(GetRandomStartingPosition, 0x7ccc26, bool, Params(const char* unk1, SiegePos& unk2, CameraPosition& unk3), Args(const char* unk1, SiegePos& unk2, CameraPosition& unk3));
	DefineConstMethod(GetStartingGroupMoodName, 0x7cf3ee, bool, Params(const char* unk1, gpbstring<char>& unk2), Args(const char* unk1, gpbstring<char>& unk2));
	DefineConstMethod(GetStartingGroupName, 0x7cf2d7, bool, Params(unsigned int unk1, gpbstring<char>& unk2), Args(unsigned int unk1, gpbstring<char>& unk2));
	DefineConstMethod(GetStartingGroupNameFromId, 0x7cf310, bool, Params(int unk1, gpbstring<char>& unk2), Args(int unk1, gpbstring<char>& unk2));
	DefineConstMethod(GetStartingGroupScreenName, 0x7cf38b, bool, Params(const char* unk1, gpbstring<char>& unk2), Args(const char* unk1, gpbstring<char>& unk2));
	DefineConstMethod(GetWorldLocationScreenName, 0x7cf43d, bool, Params(unsigned int unk1, gpbstring<char>& unk2), Args(unsigned int unk1, gpbstring<char>& unk2));
	DefineMethod(IsScidInAnyWorldFrustum, 0x7ce0fa, bool, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineConstMethod(IsScidName, 0x7cd630, bool, Params(const RegionId_* unk1, const gpbstring<char>& unk2), Args(const RegionId_* unk1, const gpbstring<char>& unk2));
	DefineConstMethod(IsScidName, 0x7cd24b, bool, Params(const RegionId_* unk1, const Scid_* unk2), Args(const RegionId_* unk1, const Scid_* unk2));
	DefineConstMethod(IsScidName, 0x7cd26e, bool, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineConstMethod(IsStartingGroupEnabled, 0x7cc14e, bool, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(IsStartingGroupEnabled, 0x7c9df2, bool, Params(int unk1), Args(int unk1));
	DefineMethod(IsTownPortalAllowed, 0x7cc368, bool, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(SEnableStartGroup, 0x7ccce1, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	/*WorldMap*/ public: gpbstring<char> /*__thiscall*/ GetStartGroupName(int unk1); //0x007ce1cb
	/*WorldMap*/ public: gpbstring<char> /*__thiscall*/ MakeMapDirAddress() const; //0x007cdc41
	/*WorldMap*/ public: const gpbstring<char>& /*__thiscall*/ GetMapName() const; //0x00403eed
	/*WorldMap*/ public: const gpbstring<char>& /*__thiscall*/ GetMpWorldName() const; //0x00403ef1
	/*WorldMap*/ public: const gpbstring<char>& /*__thiscall*/ GetRegionNameForNode(const siege::database_guid& unk1) const; //0x007cd0d4
	/*WorldMap*/ public: const gpbstring<char>& /*__thiscall*/ GetScidNameString(const RegionId_* unk1, const Scid_* unk2, bool unk3) const; //0x007ccb15
	/*WorldMap*/ public: const gpbstring<char>& /*__thiscall*/ GetScidNameString(const Scid_* unk1, bool unk2) const; //0x007cd2c1
	/*WorldMap*/ public: const gpbstring<char>& /*__thiscall*/ GetStartingGroupClothMapRollover(const char* unk1) const; //0x007cc10b
	/*WorldMap*/ public: const gpbstring<char>& /*__thiscall*/ GetWorldLocationName(unsigned int unk1) const; //0x007ccd2c
	/*WorldMap*/ public: const RegionId_* /*__thiscall*/ FindScidNameRegion(const gpbstring<char>& unk1) const; //0x007cbdce
	/*WorldMap*/ public: const RegionId_* /*__thiscall*/ FindScidNameRegion(const Scid_* unk1) const; //0x007ccb57
	/*WorldMap*/ public: const RegionId_* /*__thiscall*/ GetScidRegionId(const Scid_* unk1) const; //0x007cca5e
	/*WorldMap*/ public: const Scid_* /*__thiscall*/ GetScidNameScid(const gpbstring<char>& unk1, bool unk2) const; //0x007cd651
	/*WorldMap*/ public: const Scid_* /*__thiscall*/ GetScidNameScid(const RegionId_* unk1, const gpbstring<char>& unk2, bool unk3) const; //0x007cd283
	/*WorldMap*/ public: const vector_3& /*__thiscall*/ GetStartingGroupClothMapPos(const char* unk1) const; //0x007cc0c8
	/*WorldMap*/ public: const WorldLocation* /*__thiscall*/ GetWorldLocationById(unsigned int unk1) const; //0x007ccd7e
	/*WorldMap*/ public: const WorldLocation* /*__thiscall*/ GetWorldLocationByIndex(unsigned int unk1) const; //0x004047dd
	/*WorldMap*/ public: const WorldLocation* /*__thiscall*/ GetWorldLocationByName(const gpbstring<char>& unk1) const; //0x007ccda1
	DefineConstMethod(GetWorldFrustumRadius, 0x403ef5, float, Params(), Args());
	DefineConstMethod(GetDefaultStartingGroupId, 0x7c9dba, int, Params(), Args());
	DefineConstMethod(GetNumStartingGroups, 0x7c9dad, int, Params(), Args());
	DefineConstMethod(GetNumWorldLocations, 0x4047d0, int, Params(), Args());
	DefineMethod(GetStartGroupId, 0x7cc18e, int, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RCSet, 0x7d2810, FuBi::Cookie__*, Params(const char* unk1, const char* unk2, unsigned long unk3), Args(const char* unk1, const char* unk2, unsigned long unk3));
	DefineMethod(RCSetMpWorld, 0x7d0103, FuBi::Cookie__*, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(const gpbstring<char>& unk1, unsigned long unk2));
	DefineMethod(RCSyncOnMachineHelper, 0x7ceaef, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2), Args(unsigned long unk1, const_mem_ptr unk2));
	/*WorldMap*/ public: unsigned int /*__thiscall*/ GetWorldLocationId(const gpbstring<char>& unk1) const; //0x007cc330
	DefineMethod(RCEnableStartGroup, 0x7caff5, void, Params(int unk1, bool unk2, unsigned long unk3), Args(int unk1, bool unk2, unsigned long unk3));
	DefineMethod(RCSetDefaultStartGroup, 0x7cb0df, void, Params(int unk1, bool unk2, unsigned long unk3), Args(int unk1, bool unk2, unsigned long unk3));
	DefineMethod(RCSetJoinGameGroup, 0x7c8632, void, Params(int unk1), Args(int unk1));
	DefineMethod(SEnableStartGroup, 0x7cc1cd, void, Params(int unk1, bool unk2), Args(int unk1, bool unk2));
	DefineMethod(SEnableStartGroupForPlayer, 0x7cc1e1, void, Params(int unk1, bool unk2, unsigned long unk3), Args(int unk1, bool unk2, unsigned long unk3));
	DefineMethod(SSetDefaultStartGroup, 0x7cc1ea, void, Params(int unk1, bool unk2), Args(int unk1, bool unk2));
	DefineMethod(SSetDefaultStartGroupForPlayer, 0x7cc28b, void, Params(int unk1, bool unk2, unsigned long unk3), Args(int unk1, bool unk2, unsigned long unk3));
};
