#pragma once

enum DOCKBAR_TYPE {
	dockbar_screen = 0,
	dockbar_screen_x = 1,
	dockbar_screen_y = 2,
	dockbar_screen_x_switch_y = 3,
	dockbar_window = 4,
} typedef eDockbarType;

enum eAction {

};

enum eActionOrigin {

};

enum eActive {

};

enum eActor {

};

enum eActorAlignment {

};

enum eAggro {

};

enum eAggroType {
	at_none = 0,
	at_damage_melee = 1,
	at_damage_ranged = 2,
	at_damage_combat_magic = 3,
	at_damage_nature_magic = 4,
	at_enemy_cast_heal = 5,
	at_enemy_looted_item = 6,
	at_enemy_use_magic = 7,
	at_enemy_use_power = 8,
	at_enemy_use_potion = 9,
	at_enemy_killed_friend = 10,
	at_enemy_damaged_leader = 11,
	at_enemy_taunt = 12,
	at_race_human_race = 13,
	at_race_half_giant_race = 14,
	at_race_elf_race = 15,
	at_race_dryad_race = 16,
	at_race_pet_race = 17,
	at_gender_male = 18,
	at_gender_female = 19,
};

enum eAlignment {
	align_default = 0,
	align_up_left = 1,
	align_up_right = 2,
	align_down_left = 3,
	align_down_right = 4,
};

