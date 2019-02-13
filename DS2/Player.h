#pragma once

enum eLootFilter;
enum ePlayerSkin;

class Player {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x502da9, Player*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*Player*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(Player* unk1); //0x00502da0
	DefineMethod(RCSetReadyToPlay, 0x7bb9fe, FuBi::Cookie__*, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSyncOnMachineHelper, 0x7c1ffa, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2, bool unk3), Args(unsigned long unk1, const_mem_ptr unk2, bool unk3));
	DefineMethod(RCSetLoadProgress, 0x7bab43, void, Params(float unk1), Args(float unk1));
	DefineMethod(RSSetLoadProgress, 0x7bbcd2, void, Params(float unk1), Args(float unk1));
	DefineStaticMethod(GetHumanPlayerCount, 0x4efd85, int, Params(), Args());
	DefineMethod(GetIsEnemy, 0x7bc2f4, bool, Params(Player* unk1), Args(Player* unk1));
	DefineMethod(GetIsFriend, 0x7bc33e, bool, Params(Player* unk1), Args(Player* unk1));
	DefineMethod(GetLootLabelFilterOption, 0x7be8cb, bool, Params(eLootFilter unk1), Args(eLootFilter unk1));
	DefineMethod(GetLootPickupFilterOption, 0x7be7ec, bool, Params(eLootFilter unk1), Args(eLootFilter unk1));
	DefineMethod(IsAllowedLootLabel, 0x7be8e0, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(IsAllowedLootPickup, 0x7be801, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(IsComputerPlayer, 0x4132e9, bool, Params(), Args());
	DefineConstMethod(IsHeroSpecReady, 0x50366a, bool, Params(), Args());
	DefineConstMethod(IsHumanPlayer, 0x435b67, bool, Params(), Args());
	DefineMethod(IsReadyToPlay, 0x502d79, bool, Params(), Args());
	DefineConstMethod(IsScreenPlayer, 0x7bb9e7, bool, Params(), Args());
	DefineMethod(GetParty, 0x7bc2b6, Go*, Params(), Args());
	/*Player*/ public: const gpbstring<char>& /*__thiscall*/ GetWorldLocationName() const; //0x007bc1c5
	/*Player*/ public: const Goid_* /*__thiscall*/ GetHero() const; //0x00413305
	/*Player*/ public: const Goid_* /*__thiscall*/ GetStash(); //0x00472ed1
	/*Player*/ public: const PlayerId_* /*__thiscall*/ GetId() const; //0x004132da
	DefineMethod(BuildLootLabelFilter, 0x7be824, eLootFilter, Params(), Args());
	DefineMethod(BuildLootPickupFilter, 0x7be745, eLootFilter, Params(), Args());
	DefineMethod(GetLootLabelFilter, 0x7be88c, eLootFilter, Params(), Args());
	DefineMethod(GetLootPickupFilter, 0x7be7ad, eLootFilter, Params(), Args());
	DefineConstMethod(GetController, 0x472ebf, ePlayerController, Params(), Args());
	DefineMethod(GetPartyMembers, 0x7be0f4, int, Params(GoidColl& unk1), Args(GoidColl& unk1));
	DefineMethod(GetPartyMembers, 0x7be14b, int, Params(GopColl& unk1), Args(GopColl& unk1));
	DefineMethod(GetTeam, 0x7bb026, int, Params(), Args());
	DefineMethod(GetTeamMembers, 0x7be197, int, Params(GopColl& unk1), Args(GopColl& unk1));
	DefineMethod(RCAddStartingPosition, 0x7c1d2f, FuBi::Cookie__*, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(RCSetFriendTo, 0x7bc352, FuBi::Cookie__*, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCSetHeroHead, 0x7bf074, FuBi::Cookie__*, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RCSetHeroName, 0x7c07b5, FuBi::Cookie__*, Params(const gpbstring<unsigned short>& unk1), Args(const gpbstring<unsigned short>& unk1));
	DefineMethod(RCSetHeroSkin, 0x7bef6d, FuBi::Cookie__*, Params(ePlayerSkin unk1, const gpbstring<char>& unk2), Args(ePlayerSkin unk1, const gpbstring<char>& unk2));
	DefineMethod(RCSetHeroUberLevel, 0x7bcf90, FuBi::Cookie__*, Params(float unk1), Args(float unk1));
	DefineMethod(RCSetIsOnZone, 0x7bbb3d, FuBi::Cookie__*, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetJIP, 0x7baa4d, FuBi::Cookie__*, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetName, 0x7bfa25, FuBi::Cookie__*, Params(const gpbstring<unsigned short>& unk1), Args(const gpbstring<unsigned short>& unk1));
	DefineMethod(RCSetPvPRequests, 0x7bd362, FuBi::Cookie__*, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(RCSetStartingGroup, 0x7c0400, FuBi::Cookie__*, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RCSetTeamId, 0x7bd463, FuBi::Cookie__*, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCSetWorldLocation, 0x7bbfaa, FuBi::Cookie__*, Params(const Goid_* unk1, unsigned long unk2, bool unk3), Args(const Goid_* unk1, unsigned long unk2, bool unk3));
	DefineMethod(RCSetWorldState, 0x7bbe75, FuBi::Cookie__*, Params(eWorldState unk1), Args(eWorldState unk1));
	DefineMethod(RSSetHeroHead, 0x7bfd46, FuBi::Cookie__*, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RSSetHeroSkin, 0x7bfc49, FuBi::Cookie__*, Params(ePlayerSkin unk1, const gpbstring<char>& unk2), Args(ePlayerSkin unk1, const gpbstring<char>& unk2));
	DefineMethod(RSSetHeroUberLevel, 0x7bd8b5, FuBi::Cookie__*, Params(float unk1), Args(float unk1));
	DefineMethod(RSSetIsOnZone, 0x7bca90, FuBi::Cookie__*, Params(bool unk1), Args(bool unk1));
	DefineMethod(RSSetName, 0x7c06ba, FuBi::Cookie__*, Params(const gpbstring<unsigned short>& unk1), Args(const gpbstring<unsigned short>& unk1));
	DefineMethod(RSSetReadyToPlay, 0x7bc995, FuBi::Cookie__*, Params(bool unk1), Args(bool unk1));
	DefineMethod(RSSetStartingGroup, 0x7c09d0, FuBi::Cookie__*, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RSSetTeamId, 0x7bdca8, FuBi::Cookie__*, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RSSetTradeGoldAmount, 0x7bd1f3, FuBi::Cookie__*, Params(int unk1), Args(int unk1));
	DefineMethod(RSSetWorldState, 0x7bd089, FuBi::Cookie__*, Params(eWorldState unk1), Args(eWorldState unk1));
	/*Player*/ public: unsigned int /*__thiscall*/ GetWorldLocationId() const; //0x007bad0f
	/*Player*/ public: unsigned long /*__thiscall*/ GetMachineId() const; //0x004132f3
	/*Player*/ public: unsigned long /*__thiscall*/ GetTeamId(); //0x00472ec3
	DefineConstMethod(GetName, 0x503fa0, void, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
	DefineConstMethod(GetWorldLocationScreenName, 0x7bf502, void, Params(gpbstring<char>& unk1), Args(gpbstring<char>& unk1));
	DefineMethod(RCAddFrustum, 0x7bcdd5, void, Params(unsigned long unk1, const FrustumId_* unk2, const SiegePos& unk3), Args(unsigned long unk1, const FrustumId_* unk2, const SiegePos& unk3));
	DefineMethod(RCImportCharacter, 0x7bf177, void, Params(unsigned long unk1, const gpbstring<char>& unk2, int unk3), Args(unsigned long unk1, const gpbstring<char>& unk2, int unk3));
	DefineMethod(RCImportStash, 0x7bf3da, void, Params(unsigned long unk1, const gpbstring<char>& unk2), Args(unsigned long unk1, const gpbstring<char>& unk2));
	DefineMethod(RCMarkTalking, 0x7bb095, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCQueryLatency, 0x7be435, void, Params(float unk1), Args(float unk1));
	DefineMethod(RCResetStartingPositions, 0x7bedcf, void, Params(), Args());
	DefineMethod(RCSetCameraPosition, 0x7bcb8b, void, Params(const CameraPosition& unk1), Args(const CameraPosition& unk1));
	DefineMethod(RCSetInitialFrustum, 0x7bcca1, void, Params(unsigned long unk1, const FrustumId_* unk2, const SiegePos& unk3, const CameraPosition& unk4), Args(unsigned long unk1, const FrustumId_* unk2, const SiegePos& unk3, const CameraPosition& unk4));
	DefineMethod(RCSetMemberData, 0x7c2479, void, Params(int unk1, const gpbstring<char>& unk2, const_mem_ptr unk3, const SiegePos& unk4, const gpbstring<char>& unk5), Args(int unk1, const gpbstring<char>& unk2, const_mem_ptr unk3, const SiegePos& unk4, const gpbstring<char>& unk5));
	DefineMethod(RCSetStash, 0x7bac29, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCSetStashCloneSourceTemplate, 0x7bfb61, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(RCSetTradeGoldAmount, 0x7baeba, void, Params(int unk1, unsigned long unk2), Args(int unk1, unsigned long unk2));
	DefineMethod(RSAckLatency, 0x7bdf16, void, Params(float unk1), Args(float unk1));
	DefineMethod(RSImportCharacter, 0x7bfe40, void, Params(const gpbstring<char>& unk1, int unk2), Args(const gpbstring<char>& unk1, int unk2));
	DefineMethod(RSImportStash, 0x7c024b, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RSMarkTalking, 0x7bc4e0, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RSSetCrossoverCodeEnabled, 0x7bb265, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RSSetHeroName, 0x7c0de7, void, Params(const gpbstring<unsigned short>& unk1), Args(const gpbstring<unsigned short>& unk1));
	DefineMethod(RSSetLootLabelFilter, 0x7bdb46, void, Params(eLootFilter unk1), Args(eLootFilter unk1));
	DefineMethod(RSSetLootPickupFilter, 0x7bd9e4, void, Params(eLootFilter unk1), Args(eLootFilter unk1));
	DefineMethod(RSSetMemberData, 0x7c2c9f, void, Params(int unk1, const gpbstring<char>& unk2, const_mem_ptr unk3, const SiegePos& unk4, const gpbstring<char>& unk5), Args(int unk1, const gpbstring<char>& unk2, const_mem_ptr unk3, const SiegePos& unk4, const gpbstring<char>& unk5));
	DefineMethod(RSSetStashCloneSourceTemplate, 0x7c08aa, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(RSSetWatchingMovie, 0x7bb17a, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SCreateStash, 0x7beeb6, void, Params(), Args());
	DefineMethod(SetLootLabelFilter, 0x502d90, void, Params(eLootFilter unk1), Args(eLootFilter unk1));
	DefineMethod(SetLootLabelFilterOption, 0x7be8a1, void, Params(eLootFilter unk1, bool unk2), Args(eLootFilter unk1, bool unk2));
	DefineMethod(SetLootPickupFilter, 0x502d80, void, Params(eLootFilter unk1), Args(eLootFilter unk1));
	DefineMethod(SetLootPickupFilterOption, 0x7be7c2, void, Params(eLootFilter unk1, bool unk2), Args(eLootFilter unk1, bool unk2));
	DefineMethod(SetPartyDirty, 0x7bc21b, void, Params(), Args());
	DefineMethod(SSetWorldLocation, 0x7bd9c0, void, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(const Goid_* unk1, const gpbstring<char>& unk2));
	DefineMethod(SSetWorldLocation, 0x7bd184, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
};
