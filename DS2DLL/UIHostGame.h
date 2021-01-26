#pragma once

class UIHostGame {
public:
	$Singleton(UIHostGame, 0x004243c5);

    // 0x00
    $Padding(0x00, 0x0c);
};

STATIC_ASSERT(sizeof(UIHostGame) == 12);
