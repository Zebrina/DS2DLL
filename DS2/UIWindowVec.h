#pragma once

class UIWindowVec {
public:
	DefineConstMethod(Empty, 0x50356d, bool, Params(), Args());
	DefineConstMethod(Get, 0x503a2e, UIWindow*, Params(int unk1), Args(int unk1));
	DefineConstMethod(Size, 0x503568, int, Params(), Args());
	DefineMethod(Add, 0x504023, void, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineMethod(Clear, 0x503c56, void, Params(), Args());
	DefineMethod(Set, 0x503a40, void, Params(int unk1, UIWindow* unk2), Args(int unk1, UIWindow* unk2));
};