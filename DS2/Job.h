#pragma once

class Job {
public:
	DefineMethod(CanOverrideAutoBehavior, 0x93d35e, bool, Params(), Args());
	DefineMethod(EndRequested, 0x93cd7c, bool, Params(), Args());
	DefineMethod(GetJobSuccessful, 0x4677f0, bool, Params(), Args());
	DefineMethod(InAtomicState, 0x93ce0c, bool, Params(), Args());
	DefineMethod(IsAIInterruptable, 0x93cd5b, bool, Params(), Args());
	DefineMethod(IsAutoInterruptable, 0x93cd19, bool, Params(), Args());
	DefineMethod(IsCleaningUp, 0x4677cb, bool, Params(), Args());
	DefineMethod(IsDefensive, 0x93cd8f, bool, Params(), Args());
	DefineMethod(IsFlickAssigned, 0x93ce02, bool, Params(), Args());
	DefineMethod(IsFlickLatched, 0x467780, bool, Params(), Args());
	DefineMethod(IsHumanInterruptable, 0x93cd3a, bool, Params(), Args());
	DefineMethod(IsJobResultFailed, 0x4677e6, bool, Params(), Args());
	DefineMethod(IsJobResultNoPath, 0x4677dc, bool, Params(), Args());
	DefineMethod(IsMarkedForDeletion, 0x4677c3, bool, Params(), Args());
	DefineMethod(IsOffensive, 0x93cd85, bool, Params(), Args());
	DefineMethod(IsShuttingDown, 0x4677d1, bool, Params(), Args());
	DefineMethod(IsUserAssigned, 0x93cdf8, bool, Params(), Args());
	DefineMethod(IsUsingMeleeSlot, 0x93cda3, bool, Params(), Args());
	DefineMethod(IsUsingSensors, 0x93cd99, bool, Params(), Args());
	DefineConstMethod(GetGo, 0x93d193, Go*, Params(), Args());
	DefineConstMethod(GetMind, 0x467786, GoMind*, Params(), Args());
	/*Job*/ public: const Goid_* /*__thiscall*/ GetGoalModifier(); //0x00467791
	/*Job*/ public: const Goid_* /*__thiscall*/ GetGoalObject(); //0x0046778d
	/*Job*/ public: const Goid_* /*__thiscall*/ GetGoid(); //0x0093d19d
	/*Job*/ public: const Goid_* /*__thiscall*/ GetNotify(); //0x004677b6
	/*Job*/ public: const Goid_* /*__thiscall*/ GetQueueIconGoid(); //0x004677ba
	/*Job*/ public: const Quat& /*__thiscall*/ GetGoalOrientation() const; //0x00467795
	/*Job*/ public: const SiegePos& /*__thiscall*/ GetGoalPosition() const; //0x0093d3e3
	/*Job*/ public: const SiegePos& /*__thiscall*/ GetInitPosition(); //0x004677b2
	DefineMethod(GetOrigin, 0x93cdc7, eActionOrigin, Params(), Args());
	DefineConstMethod(GetGoalSlot, 0x467799, eEquipSlot, Params(), Args());
	DefineConstMethod(GetJobAbstractType, 0x46777d, eJobAbstractType, Params(), Args());
	DefineMethod(GetJobResult, 0x4677d8, eJobResult, Params(), Args());
	DefineConstMethod(GetFloat1, 0x4677ab, float, Params(), Args());
	DefineMethod(GetJobTravelDistance, 0x93d462, float, Params(), Args());
	DefineConstMethod(GetInt1, 0x46779d, int, Params(), Args());
	DefineConstMethod(GetInt2, 0x4677a4, int, Params(), Args());
	/*Job*/ public: unsigned long /*__thiscall*/ GetId() const; //0x00467779
	DefineMethod(AddDefensiveTrait, 0x93ccfd, void, Params(), Args());
	DefineMethod(AddOffensiveTrait, 0x93ccf8, void, Params(), Args());
	DefineMethod(ClearTimer, 0x93ce4a, void, Params(), Args());
	DefineMethod(EnterAtomicState, 0x93d379, void, Params(float unk1), Args(float unk1));
	DefineMethod(LeaveAtomicState, 0x93ce16, void, Params(), Args());
	DefineMethod(MarkCleaningUp, 0x4677be, void, Params(), Args());
	DefineMethod(MarkForDeletion, 0x93d1fb, void, Params(), Args());
	DefineMethod(MarkForDeletion, 0x93d1aa, void, Params(eJobResult unk1), Args(eJobResult unk1));
	DefineMethod(RequestEnd, 0x93d8f2, void, Params(), Args());
	DefineMethod(SetGoalModifier, 0x93cdba, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetGoalObject, 0x93cdad, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetStartedBySECommand, 0x46776c, void, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineMethod(SetTimer, 0x93d434, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetTraitAIInterruptable, 0x93cd44, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetTraitAutoInterruptable, 0x93cd02, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetTraitHumanInterruptable, 0x93cd23, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetTraitUseSpatialSensors, 0x93cd65, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(TakesOver, 0x93ce53, void, Params(Job* unk1), Args(Job* unk1));
};
