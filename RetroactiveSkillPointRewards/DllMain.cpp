#include "DS2DLL/Go.h"
#include "DS2DLL/GoActor.h"
#include "DS2DLL/GoBits.h"
#include "DS2DLL/GoidScid.h"
#include "DS2DLL/GoParty.h"
#include "DS2DLL/Player.h"
#include "DS2DLL/PluginAPI.h"
#include "DS2DLL/Rules.h"
#include "DS2DLL/Server.h"
#include "DS2DLL/StaticMethods.h"
#include "DS2DLL/UISkillManager.h"

static void AddMissingSkillPoint(const Goid* newMember, const Goid* hero, const char* worldName, const char* key, int points) {
    char finalKey[64];
    sprintf_s(finalKey, "sp:%s:%s", worldName, key);

    GoBits* bits = GoBits::GetSingleton();

    // Exit if already given.
    if (bits->GetGoBitBool(newMember, finalKey, false)) {
        return;
    }

    // Exit if not given to player.
    if (!bits->GetGoBitBool(hero, finalKey, false)) {
        return;
    }

    bits->SetGoBitBool(newMember, "default", finalKey, true, GOBIT_PERSIST_WITH_CHARACTER);
    newMember->GetGo()->actor->AddBonusSkillPoints(points);
    UISkillManager::GetSingleton()->SOnSkillPointReady(newMember);
}

static void PartyMemberAddSkillPoints(const Goid* partyMember, const Goid* hero) {
    constexpr const char* WORLD_MODE[3] {
        "mercenary",
        "veteran",
        "elite",
    };
    for (uint i = 0; i < 3; ++i) {
        AddMissingSkillPoint(partyMember, hero, WORLD_MODE[i], "a1_p_colony_key", 1);
        AddMissingSkillPoint(partyMember, hero, WORLD_MODE[i], "a1_p_elven_artifact_key", 1);
        AddMissingSkillPoint(partyMember, hero, WORLD_MODE[i], "a1_s_haku_part_2_key", 1);
        AddMissingSkillPoint(partyMember, hero, WORLD_MODE[i], "a2_s_arinth_mad_key", 2);
        AddMissingSkillPoint(partyMember, hero, WORLD_MODE[i], "a2_s_arena_key", 2);
        AddMissingSkillPoint(partyMember, hero, WORLD_MODE[i], "a2_s_servant_haunt_2_key", 1);
        AddMissingSkillPoint(partyMember, hero, WORLD_MODE[i], "a3_p_agallan_trial_key", 1);
    }
}

static void OnPartyMemberAdded(Rules::OnPartyMemberAdded next, const Goid* newMember, const Goid* hero) {
    if (IsServerLocal() && !newMember->GetGo()->pet) {
        PartyMemberAddSkillPoints(newMember, hero);
    }

    next(newMember, hero);
}

static bool OnClientEnterWorld(Rules::OnClientEnterWorld next, const PlayerId* playerId, const Goid* hero) {
    if (IsServerLocal()) {
        Go* go = hero->GetGo();
        if (go->party) {
            go->party->ForEachPartyMember([hero](Go* partyMember) {
                if (!partyMember->pet) {
                    const Goid* goid = partyMember->GetGoid();
                    if (goid != hero) {
                        PartyMemberAddSkillPoints(goid, hero);
                    }
                }
            });
        }
    }

    return next(playerId, hero);
}

extern "C" {
    __declspec(dllexport) bool GetPluginInfo(PluginInfo* info) {
        info->name = "Retroactive Skill Point Rewards";
        info->description = "";
        info->author = "Zebrina";
        info->version = 1;
        info->versionString = "1.0";

        return false;
    }

    __declspec(dllexport) void LoadPlugin(PluginAPI* api) {
        api->HookOnPartyMemberAdded(OnPartyMemberAdded);
        api->HookOnClientEnterWorld(OnClientEnterWorld);
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
    }
	return TRUE;
}
