#include "Enums.h"

#include "DS2DLL.h"

#pragma push_macro("Case")
#pragma push_macro("Default")

#define Case(e) case e: return #e; break
#define Default(str) default: return str; break

FEX const char* ToString(eAction value) {
	return "";
};

FEX const char* ToString(eActionOrigin value) {
	switch (value) {
		Case(AO_INVALID);
		Case(AO_USER);
		Case(AO_REFLEX);
		Case(AO_PARTY);
		Case(AO_COMMAND);
		Case(AO_FLICK);
		Case(AO_USER_UPDATESTANCE);
		Default("");
	}
};

FEX const char* ToString(eActive value) {
	return "";
};

FEX const char* ToString(eActiveSkillDelivery value) {
	switch (value) {
		Case(ASD_MELEE);
		Case(ASD_RANGED);
		Case(ASD_CAST);
		Default("");
	}
};

FEX const char* ToString(eActor value) {
	return "";
};

FEX const char* ToString(eActorAlignment value) {
	switch (value) {
		Case(AA_GOOD);
		Case(AA_NEUTRAL);
		Case(AA_EVIL);
		Default("");
	}
};

FEX const char* ToString(eAggro value) {
	return "";
};

FEX const char* ToString(eAnim value) {
	return "";
};

FEX const char* ToString(eAnimChore value) {
	switch (value) {
		Case(CHORE_INVALID);
		Case(CHORE_NONE);
		Case(CHORE_ERROR);
		Case(CHORE_DEFAULT);
		Case(CHORE_WALK);
		Case(CHORE_DIE);
		Case(CHORE_DEFEND);
		Case(CHORE_ATTACK);
		Case(CHORE_MAGIC);
		Case(CHORE_FIDGET);
		Case(CHORE_ROTATE);
		Case(CHORE_OPEN);
		Case(CHORE_CLOSE);
		Case(CHORE_MISC);
		Case(CHORE_RAILMOVE);
		Default("");
	}
};

FEX const char* ToString(eAnimEvent value) {
	return "";
};

FEX const char* ToString(eAnimStance value) {
	switch (value) {
		Case(AS_DEFAULT);
		Case(AS_PLAIN);
		Case(AS_SINGLE_MELEE);
		Case(AS_SINGLE_MELEE_AND_SHIELD);
		Case(AS_TWO_HANDED_MELEE);
		Case(AS_TWO_HANDED_SWORD);
		Case(AS_STAFF);
		Case(AS_BOW_AND_ARROW);
		Case(AS_MINIGUN);
		Case(AS_SHIELD_ONLY);
		Case(AS_DUAL_WIELD);
		Case(AS_THROWABLE);
		Default("");
	}
};

FEX const char* ToString(eAttack value) {
	return "";
};

FEX const char* ToString(eAttackClass value) {
	switch (value) {
		Case(AC_BEASTFU);
		Case(AC_AXE);
		Case(AC_CLUB);
		Case(AC_DAGGER);
		Case(AC_HAMMER);
		Case(AC_MACE);
		Case(AC_STAFF);
		Case(AC_SWORD);
		Case(AC_CESTUS);
		Case(AC_BOW);
		Case(AC_MINIGUN);
		Case(AC_ARROW);
		Case(AC_BOLT);
		Case(AC_COMBAT_MAGIC);
		Case(AC_NATURE_MAGIC);
		Default("");
	}
};

FEX const char* ToString(eAxis value) {
	return "";
};

FEX const char* ToString(eAxisHint value) {
    switch (value) {
        Case(AH_NONE);
        Case(AH_XAXIS_POSITIVE);
        Case(AH_XAXIS_NEGATIVE);
        Case(AH_YAXIS_POSITIVE);
        Case(AH_YAXIS_NEGATIVE);
        Case(AH_ZAXIS_POSITIVE);
        Case(AH_ZAXIS_NEGATIVE);
        Default("");
    }
};

FEX const char* ToString(eCamera value) {
	return "";
};

FEX const char* ToString(eCameraInterp value) {
	return "";
};

FEX const char* ToString(eCameraOrder value) {
	return "";
};

FEX const char* ToString(eCombat value) {
	return "";
};

FEX const char* ToString(eCreate value) {
	return "";
};

FEX const char* ToString(eDamage value) {
	return "";
};

FEX const char* ToString(eDamageType value) {
	return "";
};

FEX const char* ToString(eDebug value) {
	return "";
};

FEX const char* ToString(eDebugHudOptions value) {
	return "";
};

FEX const char* ToString(eDrop value) {
	return "";
};

FEX const char* ToString(eEntry value) {
	return "";
};

FEX const char* ToString(eEquip value) {
	return "";
};

FEX const char* ToString(eFade value) {
	return "";
};

FEX const char* ToString(eFocus value) {
	return "";
};

FEX const char* ToString(eGame value) {
	return "";
};

FEX const char* ToString(eGamespy value) {
	return "";
};

FEX const char* ToString(eGo value) {
	return "";
};

FEX const char* ToString(eInventory value) {
	return "";
};

FEX const char* ToString(eItem value) {
	return "";
};

FEX const char* ToString(eItemSkillType value) {
	return "";
};

FEX const char* ToString(eJob value) {
	return "";
};

FEX const char* ToString(eLife value) {
	return "";
};

