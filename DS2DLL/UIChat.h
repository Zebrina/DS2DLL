#pragma once

#include "GPString.h"

class UIChat {
public:
	$Singleton(UIChat, 0x00424395);

	$Method(0x004d7372, ClearInterface, void);
	$Method(0x004d77f3, SetInterface, void, const GPBString& unk1, const GPBString& unk2);

    // 0x000
    $Padding(0x000, 0x12c);
};

STATIC_ASSERT(sizeof(UIChat) == 0x12c);