enum eAlteration {
	ALTER_INVALID = 0,
	ALTER_GENERIC = 1,
	ALTER_MAX_LIFE = 2,
	ALTER_LIFE = 3,
	ALTER_LIFE_TIMED_RESTORE = 4,
	ALTER_LIFE_RECOVERY_UNIT = 5,
	ALTER_LIFE_RECOVERY_PERIOD = 6,
	ALTER_MAX_MANA = 7,
	ALTER_MANA = 8,
	ALTER_MANA_TIMED_RESTORE = 9,
	ALTER_MANA_RECOVERY_UNIT = 10,
	ALTER_MANA_RECOVERY_PERIOD = 11,
	ALTER_MANA_COST = 12,
	ALTER_MELEE_SPEED = 13,
	ALTER_RANGED_SPEED = 14,
	ALTER_CAST_SPEED = 15,
	ALTER_MOVE_SPEED = 16,
	ALTER_STRENGTH = 17,
	ALTER_INTELLIGENCE = 18,
	ALTER_DEXTERITY = 19,
	ALTER_MELEE = 20,
	ALTER_RANGED = 21,
	ALTER_NATURE_MAGIC = 22,
	ALTER_COMBAT_MAGIC = 23,
	ALTER_ALL_PASSIVE_SKILLS = 24,
	ALTER_MELEE_PASSIVE_SKILLS = 25,
	ALTER_RANGED_PASSIVE_SKILLS = 26,
	ALTER_NATURE_MAGIC_PASSIVE_SKILLS = 27,
	ALTER_COMBAT_MAGIC_PASSIVE_SKILLS = 28,
	ALTER_SKILL_SUITE = 29,
	ALTER_MONSTER_LEVEL = 30,
	ALTER_STRENGTH_TO_INTELLIGENCE = 31,
	ALTER_STRENGTH_TO_DEXTERITY = 32,
	ALTER_INTELLIGENCE_TO_DEXTERITY = 33,
	ALTER_MELEE_TO_RANGED = 34,
	ALTER_MELEE_TO_NATURE_MAGIC = 35,
	ALTER_MELEE_TO_COMBAT_MAGIC = 36,
	ALTER_RANGED_TO_NATURE_MAGIC = 37,
	ALTER_RANGED_TO_COMBAT_MAGIC = 38,
	ALTER_NATURE_MAGIC_TO_COMBAT_MAGIC = 39,
	ALTER_CAN_CAST = 40,
	ALTER_MELEE_RELOAD_DELAY = 41,
	ALTER_RANGED_RELOAD_DELAY = 42,
	ALTER_CAST_RELOAD_DELAY = 43,
	ALTER_SACRIFICE = 44,
	ALTER_HEALING_BONUS_PERCENT = 45,
	ALTER_SUMMON_DAMAGE_BONUS_PERCENT = 46,
	ALTER_SUMMON_ATTACK_SPEED_BONUS_PERCENT = 47,
	ALTER_MARK_RENDING = 48,
	ALTER_MARK_AGONY = 49,
	ALTER_MARK_HARVEST = 50,
	ALTER_MARK_FIRE = 51,
	ALTER_ATTACK_CHANCE_TO_CAST_TEMPLATE = 52,
	ALTER_DEFEND_CHANCE_TO_CAST_TEMPLATE = 53,
	ALTER_MELEE_DAMAGE_MIN = 54,
	ALTER_MELEE_DAMAGE_MAX = 55,
	ALTER_MELEE_DAMAGE_PERCENT = 56,
	ALTER_MELEE_DAMAGE_SOURCE_PERCENT = 57,
	ALTER_RANGED_DAMAGE_MIN = 58,
	ALTER_RANGED_DAMAGE_MAX = 59,
	ALTER_RANGED_DAMAGE_PERCENT = 60,
	ALTER_RANGED_DAMAGE_SOURCE_PERCENT = 61,
	ALTER_CMAGIC_DAMAGE_MIN = 62,
	ALTER_CMAGIC_DAMAGE_MAX = 63,
	ALTER_CMAGIC_DAMAGE_PERCENT = 64,
	ALTER_CMAGIC_DAMAGE_SOURCE_PERCENT = 65,
	ALTER_NMAGIC_DAMAGE_MIN = 66,
	ALTER_NMAGIC_DAMAGE_MAX = 67,
	ALTER_NMAGIC_DAMAGE_PERCENT = 68,
	ALTER_NMAGIC_DAMAGE_SOURCE_PERCENT = 69,
	ALTER_ICE_DAMAGE_PERCENT = 70,
	ALTER_FIRE_DAMAGE_PERCENT = 71,
	ALTER_LIGHTNING_DAMAGE_PERCENT = 72,
	ALTER_DEATH_DAMAGE_PERCENT = 73,
	ALTER_CRITICAL_DAMAGE_BONUS_PERCENT = 74,
	ALTER_CRITICAL_DAMAGE_MELEE_BONUS_PERCENT = 75,
	ALTER_CRITICAL_CHANCE_MELEE_BONUS_PERCENT = 76,
	ALTER_CRITICAL_DAMAGE_RANGED_BONUS_PERCENT = 77,
	ALTER_CRITICAL_CHANCE_RANGED_BONUS_PERCENT = 78,
	ALTER_CUSTOM_DAMAGE = 79,
	ALTER_CUSTOM_DAMAGE_MELEE = 80,
	ALTER_CUSTOM_DAMAGE_RANGED = 81,
	ALTER_CUSTOM_DAMAGE_LIGHTNING = 82,
	ALTER_CUSTOM_DAMAGE_ICE = 83,
	ALTER_CUSTOM_DAMAGE_FIRE = 84,
	ALTER_CUSTOM_DAMAGE_DEATH = 85,
	ALTER_CUSTOM_DAMAGE_CHANCE = 86,
	ALTER_CUSTOM_DAMAGE_CHANCE_MELEE = 87,
	ALTER_CUSTOM_DAMAGE_CHANCE_RANGED = 88,
	ALTER_POWER_DAMAGE_PERCENT = 89,
	ALTER_MAGIC_POWER_DAMAGE_PERCENT = 90,
	ALTER_LIFE_STEAL = 91,
	ALTER_LIFE_STEAL_MELEE = 92,
	ALTER_LIFE_STEAL_RANGED = 93,
	ALTER_MANA_STEAL = 94,
	ALTER_MANA_STEAL_MELEE = 95,
	ALTER_MANA_STEAL_RANGED = 96,
	ALTER_LIFE_BONUS = 97,
	ALTER_MANA_BONUS = 98,
	ALTER_PIERCING_DAMAGE_CHANCE = 99,
	ALTER_PIERCING_DAMAGE_CHANCE_MELEE = 100,
	ALTER_PIERCING_DAMAGE_CHANCE_RANGED = 101,
	ALTER_PIERCING_DAMAGE_CHANCE_AMOUNT = 102,
	ALTER_PIERCING_DAMAGE_CHANCE_AMOUNT_MELEE = 103,
	ALTER_PIERCING_DAMAGE_CHANCE_AMOUNT_RANGED = 104,
	ALTER_PIERCING_DAMAGE_RANGE = 105,
	ALTER_PIERCING_DAMAGE_RANGE_MELEE = 106,
	ALTER_PIERCING_DAMAGE_RANGE_RANGED = 107,
	ALTER_RANGED_ATTACK_MANA_DAMAGE = 108,
	ALTER_RANGED_ATTACK_MANA_DRAIN = 109,
	ALTER_MELEE_ATTACK_MANA_DAMAGE = 110,
	ALTER_MELEE_ATTACK_MANA_DRAIN = 111,
	ALTER_DAMAGE_BONUS_TO_UNDEAD = 112,
	ALTER_DAMAGE_BONUS_TO_TYPE = 113,
	ALTER_CHANCE_TO_HIT = 114,
	ALTER_CHANCE_TO_HIT_MELEE = 115,
	ALTER_CHANCE_TO_HIT_RANGED = 116,
	ALTER_CHANCE_FOR_AIMING_ERROR = 117,
	ALTER_AIMING_ERROR = 118,
	ALTER_EXPERIENCE_GAINED = 119,
	ALTER_MELEE_EXP_PERCENT = 120,
	ALTER_RANGED_EXP_PERCENT = 121,
	ALTER_CMAGIC_EXP_PERCENT = 122,
	ALTER_NMAGIC_EXP_PERCENT = 123,
	ALTER_ARMOR = 124,
	ALTER_ARMOR_PERCENT = 125,
	ALTER_ARMOR_SOURCE_PERCENT = 126,
	ALTER_INVINCIBILITY = 127,
	ALTER_BLOCK_DAMAGE = 128,
	ALTER_BLOCK_MELEE_DAMAGE = 129,
	ALTER_BLOCK_RANGED_DAMAGE = 130,
	ALTER_BLOCK_COMBAT_MAGIC_DAMAGE = 131,
	ALTER_BLOCK_NATURE_MAGIC_DAMAGE = 132,
	ALTER_BLOCK_PIERCING_DAMAGE = 133,
	ALTER_BLOCK_CUSTOM_DAMAGE = 134,
	ALTER_BLOCK_PART_DAMAGE = 135,
	ALTER_BLOCK_PART_MELEE_DAMAGE = 136,
	ALTER_BLOCK_PART_RANGED_DAMAGE = 137,
	ALTER_BLOCK_PART_COMBAT_MAGIC_DAMAGE = 138,
	ALTER_BLOCK_PART_NATURE_MAGIC_DAMAGE = 139,
	ALTER_BLOCK_PART_PIERCING_DAMAGE = 140,
	ALTER_BLOCK_PART_CUSTOM_DAMAGE = 141,
	ALTER_CHANCE_TO_BLOCK_MELEE_DAMAGE = 142,
	ALTER_CHANCE_TO_BLOCK_RANGED_DAMAGE = 143,
	ALTER_CHANCE_TO_BLOCK_CMAGIC_DAMAGE = 144,
	ALTER_CHANCE_TO_BLOCK_NMAGIC_DAMAGE = 145,
	ALTER_CHANCE_TO_BLOCK_MELEE_DAMAGE_AMOUNT = 146,
	ALTER_CHANCE_TO_BLOCK_RANGED_DAMAGE_AMOUNT = 147,
	ALTER_CHANCE_TO_BLOCK_CMAGIC_DAMAGE_AMOUNT = 148,
	ALTER_CHANCE_TO_BLOCK_NMAGIC_DAMAGE_AMOUNT = 149,
	ALTER_CHANCE_TO_DODGE_HIT = 150,
	ALTER_CHANCE_TO_DODGE_HIT_MELEE = 151,
	ALTER_CHANCE_TO_DODGE_HIT_RANGED = 152,
	ALTER_REFLECT_DAMAGE = 153,
	ALTER_REFLECT_FIXED_DAMAGE = 154,
	ALTER_REFLECT_DAMAGE_CHANCE = 155,
	ALTER_REFLECT_PIERCING_DAMAGE = 156,
	ALTER_REFLECT_PIERCING_DAMAGE_CHANCE = 157,
	ALTER_REFLECT_DAMAGE_TO_SELF = 158,
	ALTER_MANA_SHIELD = 159,
	ALTER_DAMAGE_TO_MANA_PERCENT = 160,
	ALTER_ATTACK_CHANCE_TO_PENETRATE = 161,
	ALTER_GOLD_VALUE = 162,
	ALTER_REQUIREMENTS = 163,
	ALTER_MAGIC_FIND_CHANCE = 164,
	ALTER_POWER_RELOAD = 165,
	ALTER_GOLD_DROPPED = 166,
	ALTER_FREEZE_CHANCE = 167,
	ALTER_MELEE_RESISTANCE = 168,
	ALTER_RANGED_RESISTANCE = 169,
	ALTER_LIGHTNING_RESISTANCE = 170,
	ALTER_ICE_RESISTANCE = 171,
	ALTER_FIRE_RESISTANCE = 172,
	ALTER_DEATH_RESISTANCE = 173,
	ALTER_NON_ELEMENTAL_RESISTANCE = 174,
	ALTER_PHYSICAL_RESISTANCE = 175,
	ALTER_ELEMENTAL_RESISTANCE = 176,
	ALTER_MAGICAL_RESISTANCE = 177,
	ALTER_STATE_RESISTANCE = 178,
	ALTER_DEBUFF_RESISTANCE = 179,
	ALTER_BUFF_RESISTANCE = 180,
};

