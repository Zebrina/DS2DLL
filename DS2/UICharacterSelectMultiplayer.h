#pragma once

#include "ClassMacros.h"

class UICharacterSelectMultiPlayer {
public:
	DefineSingleton(UICharacterSelectMultiPlayer, 0x42439b);

	/*UICharacterSelectMultiPlayer*/ private: /*static*/ UICharacterSelectMultiPlayer* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0042439b
	DefineMethod(RCGeneratePortrait, 0x4d531c, FuBi::Cookie__*, Params(const PlayerId_* unk1, unsigned long unk2), Args(const PlayerId_* unk1, unsigned long unk2));
	DefineMethod(RSGeneratePortrait, 0x4d5223, FuBi::Cookie__*, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
};
