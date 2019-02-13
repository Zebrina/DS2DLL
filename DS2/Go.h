#pragma once

class Go {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x50316d, Go*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*Go*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(Go* unk1); //0x00503164
	DefineMethod(Deselect, 0x472f3a, bool, Params(), Args());
	DefineMethod(DoesShareFrustum, 0x7b1970, bool, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(GetComponentBool, 0x7b6b53, bool, Params(const char* unk1, const char* unk2, bool unk3), Args(const char* unk1, const char* unk2, bool unk3));
	DefineMethod(GetComponentBool, 0x502f8d, bool, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	DefineConstMethod(HasActor, 0x43d96c, bool, Params(), Args());
	DefineConstMethod(HasAspect, 0x428541, bool, Params(), Args());
	DefineConstMethod(HasAttack, 0x44a6f4, bool, Params(), Args());
	DefineConstMethod(HasBody, 0x472f8a, bool, Params(), Args());
	DefineConstMethod(HasChild, 0x7b4fc3, bool, Params(const Go* unk1), Args(const Go* unk1));
	DefineConstMethod(HasChild, 0x7b2ebf, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(HasCoach, 0x502ff9, bool, Params(), Args());
	DefineConstMethod(HasCommon, 0x50300c, bool, Params(), Args());
	DefineConstMethod(HasComponent, 0x43d950, bool, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(HasConversation, 0x435c4c, bool, Params(), Args());
	DefineConstMethod(HasCorpse, 0x472fa3, bool, Params(), Args());
	DefineConstMethod(HasDefend, 0x4a488b, bool, Params(), Args());
	DefineConstMethod(HasFader, 0x50304d, bool, Params(), Args());
	DefineConstMethod(HasFollower, 0x4c43a3, bool, Params(), Args());
	DefineConstMethod(HasGold, 0x486209, bool, Params(), Args());
	DefineConstMethod(HasGui, 0x468154, bool, Params(), Args());
	DefineConstMethod(HasHire, 0x4cffe0, bool, Params(), Args());
	DefineConstMethod(HasInventory, 0x442dd1, bool, Params(), Args());
	DefineConstMethod(HasMagic, 0x486218, bool, Params(), Args());
	DefineConstMethod(HasMind, 0x435c65, bool, Params(), Args());
	DefineConstMethod(HasParent, 0x46802d, bool, Params(), Args());
	DefineConstMethod(HasParty, 0x413477, bool, Params(), Args());
	DefineConstMethod(HasPet, 0x413486, bool, Params(), Args());
	DefineConstMethod(HasPhysics, 0x5030d4, bool, Params(), Args());
	DefineConstMethod(HasPlacement, 0x4288f3, bool, Params(), Args());
	DefineConstMethod(HasPotion, 0x503101, bool, Params(), Args());
	DefineConstMethod(HasProxy, 0x503124, bool, Params(), Args());
	DefineConstMethod(HasStash, 0x46dd5d, bool, Params(), Args());
	DefineConstMethod(HasStore, 0x46dd76, bool, Params(), Args());
	DefineConstMethod(HasZone, 0x50315b, bool, Params(), Args());
	DefineConstMethod(IsActiveSpell, 0x7b1b65, bool, Params(), Args());
	DefineConstMethod(IsActor, 0x7b1aa3, bool, Params(), Args());
	DefineConstMethod(IsAllClients, 0x435c03, bool, Params(), Args());
	DefineConstMethod(IsAmmo, 0x7b1aab, bool, Params(), Args());
	DefineConstMethod(IsAnyHumanParty, 0x7b1abf, bool, Params(), Args());
	DefineConstMethod(IsAnyHumanPartyMember, 0x7b1ad6, bool, Params(), Args());
	DefineConstMethod(IsAnyHumanPartyMemberOrSummon, 0x7b1af0, bool, Params(), Args());
	DefineConstMethod(IsArmor, 0x7b2b6d, bool, Params(), Args());
	DefineConstMethod(IsAutoExpirationEnabled, 0x502f55, bool, Params(), Args());
	DefineConstMethod(IsBreakable, 0x7b1b2d, bool, Params(), Args());
	DefineConstMethod(IsChad, 0x7b4eb7, bool, Params(), Args());
	DefineConstMethod(IsCommand, 0x7b4ed3, bool, Params(), Args());
	DefineConstMethod(IsContainer, 0x7b1b44, bool, Params(), Args());
	DefineConstMethod(IsDelayedMpDeletion, 0x502ed3, bool, Params(), Args());
	DefineConstMethod(IsEnchanted, 0x502f34, bool, Params(), Args());
	DefineConstMethod(IsEquipped, 0x7b2b83, bool, Params(), Args());
	DefineConstMethod(IsFocused, 0x472f18, bool, Params(), Args());
	DefineConstMethod(IsGlobalGo, 0x435bee, bool, Params(), Args());
	DefineConstMethod(IsGold, 0x7b1b9b, bool, Params(), Args());
	DefineConstMethod(IsHuded, 0x502f2b, bool, Params(), Args());
	DefineConstMethod(IsInActiveScreenWorldFrustum, 0x7b2968, bool, Params(), Args());
	DefineConstMethod(IsInActiveWorldFrustum, 0x7b2948, bool, Params(), Args());
	DefineConstMethod(IsInAnyScreenWorldFrustum, 0x7b2928, bool, Params(), Args());
	DefineConstMethod(IsInAnyWorldFrustum, 0x46805e, bool, Params(), Args());
	DefineConstMethod(IsInFlick, 0x502f14, bool, Params(), Args());
	DefineConstMethod(IsInHotGroup, 0x502ee9, bool, Params(), Args());
	DefineConstMethod(IsInIntenseBattle, 0x502f3f, bool, Params(), Args());
	DefineConstMethod(IsInsideInventory, 0x4680cb, bool, Params(), Args());
	DefineConstMethod(IsInViewFrustum, 0x7b2b14, bool, Params(), Args());
	DefineConstMethod(IsItem, 0x7b1bea, bool, Params(), Args());
	DefineConstMethod(IsJames, 0x7b4f24, bool, Params(), Args());
	DefineConstMethod(IsLocalGo, 0x502e9b, bool, Params(), Args());
	DefineConstMethod(IsMarkedForDeletion, 0x502ec7, bool, Params(), Args());
	DefineConstMethod(IsMarkedForPickup, 0x7b1c87, bool, Params(), Args());
	DefineConstMethod(IsMeleeWeapon, 0x7b2b92, bool, Params(), Args());
	DefineConstMethod(IsMouseShadowed, 0x502edf, bool, Params(), Args());
	DefineConstMethod(IsNoStartupFx, 0x502f49, bool, Params(), Args());
	DefineConstMethod(IsOmni, 0x413421, bool, Params(), Args());
	DefineConstMethod(IsPackOnly, 0x7b1cb3, bool, Params(), Args());
	DefineConstMethod(IsPlayerItemValid, 0x7b43ed, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineConstMethod(IsPlayerOnly, 0x49848c, bool, Params(), Args());
	DefineConstMethod(IsPotion, 0x7b1bfc, bool, Params(), Args());
	DefineConstMethod(IsProbed, 0x502f28, bool, Params(), Args());
	DefineConstMethod(IsRangedWeapon, 0x7b2baf, bool, Params(), Args());
	DefineConstMethod(IsScreenParty, 0x7b2bcd, bool, Params(), Args());
	DefineConstMethod(IsScreenPartyMember, 0x7b2be6, bool, Params(), Args());
	DefineConstMethod(IsScreenPlayerOwned, 0x7b2c09, bool, Params(), Args());
	DefineConstMethod(IsSelectable, 0x7b1c05, bool, Params(), Args());
	DefineConstMethod(IsSelected, 0x472f24, bool, Params(), Args());
	DefineConstMethod(IsServerOnly, 0x435c0f, bool, Params(), Args());
	DefineConstMethod(IsShield, 0x7b1c18, bool, Params(), Args());
	DefineConstMethod(IsSingleton, 0x502ebc, bool, Params(), Args());
	DefineConstMethod(IsSpawned, 0x7b1c2c, bool, Params(), Args());
	DefineConstMethod(IsSpell, 0x7b1c3b, bool, Params(), Args());
	DefineConstMethod(IsSpellBook, 0x7b1c59, bool, Params(), Args());
	DefineConstMethod(IsTeamMember, 0x7b43a7, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(IsTeleporting, 0x435c1b, bool, Params(), Args());
	DefineConstMethod(IsUsable, 0x7b1c70, bool, Params(), Args());
	DefineConstMethod(IsVisibleInScreenWorldFrustum, 0x7b2998, bool, Params(), Args());
	DefineConstMethod(IsWeapon, 0x7b1c9e, bool, Params(), Args());
	DefineMethod(Select, 0x472f30, bool, Params(), Args());
	DefineMethod(Select, 0x7b2a1f, bool, Params(bool unk1, bool unk2), Args(bool unk1, bool unk2));
	DefineMethod(SetComponentBool, 0x7b6bd4, bool, Params(const char* unk1, const char* unk2, bool unk3), Args(const char* unk1, const char* unk2, bool unk3));
	DefineMethod(SetComponentFloat, 0x7b6bed, bool, Params(const char* unk1, const char* unk2, float unk3), Args(const char* unk1, const char* unk2, float unk3));
	DefineMethod(SetComponentGoid, 0x7b6c0a, bool, Params(const char* unk1, const char* unk2, const Goid_* unk3), Args(const char* unk1, const char* unk2, const Goid_* unk3));
	DefineMethod(SetComponentInt, 0x7b6bbb, bool, Params(const char* unk1, const char* unk2, int unk3), Args(const char* unk1, const char* unk2, int unk3));
	DefineMethod(SetComponentScid, 0x7b6c23, bool, Params(const char* unk1, const char* unk2, const Scid_* unk3), Args(const char* unk1, const char* unk2, const Scid_* unk3));
	DefineMethod(SetComponentString, 0x7b7653, bool, Params(const char* unk1, const char* unk2, const gpbstring<char>& unk3), Args(const char* unk1, const char* unk2, const gpbstring<char>& unk3));
	DefineMethod(ToggleSelected, 0x502ef2, bool, Params(), Args());
	DefineConstMethod(WasInViewFrustumRecently, 0x7b2b32, bool, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetBestArmor, 0x7b1a94, Go*, Params(), Args());
	DefineConstMethod(GetOwningParty, 0x7b188a, Go*, Params(), Args());
	DefineConstMethod(GetParent, 0x409d08, Go*, Params(), Args());
	DefineMethod(GetRoot, 0x7b1869, Go*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryActor, 0x502fbe, GoActor*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryActor, 0x502fb9, GoActor*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetActor, 0x413450, GoActor*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryAspect, 0x502fc7, GoAspect*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryAspect, 0x502fc1, GoAspect*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetAspect, 0x413459, GoAspect*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryAttack, 0x502fd1, GoAttack*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryAttack, 0x502fcb, GoAttack*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetAttack, 0x44a6f0, GoAttack*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryBody, 0x502fdb, GoBody*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryBody, 0x502fd5, GoBody*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetBody, 0x472f86, GoBody*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryCoach, 0x502feb, GoCoach*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryCoach, 0x502fe5, GoCoach*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetCoach, 0x502ff5, GoCoach*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryCommon, 0x503008, GoCommon*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryCommon, 0x503002, GoCommon*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetCommon, 0x413463, GoCommon*, Params(), Args());
	DefineMethod(GetComponent, 0x46dd46, GoComponent*, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(QueryComponent, 0x7b50fb, GoComponent*, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(FUBI_RENAME_QueryConversation, 0x50301b, GoConversation*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryConversation, 0x503015, GoConversation*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetConversation, 0x435c48, GoConversation*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryCorpse, 0x503025, GoCorpse*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryCorpse, 0x50301f, GoCorpse*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetCorpse, 0x472f9f, GoCorpse*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryDefend, 0x50302f, GoDefend*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryDefend, 0x503029, GoDefend*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetDefend, 0x4a4887, GoDefend*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryFader, 0x50303f, GoFader*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryFader, 0x503039, GoFader*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetFader, 0x503049, GoFader*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryFollower, 0x50305c, GoFollower*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryFollower, 0x503056, GoFollower*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetFollower, 0x4c439f, GoFollower*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryGold, 0x50306c, GoGold*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryGold, 0x503066, GoGold*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetGold, 0x503070, GoGold*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryGui, 0x50307a, GoGui*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryGui, 0x503074, GoGui*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetGui, 0x472fb2, GoGui*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryHire, 0x503084, GoHire*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryHire, 0x50307e, GoHire*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetHire, 0x4cffdc, GoHire*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryInventory, 0x50308e, GoInventory*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryInventory, 0x503088, GoInventory*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetInventory, 0x442dcd, GoInventory*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryMagic, 0x503098, GoMagic*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryMagic, 0x503092, GoMagic*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetMagic, 0x468163, GoMagic*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryMind, 0x5030a2, GoMind*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryMind, 0x50309c, GoMind*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetMind, 0x435c61, GoMind*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryParty, 0x5030ac, GoParty*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryParty, 0x5030a6, GoParty*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetParty, 0x413473, GoParty*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryPet, 0x5030b6, GoPet*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryPet, 0x5030b0, GoPet*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetPet, 0x486227, GoPet*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryPhysics, 0x5030c6, GoPhysics*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryPhysics, 0x5030c0, GoPhysics*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetPhysics, 0x5030d0, GoPhysics*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryPlacement, 0x5030e3, GoPlacement*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryPlacement, 0x5030dd, GoPlacement*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetPlacement, 0x409da3, GoPlacement*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryPotion, 0x5030f3, GoPotion*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryPotion, 0x5030ed, GoPotion*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetPotion, 0x5030fd, GoPotion*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryProxy, 0x503116, GoProxy*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryProxy, 0x503110, GoProxy*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetProxy, 0x503120, GoProxy*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryStash, 0x503133, GoStash*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryStash, 0x50312d, GoStash*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetStash, 0x472fbc, GoStash*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryStore, 0x50313d, GoStore*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryStore, 0x503137, GoStore*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetStore, 0x46dd72, GoStore*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryZone, 0x50314d, GoZone*, Params(), Args());
	DefineMethod(FUBI_RENAME_QueryZone, 0x503147, GoZone*, Params(bool unk1), Args(bool unk1));
	DefineMethod(GetZone, 0x503157, GoZone*, Params(), Args());
	/*Go*/ public: gpbstring<char> /*__thiscall*/ GetComponentString(const char* unk1, const char* unk2, const gpbstring<char>& unk3); //0x007b7634
	/*Go*/ public: gpbstring<char> /*__thiscall*/ GetComponentString(const char* unk1, const char* unk2); //0x00503ba4
	/*Go*/ public: gpbstring<char> /*__thiscall*/ GetMessage(const char* unk1); //0x007b75a7
	/*Go*/ public: gpbstring<char> /*__thiscall*/ GetTemplateDocs() const; //0x007b7471
	DefineConstMethod(GetPlayer, 0x42852b, Player*, Params(), Args());
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
	DefineConstMethod(GetLifeState, 0x7b1a65, eLifeState, Params(), Args());
	DefineMethod(GetComponentFloat, 0x7b6b6d, float, Params(const char* unk1, const char* unk2, float unk3), Args(const char* unk1, const char* unk2, float unk3));
	DefineMethod(GetComponentFloat, 0x472f44, float, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	DefineConstMethod(GetRadius, 0x7b1a73, float, Params(), Args());
	DefineMethod(GetComponentInt, 0x7b6b39, int, Params(const char* unk1, const char* unk2, int unk3), Args(const char* unk1, const char* unk2, int unk3));
	DefineMethod(GetComponentInt, 0x502f79, int, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	DefineConstMethod(GetFlickRefCount, 0x502f0d, int, Params(), Args());
	DefineMethod(RCForcedExpiredTransfer, 0x7b6886, FuBi::Cookie__*, Params(Go* unk1), Args(Go* unk1));
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
	DefineMethod(AddChild, 0x7b5a87, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(ClearParent, 0x502f71, void, Params(), Args());
	DefineMethod(DisableAutoExpiration, 0x502f69, void, Params(), Args());
	DefineMethod(EnableAutoExpiration, 0x502f61, void, Params(), Args());
	DefineMethod(EnableAutoExpiration, 0x7b2dfc, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(PrepareToDrawNow, 0x502f20, void, Params(), Args());
	DefineMethod(PrepareToDrawNow, 0x7b1a51, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCDeactivateTrigger, 0x7b3513, void, Params(unsigned short unk1), Args(unsigned short unk1));
	DefineMethod(RCExplodeGo, 0x7b2f9f, void, Params(float unk1, const vector_3& unk2, unsigned long unk3), Args(float unk1, const vector_3& unk2, unsigned long unk3));
	DefineMethod(RCPlayCombatSoundPacker, 0x7b4fdc, void, Params(const_mem_ptr unk1), Args(const_mem_ptr unk1));
	DefineMethod(RCPlayMaterialSound, 0x7b74bc, void, Params(const char* unk1, const char* unk2, bool unk3), Args(const char* unk1, const char* unk2, bool unk3));
	DefineMethod(RCPlayMaterialSound, 0x7b7a79, void, Params(const char* unk1, const Goid_* unk2, bool unk3), Args(const char* unk1, const Goid_* unk2, bool unk3));
	DefineMethod(RCPlayVoiceSound, 0x7b8c18, void, Params(unsigned long unk1, const char* unk2, bool unk3), Args(unsigned long unk1, const char* unk2, bool unk3));
	DefineMethod(RCPlayVoiceSoundIdPeek, 0x7b84d0, void, Params(eVoiceSound unk1, bool unk2), Args(eVoiceSound unk1, bool unk2));
	DefineMethod(RCPlayVoiceSoundPeek, 0x7b83e4, void, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(RCRemoveAllEnchantmentsOnSelf, 0x7b3190, void, Params(), Args());
	DefineMethod(RCRemoveObjectEnchantmentsOnSelf, 0x7b32af, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCRpcSyncDataPeek, 0x7ba79e, void, Params(const_mem_ptr unk1), Args(const_mem_ptr unk1));
	DefineMethod(RCSend, 0x7b33fd, void, Params(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2), Args(WorldMessage& unk1, MESSAGE_DISPATCH_FLAG unk2));
	DefineMethod(RCSetCollision, 0x7b309b, void, Params(const Goid_* unk1, bool unk2), Args(const Goid_* unk1, bool unk2));
	DefineMethod(RCSetForPlayerOnly, 0x7b3920, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RCSetParent, 0x7b67a1, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(RCSetPlayer, 0x7b41dd, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RemoveAllChildren, 0x7b5bac, void, Params(), Args());
	DefineMethod(RemoveChild, 0x7b4670, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(SetModifiersDirty, 0x7b1ccc, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetParent, 0x7b5bf6, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(SPlayMaterialSound, 0x7b7b64, void, Params(const char* unk1, const char* unk2, bool unk3), Args(const char* unk1, const char* unk2, bool unk3));
	DefineMethod(SPlayMaterialSound, 0x7b8746, void, Params(const char* unk1, const Goid_* unk2, bool unk3), Args(const char* unk1, const Goid_* unk2, bool unk3));
	DefineMethod(SPlayVoiceSound, 0x7b9350, void, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(SPlayVoiceSound, 0x7b9370, void, Params(unsigned long unk1, const char* unk2, bool unk3), Args(unsigned long unk1, const char* unk2, bool unk3));
	DefineMethod(SRemoveObjectEnchantmentsOnSelf, 0x7b46c2, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SSetForPlayerOnly, 0x7b478c, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(SSetParent, 0x7b71e9, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(SSetPlayer, 0x7b4e52, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(StopSound, 0x7b2e83, void, Params(unsigned long unk1), Args(unsigned long unk1));
};
