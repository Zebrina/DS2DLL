#pragma once

class TimeColl {
public:
	DefineConstMethod(Empty, 0x503520, bool, Params(), Args());
	DefineMethod(Get, 0x50352b, float, Params(int unk1), Args(int unk1));
	DefineConstMethod(Size, 0x503517, int, Params(), Args());
	DefineMethod(Append, 0x503c46, void, Params(float unk1), Args(float unk1));
	DefineMethod(Set, 0x50353a, void, Params(int unk1, float unk2), Args(int unk1, float unk2));
};
