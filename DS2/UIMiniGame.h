#pragma once

#include "ClassMacros.h"

class UIMiniGame {
public:
	DefineSingleton(UIMiniGame, 0x474002);

	/*UIMiniGame*/ private: /*static*/ UIMiniGame* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00474002
	/*UIMiniGame*/ public: FuBi::Cookie__* /*__thiscall*/ RCRegisterMiniGame(const Scid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3, int unk4, float unk5, eMiniGame unk6, const Scid_* unk7, const Scid_* unk8); //0x004a3764
	/*UIMiniGame*/ public: void /*__thiscall*/ SRegisterMiniGame(const Scid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3, int unk4, float unk5, eMiniGame unk6, const Scid_* unk7, const Scid_* unk8); //0x004a3ad3
};
