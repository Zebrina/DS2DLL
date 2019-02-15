#pragma once

struct GoidColl {
	DefineConstMethod(Empty, 0x5035e7, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(Has, 0x7ed660, bool, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(Remove, 0x7ed636, bool, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(Back, 0x503618, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(Front, 0x503613, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get, 0x5035f2, const Goid_*, Params(int unk1), Args(unk1));
	DefineConstMethod(Size, 0x5035de, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Add, 0x503c6b, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(Clean, 0x7ed682, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Clear, 0x5038f9, void, NO_PARAMS, NO_ARGS);
	DefineMethod(PopBack, 0x50361f, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Set, 0x503601, void, Params(int unk1, const Goid_* unk2), Args(unk1, unk2));
};
