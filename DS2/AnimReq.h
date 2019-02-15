#pragma once

#include "Enums.h"

struct AnimReq {
	DefineStaticMethod(FUBI_PodGetSize, 0x47246a, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReqChore, 0x47246e, eAnimChore, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReqStance, 0x47248e, eAnimStance, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReqSpeed, 0x4724c1, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReqSubAnim, 0x47249f, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReqBlock, 0x47247d, unsigned long, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetReqFlags, 0x4724b0, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(SetReqBlock, 0x472481, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetReqChore, 0x472471, void, Params(eAnimChore unk1), Args(unk1));
	DefineMethod(SetReqFlags, 0x4724b4, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetReqSpeed, 0x4724c5, void, Params(float unk1), Args(unk1));
	DefineMethod(SetReqStance, 0x472492, void, Params(eAnimStance unk1), Args(unk1));
	DefineMethod(SetReqSubAnim, 0x4724a3, void, Params(int unk1), Args(unk1));
};