FEX const char* ToString(eLoot value) {
	return "";
};

FEX const char* ToString(eMagic value) {
	return "";
};

FEX const char* ToString(eMagicClass value) {
	switch (value) {
		Case(MC_NONE);
		Case(MC_POTION);
		Case(MC_COMBAT_MAGIC);
		Case(MC_NATURE_MAGIC);
		Default("");
	}
};

FEX const char* ToString(eMini value) {
	return "";
};

FEX const char* ToString(eMood value) {
	return "";
};

FEX const char* ToString(eMiniGame value) {
	return "";
};

FEX const char* ToString(eMovement value) {
	return "";
};

FEX const char* ToString(ePClass value) {
	return "";
};

FEX const char* ToString(ePhysics value) {
	return "";
};

FEX const char* ToString(ePixel value) {
	return "";
};

FEX const char* ToString(ePlayer value) {
	return "";
};

FEX const char* ToString(ePlayerController value) {
	switch (value) {
		Case(PC_INVALID);
		Case(PC_HUMAN);
		Case(PC_COMPUTER);
		Case(PC_REMOTE_HUMAN);
		Case(PC_REMOTE_COMPUTER);
		Default("");
	}
}

FEX const char* ToString(ePos value) {
	return "";
};

FEX const char* ToString(eQPlace value) {
	return "";
};

FEX const char* ToString(eQuery value) {
	return "";
};

FEX const char* ToString(eQueryTrait value) {
	switch (value) {
		Case(QT_NONE);
		Case(QT_ANY);
		Case(QT_LIFE);
		Case(QT_LIFE_LOW);
		Case(QT_LIFE_HIGH);
		Case(QT_LIFE_HEALING);
		Case(QT_LIFE_DAMAGING);
		Case(QT_MANA);
		Case(QT_MANA_LOW);
		Case(QT_MANA_HIGH);
		Case(QT_MANA_HEALING);
		Case(QT_MANA_DAMAGING);
		Case(QT_REANIMATING);
		Case(QT_ALIVE_CONSCIOUS);
		Case(QT_ALIVE_UNCONSCIOUS);
		Case(QT_ALIVE);
		Case(QT_DEAD);
		Case(QT_WEAPON);
		Case(QT_MELEE_WEAPON);
		Case(QT_RANGED_WEAPON);
		Case(QT_MELEE_WEAPON_SELECTED);
		Case(QT_RANGED_WEAPON_SELECTED);
		Case(QT_ONE_SHOT_SPELL);
		Case(QT_MULTIPLE_SHOT_SPELL);
		Case(QT_COMMAND_CAST_SPELL);
		Case(QT_AUTO_CAST_SPELL);
		Case(QT_FIGHTING);
		Case(QT_UNDER_ATTACK);
		Case(QT_UNDER_MELEE_ATTACK);
		Case(QT_ACTOR);
		Case(QT_ITEM);
		Case(QT_POTION);
		Case(QT_SPELL);
		Case(QT_ARMOR);
		Case(QT_ARMOR_WEARABLE);
		Case(QT_SHIELD);
		Case(QT_BREAKABLE);
		Case(QT_CASTABLE);
		Case(QT_ATTACKABLE);
		Case(QT_AUTO_ATTACKABLE);
		Case(QT_SELECTED);
		Case(QT_NONSELECTED);
		Case(QT_VISIBLE);
		Case(QT_INVISIBLE);
		Case(QT_HAS_LOS);
		Case(QT_PACK);
		Case(QT_NONPACK);
		Case(QT_BUSY);
		Case(QT_IDLE);
		Case(QT_GOOD);
		Case(QT_NEUTRAL);
		Case(QT_EVIL);
		Case(QT_FRIEND);
		Case(QT_ENEMY);
		Case(QT_SURVIVAL_FACTOR);
		Case(QT_OFFENSE_FACTOR);
		Default("");
	}
};

FEX const char* ToString(eQuest value) {
	return "";
};

FEX const char* ToString(eQuickSlotSkill value) {
	switch (value) {
		Case(QS_ACTIVE_SLOT);
		Case(QS_SLOT_1);
		Case(QS_SLOT_2);
		Case(QS_SLOT_3);
		Case(QS_SLOT_4);
		Default("");
	}
};

FEX const char* ToString(eRibbon value) {
	return "";
};

FEX const char* ToString(eRoom value) {
	return "";
};

FEX const char* ToString(eStanding value) {
	return "";
};

FEX const char* ToString(eGameStat value) {
	return "";
};

FEX const char* ToString(eTarget value) {
	return "";
};

FEX const char* ToString(eTargetTypeFlags value) {
	return "";
};

FEX const char* ToString(eTexture value) {
	return "";
};

FEX const char* ToString(eTuning value) {
	return "";
};

FEX const char* ToString(eUIWindow value) {
	return "";
};

FEX const char* ToString(eUsage value) {
	return "";
};

FEX const char* ToString(eVoice value) {
	return "";
};

FEX const char* ToString(eVoiceSound value) {
	switch (value) {
		Case(VS_INVALID);
		Case(VS_ENEMY_SPOTTED);
		Default("");
	}
};

FEX const char* ToString(eWeapon value) {
	return "";
};

FEX const char* ToString(eWorld value) {
	return "";
};

#pragma pop_macro("Case")