enum eAnim {

};

// Unverified!
enum eAnimChore {
	chore_invalid = 0,
	chore_none = 1,
	chore_error = 2,
	chore_default = 3,
	chore_walk = 4,
	chore_die = 5,
	chore_defend = 6,
	chore_attack = 7,
	chore_magic = 8,
	chore_fidget = 9,
	chore_rotate = 10,
	chore_open = 11,
	chore_close = 12,
	chore_misc = 13,
	chore_railmove = 14,
};

enum eAnimEvent {

};

// Unverified!
enum eAnimStance {
	as_default = 0,
	as_plain = 1,
	as_single_melee = 2,
	as_single_melee_and_shield = 3,
	as_two_handed_melee = 4,
	as_two_handed_sword = 5,
	as_staff = 6,
	as_bow_and_arrow = 7,
	as_minigun = 8,
	as_shield_only = 9,
	as_dual_wield = 10,
	as_throwable = 11,
};

enum eAttack {

};

enum eAttackClass {

};

enum eAxis {

};

enum eAxisHint {

};

enum eCamera {

};

enum eCameraInterp {

};

enum eCameraOrder {

};

enum eCombat {

};

enum eCreate {

};

enum eDamage {

};

enum eDamageType {

};

enum eDebug {

};

enum eDebugHudOptions {

};

enum EDGE_TYPE {
	edge_top = 0,
	edge_bottom = 1,
	edge_left = 2,
	edge_right = 3,
	edge_half_circle_top = 4,
	edge_half_circle_bottom = 5,
} typedef eEdgeType;

enum eDifficulty {
	difficulty_easy = 0,
	difficulty_medium = 1,
	difficulty_hard = 2,
};

enum eDrop {

};

enum eEntry {

};

enum eEntryType {
	none = 0,
	quest_item = 1,
	book = 2,
	map = 3,
	scroll = 4,
	chant = 5,
};
;
enum eEquip {

};

enum eEquipSlot {

};

enum eFade {

};

enum eFadeType {
	ft_none = 0,
	ft_alpha = 1,
	ft_black = 2,
	ft_in = 3,
	ft_instant = 4,
	ft_in_instant = 5,
};
;
enum eFocus {

};

enum eGame {

};

enum eGamespy {

};

