#pragma once

class Flick {
public:
	enum ESequenceState {

	};

	class CSeqFunctionContext {
	public:
		DefineMethod(BindSequenceCatalyst, 0x8dd5a7, bool, Params(Go* unk1), Args(Go* unk1));
		DefineMethod(CanRoleMoveTo, 0x8d7404, bool, Params(const char* unk1, const char* unk2, bool unk3, bool unk4), Args(const char* unk1, const char* unk2, bool unk3, bool unk4));
		DefineMethod(CanThisRoleJumpTo, 0x8d73e1, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(CanThisRoleMoveTo, 0x8d7430, bool, Params(const char* unk1, bool unk2, bool unk3), Args(const char* unk1, bool unk2, bool unk3));
		DefineConstMethod(GetBool, 0x8d7593, bool, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetEventState, 0x8d253b, bool, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetJobLatchStatus, 0x8d46f9, bool, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetMessageLatchStatus, 0x8d475e, bool, Params(int unk1), Args(int unk1));
		DefineMethod(GetSequencePlayingNIS, 0x8d246b, bool, Params(), Args());
		DefineMethod(GotoLabel, 0x8d73b0, bool, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(HasThisRole, 0x8d24ec, bool, Params(), Args());
		DefineMethod(IsDefaultArg, 0x8d7573, bool, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(IsLatentModeWait, 0x8d24d6, bool, Params(), Args());
		DefineMethod(IsRoleBusy, 0x8d7555, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(IsRoleCaptured, 0x8d74dd, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(IsRoleDead, 0x8d7537, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(IsRoleDynamic, 0x8d74bf, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(IsRoleExternal, 0x8d74fb, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(IsRoleRetired, 0x8d7519, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(IsRoleType, 0x8d7492, bool, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
		DefineConstMethod(IsSequenceServerOnly, 0x8d24e5, bool, Params(), Args());
		DefineMethod(LaunchThread, 0x8e0d26, bool, Params(const char* unk1), Args(const char* unk1));
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
		DefineConstMethod(GetFloat, 0x8d7609, double, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetJobLatchResult, 0x8d472e, eJobResult, Params(int unk1), Args(int unk1));
		DefineConstMethod(GetFloat1, 0x423b5a, float, Params(), Args());
		DefineMethod(AddData, 0x8d81af, int, Params(unsigned long unk1), Args(unsigned long unk1));
		DefineMethod(AddJobLatch, 0x8d8141, int, Params(const Goid_* unk1, eJobAbstractType unk2), Args(const Goid_* unk1, eJobAbstractType unk2));
		DefineMethod(AddJobLatch, 0x8d891c, int, Params(const Goid_* unk1), Args(const Goid_* unk1));
		DefineMethod(AddMessageLatch, 0x8de321, int, Params(const Goid_* unk1, eWorldEvent unk2, unsigned long unk3), Args(const Goid_* unk1, eWorldEvent unk2, unsigned long unk3));
		DefineMethod(AddMessageLatch, 0x8de9f8, int, Params(const Goid_* unk1, eWorldEvent unk2), Args(const Goid_* unk1, eWorldEvent unk2));
		DefineMethod(AddMessageLatch, 0x8de36a, int, Params(const Scid_* unk1, eWorldEvent unk2, unsigned long unk3), Args(const Scid_* unk1, eWorldEvent unk2, unsigned long unk3));
		DefineMethod(AddMessageLatch, 0x8dea0c, int, Params(const Scid_* unk1, eWorldEvent unk2), Args(const Scid_* unk1, eWorldEvent unk2));
		DefineConstMethod(GetArgCount, 0x8d47c3, int, Params(), Args());
		DefineConstMethod(GetFourCC, 0x8d767f, int, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetInt, 0x8d75ce, int, Params(const char* unk1), Args(const char* unk1));
		DefineConstMethod(GetJobLatchCount, 0x4243dd, int, Params(), Args());
		DefineConstMethod(GetMessageLatchCount, 0x4243ea, int, Params(), Args());
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ AttachEffectToLineSegment(const char* unk1) const; //0x008da467
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ AttachEffectToPoint(const char* unk1) const; //0x008da3b5
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ AttachEffectToTriangle(const char* unk1) const; //0x008da536
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ GetData(unsigned int unk1) const; //0x008d47a2
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ GetMessageLatchData1(int unk1) const; //0x008d478e
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ GetPointId(const char* unk1) const; //0x008d7786
		/*Flick::CSeqFunctionContext*/ public: unsigned long /*__thiscall*/ GetThreadId() const; //0x008d2564
		DefineMethod(CaptureThisRole, 0x8da33d, void, Params(), Args());
		DefineMethod(ClearJobLatches, 0x424758, void, Params(), Args());
		DefineMethod(ClearMessageLatches, 0x424935, void, Params(), Args());
		DefineMethod(ReleaseThisRole, 0x8d453d, void, Params(), Args());
		DefineMethod(SetAllEventStates, 0x8d249b, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(SetData, 0x8d4551, void, Params(unsigned int unk1, unsigned long unk2), Args(unsigned int unk1, unsigned long unk2));
		DefineMethod(SetEventState, 0x8d247d, void, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
		DefineMethod(SetFloat1, 0x423b4d, void, Params(float unk1), Args(float unk1));
		DefineMethod(SetProperty, 0x8dfb76, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
		DefineMethod(SetSequencePlayingNIS, 0x8d244f, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(ValidateRoleCaptured, 0x8d7459, void, Params(const char* unk1), Args(const char* unk1));
	};

	class FlickManager {
	public:
		DefineMethod(RSCreateAndLaunchServerSequence, 0x8e0d68, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3), Args(const char* unk1, const Goid_* unk2, const Goid_* unk3));
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
