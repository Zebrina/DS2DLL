#include "Alteration.h"

#include "AIQuery.h"
#include "EventHandler.h"
#include "PluginAPI.h"
#include "Rules.h"

eAlteration ALTER_MAX_LIFE_PERCENT;
eAlteration ALTER_MAX_LIFE_PER_LEVEL;
eAlteration ALTER_MAX_MANA_PERCENT;
eAlteration ALTER_MAX_MANA_PER_LEVEL;
eAlteration ALTER_STRENGTH_PER_LEVEL;
eAlteration ALTER_INTELLIGENCE_PER_LEVEL;
eAlteration ALTER_DEXTERITY_PER_LEVEL;
eAlteration ALTER_MELEE_DAMAGE_MIN_PER_LEVEL;
eAlteration ALTER_MELEE_DAMAGE_MAX_PER_LEVEL;
eAlteration ALTER_RANGED_DAMAGE_MIN_PER_LEVEL;
eAlteration ALTER_RANGED_DAMAGE_MAX_PER_LEVEL;
eAlteration ALTER_ARMOR_PER_LEVEL;
eAlteration ALTER_MAGIC_FIND_CHANCE_PER_LEVEL;
eAlteration ALTER_GOLD_DROPPED_PER_LEVEL;

AlterationManager::AlterationManager() :
    tempLookup(new std::set<std::string>()) {
    // Populate lookup and values with base data.
    const char** internalAlterationLookup = (const char**)0x00cedf68;
    for (size_t i = 0; i < BASE_ALTERATION_COUNT; ++i) {
        values.push_back(internalAlterationLookup[i]);
        tempLookup->insert(internalAlterationLookup[i]);
    }
}
AlterationManager::~AlterationManager() {
    delete internalLookup;
}

eAlteration AlterationManager::RegisterAlteration(const char* name) {
    if (finalized) {
        return ALTER_INVALID;
    }

    /*
    if (nextValue == ALTER_INVALD) {
        return ALTER_INVALID;
    }
    */

    if (StrCompareNoCase(name, "ALTER_", 6) != 0) {
        return ALTER_INVALID;
    }

    if (strlen(name) >= MAX_ALTERATION_NAME_LENGTH) {
        return ALTER_INVALID;
    }

    char nameUpper[MAX_ALTERATION_NAME_LENGTH];
    StrCopyMod(nameUpper, MAX_ALTERATION_NAME_LENGTH, name, toupper);

    if (tempLookup->count(nameUpper) != 0) {
        return ALTER_INVALID;
    }

    eAlteration value = (eAlteration)values.size();

    values.push_back(nameUpper);
    tempLookup->insert(nameUpper);

    return value;
}

void AlterationManager::Finalize(const char**& internalLookupOut, uint& countOut) {
    ASSERT(!finalized);

    internalLookup = new const char*[values.size()];
    for (size_t i = 0; i < values.size(); ++i) {
        internalLookup[i] = values[i].c_str();
    }

    internalLookupOut = internalLookup;
    countOut = values.size();

    delete tempLookup;
    tempLookup = nullptr;

    finalized = true;
}

static float OnCalculateMaxLife(Rules::OnCalculateMaxLife next, Go* client) {
    return next(client) * (1.0f + 0.01f * client->GetAlterationSum(ALTER_MAX_LIFE_PERCENT));
}
static float OnCalculateMaxMana(Rules::OnCalculateMaxMana next, Go* client) {
    return next(client) * (1.0f + 0.01f * client->GetAlterationSum(ALTER_MAX_MANA_PERCENT));
}

$OnDllInjection() {
    AlterationManager* manager = AlterationManager::GetSingleton();

    struct InternalAlterationManager {
        $Method(0x006239a3, Initialize, void, const char** names, int arg2, size_t count, eAlteration defaultValue);
        void __thiscall Initialize_Hook(const char* names[], int arg2, size_t count, eAlteration defaultValue) {
            AlterationManager::GetSingleton()->Finalize(names, count);

            SafeWrite32(0x00935438 + 1, count);
            FlushInstructionCache();

            Initialize(names, arg2, count, defaultValue);
        }
    };

    SafeWriteHook(0x00b864c9, &InternalAlterationManager::Initialize_Hook);

    // New alterations.

    ALTER_MAX_LIFE_PERCENT = manager->RegisterAlteration("ALTER_MAX_LIFE_PERCENT");
    ALTER_MAX_LIFE_PER_LEVEL = manager->RegisterAlteration("ALTER_MAX_LIFE_PER_LEVEL");
    ALTER_MAX_MANA_PERCENT = manager->RegisterAlteration("ALTER_MAX_MANA_PERCENT");
    ALTER_MAX_MANA_PER_LEVEL = manager->RegisterAlteration("ALTER_MAX_MANA_PER_LEVEL");
    ALTER_STRENGTH_PER_LEVEL = manager->RegisterAlteration("ALTER_STRENGTH_PER_LEVEL");
    ALTER_INTELLIGENCE_PER_LEVEL = manager->RegisterAlteration("ALTER_INTELLIGENCE_PER_LEVEL");
    ALTER_DEXTERITY_PER_LEVEL = manager->RegisterAlteration("ALTER_DEXTERITY_PER_LEVEL");
    ALTER_MELEE_DAMAGE_MIN_PER_LEVEL = manager->RegisterAlteration("ALTER_MELEE_DAMAGE_MIN_PER_LEVEL");
    ALTER_MELEE_DAMAGE_MAX_PER_LEVEL = manager->RegisterAlteration("ALTER_MELEE_DAMAGE_MAX_PER_LEVEL");
    ALTER_RANGED_DAMAGE_MIN_PER_LEVEL = manager->RegisterAlteration("ALTER_RANGED_DAMAGE_MIN_PER_LEVEL");
    ALTER_RANGED_DAMAGE_MAX_PER_LEVEL = manager->RegisterAlteration("ALTER_RANGED_DAMAGE_MAX_PER_LEVEL");
    ALTER_ARMOR_PER_LEVEL = manager->RegisterAlteration("ALTER_ARMOR_PER_LEVEL");
    ALTER_MAGIC_FIND_CHANCE_PER_LEVEL = manager->RegisterAlteration("ALTER_MAGIC_FIND_CHANCE_PER_LEVEL");
    ALTER_GOLD_DROPPED_PER_LEVEL = manager->RegisterAlteration("ALTER_GOLD_DROPPED_PER_LEVEL");

    PluginAPI api;
    api.HookCalculateMaxLife(OnCalculateMaxLife);
    api.HookCalculateMaxMana(OnCalculateMaxMana);
}
