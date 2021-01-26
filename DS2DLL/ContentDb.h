#pragma once

#include "DS2DLL.h"
#include "GPString.h"
#include "GoidScid.h"

class ContentDb {
public:
	$Singleton(ContentDb, 0x0040a20f);

	$ConstMethod(0x007e1ec2, DoesTemplateExist, bool, const char* path);
	$ConstMethod(0x007e3f46, DoesTemplateHaveComponent, bool, const char* path, const char* componentName);

	$ConstMethod(0x00408486, GetTemplateBool, bool, const char* path);
	$ConstMethod(0x007e41c6, GetTemplateBool, bool, const char* path, bool defaultValue);
	$ConstMethod(0x00408475, GetTemplateInt, int, const char* path);
	$ConstMethod(0x007e41b1, GetTemplateInt, int, const char* path, int defaultValue);
	$ConstMethod(0x00408497, GetTemplateFloat, float, const char* path);
	$ConstMethod(0x007e41db, GetTemplateFloat, float, const char* path, float defaultValue);
	$ConstMethod(0x0040b2cc, GetTemplateString, GPBString, const char* path);
	$ConstMethod(0x007e41f0, GetTemplateString, GPBString, const char* path, const GPBString& defaultValue);
	$ConstMethod(0x004084ac, GetTemplateScid, const Scid*, const char* path);
	$ConstMethod(0x007e420b, GetTemplateScid, const Scid*, const char* path, const Scid* defaultValue);
	$ConstMethod(0x007e3f08, GetTemplateScreenName, GPBString, const char* path);
	$ConstMethod(0x007e210c, GetTemplateInternalFieldAddress, GPBString, const char* path, const char* defaultValue);

	$Method(0x00408464, EvalBoolFormula, bool, const char* unk1);
	$Method(0x007dd617, EvalBoolFormula, bool, const char* unk1, bool defaultValue);
	$Method(0x00408453, EvalIntFormula, int, const char* unk1);
	$Method(0x007dd5ff, EvalIntFormula, int, const char* unk1, int defaultValue);
	$Method(0x0040843d, EvalFloatFormula, double, const char* unk1);
	$Method(0x007dd5e2, EvalFloatFormula, double, const char* unk1, double defaultValue);

	$ConstMethod(0x00408421, GetMaxPartyGold, int);
	FEX void SetMaxPartyGold(int amount);
	FUBI_DOC(SetMaxPartyGold, "amount", "Sets the max amount of gold the player's party is allowed to carry.");
	$ConstMethod(0x00408428, GetSmallGoldAmount, int);
	FEX void SetSmallGoldAmount(int amount);
	FUBI_DOC(SetSmallGoldAmount, "amount", "Set the amount of gold required to show the 'small' model.");
	$ConstMethod(0x0040842f, GetMediumGoldAmount, int);
	FEX void SetMediumGoldAmount(int amount);
	FUBI_DOC(SetMediumGoldAmount, "amount", "Set the amount of gold required to show the 'medium' model.");
	$ConstMethod(0x00408436, GetLargeGoldAmount, int);
	FEX void SetLargeGoldAmount(int amount);
	FUBI_DOC(SetLargeGoldAmount, "amount", "Set the amount of gold required to show the 'large' model.");

//private:
    // 0x000
    $Padding(0x000, 0x0fc);
    // 0x0fc
    GPBString defaultTexture;
    // 0x100
    GPBString defaultGold;
    // 0x104
    GPBString defaultPackmule;
    // 0x108
    GPBString defaultMule;
    // 0x10c
    GPBString defaultSpellbook;
    // 0x110
    GPBString defaultTombstone;
    // 0x114
    GPBString defaultFaderProxy;
    // 0x118
    GPBString defaultWaypointMoving;
    // 0x11c
    GPBString defaultPoint;
    // 0x120
    GPBString defaultPartyHumanoid;
    // 0x124
    GPBString defaultStash;
    // 0x128
    GPBString defaultCorpse;
    // 0x12c
    GPBString defaultCoach;
    // 0x130
    GPBString defaultSaveItem;
    // 0x134
    int maxPartyGold;
    // 0x138
    int smallGoldAmount;
    // 0x13c
    int mediumGoldAmount;
    // 0x140
    int largeGoldAmount;
    // 0x144
    $Padding(0x144, 0x158);
};

STATIC_ASSERT(sizeof(ContentDb) == 0x158);
STATIC_ASSERT_OFFSETOF(ContentDb, largeGoldAmount, 0x140);