enum eGamespyEvent {
	gse_error = 0,
	gse_progress_update = 1,
	gse_profile_signin_success = 2,
	gse_profile_signin_failed = 3,
	gse_gameroom_enter = 4,
	gse_gameroom_leave = 5,
	gse_buddylist_profile = 6,
	gse_buddylist_profile_info = 7,
	gse_buddylist_status_update = 8,
	gse_buddylist_buddy_message = 9,
	gse_buddylist_game_invite = 10,
	gse_buddylist_buddy_request = 11,
	gse_buddylist_search_result = 12,
	gse_account_new_account = 13,
	gse_account_new_profile = 14,
	gse_account_nickname_list = 15,
	gse_account_profile_connect = 16,
	gse_account_profile_disconnect = 17,
	gse_account_peer_connect = 18,
	gse_account_peer_disconnect = 19,
	gse_account_cdkey_validation = 20,
	gse_account_nickname_error = 21,
	gse_stagingroom_game_started = 22,
	gse_stagingroom_player_ready = 23,
	gse_stagingroom_player_change_nickname = 24,
	gse_stagingroom_player_joined = 25,
	gse_stagingroom_player_left = 26,
	gse_stagingroom_player_info = 27,
	gse_stagingroom_player_kicked = 28,
	gse_stagingroom_player_enum = 29,
	gse_stagingroom_player_flags_changed = 30,
	gse_stagingroom_player_option_changed = 31,
	gse_stagingroom_room_created = 32,
	gse_stagingroom_room_joined = 33,
	gse_stagingroom_room_message = 34,
	gse_stagingroom_room_mode_changed = 35,
	gse_stagingroom_room_key_changed = 36,
	gse_stagingroom_room_name_changed = 37,
	gse_stagingroom_room_private_message = 38,
	gse_listgame_start = 39,
	gse_listgame_end = 40,
	gse_gamelist_game_add = 41,
	gse_gamelist_game_remove = 42,
	gse_gamelist_game_update = 43,
	gse_gamelist_player_change_nickname = 44,
	gse_gamelist_player_joined = 45,
	gse_gamelist_player_left = 46,
	gse_gamelist_player_info = 47,
	gse_gamelist_player_kicked = 48,
	gse_gamelist_player_enum = 49,
	gse_gamelist_player_flags_changed = 50,
	gse_gamelist_player_key_changed = 51,
	gse_gamelist_player_private_message = 52,
	gse_gamelist_room_created = 53,
	gse_gamelist_room_joined = 54,
	gse_gamelist_room_message = 55,
	gse_gamelist_room_mode_changed = 56,
	gse_gamelist_room_key_changed = 57,
	gse_gamelist_room_name_changed = 58,
	gse_gamelist_room_private_message = 59,
	gse_chat_list_rooms = 60,
	gse_chat_key_changed = 61,
	gse_chat_user_list = 62,
	gse_chat_user_mode_changed = 63,
	gse_chat_user_changed_nick = 64,
	gse_chat_user_parted = 65,
	gse_chat_user_joined = 66,
	gse_chat_user_kicked = 67,
	gse_chat_channel_mode_changed = 68,
	gse_chat_channel_topic_changed = 69,
	gse_chat_channel_message = 70,
	gse_chat_channel_entered = 71,
	gse_grouproom_new_room = 72,
	gse_peer_player_message = 73,
	gse_peer_player_private_message = 74,
	gse_automatch_status = 75,
	gse_automatch_result = 76,
	gse_persist_upload_complete = 77,
	gse_persist_download_complete = 78,
	gse_persist_partylist_complete = 79,
	gse_persist_authentication = 80,
	gse_backeend_validate_result = 81,
	gse_patch_check_result = 82,
	gse_patch_download_progress = 83,
	gse_patch_download_complete = 84,
};
;
enum eGo {

};

enum eGoBitType {
	gobit_default = 0,
	gobit_persist_with_character = 1,
};
;
enum eInventory {

};

enum eInventoryLocation {
	il_hand_1 = 0,
	il_hand_2 = 1,
	il_spell_1 = 2,
	il_spell_2 = 3,
	il_spell_3 = 4,
	il_spell_4 = 5,
	il_spell_5 = 6,
	il_spell_6 = 7,
	il_spell_7 = 8,
	il_spell_8 = 9,
	il_spell_9 = 10,
	il_spell_10 = 11,
	il_invalid = 12,
	il_all = 13,
	il_all_active = 14,
	il_all_spells = 15,
	il_main = 16,
	il_stasis = 17,
};
;
enum eItem {

};

enum eJob {

};

enum eJobAbstractType {
	jat_invalid = 0,
	jat_none = 1,
	jat_attack_object_melee = 2,
	jat_attack_object_ranged = 3,
	jat_attack_position_melee = 4,
	jat_attack_position_ranged = 5,
	jat_brain = 6,
	jat_cast = 7,
	jat_cast_position = 8,
	jat_cast_power = 9,
	jat_cast_power_position = 10,
	jat_charge_object = 11,
	jat_collect_loot = 12,
	jat_die = 13,
	jat_do_se_command = 14,
	jat_drink = 15,
	jat_drop = 16,
	jat_equip = 17,
	jat_face = 18,
	jat_fidget = 19,
	jat_flee_from_object = 20,
	jat_follow = 21,
	jat_gain_consciousness = 22,
	jat_get = 23,
	jat_give = 24,
	jat_guard = 25,
	jat_hide = 26,
	jat_jump = 27,
	jat_knockback = 28,
	jat_listen = 29,
	jat_move = 30,
	jat_patrol = 31,
	jat_slide = 32,
	jat_startup = 33,
	jat_startup_reveal = 34,
	jat_stop = 35,
	jat_talk = 36,
	jat_teleport = 37,
	jat_unconscious = 38,
	jat_use = 39,
	// Skrit defined.
	jat_pause = 40,
	jat_play_anim = 41,
	jat_engage = 42,
	jat_play_battle_yell = 43,
	jat_play_cautious_attack = 44,
	jat_play_cautious_ranged_attack = 45,
	jat_play_ranged_flee = 46,
	jat_play_leader_guard = 47,
	jat_play_mob_attack = 48,
	jat_play_charge = 49,
	jat_play_hide_flank = 50,
	jat_play_thief = 51,
	jat_play_zaramoth = 52,
	jat_play_suicide_bomber = 53,
	jat_play_flame_effigy = 54,
	jat_play_thrall_champion = 55,
	jat_party_follow = 56,
};

enum eJobAttribute {
	ja_none = 0,
	ja_passive = 1,
	ja_timid = 2,
	ja_aggressive = 3,
	ja_suicidal = 4,
	ja_undead = 5,
	ja_insect = 6,
	ja_animal = 7,
	ja_primitive = 8,
	ja_civilized = 9,
	ja_advanced = 10,
	ja_overwhelmed = 11,
	ja_smaller = 12,
	ja_same = 13,
	ja_larger = 14,
	ja_overwhelming = 15,
	ja_ranged = 16,
	ja_melee = 17,
	ja_cautious = 18,
	ja_charge = 19,
	ja_flanks = 20,
	ja_leader = 21,
	ja_mob_attack = 22,
	ja_ranged_flee = 23,
	ja_thief = 24,
	ja_suicide_bomber = 25,
	ja_zaramoth = 26,
	ja_flame_effigy = 27,
	ja_thrall_champion = 28,
};

