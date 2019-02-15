#pragma once

enum eQueryTrait;

struct QtColl {
	DefineMethod(Add, 0x503c8b, void, Params(eQueryTrait unk1), Args(unk1));
	DefineMethod(Clear, 0x503905, void, NO_PARAMS, NO_ARGS);
};
