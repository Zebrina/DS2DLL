#pragma once

#include "ClassMacros.h"

class UIMessage {
public:
	DefineConstMethod(GetCode, 0x5029d6, eUIMessage, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetKey, 0x5029d9, int, NO_PARAMS, NO_ARGS);
	DefineMethod(SetKey, 0x5029de, void, Params(int unk1), Args(unk1));
};
