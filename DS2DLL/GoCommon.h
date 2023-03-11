#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "GPString.h"
#include "Membership.h"

class GoCommon : public GoComponent {
public:
	$StaticMethod(0x00408818, FUBI_NetToInstance, GoCommon*, uint goidInt, FuBiCookie** cookieOut);
	$StaticMethod(0x0040880f, FUBI_InstanceToNet, uint, GoCommon* common);

	$ConstMethod(0x0040c8af, GetScreenName, void, GPBString& nameOut);
	$Method(0x0040b36a, SetScreenName, void, const GPBString& newName);
	$Method(0x0040b341, SSetScreenName, void, const GPBString& newName);
	$Method(0x008039a6, RCSetScreenName, FuBiCookie*, const GPWString& newName);

    $ConstMethod(0x0080724f, GetBaseScreenName, void, GPBString& nameOut);

    FEX void GetDescription(GPBString& descriptionOut) const;
    FEX void SetDescription(const GPBString& newDescription);
    FEX void SSetDescription(const GPBString& newDescription);
    FEX FuBiCookie* RCSetDescription(const GPWString& newDescription);

    FEX void GetCustomName(GPBString& nameOut) const;
    FEX void SetCustomName(const GPBString& newName);
    FEX void SSetCustomName(const GPBString& newName);
    FEX FuBiCookie* RCSetCustomName(const GPWString& newName);

	$Method(0x0080412b, GetHasOneShotTriggered, bool);
	$ConstMethod(0x00804c52, GetAutoExpirationClass, const GPBString&); // "auto_expiration_class"
	$ConstMethod(0x00804c1b, GetForcedExpirationClass, const GPBString&); // "forced_expiration_class"
	$Method(0x008072da, RCSetRolloverHelpKey, void, const GPBString& unk1);
	$Method(0x008076e1, RSSetRolloverHelpKey, void, const GPBString& unk1);

    $ConstMethod(0x004087fa, GetMembership, const Membership&);
	$Method(0x008068b0, SCopyMembership, void, const Goid* unk1);
    $Method(0x00806507, RCCopyMembership, void, const Goid* unk1);
    $Method(0x0040bb81, RestoreLastMembership, void);
    $Method(0x008068b9, SRestoreLastMembership, void);
    $Method(0x008065ec, RCRestoreLastMembership, void);

    $ConstMethod(0x004087fe, GetRarity, ePClass);
	$Method(0x00408802, SetRarity, void, ePClass rarity);

	// 0x14
	GPWString screenName;
	// 0x18
	GPWString description;
	// 0x1c
    GPWString wstr1C; // baseScreenName??
	// 0x20
	GPWString customName;
	// 0x24
	bool b24;
	bool b25;
	bool bPreserveVitals;
	// 0x28
	GPBString rolloverHelpKey;
	// 0x2c
	$Padding(0x2c, 0x34);
	// 0x34
	Membership memberShip;
	// 0x44
	ePClass rarity;
    // 0x44
    $Padding(0x44, 0xfc);

private:
    FEX void FUBI_RENAME(GetBaseScreenName)(GPBString& nameOut) const;
};

STATIC_ASSERT_OFFSETOF(GoCommon, screenName, 0x14);
STATIC_ASSERT_OFFSETOF(GoCommon, customName, 0x20);
STATIC_ASSERT_OFFSETOF(GoCommon, bPreserveVitals, 0x26);
STATIC_ASSERT_OFFSETOF(GoCommon, rolloverHelpKey, 0x28);
STATIC_ASSERT_OFFSETOF(GoCommon, memberShip, 0x34);
STATIC_ASSERT_OFFSETOF(GoCommon, rarity, 0x44);
