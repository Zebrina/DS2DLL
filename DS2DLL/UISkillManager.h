#pragma once

#include "GoidScid.h"
#include "GPString.h"

class UISkillManager {
public:
	$Singleton(UISkillManager, 0x00456e6c);

	$Method(0x004c37e9, OpenSkillsInterface, void, int characterIndex);
    $ConstMethod(0x00456ab6, GetCurrentSkillPage, const GPBString&);
    $ConstMethod(0x00456ab9, GetRolloverSkill, const GPBString&);
    $ConstMethod(0x00456aca, GetAvailablePoints, int);
	$ConstMethod(0x00456ab2, GetFlashConfirm, bool);
	$Method(0x004c2342, ContextEquipPower, void, int unk1);
	$Method(0x004c2ad1, DecrementSkill, void, const GPBString& unk1);
	$Method(0x004c1d18, HideSelectedDescription, void);
	$Method(0x004c2957, IncrementSkill, void, const GPBString& unk1);
	$Method(0x004c25c2, OnPowerRolloff, void, int unk1);
	$Method(0x004c25aa, OnSkillLevelRolloff, void);
	$Method(0x004c256d, OnSkillLevelRollover, void);
	$Method(0x004c20dc, PickupPower, void, int unk1);
	$Method(0x004c3971, PurchaseSkills, void);
	$Method(0x004c2b47, RCLearnPower, void, const Goid* unk1, const GPBString& unk2, int unk3);
	$Method(0x004c0b52, RCOnSkillPointReady, void, const Goid* unk1);
	$Method(0x004c0ce2, RCResetMemberSkills, void, const Goid* unk1, uint unk2);
	$Method(0x004c1399, RCResetSkillPoints, void, uint unk1);
	$Method(0x004bf532, RCSetPartyPowers, void, bool unk1, const Goid* unk2);
	$Method(0x004c2f2c, RefreshMousePosition, void);
	$Method(0x004c1f3d, ResetDescriptionTimer, void, const GPBString& unk1);
	$Method(0x004c1ff6, ResetPowerDescriptionTimer, void, int unk1);
	$Method(0x004c1246, ResetSkillPoints, void);
	$Method(0x004c319e, RSCheckPowers, void, const Goid* unk1);
	$Method(0x004c09fd, RSRefreshPartyPowers, void, const Goid* unk1);
	$Method(0x004c33fe, RSResetMemberSkills, void, const Goid* unk1);
	$Method(0x004c15ff, RSResetSkillPoints, void, const Goid* unk1);
	$Method(0x004bf7c4, RSSetPartyPowers, void, bool unk1, const Goid* unk2);
	$Method(0x004bf987, RSSetPartyPowers, void, bool unk1);
	$Method(0x004c247a, SelectPower, void, int unk1);
	$Method(0x004c2ffb, SetCurrentSkillPage, void, const GPBString& unk1);
	$Method(0x004c0cb4, SOnSkillPointReady, void, const Goid* unk1);
	$Method(0x004c17bb, UpdateSelectedDescription, void);

	// 0x00
    GPBString currentSkillPage;
    // 0x04
    hexcolorcode skillMeetsReq;
    // 0x08
    hexcolorcode skillFailsReq;
    // 0x0c
    hexcolorcode skillMaxed;
    // 0x10
    int availablePoints;
    // 0x14
    $Padding(0x14, 0x1c);
    // 0x1c
    GPBString rolloverSkill;
    // 0x20
    $Padding(0x20, 0x28);
    // 0x28
    bool b28 = false;
    bool bFlashConfirm;
    // 0x2c
    Goid* goid2C = Goid::Invalid;
    // 0x30
    bool b30 = true;
    bool b31 = false;
    bool b32 = false;
    bool b33 = false;
    // 0x34
    $Padding(0x34, 0x38);
    // 0x38
    float skillRolloverFadeDuration;
    // 0x3c
    float skillRolloverFadeAlphaStart;
    // 0x40
    float skillRolloverFadeAlphaEnd;
    // 0x44
    float skillRolloffFadeDuration;
    // 0x48
    float skillRolloffFadeAlphaStart;
    // 0x4c
    float skillRolloffFadeAlphaEnd;
    // 0x50
    $Padding(0x50, 0x60);
};

STATIC_ASSERT(sizeof(UISkillManager) == 0x60);
