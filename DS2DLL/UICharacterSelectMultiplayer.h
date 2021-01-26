#pragma once

#include "FuBi.h"
#include "Player.h"

class UICharacterSelectMultiPlayer {
public:
	$Singleton(UICharacterSelectMultiPlayer, 0x0042439b);

	$Method(0x004d5223, RSGeneratePortrait, FuBiCookie*, const PlayerId* playerId);
	$Method(0x004d531c, RCGeneratePortrait, FuBiCookie*, const PlayerId* playerId, uint unk2);

    // 0x000
    $Padding(0x000, 0x120);
};

STATIC_ASSERT(sizeof(UICharacterSelectMultiPlayer) == 0x120);
