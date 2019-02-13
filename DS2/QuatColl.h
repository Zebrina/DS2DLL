#pragma once

struct QuatColl {
	DefineConstMethod(Empty, 0x5034d5, bool, Params(), Args());
	/*QuatColl*/ private: const Quat& /*__thiscall*/ Get(int unk1) const; //0x005034e0
	DefineConstMethod(Size, 0x5034cc, int, Params(), Args());
	/*QuatColl*/ private: Quat& /*__thiscall*/ Get(int unk1); //0x005034ef
	DefineMethod(Append, 0x503c3d, void, Params(const Quat& unk1), Args(const Quat& unk1));
	DefineMethod(Set, 0x5034fe, void, Params(int unk1, const Quat& unk2), Args(int unk1, const Quat& unk2));
};
