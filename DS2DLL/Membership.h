#pragma once

#include "GPString.h"

class Membership {
public:
	$ConstMethod(0x0080645e, Contains, bool, const GPBString& unk1);
	$ConstMethod(0x008040c0, ContainsAll, bool, const Membership& unk1);
	$ConstMethod(0x0080408a, ContainsAny, bool, const Membership& unk1);

	// Size NOT confirmed.
	// 0x00
	$Padding(0x00, 0x10);
};
