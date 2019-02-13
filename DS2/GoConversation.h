#pragma once

class GoConversation {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x423aa5, GoConversation*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoConversation*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoConversation* unk1); //0x00423a9c
	DefineMethod(DoesConversationExist, 0x8bcd01, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetCanTalk, 0x8bda87, bool, Params(), Args());
	DefineMethod(HasChoice, 0x8c038c, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineConstMethod(HasTalkFlick, 0x4243a1, bool, Params(), Args());
	DefineConstMethod(IsInConversation, 0x423a80, bool, Params(), Args());
	DefineConstMethod(IsInConversationOrDialogTransition, 0x423a88, bool, Params(), Args());
	DefineConstMethod(IsInDialogTransition, 0x423a84, bool, Params(), Args());
	/*GoConversation*/ public: const gpbstring<char>& /*__thiscall*/ GetLastReply() const; //0x00423a98
	/*GoConversation*/ public: const gpbstring<char>& /*__thiscall*/ GetSelectedConversation(); //0x008bd956
	/*GoConversation*/ public: const gpbstring<char>& /*__thiscall*/ GetTalkFlick() const; //0x008bc738
	/*GoConversation*/ public: const Goid_* /*__thiscall*/ GetListener() const; //0x00423a78
	/*GoConversation*/ public: const Scid_* /*__thiscall*/ GetConversationScid(); //0x00423a74
	DefineConstMethod(GetTalkOrigin, 0x423a7c, eActionOrigin, Params(), Args());
	DefineMethod(RCActivateDialogue, 0x8be002, FuBi::Cookie__*, Params(eActionOrigin unk1, const Goid_* unk2, unsigned long unk3), Args(eActionOrigin unk1, const Goid_* unk2, unsigned long unk3));
	DefineMethod(RCDeactivateDialogue, 0x8bcad1, FuBi::Cookie__*, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCSelectConversation, 0x8bcd24, FuBi::Cookie__*, Params(const char* unk1, unsigned long unk2), Args(const char* unk1, unsigned long unk2));
	DefineMethod(RSActivateDialogue, 0x8be4ed, FuBi::Cookie__*, Params(), Args());
	DefineMethod(RSCreateAndLaunchTalkFlick, 0x8bd110, FuBi::Cookie__*, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSSelectConversation, 0x8bd922, FuBi::Cookie__*, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(RSSelectConversation, 0x8bcfd4, FuBi::Cookie__*, Params(const Goid_* unk1, const char* unk2), Args(const Goid_* unk1, const char* unk2));
	DefineMethod(AddMacroValue, 0x8bf3c7, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(RCMarkInConversation, 0x8bc0dd, void, Params(eActionOrigin unk1, const Goid_* unk2), Args(eActionOrigin unk1, const Goid_* unk2));
	DefineMethod(RCMarkInDialogTransition, 0x8bc1c5, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetCanTalk, 0x8bbb3f, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(ResetReferenceCount, 0x8bce1b, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RSMarkInConversation, 0x8bc53a, void, Params(eActionOrigin unk1, const Goid_* unk2), Args(eActionOrigin unk1, const Goid_* unk2));
	DefineMethod(RSMarkInDialogTransition, 0x8bc642, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RSSetLastReply, 0x8bdaa0, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SSetCanTalk, 0x8bc0d4, void, Params(bool unk1), Args(bool unk1));
};