enum eJobResult {
	jr_invalid = 0,
	jr_unknown = 1,
	jr_ok = 2,
	jr_failed = 3,
	jr_failed_no_path = 4,
	jr_failed_no_path_try_again = 5,
	jr_failed_bad_params = 6,
	jr_failed_left_frustum = 7,
};
;
enum eLife {

};

enum eLifeState {
	ls_ignore = 0,
	ls_alive_conscious = 1,
	ls_alive_unconscious = 2,
	ls_dead_normal = 3,
	ls_decay_fresh = 4,
	ls_decay_bones = 5,
	ls_decay_dust = 6,
	ls_gone = 7,
};

enum eLoot {

};

enum eMagic {

};

enum eMini {

};

enum eMood {

};

enum eMoodRoomType {
	rt_generic = 0,
	rt_paddedcell = 1,
	rt_room = 2,
	rt_bathroom = 3,
	rt_livingroom = 4,
	rt_stoneroom = 5,
	rt_auditorium = 6,
	rt_concerthall = 7,
	rt_cave = 8,
	rt_arena = 9,
	rt_hangar = 10,
	rt_carpetedhallway = 11,
	rt_hallway = 12,
	rt_stonecorridor = 13,
	rt_alley = 14,
	rt_forest = 15,
	rt_city = 16,
	rt_mountains = 17,
	rt_quarry = 18,
	rt_plain = 19,
	rt_parkinglot = 20,
	rt_sewerpipe = 21,
	rt_underwater = 22,
	rt_drugged = 23,
	rt_dizzy = 24,
	rt_psychotic = 25,
};

enum eMovement {

};

enum ePClass {

};

enum ePContentType {
	pt_armor = 0,
	pt_weapon = 1,
	pt_amulet = 2,
	pt_ring = 3,
	pt_spell = 4,
	pt_scroll = 5,
	pt_potion = 6,
	pt_spellbook = 7,
	pt_reagent = 8,
	pt_recipe = 9,
	pt_body = 10,
	pt_helm = 11,
	pt_gloves = 12,
	pt_boots = 13,
	pt_shield = 14,
	pt_melee = 15,
	pt_ranged = 16,
	pt_potion_health = 17,
	pt_potion_mana = 18,
	pt_cmagic = 19,
	pt_nmagic = 20,
	pt_invalid = 21,
};

enum ePhysics {

};

enum ePixel {

};

enum ePixelBlend {
	pb_none = 0,
	pb_zero = 1,
	pb_one = 2,
	pb_srccolor = 3,
	pb_invsrccolor = 4,
	pb_srcalpha = 5,
	pb_invsrcalpha = 6,
	pb_destalpha = 7,
	pb_invdestalpha = 8,
	pb_destcolor = 9,
	pb_invdestcolor = 10,
	pb_srcalphasat = 11,
	pb_bothsrcalpha = 12,
	pb_bothinvsrcalpha = 13,
};

enum ePlayer {

};

enum ePos {

};

enum ePosHint {
	ph_none = 0,
	ph_linear = 1,
	ph_ease_between = 2,
	ph_ease_out = 3,
	ph_ease_in = 4,
};

enum eQPlace {

};

enum eQuery {

};

enum eQuest {

};

enum eQuestState {
	qstate_none = 0,
	qstate_deactivated = 1,
	qstate_activated = 2,
	qstate_viewed = 3,
	qstate_completed = 4,
};

enum eRibbon {

};

enum eRibbonAlign {
	ra_none = 0,
	ra_camera_xaxis = 1,
	ra_camera_yaxis = 2,
	ra_camera_zaxis = 3,
	ra_totarget_xaxis = 4,
	ra_totarget_yaxis = 5,
};

enum eRoom {

};

enum eStanding {

};

enum eStandingOrders {
	SO_None = 0,
	SO_Aggressive = 1,
	SO_Guard = 2,
	SO_Mirror = 3,
	SO_Wait = 4,
};

enum eTarget {

};

enum eTargetTypeFlags {

};

enum eTexture {

};

enum eTextureOp {
	to_none = 0,
	to_disable = 1,
	to_arg1 = 2,
	to_arg2 = 3,
	to_modulate = 4,
	to_modulate2x = 5,
	to_modulate4x = 6,
	to_add = 7,
	to_addsigned = 8,
	to_addsigned2x = 9,
	to_subtract = 10,
	to_addsmooth = 11,
	to_blenddiffusealpha = 12,
	to_blendtexturealpha = 13,
	to_blendfactoralpha = 14,
	to_blendtexturealphapm = 15,
	to_blendcurrentalpha = 16,
	to_premodulate = 17,
	to_modulatealpha_addcolor = 18,
	to_modulatecolor_addalpha = 19,
	to_modulateinvalpha_addcolor = 20,
	to_modulateinvcolor_addalpha = 21,
	to_bumpenvmap = 22,
	to_bumpenvmapluminance = 23,
	to_dotproduct3 = 24,
	to_multiplyadd = 25,
};

enum eTuning {

};

enum eTuningGridDoor {
	tgd_top = 0,
	tgd_bottom = 1,
	tgd_left = 2,
	tgd_right = 3,
	tgd_forward = 4,
	tgd_backward = 5,
};

