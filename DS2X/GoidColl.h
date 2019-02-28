#pragma once

struct Goid_;

class GoidColl {
public:
	DefineConstMethod(Empty, 0x5035e7, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Size, 0x5035de, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Has, 0x7ed660, bool, Params(const Goid_* goid), Args(goid));
	DefineConstMethod(Get, 0x5035f2, const Goid_*, Params(int index), Args(index));
	DefineConstMethod(Front, 0x503613, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Back, 0x503618, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(Add, 0x503c6b, void, Params(const Goid_* goid), Args(goid));
	DefineMethod(Set, 0x503601, void, Params(int index, const Goid_* goid), Args(index, goid));
	DefineMethod(Remove, 0x7ed636, bool, Params(const Goid_* goid), Args(goid));
	DefineMethod(PopBack, 0x50361f, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Clean, 0x7ed682, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Clear, 0x5038f9, void, NO_PARAMS, NO_ARGS);

private:
	Goid_** coll;
	int size;
};
