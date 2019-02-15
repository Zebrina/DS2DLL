#pragma once

struct QuatColl {
	DefineConstMethod(Empty, 0x5034d5, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get, 0x5034e0, const Quat&, Params(int unk1), Args(unk1));
	DefineConstMethod(Size, 0x5034cc, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Get, 0x5034ef, Quat&, Params(int unk1), Args(unk1));
	DefineMethod(Append, 0x503c3d, void, Params(const Quat& unk1), Args(unk1));
	DefineMethod(Set, 0x5034fe, void, Params(int unk1, const Quat& unk2), Args(unk1, unk2));
};
