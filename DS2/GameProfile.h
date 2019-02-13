#pragma once

#include "ClassMacros.h"

class GameProfile {
public:
	DefineSingleton(GameProfile, 0x40a27d);

	/*GameProfile*/ private: /*static*/ GameProfile* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a27d
	DefineMethod(ProfileDialogOk, 0x41137b, void, Params(), Args());
	DefineMethod(ShowProfileDialog, 0x4108fb, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(ShowProfileEditDialog, 0x410922, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
};
