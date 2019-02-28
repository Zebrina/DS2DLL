#pragma once

#include "Enums.h"
#include "Nema.h"
#include "Player.h"

class GoAspect {
public:
	enum eDeltaDisplay {

	};

	DefineStaticMethod(FUBI_NetToInstance, 0x411a35, GoAspect*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x411a2c, unsigned long, Params(GoAspect* unk1), Args(unk1));
	DefineMethod(RCSetGoldValue, 0x86105a, FuBi::Cookie__*, Params(int unk1), Args(unk1));
	DefineMethod(HideChildSubMeshByName, 0x865207, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RCHideChildSubMeshByName, 0x86552b, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RCSetAspectTextureSpeed, 0x8624d6, void, Params(int unk1, float unk2), Args(unk1, unk2));
	DefineMethod(RCSetChildTextureFromTextureName, 0x865613, void, Params(const char* unk1, unsigned long unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetCurrentAspectTexture, 0x866588, void, Params(int unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(RCSetCurrentLife, 0x4119d2, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetCurrentMana, 0x86172e, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetDoesBlockCamera, 0x86334e, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetDrawExclamation, 0x863269, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetFreezeMeshFlag, 0x861f03, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetInCombatStance, 0x860d57, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetIsInvincible, 0x86646a, void, Params(bool unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RCSetIsMarkedForPickup, 0x863184, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetIsSelectable, 0x862fa8, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetIsUsable, 0x86308d, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetIsVisible, 0x864bfc, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetLifeState, 0x41198b, void, Params(eLifeState unk1), Args(unk1));
	DefineMethod(RCSetLifeTimedRestore, 0x8612f2, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetLifeTimedRestorePeriod, 0x8613db, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetLockMeshFlag, 0x861fe8, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetManaTimedRestore, 0x86092a, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetManaTimedRestorePeriod, 0x861890, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetMaxLife, 0x8625d5, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetMaxMana, 0x862814, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetNaturalMaxLife, 0x8626be, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetNaturalMaxMana, 0x8628fd, void, Params(float unk1), Args(unk1));
	DefineMethod(RCSetTracerTexture, 0x865a22, void, Params(const char* unk1), Args(unk1));
	DefineMethod(RCShowChildSubMeshByName, 0x865443, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RCSyncLife, 0x8607e0, void, Params(float unk1, double unk2), Args(unk1, unk2));
	DefineMethod(RCSyncMana, 0x8615ee, void, Params(float unk1, double unk2), Args(unk1, unk2));
	DefineMethod(RCSyncState, 0x8614c4, void, Params(float unk1, float unk2, double unk3, double unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetChildTextureFromTextureName, 0x86527f, void, Params(const char* unk1, unsigned long unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineMethod(ShowChildSubMeshByName, 0x86518f, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineConstMethod(GetDoesBlockCamera, 0x411877, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDoesBlockPath, 0x411859, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDrawExclamation, 0x411845, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDrawSelectionIndicator, 0x411831, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDynamicallyLit, 0x41189e, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEnchantInvincibility, 0x414168, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetForceNoRender, 0x41183b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetHasBlockedPath, 0x411863, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetHideMeshFlag, 0x8606d9, bool, NO_PARAMS, NO_ARGS); // Always returns true.
	DefineConstMethod(GetInCombatStance, 0x860e4d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInterestOnly, 0x411827, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsCollidable, 0x41184f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsContextUsable, 0x86239e, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsDoor, 0x41188b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsGagged, 0x411895, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsInvincible, 0x414153, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsInvincibleAgainst, 0x8640cf, bool, Params(const Goid_* unk1), Args(unk1));
	DefineConstMethod(GetIsMarkedForPickup, 0x4118c6, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsSelectable, 0x41186d, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsTransmutable, 0x862283, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsUsable, 0x411881, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsVirginPickup, 0x4118d0, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsVisible, 0x8604d4, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsVisibleThisFrame, 0x411817, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLockMeshFlag, 0x860704, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManagesOwnDamage, 0x4119bd, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetOccludesLight, 0x4118a8, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShouldDrawShadow, 0x41181e, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTerrainOrient, 0x4118bc, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTerrainShaded, 0x4118b2, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAspectPtr, 0x8605e4, nema::Aspect*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAspectHandle, 0x8605d5, nema::Aspect::ResHandle, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCurrentAspectTexture, 0x86532b, const char*, Params(int unk1), Args(unk1));
	DefineConstMethod(GetTracerTexture, 0x865368, const char*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExperienceBenefactorSkill, 0x411963, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaterial, 0x4119a0, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExperienceBenefactor, 0x411952, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLastDamageType, 0x4119cb, eDamageType, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLifeState, 0x411976, eLifeState, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAspectTextureSpeed, 0x86114f, float, Params(int unk1), Args(unk1));
	DefineConstMethod(GetBoundingSphereRadius, 0x860aaa, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCurrentLife, 0x4119a4, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCurrentMana, 0x411a17, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDamageToApply, 0x4119c4, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExperienceRemaining, 0x411941, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExperienceValue, 0x41193d, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLastLifeDelta, 0x4119b6, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLifeRatio, 0x414174, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLifeRecoveryPeriod, 0x414198, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLifeRecoveryUnit, 0x414194, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLifeTimedRestore, 0x4119a8, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLifeTimedRestorePeriod, 0x4119af, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLRUBonusPercent, 0x86232c, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManaCostBonusPercent, 0x4141bb, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManaRatio, 0x4157db, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManaRecoveryPeriod, 0x4141b4, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManaRecoveryUnit, 0x4141ad, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManaTimedRestore, 0x411a1e, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetManaTimedRestorePeriod, 0x411a25, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxLife, 0x41416c, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxMana, 0x41419f, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMRUBonusPercent, 0x862365, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNaturalMaxLife, 0x414170, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNaturalMaxMana, 0x4141a6, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRenderScale, 0x411967, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRenderScaleBase, 0x41196e, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRenderScaleMultiplier, 0x411972, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUseRange, 0x411924, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoldValue, 0x41199c, int, NO_PARAMS, NO_ARGS);
	DefineMethod(ClearExperienceBenefactor, 0x86592c, void, NO_PARAMS, NO_ARGS);
	DefineMethod(HideSubMesh, 0x8606dc, void, Params(int unk1), Args(unk1));
	DefineMethod(PrepareToDrawNow, 0x861a4c, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCFadeOut, 0x8604ee, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCHideSubMesh, 0x860e90, void, Params(int unk1), Args(unk1));
	DefineMethod(RCSetCurrentLife, 0x8611ad, void, Params(float unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCSetCurrentLifeDelta, 0x86361f, void, Params(float unk1, GoAspect::eDeltaDisplay unk2, const Goid_* unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCSetDynamicTexture, 0x867982, void, Params(ePlayerSkin playerSkin, const char* unk2), Args(playerSkin, unk2));
	DefineMethod(RCSetHideMeshFlag, 0x8605e8, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetLifeState, 0x863433, void, Params(eLifeState lifeState, unsigned long unk2), Args(lifeState, unk2));
	DefineMethod(RCSetMaterial, 0x865b07, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RCShowSubMesh, 0x860f75, void, Params(int unk1), Args(unk1));
	DefineMethod(RSSetCurrentAspectTexture, 0x86697a, void, Params(int unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(RSSetCurrentLife, 0x863530, void, Params(float unk1), Args(unk1));
	DefineMethod(RSSetCurrentMana, 0x863ae1, void, Params(float unk1), Args(unk1));
	DefineMethod(RSSetTracerTexture, 0x8666df, void, Params(const char* unk1), Args(unk1));
	DefineMethod(SetCurrentAspectTexture, 0x865946, void, Params(int unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(SetCurrentLife, 0x860754, void, Params(float unk1), Args(unk1));
	DefineMethod(SetCurrentMana, 0x8608ef, void, Params(float unk1), Args(unk1));
	DefineMethod(SetDoesBlockPath, 0x861e1f, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetDrawSelectionIndicator, 0x4118da, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetExperienceBenefactor, 0x411956, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetExperienceBenefactorSkill, 0x419b35, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetExperienceRemaining, 0x411945, void, Params(float unk1), Args(unk1));
	DefineMethod(SetGoldValue, 0x86071c, void, Params(int unk1), Args(unk1));
	DefineMethod(SetIsCollidable, 0x4118eb, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetIsInvincible, 0x4118fc, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetIsVisible, 0x864103, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetLifeState, 0x8623e9, void, Params(eLifeState lifeState), Args(lifeState));
	DefineMethod(SetLifeTimedRestore, 0x860795, void, Params(float unk1), Args(unk1));
	DefineMethod(SetLifeTimedRestorePeriod, 0x8607c6, void, Params(float unk1), Args(unk1));
	DefineMethod(SetManaCostBonusPercent, 0x415815, void, Params(float unk1), Args(unk1));
	DefineMethod(SetManaTimedRestore, 0x860a13, void, Params(float unk1), Args(unk1));
	DefineMethod(SetManaTimedRestorePeriod, 0x860a44, void, Params(float unk1), Args(unk1));
	DefineMethod(SetRenderScaleMultiplier, 0x4157c4, void, Params(float unk1), Args(unk1));
	DefineMethod(SetTerrainOrient, 0x411910, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetTracerTexture, 0x865771, void, Params(const char* unk1), Args(unk1));
	DefineMethod(SFadeOut, 0x860d52, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SHideChildSubMeshByName, 0x86582f, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SHideSubMesh, 0x8623d7, void, Params(int unk1), Args(unk1));
	DefineMethod(ShowSubMesh, 0x8606f0, void, Params(int unk1), Args(unk1));
	DefineMethod(SSetAspectTextureSpeed, 0x86351a, void, Params(int unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SSetChildTextureFromTextureName, 0x865838, void, Params(const char* unk1, unsigned long unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineMethod(SSetCurrentAspectTexture, 0x8666d6, void, Params(int unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(SSetCurrentLife, 0x8625c2, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetCurrentMana, 0x862801, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetDamageToApply, 0x4119f7, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetDoesBlockCamera, 0x86432d, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetDrawExclamation, 0x864324, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetDynamicTexture, 0x867a6c, void, Params(ePlayerSkin playerSkin, const char* unk2), Args(playerSkin, unk2));
	DefineMethod(SSetFreezeMeshFlag, 0x863172, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetGoldValue, 0x862475, void, Params(int unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SSetHideMeshFlag, 0x860e87, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetInCombatStance, 0x86215d, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetIsInvincible, 0x8666cd, void, Params(bool unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(SSetIsInvincible, 0x411928, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetIsMarkedForPickup, 0x86431b, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetIsSelectable, 0x864309, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetIsUsable, 0x864312, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetIsVisible, 0x865322, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetLastDamageType, 0x411a07, void, Params(eDamageType damageType), Args(damageType));
	DefineMethod(SSetLifeState, 0x86436b, void, Params(eLifeState lifeState, bool unk2), Args(lifeState, unk2));
	DefineMethod(SSetLifeState, 0x41197a, void, Params(eLifeState lifeState), Args(lifeState));
	DefineMethod(SSetLifeTimedRestore, 0x8627a7, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetLifeTimedRestorePeriod, 0x8627ba, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetLockMeshFlag, 0x86317b, void, Params(bool flag), Args(flag));
	DefineMethod(SSetManagesOwnDamage, 0x4119e7, void, Params(bool flag), Args(flag));
	DefineMethod(SSetManaTimedRestore, 0x86187d, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetManaTimedRestorePeriod, 0x8629e6, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetMaterial, 0x866679, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SSetMaxLife, 0x863abb, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetMaxMana, 0x863bd0, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetNaturalMaxLife, 0x863ace, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetNaturalMaxMana, 0x863be3, void, Params(float unk1), Args(unk1));
	DefineMethod(SSetTracerTexture, 0x866670, void, Params(const char* unk1), Args(unk1));
	DefineMethod(SShowChildSubMeshByName, 0x865826, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SShowSubMesh, 0x8623e0, void, Params(int unk1), Args(unk1));

//private:
	enum Flags {
		SHOULD_DRAW					= 0x00000002 | 1 << 0x01,
		INTEREST_ONLY				= 0x00000004 | 1 << 0x02,
		DRAW_SELECTION_INDICATOR	= 0x00000008 | 1 << 0x03,
		FORCE_NO_RENDER				= 0x00000010 | 1 << 0x04,
		DRAW_EXCLAMATION			= 0x00000020 | 1 << 0x05,
		IS_COLLIDABLE				= 0x00000040 | 1 << 0x06,
		DOES_BLOCK_PATH				= 0x00000080 | 1 << 0x07,
		HAS_BLOCKED_PATH			= 0x00000100 | 1 << 0x08,
		IS_SELECTABLE				= 0x00000400 | 1 << 0x0a,
		DOES_BLOCK_CAMERA			= 0x00000800 | 1 << 0x0b,
		IS_USABLE					= 0x00001000 | 1 << 0x0c,
		IS_DOOR						= 0x00002000 | 1 << 0x0d,
		IS_MARKED_FOR_PICKUP		= 0x00004000 | 1 << 0x0e,
		IS_VIRGIN_PICKUP			= 0x00008000 | 1 << 0x0f,
		IS_GAGGED					= 0x00010000 | 1 << 0x10,
		IS_DYNAMICALLY_LIT			= 0x00020000 | 1 << 0x11,
		IS_OCCLUDES_LIGHT			= 0x00040000 | 1 << 0x12,
		IS_TERRAIN_SHADED			= 0x00080000 | 1 << 0x13,
		IS_TERRAIN_ORIENT			= 0x00100000 | 1 << 0x14,
	};

	FillStruct(0x000, 0x018);
	// 0x018
	float renderScaleBase;
	// 0x01c
	float renderScaleMultiplier;
	FillStruct(0x020, 0x024);
	// 0x024
	float useRange;
	// 0x028
	gpbstring<char> material;
	FillStruct(0x02c, 0x034);
	// 0x034
	Flags flags;
	FillStruct(0x038, 0x03c);
	// 0x03c
	void* ptr_03c;
	// 0x040
	nema::Aspect* aspectPtr;
	FillStruct(0x044, 0x048);
	// 0x048
	int goldValue;
	// 0x04c
	float experienceValue;
	// 0x050
	float experienceRemaining;
	// 0x054
	Goid_* experienceBenefactor;
	// 0x058
	gpbstring<char> experienceBenefactorSkill;
	FillStruct(0x05c, 0x061);
	// 0x061
	bool enchantInvincibility;
	FillStruct(0x062, 0x064);
	// 0x064
	eLifeState lifeState;
	// 0x068
	float naturalMaxLife;
	// 0x06c
	float maxLife;
	// 0x070
	float currentLife;
	FillStruct(0x074, 0x078);
	// 0x078
	float lifeRecoveryUnit;
	FillStruct(0x07c, 0x080);
	// 0x080
	float lifeRecoveryPeriod;
	FillStruct(0x084, 0x090);
	// 0x090
	float lifeTimedRestore;
	// 0x094
	float lifeTimedRestorePeriod;
	FillStruct(0x098, 0x09c);
	// 0x09c
	float lastLifeDelta;
	// 0x0a0
	bool managesOwnDamage;
	FillStruct(0x0a1, 0x0a4);
	// 0x0a4
	float damageToApply;
	FillStruct(0x0a8, 0x0ac);
	// 0x0ac
	eDamageType lastDamageType;
	// 0x0b0
	float naturalMaxMana;
	// 0x0b4
	float maxMana;
	// 0x0b8
	float currentMana;
	FillStruct(0x0bc, 0x0c0);
	// 0x0c0
	float manaRecoveryUnit;
	FillStruct(0x0c4, 0x0c8);
	// 0x0c8
	float manaRecoveryPeriod;
	FillStruct(0x0cc, 0x0d0);
	// 0x0d0
	float manaCostBonusPercent;
	FillStruct(0x0d4, 0x0e0);
	// 0x0e0
	float manaTimedRestore;
	// 0x0e4
	float manaTimedRestorePeriod;
	FillStruct(0x0e8, 0x114);
	// 0x114
	bool isVisibleThisFrame;
};

STATIC_ASSERT_OFFSETOF(GoAspect, material, 0x028);
STATIC_ASSERT_OFFSETOF(GoAspect, goldValue, 0x048);
STATIC_ASSERT_OFFSETOF(GoAspect, enchantInvincibility, 0x061);
STATIC_ASSERT_OFFSETOF(GoAspect, naturalMaxLife, 0x068);
STATIC_ASSERT_OFFSETOF(GoAspect, lifeRecoveryUnit, 0x078);
STATIC_ASSERT_OFFSETOF(GoAspect, lifeRecoveryPeriod, 0x080);
STATIC_ASSERT_OFFSETOF(GoAspect, naturalMaxMana, 0x0b0);
STATIC_ASSERT_OFFSETOF(GoAspect, manaRecoveryUnit, 0x0c0);
STATIC_ASSERT_OFFSETOF(GoAspect, manaCostBonusPercent, 0x0d0);
STATIC_ASSERT_OFFSETOF(GoAspect, manaTimedRestorePeriod, 0x0e4);
STATIC_ASSERT_OFFSETOF(GoAspect, isVisibleThisFrame, 0x114);
