#pragma once

#include "FuBi.h"
#include "Player.h"

class UICharacterSelectSinglePlayer {
public:
	$Singleton(UICharacterSelectSinglePlayer, 0x00429e9c);

	$Method(0x00449537, RSGeneratePortrait, FuBiCookie*, const PlayerId* playerId);
	$Method(0x00449630, RCGeneratePortrait, FuBiCookie*, const PlayerId* playerId, uint unk2);
};
