#include "CustomEffect.h"

FEX void CustomEffect::SetSource(Goid* value) {
    source = value;
}

FEX void CustomEffect::SetTarget(Goid* value) {
    target = value;
}

FEX void CustomEffect::SetItem(Goid* value) {
    item = value;
}

void CustomEffect::SetActive(bool flag) {
    SetbActive(flag);
}

void CustomEffect::SetInWorld(bool flag) {
    bInWorld = flag;
}

void CustomEffect::SetMeleeDamage(bool flag) {
    SetbMeleeDamage(flag);
}

void CustomEffect::SetRangedDamage(bool flag) {
    SetbRangedDamage(flag);
}

FEX void CustomEffect::SetDamageChance(float value) {
    this->damageChance = value;
}

FEX void CustomEffect::SetDamageMin(float value) {
    this->damageMin = value;
}

FEX void CustomEffect::SetDamageMax(float value) {
    this->damageMax = value;
}

FEX void CustomEffect::SetDamageType(eDamageType value) {
    this->damageType = value;
}

void CustomEffect::SetMeleeDamageOnly(bool flag) {
    SetbMeleeDamageOnly(flag);
}

void CustomEffect::SetRangedDamageOnly(bool flag) {
    SetbRangedDamageOnly(flag);
}

FEX void CustomEffect::SetbActive(bool flag) {
    bActive = flag;
}
FEX void CustomEffect::SetbInWorld(bool flag) {
    bInWorld = flag;
}
FEX void CustomEffect::SetbMeleeDamage(bool flag) {
    bMeleeDamage = flag;
}
FEX void CustomEffect::SetbRangedDamage(bool flag) {
    bRangedDamage = flag;
}
FEX void CustomEffect::SetbMeleeDamageOnly(bool flag) {
    bMeleeDamageOnly = flag;
}
FEX void CustomEffect::SetbRangedDamageOnly(bool flag) {
    bRangedDamageOnly = flag;
}
