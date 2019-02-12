#pragma once

class Job {
public:
	/*Job*/ public: bool /*__thiscall*/ CanOverrideAutoBehavior(); //0x0093d35e
	/*Job*/ public: bool /*__thiscall*/ EndRequested(); //0x0093cd7c
	/*Job*/ public: bool /*__thiscall*/ GetJobSuccessful(); //0x004677f0
	/*Job*/ public: bool /*__thiscall*/ InAtomicState(); //0x0093ce0c
	/*Job*/ public: bool /*__thiscall*/ IsAIInterruptable(); //0x0093cd5b
	/*Job*/ public: bool /*__thiscall*/ IsAutoInterruptable(); //0x0093cd19
	/*Job*/ public: bool /*__thiscall*/ IsCleaningUp(); //0x004677cb
	/*Job*/ public: bool /*__thiscall*/ IsDefensive(); //0x0093cd8f
	/*Job*/ public: bool /*__thiscall*/ IsFlickAssigned(); //0x0093ce02
	/*Job*/ public: bool /*__thiscall*/ IsFlickLatched(); //0x00467780
	/*Job*/ public: bool /*__thiscall*/ IsHumanInterruptable(); //0x0093cd3a
	/*Job*/ public: bool /*__thiscall*/ IsJobResultFailed(); //0x004677e6
	/*Job*/ public: bool /*__thiscall*/ IsJobResultNoPath(); //0x004677dc
	/*Job*/ public: bool /*__thiscall*/ IsMarkedForDeletion(); //0x004677c3
	/*Job*/ public: bool /*__thiscall*/ IsOffensive(); //0x0093cd85
	/*Job*/ public: bool /*__thiscall*/ IsShuttingDown(); //0x004677d1
	/*Job*/ public: bool /*__thiscall*/ IsUserAssigned(); //0x0093cdf8
	/*Job*/ public: bool /*__thiscall*/ IsUsingMeleeSlot(); //0x0093cda3
	/*Job*/ public: bool /*__thiscall*/ IsUsingSensors(); //0x0093cd99
	/*Job*/ public: Go* /*__thiscall*/ GetGo() const; //0x0093d193
	/*Job*/ public: GoMind* /*__thiscall*/ GetMind() const; //0x00467786
	/*Job*/ public: const Goid_* /*__thiscall*/ GetGoalModifier(); //0x00467791
	/*Job*/ public: const Goid_* /*__thiscall*/ GetGoalObject(); //0x0046778d
	/*Job*/ public: const Goid_* /*__thiscall*/ GetGoid(); //0x0093d19d
	/*Job*/ public: const Goid_* /*__thiscall*/ GetNotify(); //0x004677b6
	/*Job*/ public: const Goid_* /*__thiscall*/ GetQueueIconGoid(); //0x004677ba
	/*Job*/ public: const Quat& /*__thiscall*/ GetGoalOrientation() const; //0x00467795
	/*Job*/ public: const SiegePos& /*__thiscall*/ GetGoalPosition() const; //0x0093d3e3
	/*Job*/ public: const SiegePos& /*__thiscall*/ GetInitPosition(); //0x004677b2
	/*Job*/ public: eActionOrigin /*__thiscall*/ GetOrigin(); //0x0093cdc7
	/*Job*/ public: eEquipSlot /*__thiscall*/ GetGoalSlot() const; //0x00467799
	/*Job*/ public: eJobAbstractType /*__thiscall*/ GetJobAbstractType() const; //0x0046777d
	/*Job*/ public: eJobResult /*__thiscall*/ GetJobResult(); //0x004677d8
	/*Job*/ public: float /*__thiscall*/ GetFloat1() const; //0x004677ab
	/*Job*/ public: float /*__thiscall*/ GetJobTravelDistance(); //0x0093d462
	/*Job*/ public: int /*__thiscall*/ GetInt1() const; //0x0046779d
	/*Job*/ public: int /*__thiscall*/ GetInt2() const; //0x004677a4
	/*Job*/ public: unsigned long /*__thiscall*/ GetId() const; //0x00467779
	/*Job*/ public: void /*__thiscall*/ AddDefensiveTrait(); //0x0093ccfd
	/*Job*/ public: void /*__thiscall*/ AddOffensiveTrait(); //0x0093ccf8
	/*Job*/ public: void /*__thiscall*/ ClearTimer(); //0x0093ce4a
	/*Job*/ public: void /*__thiscall*/ EnterAtomicState(float unk1); //0x0093d379
	/*Job*/ public: void /*__thiscall*/ LeaveAtomicState(); //0x0093ce16
	/*Job*/ public: void /*__thiscall*/ MarkCleaningUp(); //0x004677be
	/*Job*/ public: void /*__thiscall*/ MarkForDeletion(); //0x0093d1fb
	/*Job*/ public: void /*__thiscall*/ MarkForDeletion(eJobResult unk1); //0x0093d1aa
	/*Job*/ public: void /*__thiscall*/ RequestEnd(); //0x0093d8f2
	/*Job*/ public: void /*__thiscall*/ SetGoalModifier(const Goid_* unk1); //0x0093cdba
	/*Job*/ public: void /*__thiscall*/ SetGoalObject(const Goid_* unk1); //0x0093cdad
	/*Job*/ public: void /*__thiscall*/ SetStartedBySECommand(const Scid_* unk1); //0x0046776c
	/*Job*/ public: void /*__thiscall*/ SetTimer(float unk1); //0x0093d434
	/*Job*/ public: void /*__thiscall*/ SetTraitAIInterruptable(bool unk1); //0x0093cd44
	/*Job*/ public: void /*__thiscall*/ SetTraitAutoInterruptable(bool unk1); //0x0093cd02
	/*Job*/ public: void /*__thiscall*/ SetTraitHumanInterruptable(bool unk1); //0x0093cd23
	/*Job*/ public: void /*__thiscall*/ SetTraitUseSpatialSensors(bool unk1); //0x0093cd65
	/*Job*/ public: void /*__thiscall*/ TakesOver(Job* unk1); //0x0093ce53
};
