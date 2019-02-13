#pragma once

struct IntColl {
	DefineConstMethod(Empty, 0x50362d, bool, Params(), Args());
	DefineMethod(Has, 0x7ed6e3, bool, Params(int unk1), Args(int unk1));
	DefineMethod(Remove, 0x7ed6b9, bool, Params(int unk1), Args(int unk1));
	DefineMethod(Back, 0x50365e, int, Params(), Args());
	DefineMethod(Front, 0x503659, int, Params(), Args());
	DefineConstMethod(Get, 0x503638, int, Params(int unk1), Args(int unk1));
	DefineConstMethod(Size, 0x503624, int, Params(), Args());
	DefineMethod(Add, 0x503c7b, void, Params(int unk1), Args(int unk1));
	DefineMethod(Clear, 0x5038ff, void, Params(), Args());
	DefineMethod(PopBack, 0x503665, void, Params(), Args());
	DefineMethod(Set, 0x503647, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
};
