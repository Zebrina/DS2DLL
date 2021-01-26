#pragma once

#include "Constants.h"
#include "DS2DLL.h"
#include "Enums.h"
#include "FuBi.h"
#include "Go.h"
#include "GoidScid.h"
#include "GPString.h"
#include "UIButton.h"
#include "UIDialogueHandler.h"
#include "UIStatusBar.h"
#include "UIText.h"
#include "UITextBox.h"
#include "UIWindow.h"

class UIPartyManager {
public:
	$Singleton(UIPartyManager, 0x0040a5f3);
	
	$Method(0x004b14c7, CalculateAWPColumns, void, int characterIndex);
	$Method(0x004aa029, EnchantmentUndo, void, int characterIndex, int enchantmentIndex);
	$Method(0x004a7c6e, RSEnchantmentUndo, void, const Goid* goid, int enchantmentIndex);
	$Method(0x004a6860, RCEnchantmentUndo, void, uint machineId);
	$Method(0x004a4590, GetCharacterFromIndex, const Goid*, int characterIndex);
	$Method(0x004a4568, GetCharacterPartyIndex, int, const Goid* goid);
	$Method(0x004a454c, GetSelectedCharacter, const Goid*);
	$Method(0x004b38f0, SSetMaxAllowedPartyMembers, void, const Goid* partyMember, int maxAllowedPartyMembers);
	$Method(0x004b25c4, RCSetMaxAllowedPartyMembers, void, int maxAllowedPartyMembers, uint machineId);

	$Method(0x004a6c74, SetFollowMode, void, bool unk1);
	$Method(0x004b7236, ActivateAllInventories, bool);
	$Method(0x004b708c, ActivateInventory, bool);
	$Method(0x004ad66a, CharacterDisbandButton, bool);
	$Method(0x004b3d67, CloseAllCharacterMenus, bool);
	$Method(0x004ac9a2, DoesSelectedPartyHaveNonPack, bool);
	$Method(0x00409350, GetFollowMode, bool);
	$Method(0x0040930e, GetFormationMode, bool);
	$Method(0x00409349, GetFormationsActive, bool);
	$Method(0x004092df, IsConstructingParty, bool);
	$Method(0x004a64cd, IsPlayerPartyMember, bool, const Goid* unk1);
	$Method(0x004ad737, MoveMemberToInn, bool, const Goid* unk1);
	$ConstMethod(0x004b39c6, GetAggroListAnsi, GPBString, Go* unk1);
	$ConstMethod(0x004aae68, GetAggroTooltipAnsi, GPBString, eAggroType aggroType);
	$Method(0x004adaa4, GetFormationIcon, GPBString, bool unk1);
	$Method(0x004ab6f8, DoesActivePartyHaveTemplate, const Goid*, const char* templateName, const Goid* unk2);
	$Method(0x004a9a6e, GetPartyMemberFromTemplate, const Goid*, const GPBString& templateName);
	$Method(0x004092f7, GetTalkingDisbandMember, const Goid*);
	$ConstMethod(0x004b0079, GetMaxAllowedPartyMembers, int);
	$Method(0x004a59ba, RSReviveCharacter, FuBiCookie*, const Goid* unk1);
	$Method(0x004ab4bb, AutoLevel, void, const GPBString& unk1);
	$Method(0x004b5fdb, CloseCharacterInventory, void, int characterIndex);
	$Method(0x004a7c42, DisbandCancelAll, void);
	$Method(0x004a65f7, DisbandCancelSelectedMember, void);
	$Method(0x004b484a, DisbandSelectedMember, void, bool unk1);
	$Method(0x004aacbb, GetPartyMembers, void, GopColl& unk1);
	$Method(0x004aacfd, GetPartyMembersAndSummons, void, GoidColl& unk1, bool unk2);
	$Method(0x004aabb3, GetSelectedPartyMembers, void, GoidColl& unk1, bool unk2);
	$Method(0x004092e6, GetSelectedPartyMembers, void, GopColl& unk1);
	$Method(0x004aaae4, GetSelectedPartyMembersAtPos, void, const SiegePos& unk1, float unk2, GoidColl& unk3, bool unk4, bool unk5);
	$Method(0x004abfac, HandleSelectSkillsTab, void);
	$Method(0x004ab42f, HideAutoLevelDialog, void);
	$Method(0x004a48bc, HideEquipment, void);
	$Method(0x004acd37, HideResistanceInfo, void);
	$Method(0x004092d6, OpenCharacterInterface, void, int unk1);
	$Method(0x00409325, PowerBarRolloff, void, int unk1);
	$Method(0x00409315, PowerBarRollover, void, int unk1);
	$Method(0x004b68d8, RCAddCharacterAsGuarded, void, const Goid* unk1, uint unk2);
	$Method(0x004a6a52, RCAutoLevel, void, const GPBString& unk1, const Goid* unk2);
	$Method(0x004ad9af, RCDisbandIfNonInterruptable, void, const Goid* unk1, uint unk2);
	$Method(0x004a9dae, RCMoveMemberToInn, void, const Goid* unk1);
	$Method(0x004b085a, RCRemoveCharacterAsGuarded, void, const Goid* unk1, uint unk2);
	$Method(0x004ad808, RCSetPartyCorpseRetrievalCost, void, int unk1, const Goid* unk2, uint unk3);
	$Method(0x004a695b, RSActivatePartyAuditorBool, void, const GPBString& unk1);
	$Method(0x004a8108, RSAutoLevel, void, const GPBString& unk1, const Goid* unk2);
	$Method(0x004b02b4, RSDisbandIfNonInterruptable, void, const Goid* unk1, const Goid* unk2);
	$Method(0x004a9036, RSEndRespawnParty, void, const PlayerId* unk1);
	$Method(0x004aaeaa, RSMoveMemberToInn, void, const Goid* unk1);
	$Method(0x004a662d, RSReleaseIntoWild, void, const Goid* unk1);
	$Method(0x004a8c98, RSRespawnParty, void, const PlayerId* unk1, const GPBString& unk2);
	$Method(0x004a91d2, RSRetrieveCorpses, void, const Goid* unk1, int unk2);
	$Method(0x004b6e3a, SAddCharacterAsGuarded, void, const Goid* unk1, const Goid* unk2);
	$Method(0x004092fe, SetFormationMode, void, bool unk1);
	$Method(0x004a6776, SetFormationsActive, void, bool unk1);
	$Method(0x004ac60e, SetPartyCorpseRetrievalCost, void, int unk1, const Goid* unk2);
	$Method(0x004aa12d, SetPartyOrders, void, eStandingOrders orders);
	$Method(0x0040933c, SetSelectedCharacterIndex, void, int unk1);
	$Method(0x004a67f0, ShowEquipment, void);
	$Method(0x004ab072, ShowPackRehireDialog, void, const Goid* unk1);
	$Method(0x004ad96a, ShowResistanceInfo, void);
	$Method(0x004b2f25, SRemoveCharacterAsGuarded, void, const Goid* unk1, const Goid* unk2);
	$Method(0x004aeb23, SSetPartyCorpseRetrievalCost, void, const Goid* unk1, const Goid* unk2, int unk3);
	$Method(0x004a67a8, UpdateFormations, void);

