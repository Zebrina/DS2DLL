#pragma once

#include "Enums.h"
#include "Job.h"

#include "ClassMacros.h"

struct Goid_;
struct Scid_;
struct SiegePos;

struct JobReq {
	DefineStaticMethod(FUBI_PodGetSize, 0x427fba, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalModifier, 0x428044, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalObject, 0x428033, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNotify, 0x428022, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalOrientation, 0x42806f, const Quat&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSECommandScid, 0x4280b2, const Scid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalPosition, 0x428055, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetOrigin, 0x427fef, eActionOrigin, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSlot, 0x42807f, eEquipSlot, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetJat, 0x427fbe, eJobAbstractType, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetQ, 0x427fcd, eJobQ, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetQPlace, 0x427fde, eQPlace, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetFloat1, 0x4280c3, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInt1, 0x428090, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInt2, 0x4280a1, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPlaceAfter, 0x428011, unsigned long, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPlaceBefore, 0x428000, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(SetFloat1, 0x4280c7, void, Params(float unk1), Args(unk1));
	DefineMethod(SetGoalModifier, 0x428048, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetGoalObject, 0x428037, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetGoalOrientation, 0x428073, void, Params(const Quat& unk1), Args(unk1));
	DefineMethod(SetGoalPosition, 0x428059, void, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(SetInt1, 0x428094, void, Params(int unk1), Args(unk1));
	DefineMethod(SetInt2, 0x4280a5, void, Params(int unk1), Args(unk1));
	DefineMethod(SetJat, 0x427fc1, void, Params(eJobAbstractType unk1), Args(unk1));
	DefineMethod(SetNotify, 0x428026, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetOrigin, 0x427ff3, void, Params(eActionOrigin unk1), Args(unk1));
	DefineMethod(SetPlaceAfter, 0x428015, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetPlaceBefore, 0x428004, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetQ, 0x427fd1, void, Params(eJobQ unk1), Args(unk1));
	DefineMethod(SetQPlace, 0x427fe2, void, Params(eQPlace unk1), Args(unk1));
	DefineMethod(SetSECommandScid, 0x4280b6, void, Params(const Scid_* unk1), Args(unk1));
	DefineMethod(SetSlot, 0x428083, void, Params(eEquipSlot unk1), Args(unk1));
};
