#pragma once

class GoConversation {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x423aa5, GoConversation*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x423a9c, unsigned long, Params(GoConversation* unk1), Args(unk1));
	DefineMethod(DoesConversationExist, 0x8bcd01, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetCanTalk, 0x8bda87, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HasChoice, 0x8c038c, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(HasTalkFlick, 0x4243a1, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInConversation, 0x423a80, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInConversationOrDialogTransition, 0x423a88, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsInDialogTransition, 0x423a84, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLastReply, 0x423a98, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetSelectedConversation, 0x8bd956, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTalkFlick, 0x8bc738, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetListener, 0x423a78, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetConversationScid, 0x423a74, const Scid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTalkOrigin, 0x423a7c, eActionOrigin, NO_PARAMS, NO_ARGS);
	DefineMethod(RCActivateDialogue, 0x8be002, FuBi::Cookie__*, Params(eActionOrigin unk1, const Goid_* unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCDeactivateDialogue, 0x8bcad1, FuBi::Cookie__*, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCSelectConversation, 0x8bcd24, FuBi::Cookie__*, Params(const char* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RSActivateDialogue, 0x8be4ed, FuBi::Cookie__*, NO_PARAMS, NO_ARGS);
	DefineMethod(RSCreateAndLaunchTalkFlick, 0x8bd110, FuBi::Cookie__*, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RSSelectConversation, 0x8bd922, FuBi::Cookie__*, Params(const char* unk1), Args(unk1));
	DefineMethod(RSSelectConversation, 0x8bcfd4, FuBi::Cookie__*, Params(const Goid_* unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(AddMacroValue, 0x8bf3c7, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(RCMarkInConversation, 0x8bc0dd, void, Params(eActionOrigin unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RCMarkInDialogTransition, 0x8bc1c5, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetCanTalk, 0x8bbb3f, void, Params(bool unk1), Args(unk1));
	DefineMethod(ResetReferenceCount, 0x8bce1b, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RSMarkInConversation, 0x8bc53a, void, Params(eActionOrigin unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RSMarkInDialogTransition, 0x8bc642, void, Params(bool unk1), Args(unk1));
	DefineMethod(RSSetLastReply, 0x8bdaa0, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SSetCanTalk, 0x8bc0d4, void, Params(bool unk1), Args(unk1));
};