enum eUIMessage {
	msg_none = 0,
	msg_oninvisible = 1,
	msg_onvisible = 2,
	msg_onlbuttondown = 3,
	msg_onlbuttonup = 4,
	msg_onrbuttondown = 5,
	msg_onrbuttonup = 6,
	msg_onmbuttondown = 7,
	msg_onmbuttonup = 8,
	msg_onbuttonpress = 9,
	msg_onrbuttonpress = 10,
	msg_onrollover = 11,
	msg_onrolloff = 12,
	msg_oncheck = 13,
	msg_onuncheck = 14,
	msg_onunchecked = 15,
	msg_onforcecheck = 16,
	msg_onforceuncheck = 17,
	msg_oncheckmidstate = 18,
	msg_onlbuttondownchecked = 19,
	msg_onlbuttonupchecked = 20,
	msg_onrolloverchecked = 21,
	msg_onrolloffchecked = 22,
	msg_onlbuttondownmidstate = 23,
	msg_onlbuttonupmidstate = 24,
	msg_onrollovermidstate = 25,
	msg_onrolloffmidstate = 26,
	msg_ongloballbuttonup = 27,
	msg_ongloballbuttonupoff = 28,
	msg_ongloballbuttondown = 29,
	msg_onglobalrbuttonup = 30,
	msg_onglobalrbuttonupoff = 31,
	msg_onglobalrbuttondown = 32,
	msg_onglobalmbuttonup = 33,
	msg_onglobalmbuttondown = 34,
	msg_onkeydown = 35,
	msg_onkeyup = 36,
	msg_onkeypress = 37,
	msg_char = 38,
	msg_onitemactivate = 39,
	msg_onitemdeactivate = 40,
	msg_deactivate_switch = 41,
	msg_ondeactivateitems = 42,
	msg_onitemplace = 43,
	msg_onstatechange = 44,
	msg_onactivatemenu = 45,
	msg_onmenuselect = 46,
	msg_calculateslidersize = 47,
	msg_increment_slider = 48,
	msg_decrement_slider = 49,
	msg_onldoubleclick = 50,
	msg_onrdoubleclick = 51,
	msg_onmdoubleclick = 52,
	msg_globalldoubleclick = 53,
	msg_globalrdoubleclick = 54,
	msg_globalmdoubleclick = 55,
	msg_onwheelup = 56,
	msg_onwheeldown = 57,
	msg_oneditselect = 58,
	msg_oneditescape = 59,
	msg_onedithasfocus = 60,
	msg_oneditlostfocus = 61,
	msg_oneditdelete = 62,
	msg_onedittab = 63,
	msg_oneditarrowup = 64,
	msg_oneditarrowdown = 65,
	msg_oneditpasteerror = 66,
	msg_onsliderlostfocus = 67,
	msg_oncreated = 68,
	msg_ondestroyed = 69,
	msg_onshow = 70,
	msg_onhide = 71,
	msg_onfadeout = 72,
	msg_onstartanim = 73,
	msg_onanimcomplete = 74,
	msg_activatecursor = 75,
	msg_ondrag = 76,
	msg_onremoveitem = 77,
	msg_onexit = 78,
	msg_oncomboexpand = 79,
	msg_onexpended = 80,
	msg_oncollapsed = 81,
	msg_onselect = 82,
	msg_onkeyselect = 83,
	msg_oncontext = 84,
	msg_onenter = 85,
	msg_onescape = 86,
	msg_onchange = 87,
	msg_onclickdelay = 88,
	msg_onresetclickdelay = 89,
	msg_disable = 90,
	msg_enable = 91,
	msg_onelementrollover = 92,
	msg_onelementrolloff = 93,
	msg_onlistenermove = 94,
	msg_oninsertitem = 95,
	msg_onbegindrag = 96,
	msg_onenddrag = 97,
	msg_onswitchsuccess = 98,
};

enum eUIWindow {

};

enum eUsage {

};

enum eVoice {

};

enum eVoiceSound {
	vs_override, //??
};

enum eWeapon {

};

enum eWorld {

};

