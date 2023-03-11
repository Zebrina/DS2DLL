#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "Nema.h"
#include "Player.h"

class GoAspect : public GoComponent {
public:
	enum eDeltaDisplay {

	};

	$StaticMethod(0x00411a35, FUBI_NetToInstance, GoAspect*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00411a2c, FUBI_InstanceToNet, uint, GoAspect* unk1);
	$Method(0x0086105a, RCSetGoldValue, FuBiCookie*, int unk1);
	$Method(0x00865207, HideChildSubMeshByName, void, const char* unk1, int unk2);
	$Method(0x0086552b, RCHideChildSubMeshByName, void, const char* unk1, int unk2);
	$Method(0x008624d6, RCSetAspectTextureSpeed, void, int index, float speed);
	$Method(0x00865613, RCSetChildTextureFromTextureName, void, const char* unk1, uint unk2, const char* unk3);
	$Method(0x00866588, RCSetCurrentAspectTexture, void, int index, const char* name);
	$Method(0x004119d2, RCSetCurrentLife, void, float unk1);
	$Method(0x0086172e, RCSetCurrentMana, void, float unk1);
	$Method(0x0086334e, RCSetDoesBlockCamera, void, bool unk1);
	$Method(0x00863269, RCSetDrawExclamation, void, bool unk1);
	$Method(0x00861f03, RCSetFreezeMeshFlag, void, bool unk1);
	$Method(0x00860d57, RCSetInCombatStance, void, bool unk1);
	$Method(0x0086646a, RCSetIsInvincible, void, bool unk1, const Goid* unk2);
	$Method(0x00863184, RCSetIsMarkedForPickup, void, bool unk1);
	$Method(0x00862fa8, RCSetIsSelectable, void, bool unk1);
	$Method(0x0086308d, RCSetIsUsable, void, bool unk1);
	$Method(0x00864bfc, RCSetIsVisible, void, bool unk1);
	$Method(0x0041198b, RCSetLifeState, void, eLifeState unk1);
	$Method(0x008612f2, RCSetLifeTimedRestore, void, float unk1);
	$Method(0x008613db, RCSetLifeTimedRestorePeriod, void, float unk1);
	$Method(0x00861fe8, RCSetLockMeshFlag, void, bool unk1);
	$Method(0x0086092a, RCSetManaTimedRestore, void, float unk1);
	$Method(0x00861890, RCSetManaTimedRestorePeriod, void, float unk1);
	$Method(0x008625d5, RCSetMaxLife, void, float unk1);
	$Method(0x00862814, RCSetMaxMana, void, float unk1);
	$Method(0x008626be, RCSetNaturalMaxLife, void, float unk1);
	$Method(0x008628fd, RCSetNaturalMaxMana, void, float unk1);
	$Method(0x00865a22, RCSetTracerTexture, void, const char* unk1);
	$Method(0x00865443, RCShowChildSubMeshByName, void, const char* unk1, int unk2);
	$Method(0x008607e0, RCSyncLife, void, float unk1, double unk2);
	$Method(0x008615ee, RCSyncMana, void, float unk1, double unk2);
	$Method(0x008614c4, RCSyncState, void, float unk1, float unk2, double unk3, double unk4);
	$Method(0x0086527f, SetChildTextureFromTextureName, void, const char* unk1, uint unk2, const char* unk3);
	$Method(0x0086518f, ShowChildSubMeshByName, void, const char* unk1, int unk2);
	$ConstMethod(0x00411877, GetDoesBlockCamera, bool);
	$ConstMethod(0x00411859, GetDoesBlockPath, bool);
	$ConstMethod(0x00411845, GetDrawExclamation, bool);
	$ConstMethod(0x00411831, GetDrawSelectionIndicator, bool);
	$ConstMethod(0x0041189e, GetDynamicallyLit, bool);
	$ConstMethod(0x00414168, GetEnchantInvincibility, bool);
	$ConstMethod(0x0041183b, GetForceNoRender, bool);
    FEX void SetForceNoRender(bool flag);
	$ConstMethod(0x00411863, GetHasBlockedPath, bool);
	//$Method(0x008606d9, GetHideMeshFlag, bool); // Always returns false.
	$ConstMethod(0x00860e4d, GetInCombatStance, bool);
	$ConstMethod(0x00411827, GetInterestOnly, bool);
	$ConstMethod(0x0041184f, GetIsCollidable, bool);
	$ConstMethod(0x0086239e, GetIsContextUsable, bool);
	$ConstMethod(0x0041188b, GetIsDoor, bool);
    FEX void SetIsDoor(bool flag);
	$ConstMethod(0x00411895, GetIsGagged, bool);
    FEX void SetIsGagged(bool flag);
	$ConstMethod(0x00414153, GetIsInvincible, bool);
	$ConstMethod(0x008640cf, GetIsInvincibleAgainst, bool, const Goid* unk1);
	$ConstMethod(0x004118c6, GetIsMarkedForPickup, bool);
	$ConstMethod(0x0041186d, GetIsSelectable, bool);
    FEX void SetIsSelectable(bool flag);
	$ConstMethod(0x00862283, GetIsTransmutable, bool);
	$ConstMethod(0x00411881, GetIsUsable, bool);
    FEX void SetIsUsable(bool flag);
	$ConstMethod(0x004118d0, GetIsVirginPickup, bool);
	$ConstMethod(0x008604d4, GetIsVisible, bool);
	$ConstMethod(0x00411817, GetIsVisibleThisFrame, bool);
	$ConstMethod(0x00860704, GetLockMeshFlag, bool);
	$ConstMethod(0x004119bd, GetManagesOwnDamage, bool);
	$ConstMethod(0x004118a8, GetOccludesLight, bool);
	$ConstMethod(0x0041181e, GetShouldDrawShadow, bool);
	$ConstMethod(0x004118bc, GetTerrainOrient, bool);
	$ConstMethod(0x004118b2, GetTerrainShaded, bool);
	$ConstMethod(0x008605e4, GetAspectPtr, NemaAspect*);
	$ConstMethod(0x008605d5, GetAspectHandle, NemaAspect::ResHandle);
	$Method(0x0086532b, GetCurrentAspectTexture, const char*, int index);
	$ConstMethod(0x00865368, GetTracerTexture, const char*);
	$ConstMethod(0x00411963, GetExperienceBenefactorSkill, const GPBString&);
	$ConstMethod(0x004119a0, GetMaterial, const GPBString&);
	$ConstMethod(0x00411952, GetExperienceBenefactor, const Goid*);
	$ConstMethod(0x004119cb, GetLastDamageType, eDamageType);
	$ConstMethod(0x00411976, GetLifeState, eLifeState);
	$Method(0x0086114f, GetAspectTextureSpeed, float, int index);
	$ConstMethod(0x00860aaa, GetBoundingSphereRadius, float);
	$ConstMethod(0x004119a4, GetCurrentLife, float);
	$ConstMethod(0x00411a17, GetCurrentMana, float);
	$ConstMethod(0x004119c4, GetDamageToApply, float);
	$ConstMethod(0x00411941, GetExperienceRemaining, float);
	$ConstMethod(0x0041193d, GetExperienceValue, float);
	$ConstMethod(0x004119b6, GetLastLifeDelta, float);
	$ConstMethod(0x00414174, GetLifeRatio, float);
	$ConstMethod(0x00414198, GetLifeRecoveryPeriod, float);
	$ConstMethod(0x00414194, GetLifeRecoveryUnit, float);
	$ConstMethod(0x004119a8, GetLifeTimedRestore, float);
	$ConstMethod(0x004119af, GetLifeTimedRestorePeriod, float);
	$ConstMethod(0x0086232c, GetLRUBonusPercent, float);
	$ConstMethod(0x004141bb, GetManaCostBonusPercent, float);
	$ConstMethod(0x004157db, GetManaRatio, float);
	$ConstMethod(0x004141b4, GetManaRecoveryPeriod, float);
	$ConstMethod(0x004141ad, GetManaRecoveryUnit, float);
	$ConstMethod(0x00411a1e, GetManaTimedRestore, float);
	$ConstMethod(0x00411a25, GetManaTimedRestorePeriod, float);
	$ConstMethod(0x0041416c, GetMaxLife, float);
	$ConstMethod(0x0041419f, GetMaxMana, float);
	$ConstMethod(0x00862365, GetMRUBonusPercent, float);
	$ConstMethod(0x00414170, GetNaturalMaxLife, float);
	$ConstMethod(0x004141a6, GetNaturalMaxMana, float);
	$ConstMethod(0x00411967, GetRenderScale, float);
	$ConstMethod(0x0041196e, GetRenderScaleBase, float);
	$ConstMethod(0x00411972, GetRenderScaleMultiplier, float);
	$ConstMethod(0x00411924, GetUseRange, float);
	$ConstMethod(0x0041199c, GetGoldValue, int);
	$Method(0x0086592c, ClearExperienceBenefactor, void);
	$Method(0x008606dc, HideSubMesh, void, int unk1);
	$Method(0x00861a4c, PrepareToDrawNow, void, bool unk1);
	$Method(0x008604ee, RCFadeOut, void);
	$Method(0x00860e90, RCHideSubMesh, void, int unk1);
	$Method(0x008611ad, RCSetCurrentLife, void, float unk1, uint unk2);
	$Method(0x0086361f, RCSetCurrentLifeDelta, void, float unk1, eDeltaDisplay unk2, const Goid* unk3, uint unk4);
	$Method(0x00867982, RCSetDynamicTexture, void, ePlayerSkin playerSkin, const char* unk2);
	$Method(0x008605e8, RCSetHideMeshFlag, void, bool unk1);
	$Method(0x00863433, RCSetLifeState, void, eLifeState lifeState, uint unk2);
	$Method(0x00865b07, RCSetMaterial, void, const GPBString& unk1);
	$Method(0x00860f75, RCShowSubMesh, void, int unk1);
	$Method(0x0086697a, RSSetCurrentAspectTexture, void, int index, const char* name);
	$Method(0x00863530, RSSetCurrentLife, void, float unk1);
	$Method(0x00863ae1, RSSetCurrentMana, void, float unk1);
	$Method(0x008666df, RSSetTracerTexture, void, const char* unk1);
	$Method(0x00865946, SetCurrentAspectTexture, void, int index, const char* name);
	$Method(0x00860754, SetCurrentLife, void, float unk1);
	$Method(0x008608ef, SetCurrentMana, void, float unk1);
	$Method(0x00861e1f, SetDoesBlockPath, void, bool unk1);
	$Method(0x004118da, SetDrawSelectionIndicator, void, bool unk1);
	$Method(0x00411956, SetExperienceBenefactor, void, const Goid* unk1);
	$Method(0x00419b35, SetExperienceBenefactorSkill, void, const GPBString& unk1);
	$Method(0x00411945, SetExperienceRemaining, void, float unk1);
	$Method(0x0086071c, SetGoldValue, void, int unk1);
	$Method(0x004118eb, SetIsCollidable, void, bool unk1);
	$Method(0x004118fc, SetIsInvincible, void, bool unk1);
	$Method(0x00864103, SetIsVisible, void, bool flag);
	$Method(0x008623e9, SetLifeState, void, eLifeState lifeState);
	$Method(0x00860795, SetLifeTimedRestore, void, float unk1);
	$Method(0x008607c6, SetLifeTimedRestorePeriod, void, float unk1);
	$Method(0x00415815, SetManaCostBonusPercent, void, float unk1);
	$Method(0x00860a13, SetManaTimedRestore, void, float unk1);
	$Method(0x00860a44, SetManaTimedRestorePeriod, void, float unk1);
	$Method(0x004157c4, SetRenderScaleMultiplier, void, float value);
	$Method(0x00411910, SetTerrainOrient, void, bool unk1);
	$Method(0x00865771, SetTracerTexture, void, const char* unk1);
	$Method(0x00860d52, SFadeOut, void);
	$Method(0x0086582f, SHideChildSubMeshByName, void, const char* unk1, int unk2);
	$Method(0x008623d7, SHideSubMesh, void, int unk1);
	$Method(0x008606f0, ShowSubMesh, void, int unk1);
	$Method(0x0086351a, SSetAspectTextureSpeed, void, int index, float speed);
	$Method(0x00865838, SSetChildTextureFromTextureName, void, const char* unk1, uint unk2, const char* unk3);
	$Method(0x008666d6, SSetCurrentAspectTexture, void, int index, const char* name);
	$Method(0x008625c2, SSetCurrentLife, void, float unk1);
	$Method(0x00862801, SSetCurrentMana, void, float unk1);
	$Method(0x004119f7, SSetDamageToApply, void, float unk1);
	$Method(0x0086432d, SSetDoesBlockCamera, void, bool unk1);
	$Method(0x00864324, SSetDrawExclamation, void, bool unk1);
	$Method(0x00867a6c, SSetDynamicTexture, void, ePlayerSkin playerSkin, const char* unk2);
	$Method(0x00863172, SSetFreezeMeshFlag, void, bool unk1);
	$Method(0x00862475, SSetGoldValue, void, int unk1, bool unk2);
	$Method(0x00860e87, SSetHideMeshFlag, void, bool unk1);
	$Method(0x0086215d, SSetInCombatStance, void, bool unk1);
	$Method(0x008666cd, SSetIsInvincible, void, bool unk1, const Goid* unk2);
	$Method(0x00411928, SSetIsInvincible, void, bool unk1);
	$Method(0x0086431b, SSetIsMarkedForPickup, void, bool unk1);
	$Method(0x00864309, SSetIsSelectable, void, bool unk1);
	$Method(0x00864312, SSetIsUsable, void, bool unk1);
	$Method(0x00865322, SSetIsVisible, void, bool unk1);
	$Method(0x00411a07, SSetLastDamageType, void, eDamageType damageType);
	$Method(0x0086436b, SSetLifeState, void, eLifeState lifeState, bool unk2);
	$Method(0x0041197a, SSetLifeState, void, eLifeState lifeState);
	$Method(0x008627a7, SSetLifeTimedRestore, void, float unk1);
	$Method(0x008627ba, SSetLifeTimedRestorePeriod, void, float unk1);
	$Method(0x0086317b, SSetLockMeshFlag, void, bool flag);
	$Method(0x004119e7, SSetManagesOwnDamage, void, bool flag);
	$Method(0x0086187d, SSetManaTimedRestore, void, float unk1);
	$Method(0x008629e6, SSetManaTimedRestorePeriod, void, float unk1);
	$Method(0x00866679, SSetMaterial, void, const GPBString& unk1);
	$Method(0x00863abb, SSetMaxLife, void, float unk1);
	$Method(0x00863bd0, SSetMaxMana, void, float unk1);
	$Method(0x00863ace, SSetNaturalMaxLife, void, float unk1);
	$Method(0x00863be3, SSetNaturalMaxMana, void, float unk1);
	$Method(0x00866670, SSetTracerTexture, void, const char* unk1);
	$Method(0x00865826, SShowChildSubMeshByName, void, const char* unk1, int unk2);
	$Method(0x008623e0, SShowSubMesh, void, int unk1);

//private:
	enum Flags {
		NONE						= CLEARED_FLAGS,
		IS_VISIBLE					= EnumFlag(1),
		DRAW_SHADOW					= EnumFlag(2),
		INTEREST_ONLY				= EnumFlag(3),
		DRAW_SELECTION_INDICATOR	= EnumFlag(4),
		FORCE_NO_RENDER				= EnumFlag(5),
		DRAW_EXCLAMATION			= EnumFlag(6),
		IS_COLLIDABLE				= EnumFlag(7),
		DOES_BLOCK_PATH				= EnumFlag(8),
		HAS_BLOCKED_PATH			= EnumFlag(9),
		IS_INVINCIBLE				= EnumFlag(10),
		IS_SELECTABLE				= EnumFlag(11),
		DOES_BLOCK_CAMERA			= EnumFlag(12),
		IS_USABLE					= EnumFlag(13),
		IS_DOOR						= EnumFlag(14),
		IS_MARKED_FOR_PICKUP		= EnumFlag(15),
		VIRGIN_PICKUP			    = EnumFlag(16),
		IS_GAGGED					= EnumFlag(17),
		DYNAMICALLY_LIT			    = EnumFlag(18),
		OCCLUDES_LIGHT			    = EnumFlag(19),
		TERRAIN_SHADED			    = EnumFlag(20),
		TERRAIN_ORIENT			    = EnumFlag(21),
	};

