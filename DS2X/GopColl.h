#pragma once

class Go;

class GopColl {
	DefineConstMethod(Empty, 0x5035a1, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Size, 0x503598, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Has, 0x7ed5f4, bool, Params(Go* go), Args(go));
	DefineConstMethod(Get, 0x5035ac, Go*, Params(int index), Args(index));
	DefineConstMethod(Front, 0x5035cd, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Back, 0x5035d2, Go*, NO_PARAMS, NO_ARGS);
	DefineMethod(Add, 0x503c5b, void, Params(Go* go), Args(go));
	DefineMethod(Set, 0x5035bb, void, Params(int index, Go* go), Args(index, go));
	DefineMethod(Remove, 0x7ed5ca, bool, Params(Go* go), Args(go));
	DefineMethod(PopBack, 0x5035d9, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Clean, 0x7ed616, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Clear, 0x5038f3, void, NO_PARAMS, NO_ARGS);

private:
	Go** coll;
	int size;
};
