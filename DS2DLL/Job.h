#pragma once

#include "Enums.h"
#include "Go.h"
#include "GoMind.h"
#include "SiegePos.h"

class Job {
public:
	$Method(0x0093d35e, CanOverrideAutoBehavior, bool);
	$Method(0x0093cd7c, EndRequested, bool);
	$Method(0x004677f0, GetJobSuccessful, bool);
	$Method(0x0093ce0c, InAtomicState, bool);
	$Method(0x0093cd5b, IsAIInterruptable, bool);
	$Method(0x0093cd19, IsAutoInterruptable, bool);
	$Method(0x004677cb, IsCleaningUp, bool);
	$Method(0x0093cd8f, IsDefensive, bool);
	$Method(0x0093ce02, IsFlickAssigned, bool);
	$Method(0x00467780, IsFlickLatched, bool);
	$Method(0x0093cd3a, IsHumanInterruptable, bool);
	$Method(0x004677e6, IsJobResultFailed, bool);
	$Method(0x004677dc, IsJobResultNoPath, bool);
	$Method(0x004677c3, IsMarkedForDeletion, bool);
	$Method(0x0093cd85, IsOffensive, bool);
	$Method(0x004677d1, IsShuttingDown, bool);
	$Method(0x0093cdf8, IsUserAssigned, bool);
	$Method(0x0093cda3, IsUsingMeleeSlot, bool);
	$Method(0x0093cd99, IsUsingSensors, bool);
	$ConstMethod(0x0093d193, GetGo, Go*);
	$ConstMethod(0x00467786, GetMind, GoMind*);
	$Method(0x00467791, GetGoalModifier, const Goid*);
	$Method(0x0046778d, GetGoalObject, const Goid*);
	$Method(0x0093d19d, GetGoid, const Goid*);
	$Method(0x004677b6, GetNotify, const Goid*);
	$Method(0x004677ba, GetQueueIconGoid, const Goid*);
	$ConstMethod(0x00467795, GetGoalOrientation, const Quat&);
	$ConstMethod(0x0093d3e3, GetGoalPosition, const SiegePos&);
	$Method(0x004677b2, GetInitPosition, const SiegePos&);
	$Method(0x0093cdc7, GetOrigin, eActionOrigin);
	$ConstMethod(0x00467799, GetGoalSlot, eEquipSlot);
	$ConstMethod(0x0046777d, GetJobAbstractType, eJobAbstractType);
	$Method(0x004677d8, GetJobResult, eJobResult);
	$ConstMethod(0x004677ab, GetFloat1, float);
	$Method(0x0093d462, GetJobTravelDistance, float);
	$ConstMethod(0x0046779d, GetInt1, int);
	$ConstMethod(0x004677a4, GetInt2, int);
	$ConstMethod(0x00467779, GetId, uint);
	$Method(0x0093ccfd, AddDefensiveTrait, void);
	$Method(0x0093ccf8, AddOffensiveTrait, void);
	$Method(0x0093ce4a, ClearTimer, void);
	$Method(0x0093d379, EnterAtomicState, void, float unk1);
	$Method(0x0093ce16, LeaveAtomicState, void);
	$Method(0x004677be, MarkCleaningUp, void);
	$Method(0x0093d1fb, MarkForDeletion, void);
	$Method(0x0093d1aa, MarkForDeletion, void, eJobResult unk1);
	$Method(0x0093d8f2, RequestEnd, void);
	$Method(0x0093cdba, SetGoalModifier, void, const Goid* unk1);
	$Method(0x0093cdad, SetGoalObject, void, const Goid* unk1);
	$Method(0x0046776c, SetStartedBySECommand, void, const Scid* unk1);
	$Method(0x0093d434, SetTimer, void, float unk1);
	$Method(0x0093cd44, SetTraitAIInterruptable, void, bool unk1);
	$Method(0x0093cd02, SetTraitAutoInterruptable, void, bool unk1);
	$Method(0x0093cd23, SetTraitHumanInterruptable, void, bool unk1);
	$Method(0x0093cd65, SetTraitUseSpatialSensors, void, bool unk1);
	$Method(0x0093ce53, TakesOver, void, Job* unk1);
};
