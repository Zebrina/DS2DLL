#pragma once

enum eLootFilter;
enum ePlayerSkin;

class Player {
public:
	/*Player*/ private: /*static*/ Player* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00502da9
	/*Player*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(Player* unk1); //0x00502da0
	/*Player*/ private: FuBi::Cookie__* /*__thiscall*/ RCSetReadyToPlay(bool unk1); //0x007bb9fe
	/*Player*/ private: FuBi::Cookie__* /*__thiscall*/ RCSyncOnMachineHelper(unsigned long unk1, const_mem_ptr unk2, bool unk3); //0x007c1ffa
	/*Player*/ private: void /*__thiscall*/ RCSetLoadProgress(float unk1); //0x007bab43
	/*Player*/ private: void /*__thiscall*/ RSSetLoadProgress(float unk1); //0x007bbcd2
	/*Player*/ public: /*static*/ int /*__cdecl*/ GetHumanPlayerCount(); //0x004efd85
	/*Player*/ public: bool /*__thiscall*/ GetIsEnemy(Player* unk1); //0x007bc2f4
	/*Player*/ public: bool /*__thiscall*/ GetIsFriend(Player* unk1); //0x007bc33e
	/*Player*/ public: bool /*__thiscall*/ GetLootLabelFilterOption(eLootFilter unk1); //0x007be8cb
	/*Player*/ public: bool /*__thiscall*/ GetLootPickupFilterOption(eLootFilter unk1); //0x007be7ec
	/*Player*/ public: bool /*__thiscall*/ IsAllowedLootLabel(const Goid_* unk1); //0x007be8e0
	/*Player*/ public: bool /*__thiscall*/ IsAllowedLootPickup(const Goid_* unk1); //0x007be801
	/*Player*/ public: bool /*__thiscall*/ IsComputerPlayer() const; //0x004132e9
	/*Player*/ public: bool /*__thiscall*/ IsHeroSpecReady() const; //0x0050366a
	/*Player*/ public: bool /*__thiscall*/ IsHumanPlayer() const; //0x00435b67
	/*Player*/ public: bool /*__thiscall*/ IsReadyToPlay(); //0x00502d79
	/*Player*/ public: bool /*__thiscall*/ IsScreenPlayer() const; //0x007bb9e7
	/*Player*/ public: Go* /*__thiscall*/ GetParty(); //0x007bc2b6
	/*Player*/ public: const gpbstring<char>& /*__thiscall*/ GetWorldLocationName() const; //0x007bc1c5
	/*Player*/ public: const Goid_* /*__thiscall*/ GetHero() const; //0x00413305
	/*Player*/ public: const Goid_* /*__thiscall*/ GetStash(); //0x00472ed1
	/*Player*/ public: const PlayerId_* /*__thiscall*/ GetId() const; //0x004132da
	/*Player*/ public: eLootFilter /*__thiscall*/ BuildLootLabelFilter(); //0x007be824
	/*Player*/ public: eLootFilter /*__thiscall*/ BuildLootPickupFilter(); //0x007be745
	/*Player*/ public: eLootFilter /*__thiscall*/ GetLootLabelFilter(); //0x007be88c
	/*Player*/ public: eLootFilter /*__thiscall*/ GetLootPickupFilter(); //0x007be7ad
	/*Player*/ public: ePlayerController /*__thiscall*/ GetController() const; //0x00472ebf
	/*Player*/ public: int /*__thiscall*/ GetPartyMembers(GoidColl& unk1); //0x007be0f4
	/*Player*/ public: int /*__thiscall*/ GetPartyMembers(GopColl& unk1); //0x007be14b
	/*Player*/ public: int /*__thiscall*/ GetTeam(); //0x007bb026
	/*Player*/ public: int /*__thiscall*/ GetTeamMembers(GopColl& unk1); //0x007be197
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCAddStartingPosition(const SiegePos& unk1); //0x007c1d2f
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetFriendTo(unsigned long unk1); //0x007bc352
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetHeroHead(const gpbstring<char>& unk1); //0x007bf074
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetHeroName(const gpbstring<unsigned short>& unk1); //0x007c07b5
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetHeroSkin(ePlayerSkin unk1, const gpbstring<char>& unk2); //0x007bef6d
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetHeroUberLevel(float unk1); //0x007bcf90
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetIsOnZone(bool unk1); //0x007bbb3d
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetJIP(bool unk1); //0x007baa4d
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetName(const gpbstring<unsigned short>& unk1); //0x007bfa25
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetPvPRequests(unsigned long unk1, unsigned long unk2); //0x007bd362
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetStartingGroup(const gpbstring<char>& unk1); //0x007c0400
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetTeamId(unsigned long unk1); //0x007bd463
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetWorldLocation(const Goid_* unk1, unsigned long unk2, bool unk3); //0x007bbfaa
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetWorldState(eWorldState unk1); //0x007bbe75
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetHeroHead(const gpbstring<char>& unk1); //0x007bfd46
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetHeroSkin(ePlayerSkin unk1, const gpbstring<char>& unk2); //0x007bfc49
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetHeroUberLevel(float unk1); //0x007bd8b5
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetIsOnZone(bool unk1); //0x007bca90
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetName(const gpbstring<unsigned short>& unk1); //0x007c06ba
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetReadyToPlay(bool unk1); //0x007bc995
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetStartingGroup(const gpbstring<char>& unk1); //0x007c09d0
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeamId(unsigned long unk1); //0x007bdca8
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTradeGoldAmount(int unk1); //0x007bd1f3
	/*Player*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetWorldState(eWorldState unk1); //0x007bd089
	/*Player*/ public: unsigned int /*__thiscall*/ GetWorldLocationId() const; //0x007bad0f
	/*Player*/ public: unsigned long /*__thiscall*/ GetMachineId() const; //0x004132f3
	/*Player*/ public: unsigned long /*__thiscall*/ GetTeamId(); //0x00472ec3
	/*Player*/ public: void /*__thiscall*/ GetName(gpbstring<char>& unk1) const; //0x00503fa0
	/*Player*/ public: void /*__thiscall*/ GetWorldLocationScreenName(gpbstring<char>& unk1) const; //0x007bf502
	/*Player*/ public: void /*__thiscall*/ RCAddFrustum(unsigned long unk1, const FrustumId_* unk2, const SiegePos& unk3); //0x007bcdd5
	/*Player*/ public: void /*__thiscall*/ RCImportCharacter(unsigned long unk1, const gpbstring<char>& unk2, int unk3); //0x007bf177
	/*Player*/ public: void /*__thiscall*/ RCImportStash(unsigned long unk1, const gpbstring<char>& unk2); //0x007bf3da
	/*Player*/ public: void /*__thiscall*/ RCMarkTalking(bool unk1); //0x007bb095
	/*Player*/ public: void /*__thiscall*/ RCQueryLatency(float unk1); //0x007be435
	/*Player*/ public: void /*__thiscall*/ RCResetStartingPositions(); //0x007bedcf
	/*Player*/ public: void /*__thiscall*/ RCSetCameraPosition(const CameraPosition& unk1); //0x007bcb8b
	/*Player*/ public: void /*__thiscall*/ RCSetInitialFrustum(unsigned long unk1, const FrustumId_* unk2, const SiegePos& unk3, const CameraPosition& unk4); //0x007bcca1
	/*Player*/ public: void /*__thiscall*/ RCSetMemberData(int unk1, const gpbstring<char>& unk2, const_mem_ptr unk3, const SiegePos& unk4, const gpbstring<char>& unk5); //0x007c2479
	/*Player*/ public: void /*__thiscall*/ RCSetStash(const Goid_* unk1); //0x007bac29
	/*Player*/ public: void /*__thiscall*/ RCSetStashCloneSourceTemplate(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x007bfb61
	/*Player*/ public: void /*__thiscall*/ RCSetTradeGoldAmount(int unk1, unsigned long unk2); //0x007baeba
	/*Player*/ public: void /*__thiscall*/ RSAckLatency(float unk1); //0x007bdf16
	/*Player*/ public: void /*__thiscall*/ RSImportCharacter(const gpbstring<char>& unk1, int unk2); //0x007bfe40
	/*Player*/ public: void /*__thiscall*/ RSImportStash(const gpbstring<char>& unk1); //0x007c024b
	/*Player*/ public: void /*__thiscall*/ RSMarkTalking(bool unk1); //0x007bc4e0
	/*Player*/ public: void /*__thiscall*/ RSSetCrossoverCodeEnabled(bool unk1); //0x007bb265
	/*Player*/ public: void /*__thiscall*/ RSSetHeroName(const gpbstring<unsigned short>& unk1); //0x007c0de7
	/*Player*/ public: void /*__thiscall*/ RSSetLootLabelFilter(eLootFilter unk1); //0x007bdb46
	/*Player*/ public: void /*__thiscall*/ RSSetLootPickupFilter(eLootFilter unk1); //0x007bd9e4
	/*Player*/ public: void /*__thiscall*/ RSSetMemberData(int unk1, const gpbstring<char>& unk2, const_mem_ptr unk3, const SiegePos& unk4, const gpbstring<char>& unk5); //0x007c2c9f
	/*Player*/ public: void /*__thiscall*/ RSSetStashCloneSourceTemplate(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x007c08aa
	/*Player*/ public: void /*__thiscall*/ RSSetWatchingMovie(bool unk1); //0x007bb17a
	/*Player*/ public: void /*__thiscall*/ SCreateStash(); //0x007beeb6
	/*Player*/ public: void /*__thiscall*/ SetLootLabelFilter(eLootFilter unk1); //0x00502d90
	/*Player*/ public: void /*__thiscall*/ SetLootLabelFilterOption(eLootFilter unk1, bool unk2); //0x007be8a1
	/*Player*/ public: void /*__thiscall*/ SetLootPickupFilter(eLootFilter unk1); //0x00502d80
	/*Player*/ public: void /*__thiscall*/ SetLootPickupFilterOption(eLootFilter unk1, bool unk2); //0x007be7c2
	/*Player*/ public: void /*__thiscall*/ SetPartyDirty(); //0x007bc21b
	/*Player*/ public: void /*__thiscall*/ SSetWorldLocation(const Goid_* unk1, const gpbstring<char>& unk2); //0x007bd9c0
	/*Player*/ public: void /*__thiscall*/ SSetWorldLocation(const Goid_* unk1, unsigned long unk2); //0x007bd184
};
