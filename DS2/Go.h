#pragma once

class Go {
public:
	/*Go*/ private: /*static*/ Go* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x0050316d
	/*Go*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(Go* unk1); //0x00503164
	/*Go*/ public: bool /*__thiscall*/ Deselect(); //0x00472f3a
	/*Go*/ public: bool /*__thiscall*/ DoesShareFrustum(Go* unk1); //0x007b1970
	/*Go*/ public: bool /*__thiscall*/ GetComponentBool(const char* unk1, const char* unk2, bool unk3); //0x007b6b53
	/*Go*/ public: bool /*__thiscall*/ GetComponentBool(const char* unk1, const char* unk2); //0x00502f8d
	/*Go*/ public: bool /*__thiscall*/ HasActor() const; //0x0043d96c
	/*Go*/ public: bool /*__thiscall*/ HasAspect() const; //0x00428541
	/*Go*/ public: bool /*__thiscall*/ HasAttack() const; //0x0044a6f4
	/*Go*/ public: bool /*__thiscall*/ HasBody() const; //0x00472f8a
	/*Go*/ public: bool /*__thiscall*/ HasChild(const Go* unk1) const; //0x007b4fc3
	/*Go*/ public: bool /*__thiscall*/ HasChild(const Goid_* unk1) const; //0x007b2ebf
	/*Go*/ public: bool /*__thiscall*/ HasCoach() const; //0x00502ff9
	/*Go*/ public: bool /*__thiscall*/ HasCommon() const; //0x0050300c
	/*Go*/ public: bool /*__thiscall*/ HasComponent(const char* unk1) const; //0x0043d950
	/*Go*/ public: bool /*__thiscall*/ HasConversation() const; //0x00435c4c
	/*Go*/ public: bool /*__thiscall*/ HasCorpse() const; //0x00472fa3
	/*Go*/ public: bool /*__thiscall*/ HasDefend() const; //0x004a488b
	/*Go*/ public: bool /*__thiscall*/ HasFader() const; //0x0050304d
	/*Go*/ public: bool /*__thiscall*/ HasFollower() const; //0x004c43a3
	/*Go*/ public: bool /*__thiscall*/ HasGold() const; //0x00486209
	/*Go*/ public: bool /*__thiscall*/ HasGui() const; //0x00468154
	/*Go*/ public: bool /*__thiscall*/ HasHire() const; //0x004cffe0
	/*Go*/ public: bool /*__thiscall*/ HasInventory() const; //0x00442dd1
	/*Go*/ public: bool /*__thiscall*/ HasMagic() const; //0x00486218
	/*Go*/ public: bool /*__thiscall*/ HasMind() const; //0x00435c65
	/*Go*/ public: bool /*__thiscall*/ HasParent() const; //0x0046802d
	/*Go*/ public: bool /*__thiscall*/ HasParty() const; //0x00413477
	/*Go*/ public: bool /*__thiscall*/ HasPet() const; //0x00413486
	/*Go*/ public: bool /*__thiscall*/ HasPhysics() const; //0x005030d4
	/*Go*/ public: bool /*__thiscall*/ HasPlacement() const; //0x004288f3
	/*Go*/ public: bool /*__thiscall*/ HasPotion() const; //0x00503101
	/*Go*/ public: bool /*__thiscall*/ HasProxy() const; //0x00503124
	/*Go*/ public: bool /*__thiscall*/ HasStash() const; //0x0046dd5d
	/*Go*/ public: bool /*__thiscall*/ HasStore() const; //0x0046dd76
	/*Go*/ public: bool /*__thiscall*/ HasZone() const; //0x0050315b
	/*Go*/ public: bool /*__thiscall*/ IsActiveSpell() const; //0x007b1b65
	/*Go*/ public: bool /*__thiscall*/ IsActor() const; //0x007b1aa3
	/*Go*/ public: bool /*__thiscall*/ IsAllClients() const; //0x00435c03
	/*Go*/ public: bool /*__thiscall*/ IsAmmo() const; //0x007b1aab
	/*Go*/ public: bool /*__thiscall*/ IsAnyHumanParty() const; //0x007b1abf
	/*Go*/ public: bool /*__thiscall*/ IsAnyHumanPartyMember() const; //0x007b1ad6
	/*Go*/ public: bool /*__thiscall*/ IsAnyHumanPartyMemberOrSummon() const; //0x007b1af0
	/*Go*/ public: bool /*__thiscall*/ IsArmor() const; //0x007b2b6d
	/*Go*/ public: bool /*__thiscall*/ IsAutoExpirationEnabled() const; //0x00502f55
	/*Go*/ public: bool /*__thiscall*/ IsBreakable() const; //0x007b1b2d
	/*Go*/ public: bool /*__thiscall*/ IsChad() const; //0x007b4eb7
	/*Go*/ public: bool /*__thiscall*/ IsCommand() const; //0x007b4ed3
	/*Go*/ public: bool /*__thiscall*/ IsContainer() const; //0x007b1b44
	/*Go*/ public: bool /*__thiscall*/ IsDelayedMpDeletion() const; //0x00502ed3
	/*Go*/ public: bool /*__thiscall*/ IsEnchanted() const; //0x00502f34
	/*Go*/ public: bool /*__thiscall*/ IsEquipped() const; //0x007b2b83
	/*Go*/ public: bool /*__thiscall*/ IsFocused() const; //0x00472f18
	/*Go*/ public: bool /*__thiscall*/ IsGlobalGo() const; //0x00435bee
	/*Go*/ public: bool /*__thiscall*/ IsGold() const; //0x007b1b9b
	/*Go*/ public: bool /*__thiscall*/ IsHuded() const; //0x00502f2b
	/*Go*/ public: bool /*__thiscall*/ IsInActiveScreenWorldFrustum() const; //0x007b2968
	/*Go*/ public: bool /*__thiscall*/ IsInActiveWorldFrustum() const; //0x007b2948
	/*Go*/ public: bool /*__thiscall*/ IsInAnyScreenWorldFrustum() const; //0x007b2928
	/*Go*/ public: bool /*__thiscall*/ IsInAnyWorldFrustum() const; //0x0046805e
	/*Go*/ public: bool /*__thiscall*/ IsInFlick() const; //0x00502f14
	/*Go*/ public: bool /*__thiscall*/ IsInHotGroup() const; //0x00502ee9
	/*Go*/ public: bool /*__thiscall*/ IsInIntenseBattle() const; //0x00502f3f
	/*Go*/ public: bool /*__thiscall*/ IsInsideInventory() const; //0x004680cb
	/*Go*/ public: bool /*__thiscall*/ IsInViewFrustum() const; //0x007b2b14
	/*Go*/ public: bool /*__thiscall*/ IsItem() const; //0x007b1bea
	/*Go*/ public: bool /*__thiscall*/ IsJames() const; //0x007b4f24
	/*Go*/ public: bool /*__thiscall*/ IsLocalGo() const; //0x00502e9b
	/*Go*/ public: bool /*__thiscall*/ IsMarkedForDeletion() const; //0x00502ec7
	/*Go*/ public: bool /*__thiscall*/ IsMarkedForPickup() const; //0x007b1c87
	/*Go*/ public: bool /*__thiscall*/ IsMeleeWeapon() const; //0x007b2b92
	/*Go*/ public: bool /*__thiscall*/ IsMouseShadowed() const; //0x00502edf
	/*Go*/ public: bool /*__thiscall*/ IsNoStartupFx() const; //0x00502f49
	/*Go*/ public: bool /*__thiscall*/ IsOmni() const; //0x00413421
	/*Go*/ public: bool /*__thiscall*/ IsPackOnly() const; //0x007b1cb3
	/*Go*/ public: bool /*__thiscall*/ IsPlayerItemValid(const Goid_* unk1) const; //0x007b43ed
	/*Go*/ public: bool /*__thiscall*/ IsPlayerOnly() const; //0x0049848c
	/*Go*/ public: bool /*__thiscall*/ IsPotion() const; //0x007b1bfc
	/*Go*/ public: bool /*__thiscall*/ IsProbed() const; //0x00502f28
	/*Go*/ public: bool /*__thiscall*/ IsRangedWeapon() const; //0x007b2baf
	/*Go*/ public: bool /*__thiscall*/ IsScreenParty() const; //0x007b2bcd
	/*Go*/ public: bool /*__thiscall*/ IsScreenPartyMember() const; //0x007b2be6
	/*Go*/ public: bool /*__thiscall*/ IsScreenPlayerOwned() const; //0x007b2c09
	/*Go*/ public: bool /*__thiscall*/ IsSelectable() const; //0x007b1c05
	/*Go*/ public: bool /*__thiscall*/ IsSelected() const; //0x00472f24
	/*Go*/ public: bool /*__thiscall*/ IsServerOnly() const; //0x00435c0f
	/*Go*/ public: bool /*__thiscall*/ IsShield() const; //0x007b1c18
	/*Go*/ public: bool /*__thiscall*/ IsSingleton() const; //0x00502ebc
	/*Go*/ public: bool /*__thiscall*/ IsSpawned() const; //0x007b1c2c
	/*Go*/ public: bool /*__thiscall*/ IsSpell() const; //0x007b1c3b
	/*Go*/ public: bool /*__thiscall*/ IsSpellBook() const; //0x007b1c59
	/*Go*/ public: bool /*__thiscall*/ IsTeamMember(const Goid_* unk1) const; //0x007b43a7
	/*Go*/ public: bool /*__thiscall*/ IsTeleporting(); //0x00435c1b
	/*Go*/ public: bool /*__thiscall*/ IsUsable() const; //0x007b1c70
	/*Go*/ public: bool /*__thiscall*/ IsVisibleInScreenWorldFrustum() const; //0x007b2998
	/*Go*/ public: bool /*__thiscall*/ IsWeapon() const; //0x007b1c9e
	/*Go*/ public: bool /*__thiscall*/ Select(); //0x00472f30
	/*Go*/ public: bool /*__thiscall*/ Select(bool unk1, bool unk2); //0x007b2a1f
	/*Go*/ public: bool /*__thiscall*/ SetComponentBool(const char* unk1, const char* unk2, bool unk3); //0x007b6bd4
	/*Go*/ public: bool /*__thiscall*/ SetComponentFloat(const char* unk1, const char* unk2, float unk3); //0x007b6bed
	/*Go*/ public: bool /*__thiscall*/ SetComponentGoid(const char* unk1, const char* unk2, const Goid_* unk3); //0x007b6c0a
	/*Go*/ public: bool /*__thiscall*/ SetComponentInt(const char* unk1, const char* unk2, int unk3); //0x007b6bbb
	/*Go*/ public: bool /*__thiscall*/ SetComponentScid(const char* unk1, const char* unk2, const Scid_* unk3); //0x007b6c23
	/*Go*/ public: bool /*__thiscall*/ SetComponentString(const char* unk1, const char* unk2, const gpbstring<char>& unk3); //0x007b7653
	/*Go*/ public: bool /*__thiscall*/ ToggleSelected(); //0x00502ef2
	/*Go*/ public: bool /*__thiscall*/ WasInViewFrustumRecently(bool unk1) const; //0x007b2b32
	/*Go*/ public: Go* /*__thiscall*/ GetBestArmor(); //0x007b1a94
	/*Go*/ public: Go* /*__thiscall*/ GetOwningParty() const; //0x007b188a
	/*Go*/ public: Go* /*__thiscall*/ GetParent() const; //0x00409d08
	/*Go*/ public: Go* /*__thiscall*/ GetRoot(); //0x007b1869
	/*Go*/ public: GoActor* /*__thiscall*/ FUBI_RENAME_QueryActor(); //0x00502fbe
	/*Go*/ public: GoActor* /*__thiscall*/ FUBI_RENAME_QueryActor(bool unk1); //0x00502fb9
	/*Go*/ public: GoActor* /*__thiscall*/ GetActor(); //0x00413450
	/*Go*/ public: GoAspect* /*__thiscall*/ FUBI_RENAME_QueryAspect(); //0x00502fc7
	/*Go*/ public: GoAspect* /*__thiscall*/ FUBI_RENAME_QueryAspect(bool unk1); //0x00502fc1
	/*Go*/ public: GoAspect* /*__thiscall*/ GetAspect(); //0x00413459
	/*Go*/ public: GoAttack* /*__thiscall*/ FUBI_RENAME_QueryAttack(); //0x00502fd1
	/*Go*/ public: GoAttack* /*__thiscall*/ FUBI_RENAME_QueryAttack(bool unk1); //0x00502fcb
	/*Go*/ public: GoAttack* /*__thiscall*/ GetAttack(); //0x0044a6f0
	/*Go*/ public: GoBody* /*__thiscall*/ FUBI_RENAME_QueryBody(); //0x00502fdb
	/*Go*/ public: GoBody* /*__thiscall*/ FUBI_RENAME_QueryBody(bool unk1); //0x00502fd5
	/*Go*/ public: GoBody* /*__thiscall*/ GetBody(); //0x00472f86
	/*Go*/ public: GoCoach* /*__thiscall*/ FUBI_RENAME_QueryCoach(); //0x00502feb
	/*Go*/ public: GoCoach* /*__thiscall*/ FUBI_RENAME_QueryCoach(bool unk1); //0x00502fe5
	/*Go*/ public: GoCoach* /*__thiscall*/ GetCoach(); //0x00502ff5
	/*Go*/ public: GoCommon* /*__thiscall*/ FUBI_RENAME_QueryCommon(); //0x00503008
	/*Go*/ public: GoCommon* /*__thiscall*/ FUBI_RENAME_QueryCommon(bool unk1); //0x00503002
	/*Go*/ public: GoCommon* /*__thiscall*/ GetCommon(); //0x00413463
	/*Go*/ public: GoComponent* /*__thiscall*/ GetComponent(const char* unk1); //0x0046dd46
	/*Go*/ public: GoComponent* /*__thiscall*/ QueryComponent(const char* unk1, bool unk2); //0x007b50fb
	/*Go*/ public: GoConversation* /*__thiscall*/ FUBI_RENAME_QueryConversation(); //0x0050301b
	/*Go*/ public: GoConversation* /*__thiscall*/ FUBI_RENAME_QueryConversation(bool unk1); //0x00503015
	/*Go*/ public: GoConversation* /*__thiscall*/ GetConversation(); //0x00435c48
	/*Go*/ public: GoCorpse* /*__thiscall*/ FUBI_RENAME_QueryCorpse(); //0x00503025
	/*Go*/ public: GoCorpse* /*__thiscall*/ FUBI_RENAME_QueryCorpse(bool unk1); //0x0050301f
	/*Go*/ public: GoCorpse* /*__thiscall*/ GetCorpse(); //0x00472f9f
	/*Go*/ public: GoDefend* /*__thiscall*/ FUBI_RENAME_QueryDefend(); //0x0050302f
	/*Go*/ public: GoDefend* /*__thiscall*/ FUBI_RENAME_QueryDefend(bool unk1); //0x00503029
	/*Go*/ public: GoDefend* /*__thiscall*/ GetDefend(); //0x004a4887
	/*Go*/ public: GoFader* /*__thiscall*/ FUBI_RENAME_QueryFader(); //0x0050303f
	/*Go*/ public: GoFader* /*__thiscall*/ FUBI_RENAME_QueryFader(bool unk1); //0x00503039
	/*Go*/ public: GoFader* /*__thiscall*/ GetFader(); //0x00503049
	/*Go*/ public: GoFollower* /*__thiscall*/ FUBI_RENAME_QueryFollower(); //0x0050305c
	/*Go*/ public: GoFollower* /*__thiscall*/ FUBI_RENAME_QueryFollower(bool unk1); //0x00503056
	/*Go*/ public: GoFollower* /*__thiscall*/ GetFollower(); //0x004c439f
	/*Go*/ public: GoGold* /*__thiscall*/ FUBI_RENAME_QueryGold(); //0x0050306c
	/*Go*/ public: GoGold* /*__thiscall*/ FUBI_RENAME_QueryGold(bool unk1); //0x00503066
	/*Go*/ public: GoGold* /*__thiscall*/ GetGold(); //0x00503070
	/*Go*/ public: GoGui* /*__thiscall*/ FUBI_RENAME_QueryGui(); //0x0050307a
	/*Go*/ public: GoGui* /*__thiscall*/ FUBI_RENAME_QueryGui(bool unk1); //0x00503074
	/*Go*/ public: GoGui* /*__thiscall*/ GetGui(); //0x00472fb2
	/*Go*/ public: GoHire* /*__thiscall*/ FUBI_RENAME_QueryHire(); //0x00503084
	/*Go*/ public: GoHire* /*__thiscall*/ FUBI_RENAME_QueryHire(bool unk1); //0x0050307e
	/*Go*/ public: GoHire* /*__thiscall*/ GetHire(); //0x004cffdc
	/*Go*/ public: GoInventory* /*__thiscall*/ FUBI_RENAME_QueryInventory(); //0x0050308e
	/*Go*/ public: GoInventory* /*__thiscall*/ FUBI_RENAME_QueryInventory(bool unk1); //0x00503088
	/*Go*/ public: GoInventory* /*__thiscall*/ GetInventory(); //0x00442dcd
	/*Go*/ public: GoMagic* /*__thiscall*/ FUBI_RENAME_QueryMagic(); //0x00503098
	/*Go*/ public: GoMagic* /*__thiscall*/ FUBI_RENAME_QueryMagic(bool unk1); //0x00503092
	/*Go*/ public: GoMagic* /*__thiscall*/ GetMagic(); //0x00468163
	/*Go*/ public: GoMind* /*__thiscall*/ FUBI_RENAME_QueryMind(); //0x005030a2
	/*Go*/ public: GoMind* /*__thiscall*/ FUBI_RENAME_QueryMind(bool unk1); //0x0050309c
	/*Go*/ public: GoMind* /*__thiscall*/ GetMind(); //0x00435c61
	/*Go*/ public: GoParty* /*__thiscall*/ FUBI_RENAME_QueryParty(); //0x005030ac
	/*Go*/ public: GoParty* /*__thiscall*/ FUBI_RENAME_QueryParty(bool unk1); //0x005030a6
	/*Go*/ public: GoParty* /*__thiscall*/ GetParty(); //0x00413473
	/*Go*/ public: GoPet* /*__thiscall*/ FUBI_RENAME_QueryPet(); //0x005030b6
	/*Go*/ public: GoPet* /*__thiscall*/ FUBI_RENAME_QueryPet(bool unk1); //0x005030b0
	/*Go*/ public: GoPet* /*__thiscall*/ GetPet(); //0x00486227
	/*Go*/ public: GoPhysics* /*__thiscall*/ FUBI_RENAME_QueryPhysics(); //0x005030c6
	/*Go*/ public: GoPhysics* /*__thiscall*/ FUBI_RENAME_QueryPhysics(bool unk1); //0x005030c0
	/*Go*/ public: GoPhysics* /*__thiscall*/ GetPhysics(); //0x005030d0
	/*Go*/ public: GoPlacement* /*__thiscall*/ FUBI_RENAME_QueryPlacement(); //0x005030e3
	/*Go*/ public: GoPlacement* /*__thiscall*/ FUBI_RENAME_QueryPlacement(bool unk1); //0x005030dd
	/*Go*/ public: GoPlacement* /*__thiscall*/ GetPlacement(); //0x00409da3
	/*Go*/ public: GoPotion* /*__thiscall*/ FUBI_RENAME_QueryPotion(); //0x005030f3
	/*Go*/ public: GoPotion* /*__thiscall*/ FUBI_RENAME_QueryPotion(bool unk1); //0x005030ed
	/*Go*/ public: GoPotion* /*__thiscall*/ GetPotion(); //0x005030fd
	/*Go*/ public: GoProxy* /*__thiscall*/ FUBI_RENAME_QueryProxy(); //0x00503116
	/*Go*/ public: GoProxy* /*__thiscall*/ FUBI_RENAME_QueryProxy(bool unk1); //0x00503110
	/*Go*/ public: GoProxy* /*__thiscall*/ GetProxy(); //0x00503120
	/*Go*/ public: GoStash* /*__thiscall*/ FUBI_RENAME_QueryStash(); //0x00503133
	/*Go*/ public: GoStash* /*__thiscall*/ FUBI_RENAME_QueryStash(bool unk1); //0x0050312d
	/*Go*/ public: GoStash* /*__thiscall*/ GetStash(); //0x00472fbc
	/*Go*/ public: GoStore* /*__thiscall*/ FUBI_RENAME_QueryStore(); //0x0050313d
	/*Go*/ public: GoStore* /*__thiscall*/ FUBI_RENAME_QueryStore(bool unk1); //0x00503137
	/*Go*/ public: GoStore* /*__thiscall*/ GetStore(); //0x0046dd72
	/*Go*/ public: GoZone* /*__thiscall*/ FUBI_RENAME_QueryZone(); //0x0050314d
	/*Go*/ public: GoZone* /*__thiscall*/ FUBI_RENAME_QueryZone(bool unk1); //0x00503147
	/*Go*/ public: GoZone* /*__thiscall*/ GetZone(); //0x00503157
	/*Go*/ public: gpbstring<char> /*__thiscall*/ GetComponentString(const char* unk1, const char* unk2, const gpbstring<char>& unk3); //0x007b7634
	/*Go*/ public: gpbstring<char> /*__thiscall*/ GetComponentString(const char* unk1, const char* unk2); //0x00503ba4
	/*Go*/ public: gpbstring<char> /*__thiscall*/ GetMessage(const char* unk1); //0x007b75a7
	/*Go*/ public: gpbstring<char> /*__thiscall*/ GetTemplateDocs() const; //0x007b7471
	/*Go*/ public: Player* /*__thiscall*/ GetPlayer() const; //0x0042852b
	/*Go*/ public: const char* /*__thiscall*/ GetMaterial() const; //0x007b4397
	/*Go*/ public: const char* /*__thiscall*/ GetTemplateName() const; //0x00413419
	/*Go*/ public: const gpbstring<char>& /*__thiscall*/ DevGetFuelAddress() const; //0x00502f2e
	/*Go*/ public: const FrustumId_* /*__thiscall*/ CalcWorldFrustumMembership(bool unk1) const; //0x007b29d2
	/*Go*/ public: const FrustumId_* /*__thiscall*/ GetWorldFrustumMembership() const; //0x00502eb5
	/*Go*/ public: const Goid_* /*__thiscall*/ GetCloneSourceGoid() const; //0x00502eae
	/*Go*/ public: const Goid_* /*__thiscall*/ GetComponentGoid(const char* unk1, const char* unk2, const Goid_* unk3); //0x007b6b87
	/*Go*/ public: const Goid_* /*__thiscall*/ GetComponentGoid(const char* unk1, const char* unk2); //0x00502fa1
	/*Go*/ public: const Goid_* /*__thiscall*/ GetGoid() const; //0x00413406
	/*Go*/ public: const GopColl& /*__thiscall*/ GetChildren() const; //0x00413444
	/*Go*/ public: const PlayerId_* /*__thiscall*/ GetForPlayerOnly() const; //0x0049849e
	/*Go*/ public: const PlayerId_* /*__thiscall*/ GetPlayerId() const; //0x007b191d
	/*Go*/ public: const RegionId_* /*__thiscall*/ GetRegionSource() const; //0x00435bfc
	/*Go*/ public: const Scid_* /*__thiscall*/ GetComponentScid(const char* unk1, const char* unk2, const Scid_* unk3); //0x007b6ba1
	/*Go*/ public: const Scid_* /*__thiscall*/ GetComponentScid(const char* unk1, const char* unk2); //0x00435c24
	/*Go*/ public: const Scid_* /*__thiscall*/ GetScid() const; //0x00413415
	/*Go*/ public: eLifeState /*__thiscall*/ GetLifeState() const; //0x007b1a65
	/*Go*/ public: float /*__thiscall*/ GetComponentFloat(const char* unk1, const char* unk2, float unk3); //0x007b6b6d
	/*Go*/ public: float /*__thiscall*/ GetComponentFloat(const char* unk1, const char* unk2); //0x00472f44
	/*Go*/ public: float /*__thiscall*/ GetRadius() const; //0x007b1a73
	/*Go*/ public: int /*__thiscall*/ GetComponentInt(const char* unk1, const char* unk2, int unk3); //0x007b6b39
	/*Go*/ public: int /*__thiscall*/ GetComponentInt(const char* unk1, const char* unk2); //0x00502f79
	/*Go*/ public: int /*__thiscall*/ GetFlickRefCount() const; //0x00502f0d
	/*Go*/ public: FuBi::Cookie__* /*__thiscall*/ RCForcedExpiredTransfer(Go* unk1); //0x007b6886
	/*Go*/ public: unsigned long /*__thiscall*/ GetMachineId() const; //0x007b1927
	/*Go*/ public: unsigned long /*__thiscall*/ PlayMaterialSound(const char* unk1, const char* unk2, bool unk3); //0x007b7144
	/*Go*/ public: unsigned long /*__thiscall*/ PlayMaterialSound(const char* unk1, const Goid_* unk2, bool unk3); //0x007b7488
	/*Go*/ public: unsigned long /*__thiscall*/ PlaySound(const char* unk1, bool unk2, GPGSound::eSampleType unk3); //0x007b64b9
	/*Go*/ public: unsigned long /*__thiscall*/ PlaySound(const char* unk1, const Goid_* unk2, GPGSound::eSampleType unk3, float unk4, float unk5, bool unk6); //0x007b661f
	/*Go*/ public: unsigned long /*__thiscall*/ PlaySound(const char* unk1, float unk2, float unk3); //0x007b71c7
	/*Go*/ public: unsigned long /*__thiscall*/ PlaySound(const char* unk1, GPGSound::eSampleType unk2, float unk3, float unk4, bool unk5); //0x007b6591
	/*Go*/ public: unsigned long /*__thiscall*/ PlayVoiceSound(const char* unk1, bool unk2, bool unk3); //0x007b8379
	/*Go*/ public: unsigned long /*__thiscall*/ PlayVoiceSound(const char* unk1, bool unk2); //0x007b830e
	/*Go*/ public: unsigned long /*__thiscall*/ PlayVoiceSound(const char* unk1, const Goid_* unk2, float unk3, float unk4, bool unk5); //0x007b86b7
	/*Go*/ public: unsigned long /*__thiscall*/ PlayVoiceSound(const char* unk1, float unk2, float unk3, bool unk4); //0x007b862e
	/*Go*/ public: void /*__thiscall*/ AddChild(Go* unk1); //0x007b5a87
	/*Go*/ public: void /*__thiscall*/ ClearParent(); //0x00502f71
	/*Go*/ public: void /*__thiscall*/ DisableAutoExpiration(); //0x00502f69
	/*Go*/ public: void /*__thiscall*/ EnableAutoExpiration(); //0x00502f61
	/*Go*/ public: void /*__thiscall*/ EnableAutoExpiration(bool unk1); //0x007b2dfc
	/*Go*/ public: void /*__thiscall*/ PrepareToDrawNow(); //0x00502f20
	/*Go*/ public: void /*__thiscall*/ PrepareToDrawNow(bool unk1); //0x007b1a51
	/*Go*/ public: void /*__thiscall*/ RCDeactivateTrigger(unsigned short unk1); //0x007b3513
	/*Go*/ public: void /*__thiscall*/ RCExplodeGo(float unk1, const vector_3& unk2, unsigned long unk3); //0x007b2f9f
	/*Go*/ public: void /*__thiscall*/ RCPlayCombatSoundPacker(const_mem_ptr unk1); //0x007b4fdc
	/*Go*/ public: void /*__thiscall*/ RCPlayMaterialSound(const char* unk1, const char* unk2, bool unk3); //0x007b74bc
	/*Go*/ public: void /*__thiscall*/ RCPlayMaterialSound(const char* unk1, const Goid_* unk2, bool unk3); //0x007b7a79
	/*Go*/ public: void /*__thiscall*/ RCPlayVoiceSound(unsigned long unk1, const char* unk2, bool unk3); //0x007b8c18
	/*Go*/ public: void /*__thiscall*/ RCPlayVoiceSoundIdPeek(eVoiceSound unk1, bool unk2); //0x007b84d0
	/*Go*/ public: void /*__thiscall*/ RCPlayVoiceSoundPeek(const char* unk1, bool unk2); //0x007b83e4
	/*Go*/ public: void /*__thiscall*/ RCRemoveAllEnchantmentsOnSelf(); //0x007b3190
	/*Go*/ public: void /*__thiscall*/ RCRemoveObjectEnchantmentsOnSelf(unsigned long unk1); //0x007b32af
	/*Go*/ public: void /*__thiscall*/ RCRpcSyncDataPeek(const_mem_ptr unk1); //0x007ba79e
	/*Go*/ public: void /*__thiscall*/ RCSend(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2); //0x007b33fd
	/*Go*/ public: void /*__thiscall*/ RCSetCollision(const Goid_* unk1, bool unk2); //0x007b309b
	/*Go*/ public: void /*__thiscall*/ RCSetForPlayerOnly(const PlayerId_* unk1); //0x007b3920
	/*Go*/ public: void /*__thiscall*/ RCSetParent(Go* unk1); //0x007b67a1
	/*Go*/ public: void /*__thiscall*/ RCSetPlayer(const PlayerId_* unk1); //0x007b41dd
	/*Go*/ public: void /*__thiscall*/ RemoveAllChildren(); //0x007b5bac
	/*Go*/ public: void /*__thiscall*/ RemoveChild(Go* unk1); //0x007b4670
	/*Go*/ public: void /*__thiscall*/ SetModifiersDirty(bool unk1); //0x007b1ccc
	/*Go*/ public: void /*__thiscall*/ SetParent(Go* unk1); //0x007b5bf6
	/*Go*/ public: void /*__thiscall*/ SPlayMaterialSound(const char* unk1, const char* unk2, bool unk3); //0x007b7b64
	/*Go*/ public: void /*__thiscall*/ SPlayMaterialSound(const char* unk1, const Goid_* unk2, bool unk3); //0x007b8746
	/*Go*/ public: void /*__thiscall*/ SPlayVoiceSound(const char* unk1, bool unk2); //0x007b9350
	/*Go*/ public: void /*__thiscall*/ SPlayVoiceSound(unsigned long unk1, const char* unk2, bool unk3); //0x007b9370
	/*Go*/ public: void /*__thiscall*/ SRemoveObjectEnchantmentsOnSelf(const Goid_* unk1); //0x007b46c2
	/*Go*/ public: void /*__thiscall*/ SSetForPlayerOnly(const PlayerId_* unk1); //0x007b478c
	/*Go*/ public: void /*__thiscall*/ SSetParent(Go* unk1); //0x007b71e9
	/*Go*/ public: void /*__thiscall*/ SSetPlayer(const PlayerId_* unk1); //0x007b4e52
	/*Go*/ public: void /*__thiscall*/ StopSound(unsigned long unk1); //0x007b2e83
};
