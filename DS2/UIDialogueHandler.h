#pragma once

#include "ClassMacros.h"

class UIDialogueHandler {
public:
	DefineSingleton(UIDialogueHandler, 0x4243b3);

	DefineMethod(OnConversationBoxClick, 0x46d986, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Reply, 0x47037c, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(ReplyMore, 0x470702, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RSRunFlickChoice, 0x46e965, void, Params(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSSendReqTalkEnd, 0x46e4a7, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RSSendReqTalkEnd, 0x46df4c, void, Params(unsigned long unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RSSetButtonValue, 0x46e3b0, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(CanUseHireConversations, 0x46ead7, bool, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(ExplicitExitDialogue, 0x46f4b3, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsConversationActive, 0x46ec48, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(RCExplicitExitDialogue, 0x470193, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCSetNISReqTalkEnd, 0x46d9b7, void, Params(unsigned long unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SExplicitExitDialogue, 0x470797, void, Params(unsigned long unk1), Args(unk1));
};
