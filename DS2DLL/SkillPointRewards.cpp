#include "Go.h"
#include "GoActor.h"
#include "GoBits.h"
#include "GoidScid.h"
#include "Player.h"
#include "Rules.h"
#include "Server.h"
#include "StaticMethods.h"
#include "UISkillManager.h"

static void AddMissingSkillPoint(const Goid* newMember, const Goid* hero, const char* worldName, const char* key, int points) {
    char finalKey[64];
    sprintf_s(finalKey, "%s:%s:%s", IsMultiPlayer() ? "mp" : "sp", worldName, key);

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

static void AddMissingSkillPointsAllWorlds(const Goid* newMember, const Goid* hero, const char* key, int points) {
    AddMissingSkillPoint(newMember, hero, "mercenary", key, points);
    AddMissingSkillPoint(newMember, hero, "veteran", key, points);
    AddMissingSkillPoint(newMember, hero, "elite", key, points);
}

static void OnPartyMemberAdded(Rules::OnPartyMemberAdded next, const Goid* newMember, const Goid* hero) {
    if (/*IsServerLocal() && */!newMember->GetGo()->pet) {
        AddMissingSkillPointsAllWorlds(newMember, hero, "a1_p_colony_key", 1);
        AddMissingSkillPointsAllWorlds(newMember, hero, "a1_p_elven_artifact_key", 1);
        AddMissingSkillPointsAllWorlds(newMember, hero, "a1_s_haku_part_2_key", 1);
        AddMissingSkillPointsAllWorlds(newMember, hero, "a2_s_arinth_mad_key", 2);
        AddMissingSkillPointsAllWorlds(newMember, hero, "a2_s_arena_key", 2);
        AddMissingSkillPointsAllWorlds(newMember, hero, "a2_s_servant_haunt_2_key", 1);
        AddMissingSkillPointsAllWorlds(newMember, hero, "a3_p_agallan_trial_key", 1);
    }

    next(newMember, hero);
}

static void OnClientEnterWorld(Rules::OnClientEnterWorld next, const PlayerId* playerId, Goid* hero) {
    next(playerId, hero);
}