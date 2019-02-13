#pragma once

struct GopColl {
	DefineConstMethod(Empty, 0x5035a1, bool, Params(), Args());
	DefineMethod(Has, 0x7ed5f4, bool, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(Remove, 0x7ed5ca, bool, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(Back, 0x5035d2, Go*, Params(), Args());
	DefineMethod(Front, 0x5035cd, Go*, Params(), Args());
	DefineConstMethod(Get, 0x5035ac, Go*, Params(int unk1), Args(int unk1));
	DefineConstMethod(Size, 0x503598, int, Params(), Args());
	DefineMethod(Add, 0x503c5b, void, Params(Go* unk1), Args(Go* unk1));
	DefineMethod(Clean, 0x7ed616, void, Params(), Args());
	DefineMethod(Clear, 0x5038f3, void, Params(), Args());
	DefineMethod(PopBack, 0x5035d9, void, Params(), Args());
	DefineMethod(Set, 0x5035bb, void, Params(int unk1, Go* unk2), Args(int unk1, Go* unk2));
};
