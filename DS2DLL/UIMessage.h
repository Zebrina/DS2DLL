#pragma once

#include "Enums.h"

class UIMessage {
public:
	$ConstMethod(0x005029d6, GetCode, eUIMessage);
	$ConstMethod(0x005029d9, GetKey, int);
	$Method(0x005029de, SetKey, void, int key);

private:
    // 0x00
    eUIMessage code;
    // 0x04
    $Padding(0x04, 0x08);
    // 0x08
    short key;
};
