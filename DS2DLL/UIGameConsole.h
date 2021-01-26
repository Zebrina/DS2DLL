#pragma once

#include "GoidScid.h"
#include "UIChatBox.h"
#include "UIWindow.h"

class UIGameConsole {
public:
	// 44178f - Function that initializes singleton.
	$Singleton(UIGameConsole, 0x0040a5e7);

	$ConstMethod(0x0043f0f5, IsActive, bool);
	$Method(0x00440d94, Activate, void);
	$Method(0x0043ff80, Deactivate, void);
	$Method(0x0043dcdd, SetFocus, void, bool unk1);
	$Method(0x0040b394, ReceiveConsoleText, void, const GPBString& line);
	$Method(0x00440323, CanUseIncantation, bool, const Goid* unk1, const Goid* unk2, const GPBString& incantation);
	$Method(0x004092a4, GetActiveIncantationShrine, const Goid*);
	
	$Method(0x0043edd8, SApplyIncantationEnchantments, void, const Goid* unk1, const Goid* unk2, const GPBString& incantation);

	$Method(0x0043ea39, RCApplyIncantationEnchantments, void, const Goid* unk1, const Goid* unk2, const GPBString& incantation);
	$Method(0x0043d17c, RCSetActiveIncantationShrine, void, const Goid* unk1, uint unk2);

	$Method(0x00440199, RSCallIncantationManager, void, const Goid* unk1, const Goid* unk2, const GPBString& unk3);
	$Method(0x0043da09, RSSetActiveIncantationShrine, void, const Goid* unk1, const Goid* unk2);

	$Method(0x0043d9d5, GetChatBox, UIChatBox*);
	$Method(0x0043d9f8, ClearChatBox, void);

	// 0x00
	$Padding(0x00, 0x50);
};

STATIC_ASSERT(sizeof(UIGameConsole) == 0x50);