    // 0x014
    float selectionIndicatorScale;
	// 0x018
	float scaleBase;
	// 0x01c
	float scaleMultiplier;
	// 0x020
    float boundingVolumeScale;
	// 0x024
	float useRange;
	// 0x028
	GPBString material;
	// 0x02c
	$Padding(0x02c, 0x034);
	// 0x034
	Flags flags;
	// 0x038
	$Padding(0x038, 0x03c);
	// 0x03c
    NemaAspect* currentAspect = nullptr; // ??
	// 0x040
	NemaAspect* currentAspectPtr;
    // 0x044
    NemaAspect* nativeAspect = nullptr; // ??
	// 0x048
	int goldValue;
	// 0x04c
	float experienceValue;
	// 0x050
	float experienceRemaining;
	// 0x054
	Goid* experienceBenefactor;
	// 0x058
	GPBString experienceBenefactorSkill;
	// 0x05c
	$Padding(0x05c, 0x060);
	// 0x060
    bool b60 = false;
	bool bEnchantInvincibility = false;
	// 0x064
	eLifeState lifeState;
	// 0x068
	float naturalMaxLife;
	// 0x06c
	float maxLife;
	// 0x070
	float currentLife;
	// 0x074
    float naturalLifeRecoveryUnit;
	// 0x078
	float lifeRecoveryUnit;
	// 0x07c
    float naturalLifeRecoveryPeriod;
	// 0x080
	float lifeRecoveryPeriod;
	// 0x084
	$Padding(0x084, 0x088);
    // 0x088
    double d088;
	// 0x090
	float lifeTimedRestore;
	// 0x094
	float lifeTimedRestorePeriod;
	// 0x098
	$Padding(0x098, 0x09c);
	// 0x09c
	float lastLifeDelta;
	// 0x0a0
	bool bManagesOwnDamage;
	// 0x0a4
	float damageToApply;
	// 0x0a8
	$Padding(0x0a8, 0x0ac);
	// 0x0ac
	eDamageType lastDamageType;
	// 0x0b0
	float naturalMaxMana;
	// 0x0b4
	float maxMana;
	// 0x0b8
	float currentMana;
	// 0x0bc
    float naturalManaRecoveryUnit;
	// 0x0c0
	float manaRecoveryUnit;
	// 0x0c4
    float naturalManaRecoveryPeriod;
	// 0x0c8
	float manaRecoveryPeriod;
	// 0x0cc
    float naturalManaCostBonusPercent;
	// 0x0d0
	float manaCostBonusPercent;
	// 0x0d4
	$Padding(0x0d4, 0x0d8);
    // 0x0d8
    double d0D8;
	// 0x0e0
	float manaTimedRestore;
	// 0x0e4
	float manaTimedRestorePeriod;
	// 0x0e8
	$Padding(0x0e8, 0x0f0);
    // 0x0f0
    float aliveLightScaleStart;
    // 0x0f4
    float aliveLightScaleEnd;
    // 0x0f8
    $Padding(0x0f8, 0x0fc);
    // 0x0fc
    float deadLightScale;
    // 0x100
    float lightScaleTransTime;
    // 0x104
    $Padding(0x0104, 0x114);
	// 0x114
	bool bIsVisibleThisFrame;
    // 0x118
    $Padding(0x118, 0x124);
    // 0x124
    int screenPlayerVisibleCount;
    // 0x128
    $Padding(0x128, 0x168);
};

