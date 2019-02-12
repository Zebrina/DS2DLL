#pragma once

#include "ClassMacros.h"

class UIBuddyList {
public:
	DefineSingleton(UIBuddyList, 0x4d282b);

	/*UIBuddyList*/ private: /*static*/ UIBuddyList* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004d282b
	/*UIBuddyList*/ private: bool /*__thiscall*/ HasPedingMessages(int unk1); //0x004d33d2
	/*UIBuddyList*/ private: bool /*__thiscall*/ HasPendingInvite(int unk1); //0x004d33f6
	/*UIBuddyList*/ private: bool /*__thiscall*/ IsPendingBuddyAcceptance(int unk1); //0x004d341d
	/*UIBuddyList*/ private: bool /*__thiscall*/ IsValidBuddy(int unk1); //0x004d3392
	/*UIBuddyList*/ private: bool /*__thiscall*/ StartSearchQuery(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4, const gpbstring<char>& unk5); //0x004d3642
	/*UIBuddyList*/ private: void /*__thiscall*/ AddSelectedProfileToList(const gpbstring<char>& unk1); //0x004d4cad
	/*UIBuddyList*/ private: void /*__thiscall*/ CloseChatWindow(); //0x004d2451
	/*UIBuddyList*/ private: void /*__thiscall*/ CloseInterface(); //0x004d3380
	/*UIBuddyList*/ private: void /*__thiscall*/ OpenChatWindow(int unk1); //0x004d4fad
	/*UIBuddyList*/ private: void /*__thiscall*/ RefreshInterface(); //0x004d283c
	/*UIBuddyList*/ private: void /*__thiscall*/ RemoveBuddyFromList(int unk1); //0x004d3450
	/*UIBuddyList*/ private: void /*__thiscall*/ SendMessageToBuddy(int unk1, const gpbstring<char>& unk2); //0x004d38ce
	/*UIBuddyList*/ private: void /*__thiscall*/ SendMessageToFriendsOnline(const gpbstring<char>& unk1); //0x004d2f7e
	/*UIBuddyList*/ private: void /*__thiscall*/ SetInterface(UIListbox* unk1); //0x004d3236
	/*UIBuddyList*/ private: void /*__thiscall*/ ShowBuddyRequest(int unk1); //0x004d3919
};
