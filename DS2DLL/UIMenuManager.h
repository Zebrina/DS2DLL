#pragma once

#include "GPString.h"

class UIMenuManager {
public:
	$Singleton(UIMenuManager, 0x0041430c);

	$Method(0x0049be80, CloseActiveFadeInterface, bool);
	$Method(0x00412f0c, GetAllowClientSave, bool);
	$Method(0x004a03f5, ActivateTip, void, const GPBString& unk1, bool unk2, bool unk3);
	$Method(0x00412eeb, ActivateTip, void, const GPBString& unk1, bool unk2);
	$Method(0x0049eded, ClientSaveGame, void);
	$Method(0x0049e8a1, CloseClientSaveGame, void);
	$Method(0x0049ddd8, CloseHostSaveGame, void);
	$Method(0x0049e7c2, FadeInterface, void, const char* unk1, float unk2, float unk3, float unk4);
	$Method(0x0049f92d, FadeInterfaceWithText, void, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3, const GPBString& unk4, float unk5, float unk6, float unk7);
	$Method(0x004a00c9, HostSaveGame, void);
	$Method(0x004a029d, HostSelectGame, void);
	$Method(0x004a1501, PopulateBookmarkList, void, const GPBString& unk1, const GPBString& unk2);
	$Method(0x004a0bd6, RCActivateTip, void, const GPBString& unk1, uint unk2, bool unk3);
	$Method(0x0049c2bf, RCCloseActiveFadeInterface, void, uint unk1);
	$Method(0x0049ecf1, RCFadeInterface, void, const char* unk1, float unk2, float unk3, float unk4, uint unk5);
	$Method(0x0049ff12, RCFadeInterfaceWithText, void, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3, const GPBString& unk4, float unk5, float unk6, float unk7, uint unk8);
	$Method(0x0049d9aa, RCShowDialogBox, void, const GPBString& unk1);
	$Method(0x0049db02, RCShowSaveDialogBox, void, const GPBString& unk1, uint unk2);
	$Method(0x004a1386, SActivateTip, void, const GPBString& unk1, const Goid* unk2, bool unk3);
	$Method(0x00412ed7, SActivateTip, void, const GPBString& unk1, const Goid* unk2);
	$Method(0x0049c9f1, SCloseActiveFadeInterface, void, const Goid* unk1);
	$Method(0x00412eff, SetAllowClientSave, void, bool unk1);
	$Method(0x0049baec, SetWindowToSiegePos, void, const SiegePos& unk1, UIWindow* unk2);
	$Method(0x0049fa17, SFadeInterface, void, const char* unk1, float unk2, float unk3, float unk4, const Goid* unk5);
	$Method(0x0049f9ef, SFadeInterface, void, const char* unk1, float unk2, float unk3, float unk4);
	$Method(0x004a09d4, SFadeInterfaceWithText, void, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3, const GPBString& unk4, float unk5, float unk6, float unk7, const Goid* unk8);
	$Method(0x004a1bd6, ShowBookmarkGames, void);
	$Method(0x004a1bce, ShowSaveGames, void);
	$Method(0x0049e7b0, SShowDialogBox, void, const GPBString& unk1);
	$Method(0x0049e7b9, SShowSaveDialogBox, void, const GPBString& unk1, uint unk2);

    enum Flags : uint {
        UNKNOWN_25 = EnumFlag(25), // 1
        UNKNOWN_26 = EnumFlag(26), // 1
        UNKNOWN_27 = EnumFlag(27), // 1
        UNKNOWN_28 = EnumFlag(28), // 1
        UNKNOWN_29 = EnumFlag(29), // 1
        UNKNOWN_30 = EnumFlag(30), // 1
        UNKNOWN_32 = EnumFlag(32), // 1
    };

    // 0x00
    bool b00; // = false
    bool b01; // = false
    bool b02; // = false
    bool b03; // = false
    // 0x04
    Flags flags;
    // 0x08
    bool b08; // = false
    bool b09; // = false
    bool b0A; // = false
    bool b0B; // = false
    // 0x0c
    $Padding(0x0c, 0x30);
    // 0x30
    bool b30; // = false
    bool b31; // = false
    bool b32;
    bool b33;
    // 0x34
    $Padding(0x34, 0x38);
    // 0x38
    bool bTutorialTips; // = false
    bool b39;
    bool b3A;
    bool b3B;
    // 0x3c
    $Padding(0x3c, 0x58);
    // 0x58
    bool b58; // = false
    bool b59; // = false
    bool b5A;
    bool b5B;
    // 0x5c
    $Padding(0x5c, 0x6c);
    // 0x6c
    bool b6C; // = false
    bool b6D; // = false
    bool b6E; // = false
    bool b6F;
    // 0x70
    $Padding(0x70, 0x78);
    // 0x78
    bool b78; // = true
    bool b79; // = true
    bool bAllowClientSave;
    bool b7B;
    // 0x7c
    float mpSaveTimeout;
    // 0x80
    $Padding(0x80, 0x84);
    // 0x84
    bool b84; // = false
    bool b85; // = false
    bool b86; // = false
    bool b87;
    // 0x88
    $Padding(0x88, 0x94);
    // 0x94
    bool bHasBattery;
    // 0x98
    float batteryRefresh;
    // 0x9c
    UIWindow* statusBarBattery;
    // 0xa0
    UIWindow* windowBatteryCritical;
    // 0xa4
    $Padding(0xa4, 0xb8);
    // 0xb8
    GPBString wirelessMeterImage; // ??
    // 0xbc
    UIWindow* windowWirelessStrength;
    // 0xc0
    $Padding(0xc0, 0xdc);
};

STATIC_ASSERT(sizeof(UIMenuManager) == 0xdc);
STATIC_ASSERT_OFFSETOF(UIMenuManager, bTutorialTips, 0x38);
STATIC_ASSERT_OFFSETOF(UIMenuManager, bAllowClientSave, 0x7a);
STATIC_ASSERT_OFFSETOF(UIMenuManager, mpSaveTimeout, 0x7c);
STATIC_ASSERT_OFFSETOF(UIMenuManager, bHasBattery, 0x94);
STATIC_ASSERT_OFFSETOF(UIMenuManager, statusBarBattery, 0x9c);
STATIC_ASSERT_OFFSETOF(UIMenuManager, windowWirelessStrength, 0xbc);
