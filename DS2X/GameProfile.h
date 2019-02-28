#pragma once

#include "GPBString.h"

class GameProfile {
public:
	DefineSingleton(GameProfile, 0x40a27d);

	DefineMethod(ProfileDialogOk, 0x41137b, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowProfileDialog, 0x4108fb, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(ShowProfileEditDialog, 0x410922, void, Params(const gpbstring<char>& unk1), Args(unk1));
};
