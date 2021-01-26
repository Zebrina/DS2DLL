#pragma once

#include "GPString.h"
#include "Player.h"

class UISkritSupport {
public:
	$Singleton(UISkritSupport, 0x0045e356);

	$Method(0x004633f2, RCHideInterfaceByPlayer, void, const GPBString& unk1, const PlayerId* unk2);
	$Method(0x004632c7, RCShowInterfaceByPlayer, void, const GPBString& unk1, const PlayerId* unk2);
	$Method(0x00463620, RSHideInterfaceByPlayer, void, const GPBString& unk1, const PlayerId* unk2);
	$Method(0x00463533, RSShowInterfaceByPlayer, void, const GPBString& unk1, const PlayerId* unk2);

    // No members.
};

STATIC_ASSERT(sizeof(UISkritSupport) == 0x01);
