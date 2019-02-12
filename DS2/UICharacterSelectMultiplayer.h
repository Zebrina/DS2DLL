#pragma once

#include "ClassMacros.h"

class UICharacterSelectMultiPlayer {
public:
	DefineSingleton(UICharacterSelectMultiPlayer, 0x42439b);

	/*UICharacterSelectMultiPlayer*/ private: /*static*/ UICharacterSelectMultiPlayer* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0042439b
	/*UICharacterSelectMultiPlayer*/ private: FuBi::Cookie__* /*__thiscall*/ RCGeneratePortrait(const PlayerId_* unk1, unsigned long unk2); //0x004d531c
	/*UICharacterSelectMultiPlayer*/ private: FuBi::Cookie__* /*__thiscall*/ RSGeneratePortrait(const PlayerId_* unk1); //0x004d5223
};