enum eWorldEvent {
	// General custom messages.
	we_user_damage_relay = 0,
	we_user_object_relay = 1,
	we_user_object_activate = 2,
	we_user_object_deactivate = 3,
	// Tree boss custom messages.
	we_user_query_tree_shield_hp = 4,
	we_user_report_tree_shield_hp = 5,
	we_user_monster_landed = 6,
	we_user_tree_shoot = 7,
	we_user_tree_stomp = 8,
	we_user_tree_absorbed = 9,
	we_user_tree_buildshield = 10,
	we_user_tree_interrupted = 11,
	we_user_tree_shoot_hit = 12,
	we_user_tree_action_ended = 13,
	we_user_tree_regenerate_ended = 14,
	we_user_tree_hide_ended = 15,
	we_user_tree_interrupted_ended = 16,
	we_user_tree_melee_ended = 17,
	we_user_tree_melee_telegraph_ended = 18,
	we_user_tree_range_ended = 19,
	we_user_tree_range_telegraph_ended = 20,
	we_user_tree_hatchling_generated = 21,
	we_user_tree_hatchling_died = 22,
	we_user_tree_hatchling_init = 23,
	we_user_tree_make_shield_visible = 24,
	we_user_tree_frag_cocoon = 25,
	we_user_tree_damage_relay = 26,
	// Snake boss custom messages.
	we_user_snake_breath = 27,
	we_user_snake_triple_effect = 28,
	// Dragon boss custom messages.
	we_user_dragon_nis_begin = 29,
	we_user_dragon_attack = 30,
	we_user_dragon_attack_air = 31,
	we_user_dragon_attack_done = 32,
	we_user_dragon_ballista_fire = 33,
	we_user_dragon_ballista_move_left = 34,
	we_user_dragon_ballista_move_right = 35,
	we_user_dragon_fire_started = 36,
	we_user_dragon_fire_out = 37,
	// Dark Mage boss custom messages.
	we_user_dark_mage_action_finished = 38,
	we_user_dark_mage_shield_on = 39,
	we_user_dark_mage_shield_off = 40,
	we_user_dark_mage_init_shard = 41,
	we_user_dark_mage_shard_died = 42,
	we_user_dark_mage_uber_hit = 43,
	we_user_dark_mage_start_uber = 44,
	we_user_dark_mage_start_stun = 45,
	we_user_dark_mage_shield_move = 46,
	we_user_dark_mage_elemental = 47,
	we_user_dark_mage_died = 48,
	// Triple Dark Mage custom messages.
	we_user_dark_mage_request_double_attack = 49,
	we_user_dark_mage_double_request_master = 50,
	we_user_dark_mage_confirm_double_attack = 51,
	we_user_dark_mage_start_double = 52,
	we_user_dark_mage_friend1_died = 53,
	we_user_dark_mage_friend2_died = 54,
	we_user_dark_mage_join_summon = 55,
	we_user_dark_mage_left_summon = 56,
	we_user_dark_mage_summon_over = 57,
	we_user_dark_mage_request_summon = 58,
	we_user_dark_mage_request_uber = 59,
	we_user_dark_mage_join_uber = 60,
	we_user_dark_mage_uber_interrupted = 61,
	we_user_dark_mage_uber_busy = 62,
	we_user_dark_mage_uber_done = 63,
	we_user_dark_mage_summon_check_distance = 64,
	// ArchMage boss custom messages.
	we_user_archmage_action_finished = 65,
	we_user_archmage_actuator_shield_active = 66,
	we_user_archmage_actuator_shield_inactive = 67,
	we_user_archmage_actuator_shield_killed = 68,
	we_user_archmage_projectile_collide = 69,
	// Valdis boss custom messages.
	we_user_valdis_split_started = 70,
	we_user_valdis_split_finished = 71,
	we_user_valdis_split_interrupted = 72,
	we_user_valdis_rock_hazard = 73,
	we_user_valdis_beam_collision = 74,
	we_user_valdis_teleport = 75,
	we_user_valdis_altar_force_stage_1 = 76,
	we_user_valdis_nis_anim_start = 77,
	// Mark of the Prisoner custom messages.
	we_user_start_prisoner = 78,
	we_user_stop_prisoner = 79,
	we_user_hit_prisoner = 80,
	// Light ray puzzle custom messages.
	we_user_lp_reflecting = 81,
	we_user_lp_reflected = 82,
	we_user_lp_refresh = 83,
	we_user_lp_refresh_end = 84,
	we_user_lp_reset = 85,
	// Effect flipper custom message.
	we_user_flip_effect = 86,
	// Tutorial custom messages.
	we_user_power_brutal_attack = 87,
	we_user_npc_use_power = 88,
	// Generator Pcontent Message for NPC Actors.
	we_user_generate_pcontent = 89,
	// For the NIS with the commander at the castle.
	we_user_commander_knockback = 90,
	// A3 mines.
	we_user_cart_arrived = 91,
	// A3 Kalrathian Nexus Quest Staff.
	we_user_nexus_fire_on = 92,
	we_user_nexus_cold_on = 93,
	we_user_nexus_earth_on = 94,
	// Used by damage_tick_until_message.flick/ damage hazard accumulator.
	we_user_start_damage = 95,
	we_user_stop_damage = 96,
	// Used by monster and NPC brains.
	we_user_enable_mind = 97,
	we_user_disable_mind = 98,
	// Messages used by the indicate emitter to switch between different overhead icons.
	we_user_indicate_emitter_switch = 99,
	we_user_indicate_emitter_on = 100,
	we_user_indicate_emitter_off = 101,
	we_user_indicate_emitter_info = 102,
	we_user_indicate_emitter_task_active = 103,
	// Door.
	we_user_second_door = 104,
	// Semi-generic
	we_user_effect_start = 105,
	// Message sent when the reveal job is complete (used by revealing mini-bosses to show mini-boss effect).
	we_user_reveal = 106,
	// Used to let the "mark" spells know when an arrow has collided with a target.
	we_user_mark_target = 107,
	we_user_deactivate_marks = 108,
	// Used by cmd_change_property_owner.skrit.
	we_user_set_state1 = 109,
	we_user_set_state2 = 110,
	// Flame effigy custom message.
	we_user_flameon = 111,
	we_user_flame_effigy_fire = 112,
};

enum eWorldState {
	ws_invalid = 0,
	ws_any = 1,
	ws_init = 2,
	ws_intro = 3,
	ws_logo = 4,
	ws_main_menu = 5,
	ws_preload_intro = 6,
	ws_load_map = 7,
	ws_loading_map = 8,
	ws_loaded_map = 9,
	ws_loaded_intro = 10,
	ws_wait_for_begin = 11,
	ws_loading_save_game = 12,
	ws_credits = 13,
	ws_options = 14,
	ws_deinit = 15,
	ws_reloading = 16,
	ws_game_ended = 17,
	ws_ingame_movie = 18,
	ws_teleport = 19,
	ws_nis = 20,
	ws_sp_main_menu = 21,
	ws_sp_ingame_menu = 22,
	ws_sp_character_select = 23,
	ws_sp_map_select = 24,
	ws_sp_difficulty_select = 25,
	ws_sp_victory_screen = 26,
	ws_sp_load_game_screen = 27,
	ws_sp_save_game_screen = 28,
	ws_sp_ingame = 29,
	ws_sp_defeat = 30,
	ws_sp_victory = 31,
	ws_sp_outro = 32,
	ws_mp_provider_select = 33,
	ws_mp_internet_game = 34,
	ws_mp_lan_game = 35,
	ws_mp_match_maker = 36,
	ws_mp_staging_area_server = 37,
	ws_mp_staging_area_client = 38,
	ws_mp_character_select = 39,
	ws_mp_map_select = 40,
	ws_mp_save_game_screen = 41,
	ws_mp_ingame = 42,
	ws_mp_ingame_jip = 43,
	ws_mp_session_lost = 44,
};

enum JUSTIFICATION {
	justify_left = 0,
	justify_right = 1,
	justify_center = 2,
} typedef eJustification;

