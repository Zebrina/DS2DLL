#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "GoComponent.h"
#include "GPString.h"

class GoConversation : public GoComponent {
public:
	$StaticMethod(0x00423aa5, FUBI_NetToInstance, GoConversation*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00423a9c, FUBI_InstanceToNet, uint, GoConversation* unk1);
	$Method(0x008bcd01, DoesConversationExist, bool, const GPBString& unk1);
	$Method(0x008bda87, GetCanTalk, bool);
	$Method(0x008c038c, HasChoice, bool, const GPBString& unk1);
	$ConstMethod(0x004243a1, HasTalkFlick, bool);
	$ConstMethod(0x00423a80, IsInConversation, bool);
	$ConstMethod(0x00423a88, IsInConversationOrDialogTransition, bool);
	$ConstMethod(0x00423a84, IsInDialogTransition, bool);
	$ConstMethod(0x00423a98, GetLastReply, const GPBString&);
	$Method(0x008bd956, GetSelectedConversation, const GPBString&);
	$ConstMethod(0x008bc738, GetTalkFlick, const GPBString&);
	$ConstMethod(0x00423a78, GetListener, const Goid*);
	$Method(0x00423a74, GetConversationScid, const Scid*);
	$ConstMethod(0x00423a7c, GetTalkOrigin, eActionOrigin);
	$Method(0x008be002, RCActivateDialogue, FuBiCookie*, eActionOrigin unk1, const Goid* unk2, uint unk3);
	$Method(0x008bcad1, RCDeactivateDialogue, FuBiCookie*, uint unk1);
	$Method(0x008bcd24, RCSelectConversation, FuBiCookie*, const char* unk1, uint unk2);
	$Method(0x008be4ed, RSActivateDialogue, FuBiCookie*);
	$Method(0x008bd110, RSCreateAndLaunchTalkFlick, FuBiCookie*, const Goid* unk1);
	$Method(0x008bd922, RSSelectConversation, FuBiCookie*, const char* unk1);
	$Method(0x008bcfd4, RSSelectConversation, FuBiCookie*, const Goid* unk1, const char* unk2);
	$Method(0x008bf3c7, AddMacroValue, void, const GPBString& unk1, const GPBString& unk2);
	$Method(0x008bc0dd, RCMarkInConversation, void, eActionOrigin unk1, const Goid* unk2);
	$Method(0x008bc1c5, RCMarkInDialogTransition, void, bool unk1);
	$Method(0x008bbb3f, RCSetCanTalk, void, bool unk1);
	$Method(0x008bce1b, ResetReferenceCount, void, const GPBString& unk1);
	$Method(0x008bc53a, RSMarkInConversation, void, eActionOrigin unk1, const Goid* unk2);
	$Method(0x008bc642, RSMarkInDialogTransition, void, bool unk1);
	$Method(0x008bdaa0, RSSetLastReply, void, const GPBString& unk1);
	$Method(0x008bc0d4, SSetCanTalk, void, bool unk1);
};
