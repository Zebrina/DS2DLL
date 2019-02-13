#pragma once

class GoAttack {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x44a0c6, GoAttack*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoAttack*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoAttack* unk1); //0x0044a0bd
	DefineConstMethod(GetAmmoAlwaysAttached, 0x937afe, bool, Params(), Args());
	DefineConstMethod(GetAmmoAppearsJIT, 0x937ac5, bool, Params(), Args());
	DefineConstMethod(GetAmmoAttachesToWeapon, 0x937a8c, bool, Params(), Args());
	DefineConstMethod(GetForceCriticals, 0x44a01c, bool, Params(), Args());
	DefineConstMethod(GetIsDualWield, 0x44a07e, bool, Params(), Args());
	DefineConstMethod(GetIsMelee, 0x44a041, bool, Params(), Args());
	DefineConstMethod(GetIsOneShot, 0x44a060, bool, Params(), Args());
	DefineConstMethod(GetIsProjectile, 0x44a04a, bool, Params(), Args());
	DefineConstMethod(GetIsThrown, 0x44a088, bool, Params(), Args());
	DefineConstMethod(GetIsTwoHanded, 0x44a06a, bool, Params(), Args());
	DefineConstMethod(GetIsWeapon, 0x44a054, bool, Params(), Args());
	DefineConstMethod(GetIsWieldedWeapon, 0x44a074, bool, Params(), Args());
	DefineConstMethod(GetMarkTargetFire, 0x44abce, bool, Params(), Args());
	DefineConstMethod(GetMonsterAddBaseDamage, 0x937b70, bool, Params(), Args());
	DefineConstMethod(GetMultiAttack, 0x44a023, bool, Params(), Args());
	DefineConstMethod(GetRequiresLineOfSight, 0x44a03a, bool, Params(), Args());
	DefineConstMethod(GetUseAimingError, 0x9379e3, bool, Params(), Args());
	DefineMethod(IsInProjectileRange, 0x93840c, bool, Params(float unk1, const SiegePos& unk2), Args(float unk1, const SiegePos& unk2));
	DefineMethod(GetShooter, 0x936f05, Go*, Params(), Args());
	/*GoAttack*/ public: const gpbstring<char>& /*__thiscall*/ GetAmmoAttachBone() const; //0x00937a55
	/*GoAttack*/ public: const gpbstring<char>& /*__thiscall*/ GetDamageToType() const; //0x0044abb9
	/*GoAttack*/ public: const gpbstring<char>& /*__thiscall*/ GetSkillClass() const; //0x00937973
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ GetAmmoCloneSource() const; //0x00449ffe
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ GetAmmoReady() const; //0x0044a002
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ GetLastFiredAmmo() const; //0x0044a092
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ GetProjectileLauncher() const; //0x00449ffa
	/*GoAttack*/ public: const Goid_* /*__thiscall*/ SPrepareAmmo(); //0x009376e2
	DefineConstMethod(GetAttackClass, 0x449fe5, eAttackClass, Params(), Args());
	DefineMethod(GetDamageType, 0x936f1a, eDamageType, Params(), Args());
	DefineMethod(ComputeAimingAngle, 0x93765e, float, Params(const Goid_* unk1, const SiegePos& unk2, const SiegePos& unk3, float unk4), Args(const Goid_* unk1, const SiegePos& unk2, const SiegePos& unk3, float unk4));
	DefineMethod(ComputeAimingAngle, 0x937fbe, float, Params(const SiegePos& unk1, const SiegePos& unk2, float unk3), Args(const SiegePos& unk1, const SiegePos& unk2, float unk3));
	DefineConstMethod(GetAimingErrorBonus, 0x44ab57, float, Params(), Args());
	DefineConstMethod(GetAimingErrorX, 0x44a0af, float, Params(), Args());
	DefineConstMethod(GetAimingErrorY, 0x44a0b6, float, Params(), Args());
	DefineConstMethod(GetAmountDamageToType, 0x44abc0, float, Params(), Args());
	DefineConstMethod(GetAreaDamageRadius, 0x9379aa, float, Params(), Args());
	DefineMethod(GetAttackRange, 0x93906a, float, Params(), Args());
	DefineConstMethod(GetChanceForAimingError, 0x44ab50, float, Params(), Args());
	DefineConstMethod(GetChanceToHitBonus, 0x44ab3b, float, Params(), Args());
	DefineConstMethod(GetChanceToHitBonusMelee, 0x44ab42, float, Params(), Args());
	DefineConstMethod(GetChanceToHitBonusRanged, 0x44ab49, float, Params(), Args());
	DefineConstMethod(GetChanceToPenetrate, 0x44abd5, float, Params(), Args());
	DefineConstMethod(GetCMagicExpPercent, 0x44ab7a, float, Params(), Args());
	DefineConstMethod(GetCriticalChanceMeleeBonusPercent, 0x44aabd, float, Params(), Args());
	DefineConstMethod(GetCriticalChanceRangedBonusPercent, 0x44aac4, float, Params(), Args());
	DefineConstMethod(GetCriticalDamageBonusPercent, 0x44aaa8, float, Params(), Args());
	DefineConstMethod(GetCriticalDamageMeleeBonusPercent, 0x44aaaf, float, Params(), Args());
	DefineConstMethod(GetCriticalDamageRangedBonusPercent, 0x44aab6, float, Params(), Args());
	DefineConstMethod(GetCustomEffectDamageChance, 0x939c8a, float, Params(const char* unk1, const Goid_* unk2), Args(const char* unk1, const Goid_* unk2));
	DefineConstMethod(GetCustomEffectDamageMax, 0x939cee, float, Params(const char* unk1, const Goid_* unk2), Args(const char* unk1, const Goid_* unk2));
	DefineConstMethod(GetCustomEffectDamageMin, 0x939cd1, float, Params(const char* unk1, const Goid_* unk2), Args(const char* unk1, const Goid_* unk2));
	DefineConstMethod(GetDamageBonusMaxCMagic, 0x44aa69, float, Params(), Args());
	DefineConstMethod(GetDamageBonusMaxMelee, 0x44aa4e, float, Params(), Args());
	DefineConstMethod(GetDamageBonusMaxNMagic, 0x44aa7e, float, Params(), Args());
	DefineConstMethod(GetDamageBonusMaxRanged, 0x44aa5a, float, Params(), Args());
	DefineConstMethod(GetDamageBonusMinCMagic, 0x44aa62, float, Params(), Args());
	DefineConstMethod(GetDamageBonusMinMelee, 0x44aa4a, float, Params(), Args());
	DefineConstMethod(GetDamageBonusMinNMagic, 0x44aa77, float, Params(), Args());
	DefineConstMethod(GetDamageBonusMinRanged, 0x44aa56, float, Params(), Args());
	DefineConstMethod(GetDamageMax, 0x44aa27, float, Params(), Args());
	DefineConstMethod(GetDamageMin, 0x44aa0c, float, Params(), Args());
	DefineConstMethod(GetDamageMultiplierCMagic, 0x44aa70, float, Params(), Args());
	DefineConstMethod(GetDamageMultiplierMelee, 0x44aa52, float, Params(), Args());
	DefineConstMethod(GetDamageMultiplierNMagic, 0x44aa85, float, Params(), Args());
	DefineConstMethod(GetDamageMultiplierRanged, 0x44aa5e, float, Params(), Args());
	DefineConstMethod(GetDamageToUndead, 0x44abc7, float, Params(), Args());
	DefineConstMethod(GetDeathDamageBonusPercent, 0x44aaa1, float, Params(), Args());
	DefineConstMethod(GetExperienceBonus, 0x44ab5e, float, Params(), Args());
	DefineConstMethod(GetFireDamageBonusPercent, 0x44aa93, float, Params(), Args());
	DefineConstMethod(GetIceDamageBonusPercent, 0x44aa8c, float, Params(), Args());
	DefineConstMethod(GetLifeBonusAmount, 0x44abab, float, Params(), Args());
	DefineConstMethod(GetLifeStealAmount, 0x44ab81, float, Params(), Args());
	DefineConstMethod(GetLifeStealAmountMelee, 0x44ab88, float, Params(), Args());
	DefineConstMethod(GetLifeStealAmountRanged, 0x44ab8f, float, Params(), Args());
	DefineConstMethod(GetLightningDamageBonusPercent, 0x44aa9a, float, Params(), Args());
	DefineMethod(GetMagicPowerDamageBonusPercent, 0x44aa46, float, Params(), Args());
	DefineConstMethod(GetManaBonusAmount, 0x44abb2, float, Params(), Args());
	DefineConstMethod(GetManaDamageValueMelee, 0x44aad9, float, Params(), Args());
	DefineConstMethod(GetManaDamageValueRanged, 0x44aacb, float, Params(), Args());
	DefineConstMethod(GetManaDrainValueMelee, 0x44aae0, float, Params(), Args());
	DefineConstMethod(GetManaDrainValueRanged, 0x44aad2, float, Params(), Args());
	DefineConstMethod(GetManaStealAmount, 0x44ab96, float, Params(), Args());
	DefineConstMethod(GetManaStealAmountMelee, 0x44ab9d, float, Params(), Args());
	DefineConstMethod(GetManaStealAmountRanged, 0x44aba4, float, Params(), Args());
	DefineConstMethod(GetMeleeExpPercent, 0x44ab65, float, Params(), Args());
	DefineConstMethod(GetNMagicExpPercent, 0x44ab73, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageChance, 0x44aae7, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageChanceAmount, 0x44aafc, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageChanceAmountMelee, 0x44ab03, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageChanceAmountRanged, 0x44ab0a, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageChanceMelee, 0x44aaee, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageChanceRanged, 0x44aaf5, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageMax, 0x44ab18, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageMeleeMax, 0x44ab26, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageMeleeMin, 0x44ab1f, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageMin, 0x44ab11, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageRangedMax, 0x44ab34, float, Params(), Args());
	DefineConstMethod(GetPiercingDamageRangedMin, 0x44ab2d, float, Params(), Args());
	DefineMethod(GetPowerDamageBonusPercent, 0x44aa42, float, Params(), Args());
	DefineConstMethod(GetRangedExpPercent, 0x44ab6c, float, Params(), Args());
	DefineConstMethod(GetReloadDelay, 0x449fe9, float, Params(), Args());
	DefineConstMethod(GetWeaponErrorRange, 0x937a1c, float, Params(), Args());
	/*GoAttack*/ public: SiegePos& /*__thiscall*/ ComputeFiringPos(); //0x009382f2
	/*GoAttack*/ public: SiegePos& /*__thiscall*/ ComputeTargetPos(const Goid_* unk1); //0x0044a099
	/*GoAttack*/ public: SiegePos& /*__thiscall*/ ComputeTimedTargetPos(const Goid_* unk1, double unk2); //0x00937e18
	DefineMethod(ComputeAimingError, 0x937f2d, void, Params(), Args());
	DefineMethod(RCLaunchAmmo, 0x9385b1, void, Params(Go* unk1, const Goid_* unk2, SiegePos unk3, vector_3 unk4, unsigned long unk5), Args(Go* unk1, const Goid_* unk2, SiegePos unk3, vector_3 unk4, unsigned long unk5));
	DefineMethod(RCSetDamageMaxNatural, 0x937573, void, Params(float unk1, unsigned long unk2), Args(float unk1, unsigned long unk2));
	DefineMethod(RCSetDamageMinNatural, 0x937488, void, Params(float unk1, unsigned long unk2), Args(float unk1, unsigned long unk2));
	DefineMethod(SetDamageMax, 0x44b30f, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetDamageMaxNatural, 0x44aa2b, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetDamageMin, 0x44b302, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetDamageMinNatural, 0x44aa10, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetMultiAttack, 0x44a02a, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetProjectileLauncher, 0x449fed, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SLaunchAmmo, 0x93857a, void, Params(float unk1, const SiegePos& unk2, const SiegePos& unk3, float unk4, float unk5, const Goid_* unk6), Args(float unk1, const SiegePos& unk2, const SiegePos& unk3, float unk4, float unk5, const Goid_* unk6));
	DefineMethod(SLaunchSpecifiedAmmo, 0x93848e, void, Params(const Goid_* unk1, float unk2, const SiegePos& unk3, const SiegePos& unk4, float unk5, float unk6, const Goid_* unk7, const Goid_* unk8), Args(const Goid_* unk1, float unk2, const SiegePos& unk3, const SiegePos& unk4, float unk5, float unk6, const Goid_* unk7, const Goid_* unk8));
	DefineMethod(SSetDamageMaxNatural, 0x937be7, void, Params(float unk1), Args(float unk1));
	DefineMethod(SSetDamageMinNatural, 0x937ba9, void, Params(float unk1), Args(float unk1));
	DefineMethod(SSetForceCriticals, 0x936ef5, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SUnprepareAmmo, 0x937765, void, Params(), Args());
};
