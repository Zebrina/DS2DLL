#pragma once

#include "GPString.h"

class UIListbox;

class UIBuddyList {
public:
	$Singleton(UIBuddyList, 0x004d282b);

	$Method(0x004d33d2, HasPedingMessages, bool, int unk1);
	$Method(0x004d33f6, HasPendingInvite, bool, int unk1);
	$Method(0x004d341d, IsPendingBuddyAcceptance, bool, int unk1);
	$Method(0x004d3392, IsValidBuddy, bool, int unk1);
	$Method(0x004d3642, StartSearchQuery, bool, const GPBString& unk1, const GPBString& unk2, const GPBString& unk3, const GPBString& unk4, const GPBString& unk5);
	$Method(0x004d4cad, AddSelectedProfileToList, void, const GPBString& unk1);
	$Method(0x004d2451, CloseChatWindow, void);
	$Method(0x004d3380, CloseInterface, void);
	$Method(0x004d4fad, OpenChatWindow, void, int unk1);
	$Method(0x004d283c, RefreshInterface, void);
	$Method(0x004d3450, RemoveBuddyFromList, void, int unk1);
	$Method(0x004d38ce, SendMessageToBuddy, void, int unk1, const GPBString& unk2);
	$Method(0x004d2f7e, SendMessageToFriendsOnline, void, const GPBString& unk1);
	$Method(0x004d3236, SetInterface, void, UIListbox* unk1);
	$Method(0x004d3919, ShowBuddyRequest, void, int unk1);

    // 0x00
    $Padding(0x00, 0x2c);
};

STATIC_ASSERT(sizeof(UIBuddyList) == 0x2c);
