#pragma once

class UIEndGame {
public:
	$Singleton(UIEndGame, 0x004243bf);

    // 0x00
    $Padding(0x00, 0x18);
};

STATIC_ASSERT(sizeof(UIEndGame) == 0x18);
