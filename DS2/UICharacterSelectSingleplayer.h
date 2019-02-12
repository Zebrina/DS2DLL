#pragma once

#include "ClassMacros.h"

class UICharacterSelectSinglePlayer {
public:
	DefineSingleton(UICharacterSelectSinglePlayer, 0x429e9c);

	/*UICharacterSelectSinglePlayer*/ private: /*static*/ UICharacterSelectSinglePlayer* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429e9c
	/*UICharacterSelectSinglePlayer*/ private: FuBi::Cookie__* /*__thiscall*/ RCGeneratePortrait(const PlayerId_* unk1, unsigned long unk2); //0x00449630
	/*UICharacterSelectSinglePlayer*/ private: FuBi::Cookie__* /*__thiscall*/ RSGeneratePortrait(const PlayerId_* unk1); //0x00449537
};
