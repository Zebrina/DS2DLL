#pragma once

class GoAspect {
public:
	enum eDeltaDisplay {

	};

	/*GoAspect*/ private: /*static*/ GoAspect* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00411a35
	/*GoAspect*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoAspect* unk1); //0x00411a2c
	/*GoAspect*/ private: FuBi::Cookie__* /*__thiscall*/ RCSetGoldValue(int unk1); //0x0086105a
	/*GoAspect*/ private: void /*__thiscall*/ HideChildSubMeshByName(const char* unk1, int unk2); //0x00865207
	/*GoAspect*/ private: void /*__thiscall*/ RCHideChildSubMeshByName(const char* unk1, int unk2); //0x0086552b
	/*GoAspect*/ private: void /*__thiscall*/ RCSetAspectTextureSpeed(int unk1, float unk2); //0x008624d6
	/*GoAspect*/ private: void /*__thiscall*/ RCSetChildTextureFromTextureName(const char* unk1, unsigned long unk2, const char* unk3); //0x00865613
	/*GoAspect*/ private: void /*__thiscall*/ RCSetCurrentAspectTexture(int unk1, const char* unk2); //0x00866588
	/*GoAspect*/ private: void /*__thiscall*/ RCSetCurrentLife(float unk1); //0x004119d2
	/*GoAspect*/ private: void /*__thiscall*/ RCSetCurrentMana(float unk1); //0x0086172e
	/*GoAspect*/ private: void /*__thiscall*/ RCSetDoesBlockCamera(bool unk1); //0x0086334e
	/*GoAspect*/ private: void /*__thiscall*/ RCSetDrawExclamation(bool unk1); //0x00863269
	/*GoAspect*/ private: void /*__thiscall*/ RCSetFreezeMeshFlag(bool unk1); //0x00861f03
	/*GoAspect*/ private: void /*__thiscall*/ RCSetInCombatStance(bool unk1); //0x00860d57
	/*GoAspect*/ private: void /*__thiscall*/ RCSetIsInvincible(bool unk1, const Goid_* unk2); //0x0086646a
	/*GoAspect*/ private: void /*__thiscall*/ RCSetIsMarkedForPickup(bool unk1); //0x00863184
	/*GoAspect*/ private: void /*__thiscall*/ RCSetIsSelectable(bool unk1); //0x00862fa8
	/*GoAspect*/ private: void /*__thiscall*/ RCSetIsUsable(bool unk1); //0x0086308d
	/*GoAspect*/ private: void /*__thiscall*/ RCSetIsVisible(bool unk1); //0x00864bfc
	/*GoAspect*/ private: void /*__thiscall*/ RCSetLifeState(eLifeState unk1); //0x0041198b
	/*GoAspect*/ private: void /*__thiscall*/ RCSetLifeTimedRestore(float unk1); //0x008612f2
	/*GoAspect*/ private: void /*__thiscall*/ RCSetLifeTimedRestorePeriod(float unk1); //0x008613db
	/*GoAspect*/ private: void /*__thiscall*/ RCSetLockMeshFlag(bool unk1); //0x00861fe8
	/*GoAspect*/ private: void /*__thiscall*/ RCSetManaTimedRestore(float unk1); //0x0086092a
	/*GoAspect*/ private: void /*__thiscall*/ RCSetManaTimedRestorePeriod(float unk1); //0x00861890
	/*GoAspect*/ private: void /*__thiscall*/ RCSetMaxLife(float unk1); //0x008625d5
	/*GoAspect*/ private: void /*__thiscall*/ RCSetMaxMana(float unk1); //0x00862814
	/*GoAspect*/ private: void /*__thiscall*/ RCSetNaturalMaxLife(float unk1); //0x008626be
	/*GoAspect*/ private: void /*__thiscall*/ RCSetNaturalMaxMana(float unk1); //0x008628fd
	/*GoAspect*/ private: void /*__thiscall*/ RCSetTracerTexture(const char* unk1); //0x00865a22
	/*GoAspect*/ private: void /*__thiscall*/ RCShowChildSubMeshByName(const char* unk1, int unk2); //0x00865443
	/*GoAspect*/ private: void /*__thiscall*/ RCSyncLife(float unk1, double unk2); //0x008607e0
	/*GoAspect*/ private: void /*__thiscall*/ RCSyncMana(float unk1, double unk2); //0x008615ee
	/*GoAspect*/ private: void /*__thiscall*/ RCSyncState(float unk1, float unk2, double unk3, double unk4); //0x008614c4
	/*GoAspect*/ private: void /*__thiscall*/ SetChildTextureFromTextureName(const char* unk1, unsigned long unk2, const char* unk3); //0x0086527f
	/*GoAspect*/ private: void /*__thiscall*/ ShowChildSubMeshByName(const char* unk1, int unk2); //0x0086518f
	/*GoAspect*/ public: bool /*__thiscall*/ GetDoesBlockCamera() const; //0x00411877
	/*GoAspect*/ public: bool /*__thiscall*/ GetDoesBlockPath() const; //0x00411859
	/*GoAspect*/ public: bool /*__thiscall*/ GetDrawExclamation() const; //0x00411845
	/*GoAspect*/ public: bool /*__thiscall*/ GetDrawSelectionIndicator() const; //0x00411831
	/*GoAspect*/ public: bool /*__thiscall*/ GetDynamicallyLit() const; //0x0041189e
	/*GoAspect*/ public: bool /*__thiscall*/ GetEnchantInvincibility() const; //0x00414168
	/*GoAspect*/ public: bool /*__thiscall*/ GetForceNoRender() const; //0x0041183b
	/*GoAspect*/ public: bool /*__thiscall*/ GetHasBlockedPath() const; //0x00411863
	/*GoAspect*/ public: bool /*__thiscall*/ GetHideMeshFlag(); //0x008606d9
	/*GoAspect*/ public: bool /*__thiscall*/ GetInCombatStance() const; //0x00860e4d
	/*GoAspect*/ public: bool /*__thiscall*/ GetInterestOnly() const; //0x00411827
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsCollidable() const; //0x0041184f
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsContextUsable() const; //0x0086239e
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsDoor() const; //0x0041188b
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsGagged() const; //0x00411895
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsInvincible() const; //0x00414153
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsInvincibleAgainst(const Goid_* unk1) const; //0x008640cf
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsMarkedForPickup() const; //0x004118c6
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsSelectable() const; //0x0041186d
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsTransmutable() const; //0x00862283
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsUsable() const; //0x00411881
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsVirginPickup() const; //0x004118d0
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsVisible() const; //0x008604d4
	/*GoAspect*/ public: bool /*__thiscall*/ GetIsVisibleThisFrame() const; //0x00411817
	/*GoAspect*/ public: bool /*__thiscall*/ GetLockMeshFlag() const; //0x00860704
	/*GoAspect*/ public: bool /*__thiscall*/ GetManagesOwnDamage() const; //0x004119bd
	/*GoAspect*/ public: bool /*__thiscall*/ GetOccludesLight() const; //0x004118a8
	/*GoAspect*/ public: bool /*__thiscall*/ GetShouldDrawShadow() const; //0x0041181e
	/*GoAspect*/ public: bool /*__thiscall*/ GetTerrainOrient() const; //0x004118bc
	/*GoAspect*/ public: bool /*__thiscall*/ GetTerrainShaded() const; //0x004118b2
	/*GoAspect*/ public: nema::Aspect* /*__thiscall*/ GetAspectPtr() const; //0x008605e4
	/*GoAspect*/ public: ResHandle<nema::Aspect, ResHandleFields<24> > /*__thiscall*/ GetAspectHandle() const; //0x008605d5
	/*GoAspect*/ public: const char* /*__thiscall*/ GetCurrentAspectTexture(int unk1); //0x0086532b
	/*GoAspect*/ public: const char* /*__thiscall*/ GetTracerTexture() const; //0x00865368
	/*GoAspect*/ public: const gpbstring<char>& /*__thiscall*/ GetExperienceBenefactorSkill() const; //0x00411963
	/*GoAspect*/ public: const gpbstring<char>& /*__thiscall*/ GetMaterial() const; //0x004119a0
	/*GoAspect*/ public: const Goid_* /*__thiscall*/ GetExperienceBenefactor() const; //0x00411952
	/*GoAspect*/ public: eDamageType /*__thiscall*/ GetLastDamageType() const; //0x004119cb
	/*GoAspect*/ public: eLifeState /*__thiscall*/ GetLifeState() const; //0x00411976
	/*GoAspect*/ public: float /*__thiscall*/ GetAspectTextureSpeed(int unk1); //0x0086114f
	/*GoAspect*/ public: float /*__thiscall*/ GetBoundingSphereRadius() const; //0x00860aaa
	/*GoAspect*/ public: float /*__thiscall*/ GetCurrentLife() const; //0x004119a4
	/*GoAspect*/ public: float /*__thiscall*/ GetCurrentMana() const; //0x00411a17
	/*GoAspect*/ public: float /*__thiscall*/ GetDamageToApply() const; //0x004119c4
	/*GoAspect*/ public: float /*__thiscall*/ GetExperienceRemaining() const; //0x00411941
	/*GoAspect*/ public: float /*__thiscall*/ GetExperienceValue() const; //0x0041193d
	/*GoAspect*/ public: float /*__thiscall*/ GetLastLifeDelta() const; //0x004119b6
	/*GoAspect*/ public: float /*__thiscall*/ GetLifeRatio() const; //0x00414174
	/*GoAspect*/ public: float /*__thiscall*/ GetLifeRecoveryPeriod() const; //0x00414198
	/*GoAspect*/ public: float /*__thiscall*/ GetLifeRecoveryUnit() const; //0x00414194
	/*GoAspect*/ public: float /*__thiscall*/ GetLifeTimedRestore() const; //0x004119a8
	/*GoAspect*/ public: float /*__thiscall*/ GetLifeTimedRestorePeriod() const; //0x004119af
	/*GoAspect*/ public: float /*__thiscall*/ GetLRUBonusPercent() const; //0x0086232c
	/*GoAspect*/ public: float /*__thiscall*/ GetManaCostBonusPercent() const; //0x004141bb
	/*GoAspect*/ public: float /*__thiscall*/ GetManaRatio() const; //0x004157db
	/*GoAspect*/ public: float /*__thiscall*/ GetManaRecoveryPeriod() const; //0x004141b4
	/*GoAspect*/ public: float /*__thiscall*/ GetManaRecoveryUnit() const; //0x004141ad
	/*GoAspect*/ public: float /*__thiscall*/ GetManaTimedRestore() const; //0x00411a1e
	/*GoAspect*/ public: float /*__thiscall*/ GetManaTimedRestorePeriod() const; //0x00411a25
	/*GoAspect*/ public: float /*__thiscall*/ GetMaxLife() const; //0x0041416c
	/*GoAspect*/ public: float /*__thiscall*/ GetMaxMana() const; //0x0041419f
	/*GoAspect*/ public: float /*__thiscall*/ GetMRUBonusPercent() const; //0x00862365
	/*GoAspect*/ public: float /*__thiscall*/ GetNaturalMaxLife() const; //0x00414170
	/*GoAspect*/ public: float /*__thiscall*/ GetNaturalMaxMana() const; //0x004141a6
	/*GoAspect*/ public: float /*__thiscall*/ GetRenderScale() const; //0x00411967
	/*GoAspect*/ public: float /*__thiscall*/ GetRenderScaleBase() const; //0x0041196e
	/*GoAspect*/ public: float /*__thiscall*/ GetRenderScaleMultiplier() const; //0x00411972
	/*GoAspect*/ public: float /*__thiscall*/ GetUseRange() const; //0x00411924
	/*GoAspect*/ public: int /*__thiscall*/ GetGoldValue() const; //0x0041199c
	/*GoAspect*/ public: void /*__thiscall*/ ClearExperienceBenefactor(); //0x0086592c
	/*GoAspect*/ public: void /*__thiscall*/ HideSubMesh(int unk1); //0x008606dc
	/*GoAspect*/ public: void /*__thiscall*/ PrepareToDrawNow(bool unk1); //0x00861a4c
	/*GoAspect*/ public: void /*__thiscall*/ RCFadeOut(); //0x008604ee
	/*GoAspect*/ public: void /*__thiscall*/ RCHideSubMesh(int unk1); //0x00860e90
	/*GoAspect*/ public: void /*__thiscall*/ RCSetCurrentLife(float unk1, unsigned long unk2); //0x008611ad
	/*GoAspect*/ public: void /*__thiscall*/ RCSetCurrentLifeDelta(float unk1, GoAspect::eDeltaDisplay unk2, const Goid_* unk3, unsigned long unk4); //0x0086361f
	/*GoAspect*/ public: void /*__thiscall*/ RCSetDynamicTexture(ePlayerSkin unk1, const char* unk2); //0x00867982
	/*GoAspect*/ public: void /*__thiscall*/ RCSetHideMeshFlag(bool unk1); //0x008605e8
	/*GoAspect*/ public: void /*__thiscall*/ RCSetLifeState(eLifeState unk1, unsigned long unk2); //0x00863433
	/*GoAspect*/ public: void /*__thiscall*/ RCSetMaterial(const gpbstring<char>& unk1); //0x00865b07
	/*GoAspect*/ public: void /*__thiscall*/ RCShowSubMesh(int unk1); //0x00860f75
	/*GoAspect*/ public: void /*__thiscall*/ RSSetCurrentAspectTexture(int unk1, const char* unk2); //0x0086697a
	/*GoAspect*/ public: void /*__thiscall*/ RSSetCurrentLife(float unk1); //0x00863530
	/*GoAspect*/ public: void /*__thiscall*/ RSSetCurrentMana(float unk1); //0x00863ae1
	/*GoAspect*/ public: void /*__thiscall*/ RSSetTracerTexture(const char* unk1); //0x008666df
	/*GoAspect*/ public: void /*__thiscall*/ SetCurrentAspectTexture(int unk1, const char* unk2); //0x00865946
	/*GoAspect*/ public: void /*__thiscall*/ SetCurrentLife(float unk1); //0x00860754
	/*GoAspect*/ public: void /*__thiscall*/ SetCurrentMana(float unk1); //0x008608ef
	/*GoAspect*/ public: void /*__thiscall*/ SetDoesBlockPath(bool unk1); //0x00861e1f
	/*GoAspect*/ public: void /*__thiscall*/ SetDrawSelectionIndicator(bool unk1); //0x004118da
	/*GoAspect*/ public: void /*__thiscall*/ SetExperienceBenefactor(const Goid_* unk1); //0x00411956
	/*GoAspect*/ public: void /*__thiscall*/ SetExperienceBenefactorSkill(const gpbstring<char>& unk1); //0x00419b35
	/*GoAspect*/ public: void /*__thiscall*/ SetExperienceRemaining(float unk1); //0x00411945
	/*GoAspect*/ public: void /*__thiscall*/ SetGoldValue(int unk1); //0x0086071c
	/*GoAspect*/ public: void /*__thiscall*/ SetIsCollidable(bool unk1); //0x004118eb
	/*GoAspect*/ public: void /*__thiscall*/ SetIsInvincible(bool unk1); //0x004118fc
	/*GoAspect*/ public: void /*__thiscall*/ SetIsVisible(bool unk1); //0x00864103
	/*GoAspect*/ public: void /*__thiscall*/ SetLifeState(eLifeState unk1); //0x008623e9
	/*GoAspect*/ public: void /*__thiscall*/ SetLifeTimedRestore(float unk1); //0x00860795
	/*GoAspect*/ public: void /*__thiscall*/ SetLifeTimedRestorePeriod(float unk1); //0x008607c6
	/*GoAspect*/ public: void /*__thiscall*/ SetManaCostBonusPercent(float unk1); //0x00415815
	/*GoAspect*/ public: void /*__thiscall*/ SetManaTimedRestore(float unk1); //0x00860a13
	/*GoAspect*/ public: void /*__thiscall*/ SetManaTimedRestorePeriod(float unk1); //0x00860a44
	/*GoAspect*/ public: void /*__thiscall*/ SetRenderScaleMultiplier(float unk1); //0x004157c4
	/*GoAspect*/ public: void /*__thiscall*/ SetTerrainOrient(bool unk1); //0x00411910
	/*GoAspect*/ public: void /*__thiscall*/ SetTracerTexture(const char* unk1); //0x00865771
	/*GoAspect*/ public: void /*__thiscall*/ SFadeOut(); //0x00860d52
	/*GoAspect*/ public: void /*__thiscall*/ SHideChildSubMeshByName(const char* unk1, int unk2); //0x0086582f
	/*GoAspect*/ public: void /*__thiscall*/ SHideSubMesh(int unk1); //0x008623d7
	/*GoAspect*/ public: void /*__thiscall*/ ShowSubMesh(int unk1); //0x008606f0
	/*GoAspect*/ public: void /*__thiscall*/ SSetAspectTextureSpeed(int unk1, float unk2); //0x0086351a
	/*GoAspect*/ public: void /*__thiscall*/ SSetChildTextureFromTextureName(const char* unk1, unsigned long unk2, const char* unk3); //0x00865838
	/*GoAspect*/ public: void /*__thiscall*/ SSetCurrentAspectTexture(int unk1, const char* unk2); //0x008666d6
	/*GoAspect*/ public: void /*__thiscall*/ SSetCurrentLife(float unk1); //0x008625c2
	/*GoAspect*/ public: void /*__thiscall*/ SSetCurrentMana(float unk1); //0x00862801
	/*GoAspect*/ public: void /*__thiscall*/ SSetDamageToApply(float unk1); //0x004119f7
	/*GoAspect*/ public: void /*__thiscall*/ SSetDoesBlockCamera(bool unk1); //0x0086432d
	/*GoAspect*/ public: void /*__thiscall*/ SSetDrawExclamation(bool unk1); //0x00864324
	/*GoAspect*/ public: void /*__thiscall*/ SSetDynamicTexture(ePlayerSkin unk1, const char* unk2); //0x00867a6c
	/*GoAspect*/ public: void /*__thiscall*/ SSetFreezeMeshFlag(bool unk1); //0x00863172
	/*GoAspect*/ public: void /*__thiscall*/ SSetGoldValue(int unk1, bool unk2); //0x00862475
	/*GoAspect*/ public: void /*__thiscall*/ SSetHideMeshFlag(bool unk1); //0x00860e87
	/*GoAspect*/ public: void /*__thiscall*/ SSetInCombatStance(bool unk1); //0x0086215d
	/*GoAspect*/ public: void /*__thiscall*/ SSetIsInvincible(bool unk1, const Goid_* unk2); //0x008666cd
	/*GoAspect*/ public: void /*__thiscall*/ SSetIsInvincible(bool unk1); //0x00411928
	/*GoAspect*/ public: void /*__thiscall*/ SSetIsMarkedForPickup(bool unk1); //0x0086431b
	/*GoAspect*/ public: void /*__thiscall*/ SSetIsSelectable(bool unk1); //0x00864309
	/*GoAspect*/ public: void /*__thiscall*/ SSetIsUsable(bool unk1); //0x00864312
	/*GoAspect*/ public: void /*__thiscall*/ SSetIsVisible(bool unk1); //0x00865322
	/*GoAspect*/ public: void /*__thiscall*/ SSetLastDamageType(eDamageType unk1); //0x00411a07
	/*GoAspect*/ public: void /*__thiscall*/ SSetLifeState(eLifeState unk1, bool unk2); //0x0086436b
	/*GoAspect*/ public: void /*__thiscall*/ SSetLifeState(eLifeState unk1); //0x0041197a
	/*GoAspect*/ public: void /*__thiscall*/ SSetLifeTimedRestore(float unk1); //0x008627a7
	/*GoAspect*/ public: void /*__thiscall*/ SSetLifeTimedRestorePeriod(float unk1); //0x008627ba
	/*GoAspect*/ public: void /*__thiscall*/ SSetLockMeshFlag(bool unk1); //0x0086317b
	/*GoAspect*/ public: void /*__thiscall*/ SSetManagesOwnDamage(bool unk1); //0x004119e7
	/*GoAspect*/ public: void /*__thiscall*/ SSetManaTimedRestore(float unk1); //0x0086187d
	/*GoAspect*/ public: void /*__thiscall*/ SSetManaTimedRestorePeriod(float unk1); //0x008629e6
	/*GoAspect*/ public: void /*__thiscall*/ SSetMaterial(const gpbstring<char>& unk1); //0x00866679
	/*GoAspect*/ public: void /*__thiscall*/ SSetMaxLife(float unk1); //0x00863abb
	/*GoAspect*/ public: void /*__thiscall*/ SSetMaxMana(float unk1); //0x00863bd0
	/*GoAspect*/ public: void /*__thiscall*/ SSetNaturalMaxLife(float unk1); //0x00863ace
	/*GoAspect*/ public: void /*__thiscall*/ SSetNaturalMaxMana(float unk1); //0x00863be3
	/*GoAspect*/ public: void /*__thiscall*/ SSetTracerTexture(const char* unk1); //0x00866670
	/*GoAspect*/ public: void /*__thiscall*/ SShowChildSubMeshByName(const char* unk1, int unk2); //0x00865826
	/*GoAspect*/ public: void /*__thiscall*/ SShowSubMesh(int unk1); //0x008623e0
};
