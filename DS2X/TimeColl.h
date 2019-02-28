#pragma once

class TimeColl {
public:
	DefineConstMethod(Empty, 0x503520, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Size, 0x503517, int, NO_PARAMS, NO_ARGS);
	DefineMethod(Get, 0x50352b, float, Params(int index), Args(index));
	DefineMethod(Set, 0x50353a, void, Params(int index, float newItem), Args(index, newItem));
	DefineMethod(Append, 0x503c46, void, Params(float newItem), Args(newItem));
};
