#pragma once

struct IntColl {
	DefineConstMethod(Empty, 0x50362d, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(Has, 0x7ed6e3, bool, Params(int unk1), Args(unk1));
	DefineMethod(Remove, 0x7ed6b9, bool, Params(int unk1), Args(unk1));
	DefineMethod(Back, 0x50365e, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Front, 0x503659, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get, 0x503638, int, Params(int unk1), Args(unk1));
	DefineConstMethod(Size, 0x503624, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Add, 0x503c7b, void, Params(int unk1), Args(unk1));
	DefineMethod(Clear, 0x5038ff, void, NO_PARAMS, NO_ARGS);
	DefineMethod(PopBack, 0x503665, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Set, 0x503647, void, Params(int unk1, int unk2), Args(unk1, unk2));
};
