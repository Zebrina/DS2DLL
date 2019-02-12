#pragma once

class Flick {
public:
	enum ESequenceState {

	};

	class CSeqFunctionContext {
	public:
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ BindSequenceCatalyst(Go* unk1); //0x008dd5a7
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ CanRoleMoveTo(const char* unk1, const char* unk2, bool unk3, bool unk4); //0x008d7404
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ CanThisRoleJumpTo(const char* unk1); //0x008d73e1
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ CanThisRoleMoveTo(const char* unk1, bool unk2, bool unk3); //0x008d7430
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ GetBool(const char* unk1) const; //0x008d7593
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ GetEventState(const char* unk1) const; //0x008d253b
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ GetJobLatchStatus(int unk1) const; //0x008d46f9
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ GetMessageLatchStatus(int unk1) const; //0x008d475e
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ GetSequencePlayingNIS(); //0x008d246b
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ GotoLabel(const char* unk1); //0x008d73b0
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ HasThisRole() const; //0x008d24ec
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsDefaultArg(const char* unk1); //0x008d7573
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsLatentModeWait() const; //0x008d24d6
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsRoleBusy(const char* unk1); //0x008d7555
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsRoleCaptured(const char* unk1); //0x008d74dd
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsRoleDead(const char* unk1); //0x008d7537
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsRoleDynamic(const char* unk1); //0x008d74bf
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsRoleExternal(const char* unk1); //0x008d74fb
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsRoleRetired(const char* unk1); //0x008d7519
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsRoleType(const char* unk1, const char* unk2); //0x008d7492
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ IsSequenceServerOnly() const; //0x008d24e5
		/*Flick::CSeqFunctionContext*/ public: bool /*__thiscall*/ LaunchThread(const char* unk1); //0x008e0d26
		/*Flick::CSeqFunctionContext*/ public: gpbstring<char> /*__thiscall*/ GetArgUserString(const char* unk1) const; //0x008de3b7
		/*Flick::CSeqFunctionContext*/ public: gpbstring<char> /*__thiscall*/ GetRoleName(const char* unk1); //0x008da351
		/*Flick::CSeqFunctionContext*/ public: gpbstring<char> /*__thiscall*/ GetRoleState(const char* unk1); //0x008da386
		/*Flick::CSeqFunctionContext*/ public: const char* /*__thiscall*/ GetEffectName(const char* unk1) const; //0x008d76ef
		/*Flick::CSeqFunctionContext*/ public: const char* /*__thiscall*/ GetEffectParams(const char* unk1) const; //0x008d771f
		/*Flick::CSeqFunctionContext*/ public: const char* /*__thiscall*/ GetEventName(const char* unk1) const; //0x008d76ba
		/*Flick::CSeqFunctionContext*/ public: const char* /*__thiscall*/ GetPointName(const char* unk1) const; //0x008d7756
		/*Flick::CSeqFunctionContext*/ public: const char* /*__thiscall*/ GetSequenceName() const; //0x008d5ff1
		/*Flick::CSeqFunctionContext*/ public: const char* /*__thiscall*/ GetString(const char* unk1) const; //0x008d7644
		/*Flick::CSeqFunctionContext*/ public: const char* /*__thiscall*/ GetThisRoleName(); //0x008d46ed
		/*Flick::CSeqFunctionContext*/ public: const char* /*__thiscall*/ GetThreadName() const; //0x008d2556
		/*Flick::CSeqFunctionContext*/ public: const Goid_* /*__thiscall*/ GetCatalystGoid() const; //0x008d2503
		/*Flick::CSeqFunctionContext*/ public: const Goid_* /*__thiscall*/ GetOwnerGoid() const; //0x008d24fd
		/*Flick::CSeqFunctionContext*/ public: const Goid_* /*__thiscall*/ GetRoleGoid(const char* unk1); //0x008d77d4
		/*Flick::CSeqFunctionContext*/ public: const Goid_* /*__thiscall*/ GetSeqRoleGoidByName(const char* unk1) const; //0x008d2515
		/*Flick::CSeqFunctionContext*/ public: const Goid_* /*__thiscall*/ GetTargetGoid() const; //0x008d2509
		/*Flick::CSeqFunctionContext*/ public: const Goid_* /*__thiscall*/ GetThisRoleGoid(); //0x008d46d5
		/*Flick::CSeqFunctionContext*/ public: const PlayerId_* /*__thiscall*/ GetCatalystPlayerId() const; //0x008d250f
		/*Flick::CSeqFunctionContext*/ public: const RegionId_* /*__thiscall*/ GetSourceRegion() const; //0x008d24f7
		/*Flick::CSeqFunctionContext*/ public: const Scid_* /*__thiscall*/ GetRoleScid(const char* unk1); //0x008d782b
		/*Flick::CSeqFunctionContext*/ public: const Scid_* /*__thiscall*/ GetThisRoleScid(); //0x008d46e1
		/*Flick::CSeqFunctionContext*/ public: double /*__thiscall*/ GetFloat(const char* unk1) const; //0x008d7609
		/*Flick::CSeqFunctionContext*/ public: eJobResult /*__thiscall*/ GetJobLatchResult(int unk1) const; //0x008d472e
		/*Flick::CSeqFunctionContext*/ public: float /*__thiscall*/ GetFloat1() const; //0x00423b5a
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ AddData(unsigned long unk1); //0x008d81af
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ AddJobLatch(const Goid_* unk1, eJobAbstractType unk2); //0x008d8141
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ AddJobLatch(const Goid_* unk1); //0x008d891c
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ AddMessageLatch(const Goid_* unk1, eWorldEvent unk2, unsigned long unk3); //0x008de321
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ AddMessageLatch(const Goid_* unk1, eWorldEvent unk2); //0x008de9f8
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ AddMessageLatch(const Scid_* unk1, eWorldEvent unk2, unsigned long unk3); //0x008de36a
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ AddMessageLatch(const Scid_* unk1, eWorldEvent unk2); //0x008dea0c
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ GetArgCount() const; //0x008d47c3
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ GetFourCC(const char* unk1) const; //0x008d767f
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ GetInt(const char* unk1) const; //0x008d75ce
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ GetJobLatchCount() const; //0x004243dd
		/*Flick::CSeqFunctionContext*/ public: int /*__thiscall*/ GetMessageLatchCount() const; //0x004243ea
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ AttachEffectToLineSegment(const char* unk1) const; //0x008da467
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ AttachEffectToPoint(const char* unk1) const; //0x008da3b5
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ AttachEffectToTriangle(const char* unk1) const; //0x008da536
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ GetData(unsigned int unk1) const; //0x008d47a2
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ GetMessageLatchData1(int unk1) const; //0x008d478e
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ GetPointId(const char* unk1) const; //0x008d7786
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ GetThreadId() const; //0x008d2564
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ CaptureThisRole(); //0x008da33d
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ ClearJobLatches(); //0x00424758
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ ClearMessageLatches(); //0x00424935
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ ReleaseThisRole(); //0x008d453d
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ SetAllEventStates(bool unk1); //0x008d249b
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ SetData(unsigned int unk1, unsigned long unk2); //0x008d4551
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ SetEventState(const char* unk1, bool unk2); //0x008d247d
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ SetFloat1(float unk1); //0x00423b4d
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ SetProperty(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x008dfb76
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ SetSequencePlayingNIS(bool unk1); //0x008d244f
		/*Flick::CSeqFunctionContext*/ public: void /*__thiscall*/ ValidateRoleCaptured(const char* unk1); //0x008d7459
	};

