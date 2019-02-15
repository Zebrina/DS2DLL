#pragma once

#include "ClassMacros.h"

struct TTMessages {
	DefineStaticMethod(FUBI_PodGetSize, 0x409556, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBeginSendTo, 0x409569, const Scid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEndSendTo, 0x40959c, const Scid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBeginEvent, 0x40955a, eWorldEvent, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEndEvent, 0x40958b, eWorldEvent, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBeginDelay, 0x40957a, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEndDelay, 0x4095ad, float, NO_PARAMS, NO_ARGS);
	DefineMethod(SetBeginDelay, 0x40957e, void, Params(float unk1), Args(unk1));
	DefineMethod(SetBeginEvent, 0x40955d, void, Params(eWorldEvent unk1), Args(unk1));
	DefineMethod(SetBeginSendTo, 0x40956d, void, Params(const Scid_* unk1), Args(unk1));
	DefineMethod(SetEndDelay, 0x4095b1, void, Params(float unk1), Args(unk1));
	DefineMethod(SetEndEvent, 0x40958f, void, Params(eWorldEvent unk1), Args(unk1));
	DefineMethod(SetEndSendTo, 0x4095a0, void, Params(const Scid_* unk1), Args(unk1));
};
