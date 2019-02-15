#pragma once

#include "GPBString.h"

#include "ClassMacros.h"

class UIChat {
public:
	DefineSingleton(UIChat, 0x424395);

	DefineMethod(ClearInterface, 0x4d7372, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetInterface, 0x4d77f3, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
};
