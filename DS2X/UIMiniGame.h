#pragma once

#include "FuBi.h"



struct Goid_;
struct Scid_;

enum eMiniGame {

};

class UIMiniGame {
public:
	DefineSingleton(UIMiniGame, 0x474002);

	DefineMethod(RCRegisterMiniGame, 0x4a3764, FuBi::Cookie__*, Params(const Scid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3, int unk4, float unk5, eMiniGame unk6, const Scid_* unk7, const Scid_* unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
	DefineMethod(SRegisterMiniGame, 0x4a3ad3, void, Params(const Scid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3, int unk4, float unk5, eMiniGame unk6, const Scid_* unk7, const Scid_* unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
};
