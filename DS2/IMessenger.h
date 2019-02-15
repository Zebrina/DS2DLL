#pragma once

#include "GPBString.h"

#include "ClassMacros.h"

class UIWindow;

class IMessenger {
public:
	DefineConstMethod(FUBI_RENAME_IsProcessingMessage, 0x5029f6, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_Notify, 0x5029ed, void, Params(const gpbstring<char>& unk1, UIWindow* unk2), Args(unk1, unk2));
};
