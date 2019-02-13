#pragma once

class UINormalizedRect {
public:
	DefineConstMethod(GetBottom, 0x502693, double, Params(), Args());
	DefineConstMethod(GetLeft, 0x502697, double, Params(), Args());
	DefineConstMethod(GetRight, 0x50269b, double, Params(), Args());
	DefineConstMethod(GetTop, 0x502690, double, Params(), Args());
};
