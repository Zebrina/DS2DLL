#pragma once

#include "Enums.h"

struct TTMessages {
	TTMessages() = default;
	TTMessages(const TTMessages&) = default;
	~TTMessages() = default;

	TTMessages& operator=(const TTMessages&) = default;

	$ConstMethod(0x00409569, GetBeginSendTo, const Scid*);
	$ConstMethod(0x0040959c, GetEndSendTo, const Scid*);
	$ConstMethod(0x0040955a, GetBeginEvent, eWorldEvent);
	$ConstMethod(0x0040958b, GetEndEvent, eWorldEvent);
	$ConstMethod(0x0040957a, GetBeginDelay, float);
	$ConstMethod(0x004095ad, GetEndDelay, float);
	$Method(0x0040957e, SetBeginDelay, void, float unk1);
	$Method(0x0040955d, SetBeginEvent, void, eWorldEvent unk1);
	$Method(0x0040956d, SetBeginSendTo, void, const Scid* unk1);
	$Method(0x004095b1, SetEndDelay, void, float unk1);
	$Method(0x0040958f, SetEndEvent, void, eWorldEvent unk1);
	$Method(0x004095a0, SetEndSendTo, void, const Scid* unk1);

	// 0x00
	$Padding(0x00, 0x18);
};

// Size confirmed.
STATIC_ASSERT(sizeof(TTMessages) == 0x18);
