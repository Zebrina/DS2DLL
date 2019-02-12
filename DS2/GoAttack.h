#pragma once

class GoAttack {
public:
	/*GoAttack*/ private: /*static*/ GoAttack* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x0044a0c6
	/*GoAttack*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoAttack* unk1); //0x0044a0bd
	/*GoAttack*/ public: bool /*__thiscall*/ GetAmmoAlwaysAttached() const; //0x00937afe
	/*GoAttack*/ public: bool /*__thiscall*/ GetAmmoAppearsJIT() const; //0x00937ac5
	/*GoAttack*/ public: bool /*__thiscall*/ GetAmmoAttachesToWeapon() const; //0x00937a8c
	/*GoAttack*/ public: bool /*__thiscall*/ GetForceCriticals() const; //0x0044a01c
	/*GoAttack*/ public: bool /*__thiscall*/ GetIsDualWield() const; //0x0044a07e
	/*GoAttack*/ public: bool /*__thiscall*/ GetIsMelee() const; //0x0044a041
	/*GoAttack*/ public: bool /*__thiscall*/ GetIsOneShot() const; //0x0044a060
	/*GoAttack*/ public: bool /*__thiscall*/ GetIsProjectile() const; //0x0044a04a
	/*GoAttack*/ public: bool /*__thiscall*/ GetIsThrown() const; //0x0044a088
	/*GoAttack*/ public: bool /*__thiscall*/ GetIsTwoHanded() const; //0x0044a06a
	/*GoAttack*/ public: bool /*__thiscall*/ GetIsWeapon() const; //0x0044a054
	/*GoAttack*/ public: bool /*__thiscall*/ GetIsWieldedWeapon() const; //0x0044a074
	/*GoAttack*/ public: bool /*__thiscall*/ GetMarkTargetFire() const; //0x0044abce
	/*GoAttack*/ public: bool /*__thiscall*/ GetMonsterAddBaseDamage() const; //0x00937b70
	/*GoAttack*/ public: bool /*__thiscall*/ GetMultiAttack() const; //0x0044a023
	/*GoAttack*/ public: bool /*__thiscall*/ GetRequiresLineOfSight() const; //0x0044a03a
	/*GoAttack*/ public: bool /*__thiscall*/ GetUseAimingError() const; //0x009379e3
	/*GoAttack*/ public: bool /*__thiscall*/ IsInProjectileRange(float unk1, const SiegePos& unk2); //0x0093840c
	/*GoAttack*/ public: Go* /*__thiscall*/ GetShooter(); //0x00936f05
	/*GoAttack*/ public: const gpbstring<char>& /*__thiscall*/ GetAmmoAttachBone() const; //0x00937a55
	/*GoAttack*/ public: const gpbstring<char>& /*__thiscall*/ GetDamageToType() const; //0x0044abb9
	/*GoAttack*/ public: const gpbstring<char>& /*__thiscall*/ GetSkillClass() const; //0x00937973
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ GetAmmoCloneSource() const; //0x00449ffe
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ GetAmmoReady() const; //0x0044a002
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ GetLastFiredAmmo() const; //0x0044a092
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ GetProjectileLauncher() const; //0x00449ffa
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ SPrepareAmmo(); //0x009376e2
	/*GoAttack*/ public: eAttackClass /*__thiscall*/ GetAttackClass() const; //0x00449fe5
	/*GoAttack*/ public: eDamageType /*__thiscall*/ GetDamageType(); //0x00936f1a
	/*GoAttack*/ public: float /*__thiscall*/ ComputeAimingAngle(const Goid_* unk1, const SiegePos& unk2, const SiegePos& unk3, float unk4); //0x0093765e
	/*GoAttack*/ public: float /*__thiscall*/ ComputeAimingAngle(const SiegePos& unk1, const SiegePos& unk2, float unk3); //0x00937fbe
	/*GoAttack*/ public: float /*__thiscall*/ GetAimingErrorBonus() const; //0x0044ab57
	/*GoAttack*/ public: float /*__thiscall*/ GetAimingErrorX() const; //0x0044a0af
	/*GoAttack*/ public: float /*__thiscall*/ GetAimingErrorY() const; //0x0044a0b6
	/*GoAttack*/ public: float /*__thiscall*/ GetAmountDamageToType() const; //0x0044abc0
	/*GoAttack*/ public: float /*__thiscall*/ GetAreaDamageRadius() const; //0x009379aa
	/*GoAttack*/ public: float /*__thiscall*/ GetAttackRange(); //0x0093906a
	/*GoAttack*/ public: float /*__thiscall*/ GetChanceForAimingError() const; //0x0044ab50
	/*GoAttack*/ public: float /*__thiscall*/ GetChanceToHitBonus() const; //0x0044ab3b
	/*GoAttack*/ public: float /*__thiscall*/ GetChanceToHitBonusMelee() const; //0x0044ab42
	/*GoAttack*/ public: float /*__thiscall*/ GetChanceToHitBonusRanged() const; //0x0044ab49
	/*GoAttack*/ public: float /*__thiscall*/ GetChanceToPenetrate() const; //0x0044abd5
	/*GoAttack*/ public: float /*__thiscall*/ GetCMagicExpPercent() const; //0x0044ab7a
	/*GoAttack*/ public: float /*__thiscall*/ GetCriticalChanceMeleeBonusPercent() const; //0x0044aabd
	/*GoAttack*/ public: float /*__thiscall*/ GetCriticalChanceRangedBonusPercent() const; //0x0044aac4
	/*GoAttack*/ public: float /*__thiscall*/ GetCriticalDamageBonusPercent() const; //0x0044aaa8
	/*GoAttack*/ public: float /*__thiscall*/ GetCriticalDamageMeleeBonusPercent() const; //0x0044aaaf
	/*GoAttack*/ public: float /*__thiscall*/ GetCriticalDamageRangedBonusPercent() const; //0x0044aab6
	/*GoAttack*/ public: float /*__thiscall*/ GetCustomEffectDamageChance(const char* unk1, const Goid_* unk2) const; //0x00939c8a
	/*GoAttack*/ public: float /*__thiscall*/ GetCustomEffectDamageMax(const char* unk1, const Goid_* unk2) const; //0x00939cee
	/*GoAttack*/ public: float /*__thiscall*/ GetCustomEffectDamageMin(const char* unk1, const Goid_* unk2) const; //0x00939cd1
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageBonusMaxCMagic() const; //0x0044aa69
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageBonusMaxMelee() const; //0x0044aa4e
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageBonusMaxNMagic() const; //0x0044aa7e
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageBonusMaxRanged() const; //0x0044aa5a
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageBonusMinCMagic() const; //0x0044aa62
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageBonusMinMelee() const; //0x0044aa4a
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageBonusMinNMagic() const; //0x0044aa77
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageBonusMinRanged() const; //0x0044aa56
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageMax() const; //0x0044aa27
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageMin() const; //0x0044aa0c
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageMultiplierCMagic() const; //0x0044aa70
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageMultiplierMelee() const; //0x0044aa52
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageMultiplierNMagic() const; //0x0044aa85
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageMultiplierRanged() const; //0x0044aa5e
	/*GoAttack*/ public: float /*__thiscall*/ GetDamageToUndead() const; //0x0044abc7
	/*GoAttack*/ public: float /*__thiscall*/ GetDeathDamageBonusPercent() const; //0x0044aaa1
	/*GoAttack*/ public: float /*__thiscall*/ GetExperienceBonus() const; //0x0044ab5e
	/*GoAttack*/ public: float /*__thiscall*/ GetFireDamageBonusPercent() const; //0x0044aa93
	/*GoAttack*/ public: float /*__thiscall*/ GetIceDamageBonusPercent() const; //0x0044aa8c
	/*GoAttack*/ public: float /*__thiscall*/ GetLifeBonusAmount() const; //0x0044abab
	/*GoAttack*/ public: float /*__thiscall*/ GetLifeStealAmount() const; //0x0044ab81
	/*GoAttack*/ public: float /*__thiscall*/ GetLifeStealAmountMelee() const; //0x0044ab88
	/*GoAttack*/ public: float /*__thiscall*/ GetLifeStealAmountRanged() const; //0x0044ab8f
	/*GoAttack*/ public: float /*__thiscall*/ GetLightningDamageBonusPercent() const; //0x0044aa9a
	/*GoAttack*/ public: float /*__thiscall*/ GetMagicPowerDamageBonusPercent(); //0x0044aa46
	/*GoAttack*/ public: float /*__thiscall*/ GetManaBonusAmount() const; //0x0044abb2
	/*GoAttack*/ public: float /*__thiscall*/ GetManaDamageValueMelee() const; //0x0044aad9
	/*GoAttack*/ public: float /*__thiscall*/ GetManaDamageValueRanged() const; //0x0044aacb
	/*GoAttack*/ public: float /*__thiscall*/ GetManaDrainValueMelee() const; //0x0044aae0
	/*GoAttack*/ public: float /*__thiscall*/ GetManaDrainValueRanged() const; //0x0044aad2
	/*GoAttack*/ public: float /*__thiscall*/ GetManaStealAmount() const; //0x0044ab96
	/*GoAttack*/ public: float /*__thiscall*/ GetManaStealAmountMelee() const; //0x0044ab9d
	/*GoAttack*/ public: float /*__thiscall*/ GetManaStealAmountRanged() const; //0x0044aba4
	/*GoAttack*/ public: float /*__thiscall*/ GetMeleeExpPercent() const; //0x0044ab65
	/*GoAttack*/ public: float /*__thiscall*/ GetNMagicExpPercent() const; //0x0044ab73
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageChance() const; //0x0044aae7
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageChanceAmount() const; //0x0044aafc
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageChanceAmountMelee() const; //0x0044ab03
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageChanceAmountRanged() const; //0x0044ab0a
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageChanceMelee() const; //0x0044aaee
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageChanceRanged() const; //0x0044aaf5
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageMax() const; //0x0044ab18
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageMeleeMax() const; //0x0044ab26
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageMeleeMin() const; //0x0044ab1f
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageMin() const; //0x0044ab11
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageRangedMax() const; //0x0044ab34
	/*GoAttack*/ public: float /*__thiscall*/ GetPiercingDamageRangedMin() const; //0x0044ab2d
	/*GoAttack*/ public: float /*__thiscall*/ GetPowerDamageBonusPercent(); //0x0044aa42
	/*GoAttack*/ public: float /*__thiscall*/ GetRangedExpPercent() const; //0x0044ab6c
	/*GoAttack*/ public: float /*__thiscall*/ GetReloadDelay() const; //0x00449fe9
	/*GoAttack*/ public: float /*__thiscall*/ GetWeaponErrorRange() const; //0x00937a1c
	/*GoAttack*/ public: SiegePos& /*__thiscall*/ ComputeFiringPos(); //0x009382f2
	/*GoAttack*/ public: SiegePos& /*__thiscall*/ ComputeTargetPos(const Goid_* unk1); //0x0044a099
	/*GoAttack*/ public: SiegePos& /*__thiscall*/ ComputeTimedTargetPos(const Goid_* unk1, double unk2); //0x00937e18
	/*GoAttack*/ public: void /*__thiscall*/ ComputeAimingError(); //0x00937f2d
	/*GoAttack*/ public: void /*__thiscall*/ RCLaunchAmmo(Go* unk1, const Goid_* unk2, SiegePos unk3, vector_3 unk4, unsigned long unk5); //0x009385b1
	/*GoAttack*/ public: void /*__thiscall*/ RCSetDamageMaxNatural(float unk1, unsigned long unk2); //0x00937573
	/*GoAttack*/ public: void /*__thiscall*/ RCSetDamageMinNatural(float unk1, unsigned long unk2); //0x00937488
	/*GoAttack*/ public: void /*__thiscall*/ SetDamageMax(float unk1); //0x0044b30f
	/*GoAttack*/ public: void /*__thiscall*/ SetDamageMaxNatural(float unk1); //0x0044aa2b
	/*GoAttack*/ public: void /*__thiscall*/ SetDamageMin(float unk1); //0x0044b302
	/*GoAttack*/ public: void /*__thiscall*/ SetDamageMinNatural(float unk1); //0x0044aa10
	/*GoAttack*/ public: void /*__thiscall*/ SetMultiAttack(bool unk1); //0x0044a02a
	/*GoAttack*/ public: void /*__thiscall*/ SetProjectileLauncher(const Goid_* unk1); //0x00449fed
	/*GoAttack*/ public: void /*__thiscall*/ SLaunchAmmo(float unk1, const SiegePos& unk2, const SiegePos& unk3, float unk4, float unk5, const Goid_* unk6); //0x0093857a
	/*GoAttack*/ public: void /*__thiscall*/ SLaunchSpecifiedAmmo(const Goid_* unk1, float unk2, const SiegePos& unk3, const SiegePos& unk4, float unk5, float unk6, const Goid_* unk7, const Goid_* unk8); //0x0093848e
	/*GoAttack*/ public: void /*__thiscall*/ SSetDamageMaxNatural(float unk1); //0x00937be7
	/*GoAttack*/ public: void /*__thiscall*/ SSetDamageMinNatural(float unk1); //0x00937ba9
	/*GoAttack*/ public: void /*__thiscall*/ SSetForceCriticals(bool unk1); //0x00936ef5
	/*GoAttack*/ public: void /*__thiscall*/ SUnprepareAmmo(); //0x00937765
};
