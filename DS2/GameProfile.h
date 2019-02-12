#pragma once

#include "ClassMacros.h"

class GameProfile {
public:
	DefineSingleton(GameProfile, 0x40a27d);

	/*GameProfile*/ private: /*static*/ GameProfile* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a27d
	/*GameProfile*/ public: void /*__thiscall*/ ProfileDialogOk(); //0x0041137b
	/*GameProfile*/ public: void /*__thiscall*/ ShowProfileDialog(const gpbstring<char>& unk1); //0x004108fb
	/*GameProfile*/ public: void /*__thiscall*/ ShowProfileEditDialog(const gpbstring<char>& unk1); //0x00410922
};
