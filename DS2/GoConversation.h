#pragma once

class GoConversation {
public:
	/*GoConversation*/ private: /*static*/ GoConversation* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00423aa5
	/*GoConversation*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoConversation* unk1); //0x00423a9c
	/*GoConversation*/ public: bool /*__thiscall*/ DoesConversationExist(const gpbstring<char>& unk1); //0x008bcd01
	/*GoConversation*/ public: bool /*__thiscall*/ GetCanTalk(); //0x008bda87
	/*GoConversation*/ public: bool /*__thiscall*/ HasChoice(const gpbstring<char>& unk1); //0x008c038c
	/*GoConversation*/ public: bool /*__thiscall*/ HasTalkFlick() const; //0x004243a1
	/*GoConversation*/ public: bool /*__thiscall*/ IsInConversation() const; //0x00423a80
	/*GoConversation*/ public: bool /*__thiscall*/ IsInConversationOrDialogTransition() const; //0x00423a88
	/*GoConversation*/ public: bool /*__thiscall*/ IsInDialogTransition() const; //0x00423a84
	/*GoConversation*/ public: const gpbstring<char>& /*__thiscall*/ GetLastReply() const; //0x00423a98
	/*GoConversation*/ public: const gpbstring<char>& /*__thiscall*/ GetSelectedConversation(); //0x008bd956
	/*GoConversation*/ public: const gpbstring<char>& /*__thiscall*/ GetTalkFlick() const; //0x008bc738
	/*GoConversation*/ public: const Goid_* /*__thiscall*/ GetListener() const; //0x00423a78
	/*GoConversation*/ public: const Scid_* /*__thiscall*/ GetConversationScid(); //0x00423a74
	/*GoConversation*/ public: eActionOrigin /*__thiscall*/ GetTalkOrigin() const; //0x00423a7c
	/*GoConversation*/ public: FuBi::Cookie__* /*__thiscall*/ RCActivateDialogue(eActionOrigin unk1, const Goid_* unk2, unsigned long unk3); //0x008be002
	/*GoConversation*/ public: FuBi::Cookie__* /*__thiscall*/ RCDeactivateDialogue(unsigned long unk1); //0x008bcad1
	/*GoConversation*/ public: FuBi::Cookie__* /*__thiscall*/ RCSelectConversation(const char* unk1, unsigned long unk2); //0x008bcd24
	/*GoConversation*/ public: FuBi::Cookie__* /*__thiscall*/ RSActivateDialogue(); //0x008be4ed
	/*GoConversation*/ public: FuBi::Cookie__* /*__thiscall*/ RSCreateAndLaunchTalkFlick(const Goid_* unk1); //0x008bd110
	/*GoConversation*/ public: FuBi::Cookie__* /*__thiscall*/ RSSelectConversation(const char* unk1); //0x008bd922
	/*GoConversation*/ public: FuBi::Cookie__* /*__thiscall*/ RSSelectConversation(const Goid_* unk1, const char* unk2); //0x008bcfd4
	/*GoConversation*/ public: void /*__thiscall*/ AddMacroValue(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x008bf3c7
	/*GoConversation*/ public: void /*__thiscall*/ RCMarkInConversation(eActionOrigin unk1, const Goid_* unk2); //0x008bc0dd
	/*GoConversation*/ public: void /*__thiscall*/ RCMarkInDialogTransition(bool unk1); //0x008bc1c5
	/*GoConversation*/ public: void /*__thiscall*/ RCSetCanTalk(bool unk1); //0x008bbb3f
	/*GoConversation*/ public: void /*__thiscall*/ ResetReferenceCount(const gpbstring<char>& unk1); //0x008bce1b
	/*GoConversation*/ public: void /*__thiscall*/ RSMarkInConversation(eActionOrigin unk1, const Goid_* unk2); //0x008bc53a
	/*GoConversation*/ public: void /*__thiscall*/ RSMarkInDialogTransition(bool unk1); //0x008bc642
	/*GoConversation*/ public: void /*__thiscall*/ RSSetLastReply(const gpbstring<char>& unk1); //0x008bdaa0
	/*GoConversation*/ public: void /*__thiscall*/ SSetCanTalk(bool unk1); //0x008bc0d4
};
