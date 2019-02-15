#pragma once

#include "ClassMacros.h"

class Go;
class GoMind;
struct Goid_;
struct SiegePos;

enum eJobQ {

};

class Job {
public:
	DefineMethod(CanOverrideAutoBehavior, 0x93d35e, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(EndRequested, 0x93cd7c, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetJobSuccessful, 0x4677f0, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(InAtomicState, 0x93ce0c, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsAIInterruptable, 0x93cd5b, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsAutoInterruptable, 0x93cd19, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsCleaningUp, 0x4677cb, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsDefensive, 0x93cd8f, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsFlickAssigned, 0x93ce02, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsFlickLatched, 0x467780, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsHumanInterruptable, 0x93cd3a, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsJobResultFailed, 0x4677e6, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsJobResultNoPath, 0x4677dc, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsMarkedForDeletion, 0x4677c3, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsOffensive, 0x93cd85, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsShuttingDown, 0x4677d1, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsUserAssigned, 0x93cdf8, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsUsingMeleeSlot, 0x93cda3, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsUsingSensors, 0x93cd99, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGo, 0x93d193, Go*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMind, 0x467786, GoMind*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetGoalModifier, 0x467791, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetGoalObject, 0x46778d, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetGoid, 0x93d19d, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetNotify, 0x4677b6, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineMethod(GetQueueIconGoid, 0x4677ba, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalOrientation, 0x467795, const Quat&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalPosition, 0x93d3e3, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetInitPosition, 0x4677b2, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetOrigin, 0x93cdc7, eActionOrigin, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalSlot, 0x467799, eEquipSlot, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetJobAbstractType, 0x46777d, eJobAbstractType, NO_PARAMS, NO_ARGS);
	DefineMethod(GetJobResult, 0x4677d8, eJobResult, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetFloat1, 0x4677ab, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetJobTravelDistance, 0x93d462, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInt1, 0x46779d, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetInt2, 0x4677a4, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetId, 0x467779, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(AddDefensiveTrait, 0x93ccfd, void, NO_PARAMS, NO_ARGS);
	DefineMethod(AddOffensiveTrait, 0x93ccf8, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ClearTimer, 0x93ce4a, void, NO_PARAMS, NO_ARGS);
	DefineMethod(EnterAtomicState, 0x93d379, void, Params(float unk1), Args(unk1));
	DefineMethod(LeaveAtomicState, 0x93ce16, void, NO_PARAMS, NO_ARGS);
	DefineMethod(MarkCleaningUp, 0x4677be, void, NO_PARAMS, NO_ARGS);
	DefineMethod(MarkForDeletion, 0x93d1fb, void, NO_PARAMS, NO_ARGS);
	DefineMethod(MarkForDeletion, 0x93d1aa, void, Params(eJobResult unk1), Args(unk1));
	DefineMethod(RequestEnd, 0x93d8f2, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetGoalModifier, 0x93cdba, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetGoalObject, 0x93cdad, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetStartedBySECommand, 0x46776c, void, Params(const Scid_* unk1), Args(unk1));
	DefineMethod(SetTimer, 0x93d434, void, Params(float unk1), Args(unk1));
	DefineMethod(SetTraitAIInterruptable, 0x93cd44, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetTraitAutoInterruptable, 0x93cd02, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetTraitHumanInterruptable, 0x93cd23, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetTraitUseSpatialSensors, 0x93cd65, void, Params(bool unk1), Args(unk1));
	DefineMethod(TakesOver, 0x93ce53, void, Params(Job* unk1), Args(unk1));
};
