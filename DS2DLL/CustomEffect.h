#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "GoidScid.h"
#include "GPString.h"

struct CustomEffect {
	CustomEffect() = default;
	CustomEffect(const CustomEffect&) = default;
	~CustomEffect() = default;

	CustomEffect& operator=(const CustomEffect&) = default;

	$ConstMethod(0x0044d615, GetStateName, GPBString);
	$ConstMethod(0x0044d628, GetEffectSkrit, GPBString);
	$ConstMethod(0x0044d63e, GetEffectType, GPBString);
	$ConstMethod(0x00449f9f, GetSource, const Goid*);
    FEX void SetSource(Goid* value);
	$ConstMethod(0x00449fa3, GetTarget, const Goid*);
    FEX void SetTarget(Goid* value);
	$ConstMethod(0x00449fa7, GetItem, const Goid*);
    FEX void SetItem(Goid* value);
	// Exported as: GetbActive
	$ConstMethod(0x00449fab, GetActive, bool);
    void SetActive(bool flag);
	// Exported as: GetbInWorld
	$ConstMethod(0x00449fc1, GetInWorld, bool);
    void SetInWorld(bool flag);
	// Exported as: GetbMeleeDamage
	$ConstMethod(0x00449fc5, GetMeleeDamage, bool);
    void SetMeleeDamage(bool flag);
	// Exported as: GetbRangedDamage
	$ConstMethod(0x00449fc9, GetRangedDamage, bool);
    void SetRangedDamage(bool flag);
	$ConstMethod(0x00449fcd, GetDamageChance, float);
    FEX void SetDamageChance(float value);
	$ConstMethod(0x00449fd1, GetDamageMin, float);
    FEX void SetDamageMin(float value);
	$ConstMethod(0x00449fd5, GetDamageMax, float);
    FEX void SetDamageMax(float value);
	$ConstMethod(0x00449fd9, GetDamageType, eDamageType);
    FEX void SetDamageType(eDamageType value);
	// Exported as: GetbMeleeDamageOnly
	$ConstMethod(0x00449fdd, GetMeleeDamageOnly, bool);
    void SetMeleeDamageOnly(bool flag);
	// Exported as: GetbRangedDamageOnly
	$ConstMethod(0x00449fe1, GetRangedDamageOnly, bool);
    void SetRangedDamageOnly(bool flag);

	// 0x00
	GPBString stateName;
	// 0x04
	GPBString effectSkrit;
	// 0x08
	GPBString effectType;
	// 0x0c
	Goid* source;
	// 0x10
	Goid* target;
	// 0x14
	Goid* item;
	// 0x18
	bool bActive;
	// 0x19
	bool bInWorld;
	// 0x1a
	bool bMeleeDamage;
	// 0x1b
	bool bRangedDamage;
	// 0x1c
	float damageChance;
	// 0x20
	float damageMin;
	// 0x24
	float damageMax;
	// 0x28
	eDamageType damageType;
	// 0x2c
	bool bMeleeDamageOnly;
	// 0x2d
	bool bRangedDamageOnly;
	// 0x30
	$Padding(0x30, 0x34);

private:
	// Alternative exported versions for consistency.

    FEX void SetbActive(bool flag);
    FEX void SetbInWorld(bool flag);
    FEX void SetbMeleeDamage(bool flag);
    FEX void SetbRangedDamage(bool flag);
    FEX void SetbMeleeDamageOnly(bool flag);
    FEX void SetbRangedDamageOnly(bool flag);
};

// Size confirmed.
STATIC_ASSERT(sizeof(CustomEffect) == 0x34);
STATIC_ASSERT_OFFSETOF(CustomEffect, effectType, 0x08);
STATIC_ASSERT_OFFSETOF(CustomEffect, bActive, 0x18);
STATIC_ASSERT_OFFSETOF(CustomEffect, damageMin, 0x20);
STATIC_ASSERT_OFFSETOF(CustomEffect, bRangedDamageOnly, 0x2d);