enum UI_ACTION {
	action_setrect = 0,
	action_setnormalizedrect = 1,
	action_setvisible = 2,
	action_showgroup = 3,
	action_loadtexture = 4,
	action_loadstretchtextures = 5,
	action_setuvcoords = 6,
	action_sendmessage = 7,
	action_parentmessage = 8,
	action_setalpha = 9,
	action_addelement = 10,
	action_removeelement = 11,
	action_notify = 12,
	action_sethotspot = 13,
	action_settext = 14,
	action_setgroup = 15,
	action_setelementheight = 16,
	action_setnumstates = 17,
	action_setstate = 18,
	action_showmenu = 19,
	action_activatemenu = 20,
	action_activateitem = 21,
	action_setcolor = 22,
	action_playsound = 23,
	action_keylisten = 24,
	action_keypress = 25,
	action_rectanimation = 26,
	action_alphaanimation = 27,
	action_flashanimation = 28,
	action_stopanimation = 29,
	action_clockanimation = 30,
	action_setstatus = 31,
	action_loadanimatedtexture = 32,
	action_consumeinput = 33,
	action_editselect = 34,
	action_shift_x = 35,
	action_shift_y = 36,
	action_setrolloverhelp = 37,
	action_vertexcolor = 38,
	action_command = 39,
	action_call = 40,
	action_setsliderbutton = 41,
	action_loadgridimage = 42,
	action_none = 43,
} typedef eUIAction;

enum UI_CONTROL_TYPE {
	ui_type_window = 0,
	ui_type_button = 1,
	ui_type_checkbox = 2,
	ui_type_slider = 3,
	ui_type_listbox = 4,
	ui_type_radio_button = 5,
	ui_type_button_multistage = 6,
	ui_type_text = 7,
	ui_type_cursor = 8,
	ui_type_dockbar = 9,
	ui_type_gridbox = 10,
	ui_type_popupmenu = 11,
	ui_type_item = 12,
	ui_type_itemslot = 13,
	ui_type_infoslot = 14,
	ui_type_status_bar = 15,
	ui_type_edit_box = 16,
	ui_type_combo_box = 17,
	ui_type_listener = 18,
	ui_type_listreport = 19,
	ui_type_chat_box = 20,
	ui_type_text_box = 21,
	ui_type_dialog_box = 22,
	ui_type_tab = 23,
	ui_type_line = 24,
	ui_type_object_view = 25,
	ui_type_treectrl = 26,
	ui_type_container = 27,
} typedef eUIControlType;

enum UI_INPUT_TYPE {
	type_input_none = 0,
	type_input_all = 1,
	type_input_mouse = 2,
	type_input_key = 3,
} typedef eUIInputType;

DefineFunction(ToString, 0x7a0150, const char*, Params(DOCKBAR_TYPE unk1), Args(unk1));
DefineFunction(ToString, 0x940991, const char*, Params(eAggroType unk1), Args(unk1));
DefineFunction(ToString, 0x7aaca0, const char*, Params(eAlignment unk1), Args(unk1));
DefineFunction(ToString, 0x931ae4, const char*, Params(eAlteration unk1), Args(unk1));
DefineFunction(ToString, 0x7adc70, const char*, Params(EDGE_TYPE unk1), Args(unk1));
DefineFunction(ToString, 0x83c50c, const char*, Params(eDifficulty unk1), Args(unk1));
DefineFunction(ToString, 0x88732b, const char*, Params(eEntryType unk1), Args(unk1));
DefineFunction(ToString, 0x6d0e20, const char*, Params(eFadeType unk1), Args(unk1));
DefineFunction(ToString, 0x582aca, const char*, Params(eGamespyEvent unk1), Args(unk1));
DefineFunction(ToString, 0x95fcfe, const char*, Params(eGoBitType unk1), Args(unk1));
DefineFunction(ToString, 0x7ec9f5, const char*, Params(eInventoryLocation unk1), Args(unk1));
DefineFunction(ToString, 0x9409fd, const char*, Params(eJobAbstractType unk1), Args(unk1));
DefineFunction(ToString, 0x9409d6, const char*, Params(eJobAttribute unk1), Args(unk1));
DefineFunction(ToString, 0x93cbfc, const char*, Params(eJobResult unk1), Args(unk1));
DefineFunction(ToString, 0x7ec7a1, const char*, Params(eLifeState unk1), Args(unk1));
DefineFunction(ToString, 0x91cdf2, const char*, Params(eMoodRoomType unk1), Args(unk1));
DefineFunction(ToString, 0x7ec877, const char*, Params(ePContentType unk1), Args(unk1));
DefineFunction(ToString, 0x714eb0, const char*, Params(ePixelBlend unk1), Args(unk1));
DefineFunction(ToString, 0x6b7720, const char*, Params(ePosHint unk1), Args(unk1));
DefineFunction(ToString, 0x7ec7dd, const char*, Params(eQuestState unk1), Args(unk1));
DefineFunction(ToString, 0x714ef0, const char*, Params(eRibbonAlign unk1), Args(unk1));
DefineFunction(ToString, 0x8785c1, const char*, Params(eStandingOrders unk1), Args(unk1));
DefineFunction(ToString, 0x714e70, const char*, Params(eTextureOp unk1), Args(unk1));
DefineFunction(ToString, 0x88e37f, const char*, Params(eTuningGridDoor unk1), Args(unk1));
DefineFunction(ToString, 0x7add70, const char*, Params(eUIMessage unk1), Args(unk1));
DefineFunction(ToString, 0x848244, const char*, Params(eWorldEvent unk1), Args(unk1));
DefineFunction(ToString, 0x7d513c, const char*, Params(eWorldState unk1), Args(unk1));
DefineFunction(ToString, 0x760250, const char*, Params(JUSTIFICATION unk1), Args(unk1));
DefineFunction(ToString, 0x7add10, const char*, Params(UI_ACTION unk1), Args(unk1));
DefineFunction(ToString, 0x7adbd0, const char*, Params(UI_CONTROL_TYPE unk1), Args(unk1));
DefineFunction(ToString, 0x7adcd0, const char*, Params(UI_INPUT_TYPE unk1), Args(unk1));
