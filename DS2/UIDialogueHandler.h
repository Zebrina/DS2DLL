#pragma once

#include "ClassMacros.h"

class UIDialogueHandler {
public:
	DefineSingleton(UIDialogueHandler, 0x4243b3);

	/*UIDialogueHandler*/ private: /*static*/ UIDialogueHandler* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004243b3
	/*UIDialogueHandler*/ private: void /*__thiscall*/ OnConversationBoxClick(); //0x0046d986
	/*UIDialogueHandler*/ private: void /*__thiscall*/ Reply(const gpbstring<char>& unk1); //0x0047037c
	/*UIDialogueHandler*/ private: void /*__thiscall*/ ReplyMore(); //0x00470702
	/*UIDialogueHandler*/ private: void /*__thiscall*/ RSRunFlickChoice(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3); //0x0046e965
	/*UIDialogueHandler*/ private: void /*__thiscall*/ RSSendReqTalkEnd(const Goid_* unk1, const Goid_* unk2); //0x0046e4a7
	/*UIDialogueHandler*/ private: void /*__thiscall*/ RSSendReqTalkEnd(unsigned long unk1, unsigned long unk2); //0x0046df4c
	/*UIDialogueHandler*/ private: void /*__thiscall*/ RSSetButtonValue(const gpbstring<char>& unk1); //0x0046e3b0
	/*UIDialogueHandler*/ public: bool /*__thiscall*/ CanUseHireConversations(const Goid_* unk1, const Goid_* unk2); //0x0046ead7
	/*UIDialogueHandler*/ public: bool /*__thiscall*/ ExplicitExitDialogue(); //0x0046f4b3
	/*UIDialogueHandler*/ public: bool /*__thiscall*/ IsConversationActive(); //0x0046ec48
	/*UIDialogueHandler*/ public: void /*__thiscall*/ RCExplicitExitDialogue(unsigned long unk1); //0x00470193
	/*UIDialogueHandler*/ public: void /*__thiscall*/ RCSetNISReqTalkEnd(unsigned long unk1, bool unk2); //0x0046d9b7
	/*UIDialogueHandler*/ public: void /*__thiscall*/ SExplicitExitDialogue(unsigned long unk1); //0x00470797
};
