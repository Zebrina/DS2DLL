#pragma once

#include "ClassMacros.h"

class UICharacterSelectSinglePlayer {
public:
	DefineSingleton(UICharacterSelectSinglePlayer, 0x429e9c);

	/*UICharacterSelectSinglePlayer*/ private: /*static*/ UICharacterSelectSinglePlayer* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429e9c
	DefineMethod(RCGeneratePortrait, 0x449630, FuBi::Cookie__*, Params(const PlayerId_* unk1, unsigned long unk2), Args(const PlayerId_* unk1, unsigned long unk2));
	DefineMethod(RSGeneratePortrait, 0x449537, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
};
