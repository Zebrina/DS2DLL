#pragma once

struct GopColl {
	DefineConstMethod(Empty, 0x5035a1, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(Has, 0x7ed5f4, bool, Params(Go* unk1), Args(unk1));
	DefineMethod(Remove, 0x7ed5ca, bool, Params(Go* unk1), Args(unk1));
	DefineMethod(Back, 0x5035d2, Go*, NO_PARAMS, NO_ARGS);
	DefineMethod(Front, 0x5035cd, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get, 0x5035ac, Go*, Params(int unk1), Args(unk1));
	DefineConstMethod(Size, 0x503598, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Add, 0x503c5b, void, Params(Go* unk1), Args(unk1));
	DefineMethod(Clean, 0x7ed616, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Clear, 0x5038f3, void, NO_PARAMS, NO_ARGS);
	DefineMethod(PopBack, 0x5035d9, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Set, 0x5035bb, void, Params(int unk1, Go* unk2), Args(unk1, unk2));
};
