#pragma once

#include "Enums.h"
#include "FrustumId.h"
#include "FuBi.h"
#include "GopColl.h"
#include "GPGSound.h"
#include "Memory.h"
#include "MessageDispatch.h"
#include "RegionId.h"

class GoActor;
class GoAspect;
class GoAttack;
class GoBody;
class GoCoach;
class GoCommon;
class GoComponent;
class GoConversation;
class GoCorpse;
class GoDefend;
class GoFader;
class GoFollower;
class GoGold;
class GoGui;
class GoHire;
class GoInventory;
class GoMagic;
class GoMind;
class GoParty;
class GoPet;
class GoPhysics;
class GoPlacement;
class GoPotion;
class GoProxy;
class GoStash;
class GoStore;
class GoZone;
class Player;
struct Goid_;
struct PlayerId_;
struct Scid_;

class Go {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x50316d, Go*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x503164, unsigned long, Params(Go* unk1), Args(unk1));
	DefineMethod(Deselect, 0x472f3a, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(DoesShareFrustum, 0x7b1970, bool, Params(Go* unk1), Args(unk1));
	DefineMethod(GetComponentBool, 0x7b6b53, bool, Params(const char* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetComponentBool, 0x502f8d, bool, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(HasActor, 0x43d96c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasAspect, 0x428541, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasAttack, 0x44a6f4, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasBody, 0x472f8a, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasChild, 0x7b4fc3, bool, Params(const Go* unk1), Args(unk1));
	DefineConstMethod(HasChild, 0x7b2ebf, bool, Params(const Goid_* unk1), Args(unk1));
	DefineConstMethod(HasCoach, 0x502ff9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasCommon, 0x50300c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasComponent, 0x43d950, bool, Params(const char* unk1), Args(unk1));
	DefineConstMethod(HasConversation, 0x435c4c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasCorpse, 0x472fa3, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasDefend, 0x4a488b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasFader, 0x50304d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasFollower, 0x4c43a3, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasGold, 0x486209, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasGui, 0x468154, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasHire, 0x4cffe0, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasInventory, 0x442dd1, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasMagic, 0x486218, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasMind, 0x435c65, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasParent, 0x46802d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasParty, 0x413477, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasPet, 0x413486, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasPhysics, 0x5030d4, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasPlacement, 0x4288f3, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasPotion, 0x503101, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasProxy, 0x503124, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasStash, 0x46dd5d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasStore, 0x46dd76, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasZone, 0x50315b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsActiveSpell, 0x7b1b65, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsActor, 0x7b1aa3, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsAllClients, 0x435c03, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsAmmo, 0x7b1aab, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsAnyHumanParty, 0x7b1abf, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsAnyHumanPartyMember, 0x7b1ad6, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsAnyHumanPartyMemberOrSummon, 0x7b1af0, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsArmor, 0x7b2b6d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsAutoExpirationEnabled, 0x502f55, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsBreakable, 0x7b1b2d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsChad, 0x7b4eb7, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsCommand, 0x7b4ed3, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsContainer, 0x7b1b44, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsDelayedMpDeletion, 0x502ed3, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsEnchanted, 0x502f34, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsEquipped, 0x7b2b83, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsFocused, 0x472f18, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsGlobalGo, 0x435bee, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsGold, 0x7b1b9b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsHuded, 0x502f2b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInActiveScreenWorldFrustum, 0x7b2968, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInActiveWorldFrustum, 0x7b2948, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInAnyScreenWorldFrustum, 0x7b2928, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInAnyWorldFrustum, 0x46805e, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInFlick, 0x502f14, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInHotGroup, 0x502ee9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInIntenseBattle, 0x502f3f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInsideInventory, 0x4680cb, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInViewFrustum, 0x7b2b14, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsItem, 0x7b1bea, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsJames, 0x7b4f24, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsLocalGo, 0x502e9b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsMarkedForDeletion, 0x502ec7, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsMarkedForPickup, 0x7b1c87, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsMeleeWeapon, 0x7b2b92, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsMouseShadowed, 0x502edf, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsNoStartupFx, 0x502f49, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsOmni, 0x413421, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsPackOnly, 0x7b1cb3, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsPlayerItemValid, 0x7b43ed, bool, Params(const Goid_* unk1), Args(unk1));
	DefineConstMethod(IsPlayerOnly, 0x49848c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsPotion, 0x7b1bfc, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsProbed, 0x502f28, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsRangedWeapon, 0x7b2baf, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsScreenParty, 0x7b2bcd, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsScreenPartyMember, 0x7b2be6, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsScreenPlayerOwned, 0x7b2c09, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSelectable, 0x7b1c05, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSelected, 0x472f24, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsServerOnly, 0x435c0f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsShield, 0x7b1c18, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSingleton, 0x502ebc, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSpawned, 0x7b1c2c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSpell, 0x7b1c3b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsSpellBook, 0x7b1c59, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsTeamMember, 0x7b43a7, bool, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(IsTeleporting, 0x435c1b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsUsable, 0x7b1c70, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsVisibleInScreenWorldFrustum, 0x7b2998, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsWeapon, 0x7b1c9e, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(Select, 0x472f30, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(Select, 0x7b2a1f, bool, Params(bool unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetComponentBool, 0x7b6bd4, bool, Params(const char* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetComponentFloat, 0x7b6bed, bool, Params(const char* unk1, const char* unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetComponentGoid, 0x7b6c0a, bool, Params(const char* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetComponentInt, 0x7b6bbb, bool, Params(const char* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetComponentScid, 0x7b6c23, bool, Params(const char* unk1, const char* unk2, const Scid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetComponentString, 0x7b7653, bool, Params(const char* unk1, const char* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(ToggleSelected, 0x502ef2, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(WasInViewFrustumRecently, 0x7b2b32, bool, Params(bool unk1), Args(unk1));
	DefineMethod(GetBestArmor, 0x7b1a94, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetOwningParty, 0x7b188a, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetParent, 0x409d08, Go*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetRoot, 0x7b1869, Go*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryActor, 0x502fbe, GoActor*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetActor, 0x413450, GoActor*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryAspect, 0x502fc7, GoAspect*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAspect, 0x413459, GoAspect*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryAttack, 0x502fd1, GoAttack*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAttack, 0x44a6f0, GoAttack*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryBody, 0x502fdb, GoBody*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetBody, 0x472f86, GoBody*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryCoach, 0x502feb, GoCoach*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCoach, 0x502ff5, GoCoach*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryCommon, 0x503008, GoCommon*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCommon, 0x413463, GoCommon*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetComponent, 0x46dd46, GoComponent*, Params(const char* unk1), Args(unk1));
	DefineMethod(QueryComponent, 0x7b50fb, GoComponent*, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(QueryConversation, 0x50301b, GoConversation*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetConversation, 0x435c48, GoConversation*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryCorpse, 0x503025, GoCorpse*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCorpse, 0x472f9f, GoCorpse*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryDefend, 0x50302f, GoDefend*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetDefend, 0x4a4887, GoDefend*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryFader, 0x50303f, GoFader*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetFader, 0x503049, GoFader*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryFollower, 0x50305c, GoFollower*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetFollower, 0x4c439f, GoFollower*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryGold, 0x50306c, GoGold*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetGold, 0x503070, GoGold*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryGui, 0x50307a, GoGui*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetGui, 0x472fb2, GoGui*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryHire, 0x503084, GoHire*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetHire, 0x4cffdc, GoHire*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryInventory, 0x50308e, GoInventory*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetInventory, 0x442dcd, GoInventory*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryMagic, 0x503098, GoMagic*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMagic, 0x468163, GoMagic*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryMind, 0x5030a2, GoMind*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMind, 0x435c61, GoMind*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryParty, 0x5030ac, GoParty*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetParty, 0x413473, GoParty*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryPet, 0x5030b6, GoPet*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPet, 0x486227, GoPet*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryPhysics, 0x5030c6, GoPhysics*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPhysics, 0x5030d0, GoPhysics*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryPlacement, 0x5030e3, GoPlacement*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPlacement, 0x409da3, GoPlacement*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryPotion, 0x5030f3, GoPotion*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPotion, 0x5030fd, GoPotion*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryProxy, 0x503116, GoProxy*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetProxy, 0x503120, GoProxy*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryStash, 0x503133, GoStash*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetStash, 0x472fbc, GoStash*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryStore, 0x50313d, GoStore*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetStore, 0x46dd72, GoStore*, NO_PARAMS, NO_ARGS);
	DefineMethod(QueryZone, 0x50314d, GoZone*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetZone, 0x503157, GoZone*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetComponentString, 0x7b7634, gpbstring<char>, Params(const char* unk1, const char* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetComponentString, 0x503ba4, gpbstring<char>, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(GetMessage, 0x7b75a7, gpbstring<char>, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetTemplateDocs, 0x7b7471, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPlayer, 0x42852b, Player*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaterial, 0x7b4397, const char*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTemplateName, 0x413419, const char*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(DevGetFuelAddress, 0x502f2e, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(CalcWorldFrustumMembership, 0x7b29d2, const FrustumId_*, Params(bool unk1), Args(unk1));
	DefineConstMethod(GetWorldFrustumMembership, 0x502eb5, const FrustumId_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCloneSourceGoid, 0x502eae, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetComponentGoid, 0x7b6b87, const Goid_*, Params(const char* unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetComponentGoid, 0x502fa1, const Goid_*, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetGoid, 0x413406, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetChildren, 0x413444, const GopColl&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetForPlayerOnly, 0x49849e, const PlayerId_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPlayerId, 0x7b191d, const PlayerId_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRegionSource, 0x435bfc, const RegionId_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetComponentScid, 0x7b6ba1, const Scid_*, Params(const char* unk1, const char* unk2, const Scid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetComponentScid, 0x435c24, const Scid_*, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetScid, 0x413415, const Scid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLifeState, 0x7b1a65, eLifeState, NO_PARAMS, NO_ARGS);
	DefineMethod(GetComponentFloat, 0x7b6b6d, float, Params(const char* unk1, const char* unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetComponentFloat, 0x472f44, float, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetRadius, 0x7b1a73, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetComponentInt, 0x7b6b39, int, Params(const char* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetComponentInt, 0x502f79, int, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetFlickRefCount, 0x502f0d, int, NO_PARAMS, NO_ARGS);
	DefineMethod(RCForcedExpiredTransfer, 0x7b6886, FuBi::Cookie__*, Params(Go* unk1), Args(unk1));
	DefineConstMethod(GetMachineId, 0x7b1927, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(PlayMaterialSound, 0x7b7144, unsigned long, Params(const char* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(PlayMaterialSound, 0x7b7488, unsigned long, Params(const char* unk1, const Goid_* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(PlaySound, 0x7b64b9, unsigned long, Params(const char* unk1, bool unk2, GPGSound::eSampleType unk3), Args(unk1, unk2, unk3));
	DefineMethod(PlaySound, 0x7b661f, unsigned long, Params(const char* unk1, const Goid_* unk2, GPGSound::eSampleType unk3, float unk4, float unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineMethod(PlaySound, 0x7b71c7, unsigned long, Params(const char* unk1, float unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(PlaySound, 0x7b6591, unsigned long, Params(const char* unk1, GPGSound::eSampleType unk2, float unk3, float unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(PlayVoiceSound, 0x7b8379, unsigned long, Params(const char* unk1, bool unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(PlayVoiceSound, 0x7b830e, unsigned long, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(PlayVoiceSound, 0x7b86b7, unsigned long, Params(const char* unk1, const Goid_* unk2, float unk3, float unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(PlayVoiceSound, 0x7b862e, unsigned long, Params(const char* unk1, float unk2, float unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(AddChild, 0x7b5a87, void, Params(Go* unk1), Args(unk1));
	DefineMethod(ClearParent, 0x502f71, void, NO_PARAMS, NO_ARGS);
	DefineMethod(DisableAutoExpiration, 0x502f69, void, NO_PARAMS, NO_ARGS);
	DefineMethod(EnableAutoExpiration, 0x502f61, void, NO_PARAMS, NO_ARGS);
	DefineMethod(EnableAutoExpiration, 0x7b2dfc, void, Params(bool unk1), Args(unk1));
	DefineMethod(PrepareToDrawNow, 0x502f20, void, NO_PARAMS, NO_ARGS);
	DefineMethod(PrepareToDrawNow, 0x7b1a51, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCDeactivateTrigger, 0x7b3513, void, Params(unsigned short unk1), Args(unk1));
	DefineMethod(RCExplodeGo, 0x7b2f9f, void, Params(float unk1, const vector_3& unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCPlayCombatSoundPacker, 0x7b4fdc, void, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RCPlayMaterialSound, 0x7b74bc, void, Params(const char* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCPlayMaterialSound, 0x7b7a79, void, Params(const char* unk1, const Goid_* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCPlayVoiceSound, 0x7b8c18, void, Params(unsigned long unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCPlayVoiceSoundIdPeek, 0x7b84d0, void, Params(eVoiceSound unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(RCPlayVoiceSoundPeek, 0x7b83e4, void, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(RCRemoveAllEnchantmentsOnSelf, 0x7b3190, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCRemoveObjectEnchantmentsOnSelf, 0x7b32af, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCRpcSyncDataPeek, 0x7ba79e, void, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RCSend, 0x7b33fd, void, Params(WorldMessage& unk1, eMessageDispatchFlag unk2), Args(unk1, unk2));
	DefineMethod(RCSetCollision, 0x7b309b, void, Params(const Goid_* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(RCSetForPlayerOnly, 0x7b3920, void, Params(const PlayerId_* unk1), Args(unk1));
	DefineMethod(RCSetParent, 0x7b67a1, void, Params(Go* unk1), Args(unk1));
	DefineMethod(RCSetPlayer, 0x7b41dd, void, Params(const PlayerId_* unk1), Args(unk1));
	DefineMethod(RemoveAllChildren, 0x7b5bac, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RemoveChild, 0x7b4670, void, Params(Go* unk1), Args(unk1));
	DefineMethod(SetModifiersDirty, 0x7b1ccc, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetParent, 0x7b5bf6, void, Params(Go* unk1), Args(unk1));
	DefineMethod(SPlayMaterialSound, 0x7b7b64, void, Params(const char* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SPlayMaterialSound, 0x7b8746, void, Params(const char* unk1, const Goid_* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SPlayVoiceSound, 0x7b9350, void, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SPlayVoiceSound, 0x7b9370, void, Params(unsigned long unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SRemoveObjectEnchantmentsOnSelf, 0x7b46c2, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SSetForPlayerOnly, 0x7b478c, void, Params(const PlayerId_* unk1), Args(unk1));
	DefineMethod(SSetParent, 0x7b71e9, void, Params(Go* unk1), Args(unk1));
	DefineMethod(SSetPlayer, 0x7b4e52, void, Params(const PlayerId_* unk1), Args(unk1));
	DefineMethod(StopSound, 0x7b2e83, void, Params(unsigned long unk1), Args(unk1));
	/*

	// These do exactly the same thing as their no-parameter counterparts. The boolean parameter is not used at all.
	
	DefineMethod(QueryActor, 0x502fb9, GoActor*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryAspect, 0x502fc1, GoAspect*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryAttack, 0x502fcb, GoAttack*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryBody, 0x502fd5, GoBody*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryCoach, 0x502fe5, GoCoach*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryCommon, 0x503002, GoCommon*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryConversation, 0x503015, GoConversation*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryCorpse, 0x50301f, GoCorpse*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryDefend, 0x503029, GoDefend*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryFader, 0x503039, GoFader*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryFollower, 0x503056, GoFollower*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryGold, 0x503066, GoGold*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryGui, 0x503074, GoGui*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryHire, 0x50307e, GoHire*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryInventory, 0x503088, GoInventory*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryMagic, 0x503092, GoMagic*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryMind, 0x50309c, GoMind*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryParty, 0x5030a6, GoParty*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryPet, 0x5030b0, GoPet*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryPhysics, 0x5030c0, GoPhysics*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryPlacement, 0x5030dd, GoPlacement*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryPotion, 0x5030ed, GoPotion*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryProxy, 0x503110, GoProxy*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryStash, 0x50312d, GoStash*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryStore, 0x503137, GoStore*, Params(bool unk1), Args(unk1));
	DefineMethod(QueryZone, 0x503147, GoZone*, Params(bool unk1), Args(unk1));
	*/

	enum Flags {
		UNKNOWN_01		= 0x00000001,
		IS_SINGLETON	= 0x00000002,
		IS_ALL_CLIENTS	= 0x00000004,
		UNKNOWN_04		= 0x00000008,
		UNKNOWN_05		= 0x00000010,
		UNKNOWN_06		= 0x00000020,
		UNKNOWN_07		= 0x00000040,
		UNKNOWN_08		= 0x00000080,
		UNKNOWN_09		= 0x00000100,
		UNKNOWN_10		= 0x00000200,
		IS_SERVER_ONLY	= 0x00000400,
		UNKNOWN_12 = 0x00000800,
		UNKNOWN_13 = 0x00001000,
		UNKNOWN_14 = 0x00002000,
		UNKNOWN_15 = 0x00004000,
		UNKNOWN_16 = 0x00008000,
		UNKNOWN_17 = 0x00010000,
		UNKNOWN_18 = 0x00020000,
		UNKNOWN_19 = 0x00040000,
		UNKNOWN_20 = 0x00080000,
		UNKNOWN_21		= 0x00100000,
		UNKNOWN_22 = 0x00200000,
		UNKNOWN_23 = 0x00400000,
		UNKNOWN_24 = 0x00800000,
		IS_TELEPORTING	= 0x01000000,
		UNKNOWN_26 = 0x02000000,
		UNKNOWN_27 = 0x04000000,
	};

	// 0x00
	GoActor* actor;
	// 0x04
	GoAspect* aspect;
	// 0x08
	GoAttack* attack;
	// 0x0c
	GoBody* body;
	// 0x10
	GoCoach* coach;
	// 0x14
	GoCommon* common;
	// 0x18
	GoConversation* conversation;
	// 0x1c
	GoCorpse* corpse;
	// 0x20
	GoDefend* defend;
	// 0x24
	GoFader* fader;
	// 0x28
	GoFollower* follower;
	// 0x2c
	GoGold* gold;
	// 0x30
	GoGui* gui;
	// 0x34
	GoHire* hire;
	// 0x38
	GoInventory* inventory;
	// 0x3c
	GoMagic* magic;
	// 0x40
	GoMind* mind;
	// 0x44
	GoParty* party;
	// 0x48
	GoPet* pet;
	// 0x4c
	GoPhysics* physics;
	// 0x50
	GoPlacement* placement;
	// 0x54
	GoPotion* potion;
	// 0x58
	GoProxy* proxy;
	// 0x5c
	GoStash* stash;
	// 0x60
	GoStore* store;
	// 0x64
	GoZone* zone;
	// 0x68
	Goid_* goid;
	// 0x6c
	Scid_* scid;
	// 0x70
	void* ptr_70;
	// 0x74
	FillStruct(0x74, 0x78);
	// 0x78
	void* ptr_78;
	// 0x7c
	int int_7c;
	// 0x80
	Goid_* cloneSourceGoid;
	// 0x84
	RegionId_ regionSource;
	// 0x88
	FrustumId_ worldFrustumMembership;
	// 0x8c
	Go* parent;
	// 0x90
	FillStruct(0x90, 0x98);
	// 0x98
	void* ptr_98;
	// 0x9c
	void* ptr_9c;
	// 0xa0
	void* ptr_a0;
	// 0xa4
	int int_a4;
	// 0xa8
	FillStruct(0xa8, 0xb0);
	// 0xb0
	int int_b0; // 0xffffffff ?
	// 0xb4
	int flickRefCount;
	// 0xb8
	int int_b8;
	// 0xbc
	bool forPlayerOnly;
	// 0xc0
	Flags flags;
};

STATIC_ASSERT_OFFSETOF(Go, zone, 0x64);
STATIC_ASSERT_OFFSETOF(Go, cloneSourceGoid, 0x80);
STATIC_ASSERT_OFFSETOF(Go, regionSource, 0x84);
STATIC_ASSERT_OFFSETOF(Go, flickRefCount, 0xb4);
STATIC_ASSERT_OFFSETOF(Go, flags, 0xc0);

#pragma push_macro("FuBiSpecializeDynamicCast")
#define FuBiSpecializeDynamicCast(type, ...) \
	template<> \
	Go##type* FuBi::DynamicCast(Go* ptr) { \
		return ptr->Query##type(__VA_ARGS__); \
	}

FuBiSpecializeDynamicCast(Actor);
FuBiSpecializeDynamicCast(Aspect);
FuBiSpecializeDynamicCast(Attack);
FuBiSpecializeDynamicCast(Body);
FuBiSpecializeDynamicCast(Coach);
FuBiSpecializeDynamicCast(Common);
//FuBiSpecializeDynamicCast(Component);
FuBiSpecializeDynamicCast(Conversation);
FuBiSpecializeDynamicCast(Corpse);
FuBiSpecializeDynamicCast(Defend);
FuBiSpecializeDynamicCast(Fader);
FuBiSpecializeDynamicCast(Follower);
FuBiSpecializeDynamicCast(Gold);
FuBiSpecializeDynamicCast(Gui);
FuBiSpecializeDynamicCast(Hire);
FuBiSpecializeDynamicCast(Inventory);
FuBiSpecializeDynamicCast(Magic);
FuBiSpecializeDynamicCast(Mind);
FuBiSpecializeDynamicCast(Party);
FuBiSpecializeDynamicCast(Pet);
FuBiSpecializeDynamicCast(Physics);
FuBiSpecializeDynamicCast(Placement);
FuBiSpecializeDynamicCast(Potion);
FuBiSpecializeDynamicCast(Proxy);
FuBiSpecializeDynamicCast(Stash);
FuBiSpecializeDynamicCast(Store);
FuBiSpecializeDynamicCast(Zone);

#pragma pop_macro("FuBiSpecializeDynamicCast")
