#pragma once

#include "ClassMacros.h"

class WorldMap {
public:
	DefineSingleton(WorldMap, 0x404805);

	/*WorldMap*/ private: /*static*/ WorldMap* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00404805
	/*WorldMap*/ public: bool /*__thiscall*/ GetDefaultStartingGroup(gpbstring<char>& unk1) const; //0x007cf343
	/*WorldMap*/ public: bool /*__thiscall*/ GetFirstStartingPosition(const char* unk1, SiegePos& unk2, CameraPosition& unk3) const; //0x007ccbb8
	/*WorldMap*/ public: bool /*__thiscall*/ GetObjectFuelPlacement(const Scid_* unk1, const RegionId_* unk2, SiegePos& unk3, Quat& unk4) const; //0x007cdfba
	/*WorldMap*/ public: bool /*__thiscall*/ GetObjectFuelPlacement(const Scid_* unk1, const RegionId_* unk2, SiegePos& unk3) const; //0x007ce05e
	/*WorldMap*/ public: bool /*__thiscall*/ GetObjectFuelPlacement(const Scid_* unk1, SiegePos& unk2, Quat& unk3) const; //0x007ce03a
	/*WorldMap*/ public: bool /*__thiscall*/ GetObjectFuelPlacement(const Scid_* unk1, SiegePos& unk2) const; //0x007ce0cd
	/*WorldMap*/ public: bool /*__thiscall*/ GetRandomStartingPosition(const char* unk1, SiegePos& unk2, CameraPosition& unk3) const; //0x007ccc26
	/*WorldMap*/ public: bool /*__thiscall*/ GetStartingGroupMoodName(const char* unk1, gpbstring<char>& unk2) const; //0x007cf3ee
	/*WorldMap*/ public: bool /*__thiscall*/ GetStartingGroupName(unsigned int unk1, gpbstring<char>& unk2) const; //0x007cf2d7
	/*WorldMap*/ public: bool /*__thiscall*/ GetStartingGroupNameFromId(int unk1, gpbstring<char>& unk2) const; //0x007cf310
	/*WorldMap*/ public: bool /*__thiscall*/ GetStartingGroupScreenName(const char* unk1, gpbstring<char>& unk2) const; //0x007cf38b
	/*WorldMap*/ public: bool /*__thiscall*/ GetWorldLocationScreenName(unsigned int unk1, gpbstring<char>& unk2) const; //0x007cf43d
	/*WorldMap*/ public: bool /*__thiscall*/ IsScidInAnyWorldFrustum(const Scid_* unk1); //0x007ce0fa
	/*WorldMap*/ public: bool /*__thiscall*/ IsScidName(const RegionId_* unk1, const gpbstring<char>& unk2) const; //0x007cd630
	/*WorldMap*/ public: bool /*__thiscall*/ IsScidName(const RegionId_* unk1, const Scid_* unk2) const; //0x007cd24b
	/*WorldMap*/ public: bool /*__thiscall*/ IsScidName(const Scid_* unk1) const; //0x007cd26e
	/*WorldMap*/ public: bool /*__thiscall*/ IsStartingGroupEnabled(const char* unk1) const; //0x007cc14e
	/*WorldMap*/ public: bool /*__thiscall*/ IsStartingGroupEnabled(int unk1) const; //0x007c9df2
	/*WorldMap*/ public: bool /*__thiscall*/ IsTownPortalAllowed(const SiegePos& unk1); //0x007cc368
	/*WorldMap*/ public: bool /*__thiscall*/ SEnableStartGroup(const char* unk1, bool unk2); //0x007ccce1
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
	/*WorldMap*/ public: float /*__thiscall*/ GetWorldFrustumRadius() const; //0x00403ef5
	/*WorldMap*/ public: int /*__thiscall*/ GetDefaultStartingGroupId() const; //0x007c9dba
	/*WorldMap*/ public: int /*__thiscall*/ GetNumStartingGroups() const; //0x007c9dad
	/*WorldMap*/ public: int /*__thiscall*/ GetNumWorldLocations() const; //0x004047d0
	/*WorldMap*/ public: int /*__thiscall*/ GetStartGroupId(const char* unk1); //0x007cc18e
	/*WorldMap*/ public: FuBi::Cookie__* /*__thiscall*/ RCSet(const char* unk1, const char* unk2, unsigned long unk3); //0x007d2810
	/*WorldMap*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetMpWorld(const gpbstring<char>& unk1, unsigned long unk2); //0x007d0103
	/*WorldMap*/ public: FuBi::Cookie__* /*__thiscall*/ RCSyncOnMachineHelper(unsigned long unk1, const_mem_ptr unk2); //0x007ceaef
	/*WorldMap*/ public: unsigned int /*__thiscall*/ GetWorldLocationId(const gpbstring<char>& unk1) const; //0x007cc330
	/*WorldMap*/ public: void /*__thiscall*/ RCEnableStartGroup(int unk1, bool unk2, unsigned long unk3); //0x007caff5
	/*WorldMap*/ public: void /*__thiscall*/ RCSetDefaultStartGroup(int unk1, bool unk2, unsigned long unk3); //0x007cb0df
	/*WorldMap*/ public: void /*__thiscall*/ RCSetJoinGameGroup(int unk1); //0x007c8632
	/*WorldMap*/ public: void /*__thiscall*/ SEnableStartGroup(int unk1, bool unk2); //0x007cc1cd
	/*WorldMap*/ public: void /*__thiscall*/ SEnableStartGroupForPlayer(int unk1, bool unk2, unsigned long unk3); //0x007cc1e1
	/*WorldMap*/ public: void /*__thiscall*/ SSetDefaultStartGroup(int unk1, bool unk2); //0x007cc1ea
	/*WorldMap*/ public: void /*__thiscall*/ SSetDefaultStartGroupForPlayer(int unk1, bool unk2, unsigned long unk3); //0x007cc28b
};
