#pragma once

#include "GPBString.h"

class UIListbox;

class UIBuddyList {
public:
	DefineSingleton(UIBuddyList, 0x4d282b);

	DefineMethod(HasPedingMessages, 0x4d33d2, bool, Params(int unk1), Args(unk1));
	DefineMethod(HasPendingInvite, 0x4d33f6, bool, Params(int unk1), Args(unk1));
	DefineMethod(IsPendingBuddyAcceptance, 0x4d341d, bool, Params(int unk1), Args(unk1));
	DefineMethod(IsValidBuddy, 0x4d3392, bool, Params(int unk1), Args(unk1));
	DefineMethod(StartSearchQuery, 0x4d3642, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4, const gpbstring<char>& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(AddSelectedProfileToList, 0x4d4cad, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(CloseChatWindow, 0x4d2451, void, NO_PARAMS, NO_ARGS);
	DefineMethod(CloseInterface, 0x4d3380, void, NO_PARAMS, NO_ARGS);
	DefineMethod(OpenChatWindow, 0x4d4fad, void, Params(int unk1), Args(unk1));
	DefineMethod(RefreshInterface, 0x4d283c, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RemoveBuddyFromList, 0x4d3450, void, Params(int unk1), Args(unk1));
	DefineMethod(SendMessageToBuddy, 0x4d38ce, void, Params(int unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(SendMessageToFriendsOnline, 0x4d2f7e, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetInterface, 0x4d3236, void, Params(UIListbox* unk1), Args(unk1));
	DefineMethod(ShowBuddyRequest, 0x4d3919, void, Params(int unk1), Args(unk1));
};