STATIC_ASSERT(sizeof(GoAspect) == 0x168);
STATIC_ASSERT_OFFSETOF(GoAspect, material, 0x028);
STATIC_ASSERT_OFFSETOF(GoAspect, goldValue, 0x048);
STATIC_ASSERT_OFFSETOF(GoAspect, bEnchantInvincibility, 0x061);
STATIC_ASSERT_OFFSETOF(GoAspect, naturalMaxLife, 0x068);
STATIC_ASSERT_OFFSETOF(GoAspect, lifeRecoveryUnit, 0x078);
STATIC_ASSERT_OFFSETOF(GoAspect, lifeRecoveryPeriod, 0x080);
STATIC_ASSERT_OFFSETOF(GoAspect, naturalMaxMana, 0x0b0);
STATIC_ASSERT_OFFSETOF(GoAspect, manaRecoveryUnit, 0x0c0);
STATIC_ASSERT_OFFSETOF(GoAspect, manaCostBonusPercent, 0x0d0);
STATIC_ASSERT_OFFSETOF(GoAspect, manaTimedRestorePeriod, 0x0e4);
STATIC_ASSERT_OFFSETOF(GoAspect, bIsVisibleThisFrame, 0x114);
STATIC_ASSERT_OFFSETOF(GoAspect, screenPlayerVisibleCount, 0x124);
