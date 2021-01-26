#pragma once

#include "GPString.h"

class UIDialogueHandler {
public:
	$Singleton(UIDialogueHandler, 0x004243b3);

	$Method(0x0046d986, OnConversationBoxClick, void);
	$Method(0x0047037c, Reply, void, const GPBString& unk1);
	$Method(0x00470702, ReplyMore, void);
	$Method(0x0046e965, RSRunFlickChoice, void, const GPBString& unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x0046e4a7, RSSendReqTalkEnd, void, const Goid* unk1, const Goid* unk2);
	$Method(0x0046df4c, RSSendReqTalkEnd, void, uint unk1, uint unk2);
	$Method(0x0046e3b0, RSSetButtonValue, void, const GPBString& unk1);
	$Method(0x0046ead7, CanUseHireConversations, bool, const Goid* unk1, const Goid* unk2);
	$Method(0x0046f4b3, ExplicitExitDialogue, bool);
	$Method(0x0046ec48, IsConversationActive, bool);
	$Method(0x00470193, RCExplicitExitDialogue, void, uint unk1);
	$Method(0x0046d9b7, RCSetNISReqTalkEnd, void, uint unk1, bool unk2);
	$Method(0x00470797, SExplicitExitDialogue, void, uint unk1);

    // 0x00
    $Padding(0x00, 0x5c);
    // 0x5c
    bool b5C = false;
    bool b5D;
    bool b5E;
    bool b5F;
    // 0x60
    $Padding(0x60, 0x68);
    // 0x68
    bool b68 = false;
    bool b69 = false;
    bool b6A = false;
    bool b6B = false;
    bool b6C = false;
    bool b6D = false;
    bool b6E = false;
    bool b6F;
    // 0x70
    $Padding(0x70, 0x78);
    // 0x78
    hexcolorcode speakerColor;
    // 0x7c
    hexcolorcode chapterColor;
    // 0x80
    hexcolorcode activeQuestColor;
    // 0x84
    hexcolorcode completedQuestColor;
    // 0x88
    bool b88 = false;
    bool b89 = false;
    bool b8A = false;
    bool b8B = false;
    // 0xbc
    bool b8C = false;
    bool b8D = false;
    bool b8E = false;
    bool b8F = false;
    // 0x90
    bool b90 = false;
    bool b91;
    bool b92;
    bool b93;
};

STATIC_ASSERT(sizeof(UIDialogueHandler) == 0x94);
STATIC_ASSERT_OFFSETOF(UIDialogueHandler, b5C, 0x5c);
STATIC_ASSERT_OFFSETOF(UIDialogueHandler, b68, 0x68);
STATIC_ASSERT_OFFSETOF(UIDialogueHandler, b88, 0x88);
STATIC_ASSERT_OFFSETOF(UIDialogueHandler, b90, 0x90);
