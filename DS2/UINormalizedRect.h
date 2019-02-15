#pragma once

#include "ClassMacros.h"

class UINormalizedRect {
public:
	DefineConstMethod(GetBottom, 0x502693, double, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLeft, 0x502697, double, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRight, 0x50269b, double, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTop, 0x502690, double, NO_PARAMS, NO_ARGS);
};
