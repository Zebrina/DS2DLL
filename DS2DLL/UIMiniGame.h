#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "GoidScid.h"

class UIMiniGame {
public:
	$Singleton(UIMiniGame, 0x00474002);

	$Method(0x004a3ad3, SRegisterMiniGame, void, const Scid* unk1, const Goid* unk2, const GPBString& unk3, int unk4, float unk5, eMiniGame unk6, const Scid* unk7, const Scid* unk8);
	$Method(0x004a3764, RCRegisterMiniGame, FuBiCookie*, const Scid* unk1, const Goid* unk2, const GPBString& unk3, int unk4, float unk5, eMiniGame unk6, const Scid* unk7, const Scid* unk8);

	// 0x00
	$Padding(0x00, 0x0c);
};

STATIC_ASSERT(sizeof(UIMiniGame) >= 0x0c);