	class FlickManager {
	public:
		/*Flick::FlickManager*/ public: void /*__thiscall*/ RSCreateAndLaunchServerSequence(const char* unk1, const Goid_* unk2, const Goid_* unk3); //0x008e0d68
	};

	class FuBiEvent {
	public:
		/*Flick::FuBiEvent*/ bool /*__cdecl*/ OnSeqCmdInit(Skrit::Object* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3); //0x008d402b
		/*Flick::FuBiEvent*/ bool /*__cdecl*/ OnSeqCmdTick(Skrit::Object* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3, double unk4); //0x008d409a
		/*Flick::FuBiEvent*/ const Goid_* /*__cdecl*/ OnGetSeqRoleForBind(Skrit::Object* unk1, const char* unk2, int unk3); //0x008d3fbc
		/*Flick::FuBiEvent*/ void /*__cdecl*/ OnSeqCmdExit(Skrit::Object* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3); //0x008d4109
	};

	/*Flick*/ bool /*__cdecl*/ BindSequenceProperty(unsigned long unk1, const char* unk2, const char* unk3); //0x008d2870
	/*Flick*/ bool /*__cdecl*/ BindSequenceRole(unsigned long unk1, const char* unk2, const Goid_* unk3, bool unk4); //0x008d283a
	/*Flick*/ bool /*__cdecl*/ BindSequenceRole(unsigned long unk1, const char* unk2, const Goid_* unk3); //0x008d2858
	/*Flick*/ bool /*__cdecl*/ BindSequenceRole(unsigned long unk1, const char* unk2, const Scid_* unk3, bool unk4); //0x008d2804
	/*Flick*/ bool /*__cdecl*/ BindSequenceRole(unsigned long unk1, const char* unk2, const Scid_* unk3); //0x008d2822
	/*Flick*/ bool /*__cdecl*/ DestroySequence(const char* unk1); //0x008d6385
	/*Flick*/ bool /*__cdecl*/ DestroySequence(unsigned long unk1); //0x008d4d0b
	/*Flick*/ bool /*__cdecl*/ IsSequencePaused(unsigned long unk1); //0x008d28e0
	/*Flick*/ bool /*__cdecl*/ IsSequenceRoleReserved(unsigned long unk1, int unk2); //0x008d28ec
	/*Flick*/ bool /*__cdecl*/ LaunchSequence(unsigned long unk1); //0x008d4cf6
	/*Flick*/ bool /*__cdecl*/ MarkSequenceForDestruction(const char* unk1, const Scid_* unk2); //0x008d84c7
	/*Flick*/ bool /*__cdecl*/ MarkSequenceForDestruction(const char* unk1); //0x008d84ae
	/*Flick*/ bool /*__cdecl*/ SSetRoleMood(const Goid_* unk1, const gpbstring<char>& unk2); //0x008d63bf
	/*Flick*/ bool /*__cdecl*/ ValidateSequenceName(const char* unk1); //0x008d96e8
	/*Flick*/ bool /*__cdecl*/ ValidateSequenceRoleName(unsigned long unk1, const char* unk2); //0x008d2925
	/*Flick*/ bool /*__cdecl*/ ValidateSequenceRoleType(unsigned long unk1, int unk2, const char* unk3); //0x008d294f
	/*Flick*/ gpbstring<char> /*__cdecl*/ GetSequenceName(unsigned long unk1); //0x008db18d
	/*Flick*/ gpbstring<char> /*__cdecl*/ GetSequenceRole(unsigned long unk1, int unk2); //0x008db1b6
	/*Flick*/ const Goid_* /*__cdecl*/ GetSequenceCatalyst(unsigned long unk1); //0x008d28d4
	/*Flick*/ const Goid_* /*__cdecl*/ GetSequenceOwner(unsigned long unk1); //0x008d28c8
	/*Flick*/ Flick::ESequenceState /*__cdecl*/ GetSequenceState(unsigned long unk1); //0x008d28b1
	/*Flick*/ FuBi::Cookie__* /*__cdecl*/ RCSetRoleMood(const Goid_* unk1, const gpbstring<char>& unk2, unsigned long unk3); //0x008d4d2a
	/*Flick*/ unsigned long /*__cdecl*/ CreateSequence(const char* unk1, const Goid_* unk2, const Goid_* unk3, bool unk4, bool unk5); //0x008e09f9
	/*Flick*/ unsigned long /*__cdecl*/ CreateSequence(const char* unk1, const Goid_* unk2, const Goid_* unk3, bool unk4); //0x008e0b49
	/*Flick*/ unsigned long /*__cdecl*/ CreateSequence(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5, bool unk6); //0x008e094c
	/*Flick*/ unsigned long /*__cdecl*/ CreateSequence(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5); //0x008e0aa9
	/*Flick*/ unsigned long /*__cdecl*/ CreateSequence(const char* unk1, const Goid_* unk2, const Goid_* unk3); //0x008e0bec
	/*Flick*/ unsigned long /*__cdecl*/ GetSequenceByName(const char* unk1); //0x008d63ac
	/*Flick*/ unsigned long /*__cdecl*/ GetSequenceByScid(const Scid_* unk1); //0x008d84dd
	/*Flick*/ void /*__cdecl*/ PauseSequence(const Scid_* unk1); //0x008d95e8
	/*Flick*/ void /*__cdecl*/ PauseSequence(unsigned long unk1); //0x008d288b
	/*Flick*/ void /*__cdecl*/ RSCreateAndLaunchSequence(const char* unk1, const Goid_* unk2, const Goid_* unk3); //0x008e0c04
	/*Flick*/ void /*__cdecl*/ RSPauseSequence(const Scid_* unk1); //0x008d95fd
	/*Flick*/ void /*__cdecl*/ UnpauseSequence(unsigned long unk1); //0x008d289e
};
