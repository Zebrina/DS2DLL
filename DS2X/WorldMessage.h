#pragma once

#include "Enums.h"



struct Goid_;
struct Scid_;

class WorldMessage {
public:
	DefineStaticMethod(FUBI_PodGetSize, 0x408327, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasEvent, 0x408302, bool, Params(eWorldEvent unk1), Args(unk1));
	DefineConstMethod(GetSendFrom, 0x40831b, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSendTo, 0x40831f, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSendToScid, 0x408323, const Scid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetWorldEvent, 0x4082ff, eWorldEvent, NO_PARAMS, NO_ARGS);
	DefineConstMethod(FUBI_RENAME_GetData1, 0x408317, int, NO_PARAMS, NO_ARGS);
};