	//$Method(0x004b14c7, CalculateAWPColumns, void, int characterIndex);
	//$Method(0x004aa029, EnchantmentUndo, void, int characterIndex, int enchantmentIndex);
	//$Method(0x004b38f0, SSetMaxAllowedPartyMembers, void, const Goid* partyMember, int maxAllowedPartyMembers);
	//$Method(0x004b25c4, RCSetMaxAllowedPartyMembers, void, int unk1, uint unk2);

    FEX bool GetShowMemberLabels() const;
    FEX void SetShowMemberLabels(bool flag);

	// 0x000
	Goid* characters[MAX_PARTY_SIZE];
	// 0x018
	UIText* memberLabels[MAX_PARTY_SIZE];
	// 0x030
	UIText* tombstoneLabels[MAX_PARTY_SIZE];
	// 0x048
	$Padding(0x048, 0x050);
	// 0x050
	int maxPartyMembers; // ??
	// 0x054
	$Padding(0x054, 0x068);
	// 0x068
	int partyMemberCount; // ??
	// 0x06c
	$Padding(0x06c, 0x07c);
	// 0x07c
	int selectedCharacterIndex;
	// 0x080
	$Padding(0x080, 0x084);
	// 0x084
	bool b084 = false;
	bool b085 = false;
	bool b086 = false;
	bool b087 = false;
	// 0x088
	bool b088 = false;
	bool b089 = false;
    bool b08A = false;
    bool b08B = false;
	// 0x08c
	UIWindow* window08C[8];
	// 0x0ac
	UIWindow* awpPortraitSelection[MAX_PARTY_SIZE];
	// 0x0c4
	UIWindow* dataBarWindowHealthUp;
	// 0x0c8
	UIWindow* dataBarWindowHealthDown;
	// 0x0cc
	UIWindow* dataBarWindowManaUp;
	// 0x0d0
	UIWindow* dataBarWindowManaDown;
	// 0x0d4
	UIWindow* dataBarWindowMeleeUp;
	// 0x0d8
	UIWindow* dataBarWindowMeleeDown;
	// 0x0dc
	UIWindow* dataBarWindowRangedUp;
	// 0x0e0
	UIWindow* dataBarWindowRangedDown;
	// 0x0e4
	UIWindow* dataBarWindowCombatMagicUp;
	// 0x0e8
	UIWindow* dataBarWindowCombatMagicDown;
	// 0x0ec
	UIWindow* dataBarWindowNatureMagicUp;
	// 0x0f0
	UIWindow* dataBarWindowNatureMagicDown;
	// 0x0f4
	UIWindow* dataBarWindowStrUp;
	// 0x0f8
	UIWindow* dataBarWindowStrDown;
	// 0x0fc
	UIWindow* dataBarWindowDexUp;
	// 0x100
	UIWindow* dataBarWindowDexDown;
	// 0x104
	UIWindow* dataBarWindowIntUp;
	// 0x108
	UIWindow* dataBarWindowIntDown;
	// 0x10c
	UIWindow* dataBarWindowMinDmgUp;
	// 0x110
	UIWindow* dataBarWindowMinDmgDown;
	// 0x114
	UIWindow* dataBarWindowMaxDmgUp;
	// 0x118
	UIWindow* dataBarWindowMaxDmgDown;
	// 0x11c
	UIWindow* dataBarWindowArmorUp;
	// 0x120
	UIWindow* dataBarWindowArmorDown;
	// 0x124
	UIWindow* dataBarWindowResistancesUp;
	// 0x128
	UIWindow* dataBarWindowResistancesDown;
	// 0x12c
	UITextBox* dataBarTextBoxStatus;
	// 0x130
	UIWindow* enemyStatusEnemyBorder[5];
	// 0x144
	$Padding(0x144, 0x188);
	// 0x188
	bool b188; // 0x004a8bc1
	bool b189;
	bool b18A;
	bool b18B;
	// 0x18c
	$Padding(0x18c, 0x194);
    // 0x194
    bool b194 = true;
    // 0x198
    UIDialogueHandler* dialogueHandler;
	// 0x19c
	bool b19C;
	bool bShowMemberLabels;
	bool b19E = true;
	bool b19F = true;
	// 0x1a0
    $Padding(0x1a0, 0x1b0);
    // 0x1b0
    Goid* goid1B0 = Goid::Invalid;
    // 0x1b4
    Goid* goid1B4 = Goid::Invalid;
    // 0x1b8
	$Padding(0x1b8, 0x1bc);
    // 0x1bc
    bool b1BC = false;
    bool b1BD;
    bool b1BE;
    bool b1BF;
    // 0x1c0
    $Padding(0x1c0, 0x1d4);
    // 0x1d4
    Goid* goid1D4 = Goid::Invalid;
    // 0x1d8
    $Padding(0x1d8, 0x1f8);
	// 0x1f8
	bool b1F8 = true;
	bool b1F9 = false;
	bool b1FA;
	bool b1FB;
	// 0x1fc
	$Padding(0x1fc, 0x204);
	// 0x204
	bool b204 = true;
	bool bFormationsActive;
	bool b206;
	bool b207;
	// 0x208
	$Padding(0x208, 0x20c);
	// 0x20c
	bool b20C = false;
	bool bFollowMode;
	bool b20E = false;
	bool b20F = false;
	// 0x210
    bool b210 = true;
    bool b211;
    bool b212;
    bool b213;
    // 0x214
    Goid* goid214 = Goid::Invalid;
    // 0x218
    Goid* goid218 = Goid::Invalid;
	// 0x21c
	bool b21C;
	bool formationMode;
	// 0x220
	Goid* goid220 = Goid::Invalid;
	// 0x224
    float f224 = 0.0f;
    // 0x228
    double d228 = 0.0;
    // 0x230
    float f230 = 0.0f;
    // 0x234
    float f234 = 0.0f;
    // 0x238
	$Padding(0x238, 0x240);
    // 0x240
    bool b240 = false;
    // 0x244
    Goid* goid244 = Goid::Invalid;
    // 0x248
    Goid* goid248 = Goid::Invalid;
    // 0x24C
    Goid* goid24C = Goid::Invalid;
    // 0x250
    $Padding(0x250, 0x258);
    // 0x258
    bool b258 = false;
    bool b259 = false;
    bool b25A;
    bool b25B;
    // 0x25c
    $Padding(0x25c, 0x274);
    // 0x274
    float f274 = 0.0f;
    // 0x278
    $Padding(0x278, 0x33c);
	// 0x33c
	UIStatusBar* characterHeaderTabsStatusBarLevel;
	// 0x340
	UIStatusBar* petHeaderTabsStatusBarPetLevelBar;
	// 0x344
	UIStatusBar* characterMainTabStatusMeleeProgress;
	// 0x348
	UIStatusBar* characterMainTabStatusRangedProgress;
	// 0x34c
	UIStatusBar* characterMainTabStatusNatureMagicProgress;
	// 0x350
	UIStatusBar* characterMainTabStatusCombatProgress;
	// 0x354
	UIStatusBar* characterMainTabStatusStrengthProgress;
	// 0x358
	UIStatusBar* characterMainTabStatusDexterityProgress;
	// 0x35c
	UIStatusBar* characterMainTabStatusIntelligenceProgress;
	// 0x360
	UIStatusBar* characterMainTabStatusHealthBar;
	// 0x364
	UIStatusBar* characterMainTabStatusHealthBarRestore;
	// 0x368
	UIStatusBar* characterMainTabStatusManaBar;
	// 0x36c
	UIStatusBar* characterMainTabStatusManaBarRestore;
	// 0x370
    void* ptr370[8];
	// 0x390
	UIStatusBar* enemyStatusHealthBarEnemy;
	// 0x394
	UIStatusBar* enemyStatusStatusBarEnemy;
	// 0x398
	UIText* characterHeaderTabsTextCharacterName;
	// 0x39c
	UIText* petHeaderTabsTextPetName;
	// 0x3a0
    void* ptr3A0;
	// 0x3a4
	UIText* petHeaderTabsTextPetClassLevel;
	// 0x3a8
	UIText* characterHeaderBarTextGold;
	// 0x3ac
	UIWindow* characterHeaderBarPartyStash;
	// 0x3b0
    void* ptr3B0;
	// 0x3b4
	UIText* characterMainTabTextHealthValue;
	// 0x3b8
	UIText* characterMainTabTextHealthMod;
	// 0x3bc
	UIText* characterMainTabTextManaValue;
	// 0x3c0
	UIText* characterMainTabTextManaMod;
	// 0x3c4
	UIText* characterMainTabTextMeleeValue;
	// 0x3c8
	UIText* characterMainTabTextMeleeMod;
	// 0x3cc
	UIText* characterMainTabTextRangedValue;
	// 0x3d0
	UIText* characterMainTabTextRangedMod;
	// 0x3d4
	UIText* characterMainTabTextCMagicValue;
	// 0x3d8
	UIText* characterMainTabTextCMagicMod;
	// 0x3dc
	UIText* characterMainTabTextNMagicValue;
	// 0x3e0
	UIText* characterMainTabTextNMagicMod;
	// 0x3e4
	UIText* characterMainTabTextIntValue;
	// 0x3e8
	UIText* characterMainTabTextIntMod;
	// 0x3ec
	UIText* characterMainTabTextStrValue;
	// 0x3f0
	UIText* characterMainTabTextStrMod;
	// 0x3f4
	UIText* characterMainTabTextDexValue;
	// 0x3f8
	UIText* characterMainTabTextDexMod;
	// 0x3fc
	UIText* characterMainTabTextMinDmgValue;
	// 0x400
	UIText* characterMainTabTextMinDmgMod;
	// 0x404
	UIText* characterMainTabTextMaxDmgValue;
	// 0x408
	UIText* characterMainTabTextMaxDmgMod;
	// 0x40c
	UIText* characterMainTabTextArmoralue;
	// 0x410
	UIText* characterMainTabTextArmorMod;
	// 0x414
	UIText* characterMainTabTextResistancesValue;
	// 0x418
	UIText* characterMainTabTextResistancesMod;
	// 0x41c
	UIButton* dataBarButtonHealthPotions;
	// 0x420
	UIButton* dataBarButtonManaPotions;
	// 0x424
	UITextBox* dataBarTextBoxStatus2;
	// 0x428
	UITextBox* characterHeaderTabsTextClassLevel;
	// 0x42c
	UITextBox* enemyStatusTextEnemyData;
	// 0x430
	$Padding(0x430, 0x438);
	// 0x438
	Goid* goid438 = Goid::Invalid;
	// 0x43c
	hexcolorcode i43C = 0x3DCCCCCD; // ??
	// 0x440
    float f440 = 0.0f;
	// 0x444
	bool b444 = false;
    bool b445 = false;
    bool b446 = false;
    bool b447 = false;
	// 0x448
    $Padding(0x448, 0x450);
};

STATIC_ASSERT(sizeof(UIPartyManager) == 0x450);
STATIC_ASSERT_OFFSETOF(UIPartyManager, characters, 0x000);
STATIC_ASSERT_OFFSETOF(UIPartyManager, memberLabels, 0x018);
STATIC_ASSERT_OFFSETOF(UIPartyManager, tombstoneLabels, 0x030);
STATIC_ASSERT_OFFSETOF(UIPartyManager, awpPortraitSelection, 0x0ac);
STATIC_ASSERT_OFFSETOF(UIPartyManager, enemyStatusEnemyBorder, 0x130);
STATIC_ASSERT_OFFSETOF(UIPartyManager, dialogueHandler, 0x198);
STATIC_ASSERT_OFFSETOF(UIPartyManager, formationMode, 0x21d);
STATIC_ASSERT_OFFSETOF(UIPartyManager, enemyStatusTextEnemyData, 0x42c);
