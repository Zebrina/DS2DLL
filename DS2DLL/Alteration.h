#pragma once

#include "GPString.h"
#include <Singleton.h>
#include "Enums.h"
#include <set>
#include <vector>

constexpr uint BASE_ALTERATION_COUNT = 181;
constexpr uint MAX_ALTERATION_NAME_LENGTH = 64;

extern eAlteration ALTER_MAX_LIFE_PERCENT;
extern eAlteration ALTER_MAX_LIFE_PER_LEVEL;
extern eAlteration ALTER_MAX_MANA_PERCENT;
extern eAlteration ALTER_MAX_MANA_PER_LEVEL;
extern eAlteration ALTER_STRENGTH_PER_LEVEL;
extern eAlteration ALTER_INTELLIGENCE_PER_LEVEL;
extern eAlteration ALTER_DEXTERITY_PER_LEVEL;
extern eAlteration ALTER_MELEE_DAMAGE_MIN_PER_LEVEL;
extern eAlteration ALTER_MELEE_DAMAGE_MAX_PER_LEVEL;
extern eAlteration ALTER_RANGED_DAMAGE_MIN_PER_LEVEL;
extern eAlteration ALTER_RANGED_DAMAGE_MAX_PER_LEVEL;
extern eAlteration ALTER_ARMOR_PER_LEVEL;
extern eAlteration ALTER_MAGIC_FIND_CHANCE_PER_LEVEL;
extern eAlteration ALTER_GOLD_DROPPED_PER_LEVEL;

class Alterations {
public:
    inline static Alterations* GetSingleton() {
        return (Alterations*)0x00d1bedc;
    }

    $Method(0x00623ade, GetAlterationByName, bool, eAlteration& alterationOut, const char* name);

    // 0x00
    $Padding(0x00, 0x10);
    // 0x10
    bool b10;
};

class AlterationManager : public Singleton<AlterationManager> {
public:
    AlterationManager();
    ~AlterationManager();

    eAlteration RegisterAlteration(const char* name);

    void Finalize(const char**& baseData, uint& count);

private:
    const char** internalLookup = nullptr;
    std::vector<std::string> values;
    std::set<std::string>* tempLookup;
    bool finalized = false;
};
