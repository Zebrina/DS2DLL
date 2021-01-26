#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "GPFastVector.h"
#include "FrustumId.h"
#include "FuBi.h"
#include "GoidScid.h"
#include "GPGSound.h"
#include "Memory.h"
#include "MessageDispatch.h"
#include "Player.h"
#include "RegionId.h"

class Go;
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
class GoSkritComponent;
class GoStash;
class GoStore;
class GoZone;
class Player;

// Collection of Game Objects
struct GopColl {
    $ConstMethod(0x005035a1, Empty, bool);
    $ConstMethod(0x00503598, Size, int);
    $ConstMethod(0x007ed5f4, Has, bool, Go* go);
    $ConstMethod(0x005035ac, Get, Go*, int index);
    $ConstMethod(0x005035cd, Front, Go*);
    $ConstMethod(0x005035d2, Back, Go*);
    $Method(0x00503c5b, Add, void, Go* go);
    $Method(0x005035bb, Set, void, int index, Go* go);
    $Method(0x007ed5ca, Remove, bool, Go* go);
    $Method(0x005035d9, PopBack, void);
    $Method(0x007ed616, Clean, void);
    $Method(0x005038f3, Clear, void);

    template <class Action>
    void ForEach(Action action) {
        Go** element = head;
        while (element < tail) {
            action(*element);
            ++element;
        }
    }
    template <class Action>
    void ForEach(Action* action) {
        Go** element = head;
        while (element < tail) {
            (*action)(*element);
            ++element;
        }
    }

    Go** head;
    Go** tail;
};

