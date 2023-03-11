#pragma once

#include "Enums.h"
#include "GoidScid.h"
#include "GPString.h"

class Enchantment {
public:
    enum CustomDamageFlag {
        CUSTOM_DAMAGE_MELEE = EnumFlag(2),
        CUSTOM_DAMAGE_RANGED = EnumFlag(3),
        CUSTOM_DAMAGE_LIGHTNING = EnumFlag(4),
        CUSTOM_DAMAGE_ICE = EnumFlag(5),
        CUSTOM_DAMAGE_FIRE = EnumFlag(6),
        CUSTOM_DAMAGE_DEATH = EnumFlag(7),
    };

    // 0x00
    $Padding(0x00, 0x04);
    // 0x04
    eAlteration alteration;
    // 0x08
    $Padding(0x08, 0x0c);
    // 0x0c
    GPBString valueString; // ??
    // 0x10
    GPBString maxValueString; // ??
    // 0x14
    GPBString durationString; // ??
    // 0x18
    GPBString frequencyString; // ??
    // 0x1c
    GPBString transferEfficiencyString; // ??
    // 0x20
    GPBString initialDelayString; // ??
    // 0x24
    float value; // ??
    // 0x28
    float minValueCeiling;
    // 0x2c
    float maxValue; // ??
    // 0x30
    float maxValueCeiling;
    // 0x34
    bool bMultiplyValue;
    // 0x38
    float duration;
    // 0x3c
    float frequency;
    // 0x40
    float transferEfficiency;
    // 0x44
    bool bPartyActive;
    bool bInnateEnchantment;
    // 0x48
    float initialDelay;
    // 0x4c
    GPBString description;
    // 0x4c
    $Padding(0x4c, 0x50);
    // 0x50
    bool bIsEnchantment;
    bool bIsPermanent;
    bool bIsTransmissible;
    bool bIsSingleInstance;
    // 0x54
    bool bIsValueLimited;
    bool bIsTargetTransfer;
    bool bIsSourceTransfer;
    bool bIsOffensiveTransfer;
    // 0x58
    bool bIsUITimerVisible;
    bool bAbortOnMin;
    bool bAbortOnMax;
    bool b58;
    // 0x5c
    GPBString dependName;
    // 0x60
    GPBString dependObject;
    // 0x64
    GPBString monsterType;
    // 0x68
    GPBString customEffect;
    // 0x6c
    CustomDamageFlag customDamageFlags;
    // 0x70
    GPBString customEffectSkrit;
    // 0x74
    $Padding(0x74, 0x7c);
    // 0x7c
    bool bCustomDamageMeleeOnly;
    bool bCustomDamageRangedOnly;
    // 0x80
    $Padding(0x80, 0x88);
    // 0x88
    GPBString suite;
    // 0x8c
    $Padding(0x8c, 0x98);
    // 0x98
    Goid* goid98;
    // 0x9c
    Goid* goid9C;
    // 0xa0
    Goid* goidA0;
};

STATIC_ASSERT(sizeof(Enchantment) == 0xa8);
