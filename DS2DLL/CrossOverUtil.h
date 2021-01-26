#pragma once

#include "GoidScid.h"

class CrossOverUtil {
public:
	$Singleton(CrossOverUtil, 0x004013d7);

	$Method(0x00401da0, ActivateMasterCode, void, const char* code);
	$Method(0x00401d70, HideCrossoverInterface, void);
	$Method(0x00402584, RCShowCrossoverInterface, void, uint unk1);
	$Method(0x0040240a, ShowCrossoverInterface, void);
	$Method(0x00402668, SShowCrossoverInterface, void, const Goid* unk1);

    $Padding(0x00, 0x0c);
};

STATIC_ASSERT(sizeof(CrossOverUtil) == 0x0c);