// Game Object
class Go {
public:
	$StaticMethod(0x0050316d, FUBI_NetToInstance, Go*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00503164, FUBI_InstanceToNet, uint, Go* unk1);
	$Method(0x007b1970, DoesShareFrustum, bool, Go* unk1);
	$ConstMethod(0x007b4fc3, HasChild, bool, const Go* unk1);
	$ConstMethod(0x007b2ebf, HasChild, bool, const Goid* unk1);
	$ConstMethod(0x0043d950, HasComponent, bool, const char* name);
	$ConstMethod(0x007b1b65, IsActiveSpell, bool);
	$ConstMethod(0x007b1aa3, IsActor, bool);
	$ConstMethod(0x00435c03, IsAllClients, bool);
	$ConstMethod(0x007b1aab, IsAmmo, bool);
	$ConstMethod(0x007b1abf, IsAnyHumanParty, bool);
	$ConstMethod(0x007b1ad6, IsAnyHumanPartyMember, bool);
	$ConstMethod(0x007b1af0, IsAnyHumanPartyMemberOrSummon, bool);
	$ConstMethod(0x007b2b6d, IsArmor, bool);
	$ConstMethod(0x00502f55, IsAutoExpirationEnabled, bool);
	$ConstMethod(0x007b1b2d, IsBreakable, bool);
	$ConstMethod(0x007b4eb7, IsChad, bool);
	$ConstMethod(0x007b4ed3, IsCommand, bool);
	$ConstMethod(0x007b1b44, IsContainer, bool);
	$ConstMethod(0x00502ed3, IsDelayedMpDeletion, bool);
	$ConstMethod(0x00502f34, IsEnchanted, bool);
	$ConstMethod(0x007b2b83, IsEquipped, bool);
	$ConstMethod(0x00472f18, IsFocused, bool);
	$ConstMethod(0x00435bee, IsGlobalGo, bool);
	$ConstMethod(0x007b1b9b, IsGold, bool);
	//$ConstMethod(0x00502f2b, IsHuded, bool); // Always returns false.
	$ConstMethod(0x007b2968, IsInActiveScreenWorldFrustum, bool);
	$ConstMethod(0x007b2948, IsInActiveWorldFrustum, bool);
	$ConstMethod(0x007b2928, IsInAnyScreenWorldFrustum, bool);
	$ConstMethod(0x0046805e, IsInAnyWorldFrustum, bool);
	$ConstMethod(0x00502f14, IsInFlick, bool);
	$ConstMethod(0x00502ee9, IsInHotGroup, bool);
	$ConstMethod(0x00502f3f, IsInIntenseBattle, bool);
	$ConstMethod(0x004680cb, IsInsideInventory, bool);
	$ConstMethod(0x007b2b14, IsInViewFrustum, bool);
	$ConstMethod(0x007b1bea, IsItem, bool);
	//$ConstMethod(0x007b4f24, IsJames, bool); // GetTemplateName() == "james"
	$ConstMethod(0x00502e9b, IsLocalGo, bool);
	$ConstMethod(0x00502ec7, IsMarkedForDeletion, bool);
	$ConstMethod(0x007b1c87, IsMarkedForPickup, bool);
	$ConstMethod(0x007b2b92, IsMeleeWeapon, bool);
	$ConstMethod(0x00502edf, IsMouseShadowed, bool);
	$ConstMethod(0x00502f49, IsNoStartupFx, bool);
	$ConstMethod(0x00413421, IsOmni, bool);
	$ConstMethod(0x007b1cb3, IsPackOnly, bool);
	$ConstMethod(0x007b43ed, IsPlayerItemValid, bool, const Goid* unk1);
	$ConstMethod(0x0049848c, IsPlayerOnly, bool);
	$ConstMethod(0x007b1bfc, IsPotion, bool);
	//$ConstMethod(0x00502f28, IsProbed, bool); // Always returns false.
	$ConstMethod(0x007b2baf, IsRangedWeapon, bool);
	$ConstMethod(0x007b2bcd, IsScreenParty, bool);
	$ConstMethod(0x007b2be6, IsScreenPartyMember, bool);
	$ConstMethod(0x007b2c09, IsScreenPlayerOwned, bool);
	$ConstMethod(0x007b1c05, IsSelectable, bool);
	$ConstMethod(0x00472f24, IsSelected, bool);
	$ConstMethod(0x00435c0f, IsServerOnly, bool);
	$ConstMethod(0x007b1c18, IsShield, bool);
	$ConstMethod(0x00502ebc, IsSingleton, bool);
	$ConstMethod(0x007b1c2c, IsSpawned, bool);
	$ConstMethod(0x007b1c3b, IsSpell, bool);
	$ConstMethod(0x007b1c59, IsSpellBook, bool);
	$ConstMethod(0x007b43a7, IsTeamMember, bool, const Goid* unk1);
	$ConstMethod(0x00435c1b, IsTeleporting, bool);
	$ConstMethod(0x007b1c70, IsUsable, bool);
	$ConstMethod(0x007b2998, IsVisibleInScreenWorldFrustum, bool);
	$ConstMethod(0x007b1c9e, IsWeapon, bool);
	$Method(0x00472f30, Select, bool);
    $Method(0x00472f3a, Deselect, bool);
	$Method(0x007b2a1f, Select, bool, bool select = true, bool unk2 = false);
	$Method(0x00502ef2, ToggleSelected, bool);
	$ConstMethod(0x007b2b32, WasInViewFrustumRecently, bool, bool unk1);
	$Method(0x007b1a94, GetBestArmor, Go*);
	$ConstMethod(0x007b188a, GetOwningParty, Go*);
	$ConstMethod(0x00409d08, GetParent, Go*);
	$Method(0x007b1869, GetRoot, Go*);
	$Method(0x00413450, GetActor, GoActor*);
	$Method(0x00413459, GetAspect, GoAspect*);
	$Method(0x0044a6f0, GetAttack, GoAttack*);
	$Method(0x00472f86, GetBody, GoBody*);
	$Method(0x00502ff5, GetCoach, GoCoach*);
	$Method(0x00413463, GetCommon, GoCommon*);
	$Method(0x00435c48, GetConversation, GoConversation*);
	$Method(0x00472f9f, GetCorpse, GoCorpse*);
	$Method(0x004a4887, GetDefend, GoDefend*);
	$Method(0x00503049, GetFader, GoFader*);
	$Method(0x004c439f, GetFollower, GoFollower*);
	$Method(0x00503070, GetGold, GoGold*);
	$Method(0x00472fb2, GetGui, GoGui*);
	$Method(0x004cffdc, GetHire, GoHire*);
	$Method(0x00442dcd, GetInventory, GoInventory*);
	$Method(0x00468163, GetMagic, GoMagic*);
	$Method(0x00435c61, GetMind, GoMind*);
	$Method(0x00413473, GetParty, GoParty*);
	$Method(0x00486227, GetPet, GoPet*);
	$Method(0x005030d0, GetPhysics, GoPhysics*);
	$Method(0x00409da3, GetPlacement, GoPlacement*);
	$Method(0x005030fd, GetPotion, GoPotion*);
	$Method(0x00503120, GetProxy, GoProxy*);
	$Method(0x00472fbc, GetStash, GoStash*);
	$Method(0x0046dd72, GetStore, GoStore*);
	$Method(0x00503157, GetZone, GoZone*);
    $Method(0x007b50fb, GetComponent, GoComponent*, const char* name, bool unk2 = false);
    $ConstMethod(0x007b6b53, GetComponentBool, bool, const char* unk1, const char* unk2, bool defaultValue = false);
    $Method(0x007b6bd4, SetComponentBool, bool, const char* unk1, const char* unk2, bool newValue);
    $ConstMethod(0x007b6b39, GetComponentInt, int, const char* unk1, const char* unk2, int defaultValue = 0);
    $Method(0x007b6bbb, SetComponentInt, bool, const char* unk1, const char* unk2, int newValue);
    $ConstMethod(0x007b6b6d, GetComponentFloat, float, const char* unk1, const char* unk2, float defaultValue = 0.0f);
    $Method(0x007b6bed, SetComponentFloat, bool, const char* unk1, const char* unk2, float newValue);
	$ConstMethod(0x00503ba4, GetComponentString, GPBString, const char* unk1, const char* unk2);
    $ConstMethod(0x007b7634, GetComponentString, GPBString, const char* unk1, const char* unk2, const GPBString& defaultValue);
    $Method(0x007b7653, SetComponentString, bool, const char* unk1, const char* unk2, const GPBString& newValue);
    $ConstMethod(0x00502fa1, GetComponentGoid, const Goid*, const char* unk1, const char* unk2);
    $ConstMethod(0x007b6b87, GetComponentGoid, const Goid*, const char* unk1, const char* unk2, const Goid* defaultValue = Goid::Invalid);
    $Method(0x007b6c0a, SetComponentGoid, bool, const char* unk1, const char* unk2, const Goid* newValue);
    $ConstMethod(0x00435c24, GetComponentScid, const Scid*, const char* unk1, const char* unk2);
    $ConstMethod(0x007b6ba1, GetComponentScid, const Scid*, const char* unk1, const char* unk2, const Scid* unk3);
    $Method(0x007b6c23, SetComponentScid, bool, const char* unk1, const char* unk2, const Scid* newValue);
	$Method(0x007b75a7, GetMessage, GPBString, const char* unk1);
	$ConstMethod(0x007b7471, GetTemplateDocs, GPBString);
	$ConstMethod(0x0042852b, GetPlayer, Player*);
	$ConstMethod(0x007b4397, GetMaterial, const char*);
	$ConstMethod(0x00413419, GetTemplateName, const char*);
	//$ConstMethod(0x00502f2e, DevGetFuelAddress, const GPBString&); // Returns empty string.
	$ConstMethod(0x007b29d2, CalcWorldFrustumMembership, const FrustumId*, bool unk1);
	$ConstMethod(0x00502eb5, GetWorldFrustumMembership, const FrustumId*);
	$ConstMethod(0x00502eae, GetCloneSourceGoid, const Goid*);
	$ConstMethod(0x00413406, GetGoid, const Goid*);
	$ConstMethod(0x00413444, GetChildren, const GopColl&);
	$ConstMethod(0x0049849e, GetForPlayerOnly, const PlayerId*);
	$ConstMethod(0x007b191d, GetPlayerId, const PlayerId*);
	$ConstMethod(0x00435bfc, GetRegionSource, const RegionId*);
	$ConstMethod(0x00413415, GetScid, const Scid*);
	$ConstMethod(0x007b1a65, GetLifeState, eLifeState);
	$ConstMethod(0x007b1a73, GetRadius, float);
	$ConstMethod(0x00502f0d, GetFlickRefCount, int);
	$Method(0x007b6886, RCForcedExpiredTransfer, FuBiCookie*, Go* unk1);
	$ConstMethod(0x007b1927, GetMachineId, uint);
	$Method(0x007b7144, PlayMaterialSound, uint, const char* unk1, const char* unk2, bool unk3);
	$Method(0x007b7488, PlayMaterialSound, uint, const char* unk1, const Goid* unk2, bool unk3);
	$Method(0x007b71c7, PlaySound, uint, const char* unk1, float unk2, float unk3);
    $Method(0x007b64b9, PlaySound, uint, const char* unk1, bool unk2, eSampleType unk3);
	$Method(0x007b6591, PlaySound, uint, const char* unk1, eSampleType unk2, float unk3, float unk4, bool unk5);
    $Method(0x007b661f, PlaySound, uint, const char* unk1, const Goid* unk2, eSampleType unk3, float unk4, float unk5, bool unk6);
	$Method(0x007b830e, PlayVoiceSound, uint, const char* unk1, bool unk2);
    $Method(0x007b8379, PlayVoiceSound, uint, const char* unk1, bool unk2, bool unk3);
	$Method(0x007b862e, PlayVoiceSound, uint, const char* unk1, float unk2, float unk3, bool unk4);
    $Method(0x007b86b7, PlayVoiceSound, uint, const char* unk1, const Goid* unk2, float unk3, float unk4, bool unk5);
	$Method(0x007b5a87, AddChild, void, Go* child);
	$Method(0x00502f71, ClearParent, void);
	$Method(0x007b2dfc, EnableAutoExpiration, void, bool enable = true);
	$Method(0x007b1a51, PrepareToDrawNow, void, bool unk1 = true);
	$Method(0x007b3513, RCDeactivateTrigger, void, unsigned short unk1);
	$Method(0x007b2f9f, RCExplodeGo, void, float unk1, const Vector3& unk2, uint unk3);
	$Method(0x007b4fdc, RCPlayCombatSoundPacker, void, const_mem_ptr unk1);
	$Method(0x007b74bc, RCPlayMaterialSound, void, const char* unk1, const char* unk2, bool unk3);
	$Method(0x007b7a79, RCPlayMaterialSound, void, const char* unk1, const Goid* unk2, bool unk3);
	$Method(0x007b8c18, RCPlayVoiceSound, void, uint unk1, const char* unk2, bool unk3);
	$Method(0x007b84d0, RCPlayVoiceSoundIdPeek, void, eVoiceSound unk1, bool unk2);
	$Method(0x007b83e4, RCPlayVoiceSoundPeek, void, const char* unk1, bool unk2);
	$Method(0x007b3190, RCRemoveAllEnchantmentsOnSelf, void);
	$Method(0x007b32af, RCRemoveObjectEnchantmentsOnSelf, void, uint unk1);
	$Method(0x007ba79e, RCRpcSyncDataPeek, void, const_mem_ptr unk1);
	$Method(0x007b33fd, RCSend, void, WorldMessage& unk1, eMessageDispatchFlag unk2);
	$Method(0x007b309b, RCSetCollision, void, const Goid* unk1, bool unk2);
	$Method(0x007b3920, RCSetForPlayerOnly, void, const PlayerId* unk1);
	$Method(0x007b67a1, RCSetParent, void, Go* unk1);
	$Method(0x007b41dd, RCSetPlayer, void, const PlayerId* unk1);
	$Method(0x007b5bac, RemoveAllChildren, void);
	$Method(0x007b4670, RemoveChild, void, Go* unk1);
	$Method(0x007b1ccc, SetModifiersDirty, void, bool unk1);
	$Method(0x007b5bf6, SetParent, void, Go* unk1);
	$Method(0x007b7b64, SPlayMaterialSound, void, const char* unk1, const char* unk2, bool unk3);
	$Method(0x007b8746, SPlayMaterialSound, void, const char* unk1, const Goid* unk2, bool unk3);
	$Method(0x007b9350, SPlayVoiceSound, void, const char* unk1, bool unk2);
	$Method(0x007b9370, SPlayVoiceSound, void, uint unk1, const char* unk2, bool unk3);
	$Method(0x007b46c2, SRemoveObjectEnchantmentsOnSelf, void, const Goid* unk1);
	$Method(0x007b478c, SSetForPlayerOnly, void, const PlayerId* unk1);
	$Method(0x007b71e9, SSetParent, void, Go* unk1);
	//$Method(0x007b4e52, SSetPlayer, void, const PlayerId* unk1); // Calls RCSetPlayer
	$Method(0x007b2e83, StopSound, void, uint unk1);

    FEX float GetAlterationSum(eAlteration alteration);

	enum Flags : uint {
		OMNI					= EnumFlag(1),
		SINGLETON				= EnumFlag(2),
		ALL_CLIENTS				= EnumFlag(3),
		UNKNOWN_04				= EnumFlag(4),
		UNKNOWN_05				= EnumFlag(5),
		UNKNOWN_06				= EnumFlag(6),
		UNKNOWN_07				= EnumFlag(7),
		UNKNOWN_08				= EnumFlag(8),
		UNKNOWN_09				= EnumFlag(9),
		UNKNOWN_10				= EnumFlag(10),
		SERVER_ONLY				= EnumFlag(11),
		AUTO_EXPIRATION_ENABLED	= EnumFlag(12),
		UNKNOWN_13				= EnumFlag(13),
		FOCUSED					= EnumFlag(14),
		SELECTED				= EnumFlag(15),
		MOUSE_SHADOWED			= EnumFlag(16),
		UNKNOWN_17				= EnumFlag(17),
		IN_HOT_GROUP			= EnumFlag(18),
		UNKNOWN_19				= EnumFlag(19),
		MARKED_FOR_DELETION		= EnumFlag(20),
		DELAYED_MP_DELETION		= EnumFlag(21),
		UNKNOWN_22				= EnumFlag(22),
		UNKNOWN_23				= EnumFlag(23),
		UNKNOWN_24				= EnumFlag(24),
		TELEPORTING				= EnumFlag(25),
		UNKNOWN_26				= EnumFlag(26),
		UNKNOWN_27				= EnumFlag(27),
		UNKNOWN_28				= EnumFlag(28),
		UNKNOWN_29				= EnumFlag(29),
		UNKNOWN_30				= EnumFlag(30),
		INSIDE_INVENTORY		= EnumFlag(31),
		IN_INTENSE_BATTLE		= EnumFlag(32),
	};
	enum Flags2 : uint {
		UNKNOWN_33		= EnumFlag(1),
		ENCHANTED		= EnumFlag(2),
		UNKNOWN_35		= EnumFlag(3),
		NO_STARTUP_FX	= EnumFlag(4),
		UNKNOWN_37		= EnumFlag(5),
		UNKNOWN_38		= EnumFlag(6),
		UNKNOWN_39		= EnumFlag(7),
		UNKNOWN_40		= EnumFlag(8),
		UNKNOWN_41		= EnumFlag(9),
		UNKNOWN_42		= EnumFlag(10),
		UNKNOWN_43		= EnumFlag(11),
		UNKNOWN_44		= EnumFlag(12),
		UNKNOWN_45		= EnumFlag(13),
		UNKNOWN_46		= EnumFlag(14),
		UNKNOWN_47		= EnumFlag(15),
		UNKNOWN_48		= EnumFlag(16),
		UNKNOWN_49		= EnumFlag(17),
		UNKNOWN_50		= EnumFlag(18),
		UNKNOWN_51		= EnumFlag(19),
		UNKNOWN_52		= EnumFlag(20),
		UNKNOWN_53		= EnumFlag(21),
		UNKNOWN_54		= EnumFlag(22),
		UNKNOWN_55		= EnumFlag(23),
		UNKNOWN_56		= EnumFlag(24),
		UNKNOWN_57		= EnumFlag(25),
		UNKNOWN_58		= EnumFlag(26),
		UNKNOWN_59		= EnumFlag(27),
		UNKNOWN_60		= EnumFlag(28),
		UNKNOWN_61		= EnumFlag(29),
		UNKNOWN_62		= EnumFlag(30),
		UNKNOWN_63		= EnumFlag(31),
		UNKNOWN_64		= EnumFlag(32),
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
	Goid* goid;
	// 0x6c
	Scid scid;
	// 0x70
	void* ptr70;
	// 0x74
	$Padding(0x74, 0x78);
	// 0x78
	void* ptr78;
	// 0x7c
	int int7c;
	// 0x80
	Goid* cloneSourceGoid;
	// 0x84
	RegionId regionSource;
	// 0x88
	FrustumId worldFrustumMembership;
	// 0x8c
	Go* parent;
	// 0x90
	$Padding(0x90, 0x98);
	// 0x98
	void* ptr98;
	// 0x9c
	GPFastVector<GoSkritComponent*> components;
	// 0xa4
	int intA4;
	// 0xa8
    GopColl children;
	// 0xb0
	int intB0; // 0xffffffff ?
	// 0xb4
	int flickRefCount;
	// 0xb8
	int intB8;
	// 0xbc
	PlayerId playerId;
	// 0xc0
	Flags flags;
	// 0xc4
	Flags2 flags2;
};

STATIC_ASSERT(sizeof(Go) == 0xc8);
STATIC_ASSERT_OFFSETOF(Go, zone, 0x64);
STATIC_ASSERT_OFFSETOF(Go, cloneSourceGoid, 0x80);
STATIC_ASSERT_OFFSETOF(Go, regionSource, 0x84);
STATIC_ASSERT_OFFSETOF(Go, flickRefCount, 0xb4);
STATIC_ASSERT_OFFSETOF(Go, playerId, 0xbc);
STATIC_ASSERT_OFFSETOF(Go, flags, 0xc0);
