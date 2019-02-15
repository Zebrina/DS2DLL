#pragma once

#include "Enums.h"
#include "Flick.h"
#include "FuBi.h"
#include "Skrit.h"

#include "ClassMacros.h"

class Go;
struct PlayerId_;
struct RegionId_;

namespace Flick {
	enum ESequenceState {

	};

	class CSeqFunctionContext {
	public:
		DefineMethod(BindSequenceCatalyst, 0x8dd5a7, bool, Params(Go* unk1), Args(unk1));
		DefineMethod(CanRoleMoveTo, 0x8d7404, bool, Params(const char* unk1, const char* unk2, bool unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
		DefineMethod(CanThisRoleJumpTo, 0x8d73e1, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(CanThisRoleMoveTo, 0x8d7430, bool, Params(const char* unk1, bool unk2, bool unk3), Args(unk1, unk2, unk3));
		DefineConstMethod(GetBool, 0x8d7593, bool, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetEventState, 0x8d253b, bool, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetJobLatchStatus, 0x8d46f9, bool, Params(int unk1), Args(unk1));
		DefineConstMethod(GetMessageLatchStatus, 0x8d475e, bool, Params(int unk1), Args(unk1));
		DefineMethod(GetSequencePlayingNIS, 0x8d246b, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(GotoLabel, 0x8d73b0, bool, Params(const char* unk1), Args(unk1));
		DefineConstMethod(HasThisRole, 0x8d24ec, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(IsDefaultArg, 0x8d7573, bool, Params(const char* unk1), Args(unk1));
		DefineConstMethod(IsLatentModeWait, 0x8d24d6, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(IsRoleBusy, 0x8d7555, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(IsRoleCaptured, 0x8d74dd, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(IsRoleDead, 0x8d7537, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(IsRoleDynamic, 0x8d74bf, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(IsRoleExternal, 0x8d74fb, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(IsRoleRetired, 0x8d7519, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(IsRoleType, 0x8d7492, bool, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
		DefineConstMethod(IsSequenceServerOnly, 0x8d24e5, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(LaunchThread, 0x8e0d26, bool, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetArgUserString, 0x8de3b7, gpbstring<char>, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetRoleName, 0x8da351, gpbstring<char>, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetRoleState, 0x8da386, gpbstring<char>, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetEffectName, 0x8d76ef, const char*, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetEffectParams, 0x8d771f, const char*, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetEventName, 0x8d76ba, const char*, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetPointName, 0x8d7756, const char*, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetSequenceName, 0x8d5ff1, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetString, 0x8d7644, const char*, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetThisRoleName, 0x8d46ed, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetThreadName, 0x8d2556, const char*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCatalystGoid, 0x8d2503, const Goid_*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetOwnerGoid, 0x8d24fd, const Goid_*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetRoleGoid, 0x8d77d4, const Goid_*, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetSeqRoleGoidByName, 0x8d2515, const Goid_*, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetTargetGoid, 0x8d2509, const Goid_*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetThisRoleGoid, 0x8d46d5, const Goid_*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetCatalystPlayerId, 0x8d250f, const PlayerId_*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetSourceRegion, 0x8d24f7, const RegionId_*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetRoleScid, 0x8d782b, const Scid_*, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetThisRoleScid, 0x8d46e1, const Scid_*, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFloat, 0x8d7609, double, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetJobLatchResult, 0x8d472e, eJobResult, Params(int unk1), Args(unk1));
		DefineConstMethod(GetFloat1, 0x423b5a, float, NO_PARAMS, NO_ARGS);
		DefineMethod(AddData, 0x8d81af, int, Params(unsigned long unk1), Args(unk1));
		DefineMethod(AddJobLatch, 0x8d8141, int, Params(const Goid_* unk1, eJobAbstractType unk2), Args(unk1, unk2));
		DefineMethod(AddJobLatch, 0x8d891c, int, Params(const Goid_* unk1), Args(unk1));
		DefineMethod(AddMessageLatch, 0x8de321, int, Params(const Goid_* unk1, eWorldEvent unk2, unsigned long unk3), Args(unk1, unk2, unk3));
		DefineMethod(AddMessageLatch, 0x8de9f8, int, Params(const Goid_* unk1, eWorldEvent unk2), Args(unk1, unk2));
		DefineMethod(AddMessageLatch, 0x8de36a, int, Params(const Scid_* unk1, eWorldEvent unk2, unsigned long unk3), Args(unk1, unk2, unk3));
		DefineMethod(AddMessageLatch, 0x8dea0c, int, Params(const Scid_* unk1, eWorldEvent unk2), Args(unk1, unk2));
		DefineConstMethod(GetArgCount, 0x8d47c3, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetFourCC, 0x8d767f, int, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetInt, 0x8d75ce, int, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetJobLatchCount, 0x4243dd, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(GetMessageLatchCount, 0x4243ea, int, NO_PARAMS, NO_ARGS);
		DefineConstMethod(AttachEffectToLineSegment, 0x8da467, unsigned long, Params(const char* unk1), Args(unk1));
		DefineConstMethod(AttachEffectToPoint, 0x8da3b5, unsigned long, Params(const char* unk1), Args(unk1));
		DefineConstMethod(AttachEffectToTriangle, 0x8da536, unsigned long, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetData, 0x8d47a2, unsigned long, Params(unsigned int unk1), Args(unk1));
		DefineConstMethod(GetMessageLatchData1, 0x8d478e, unsigned long, Params(int unk1), Args(unk1));
		DefineConstMethod(GetPointId, 0x8d7786, unsigned long, Params(const char* unk1), Args(unk1));
		DefineConstMethod(GetThreadId, 0x8d2564, unsigned long, NO_PARAMS, NO_ARGS);
		DefineMethod(CaptureThisRole, 0x8da33d, void, NO_PARAMS, NO_ARGS);
		DefineMethod(ClearJobLatches, 0x424758, void, NO_PARAMS, NO_ARGS);
		DefineMethod(ClearMessageLatches, 0x424935, void, NO_PARAMS, NO_ARGS);
		DefineMethod(ReleaseThisRole, 0x8d453d, void, NO_PARAMS, NO_ARGS);
		DefineMethod(SetAllEventStates, 0x8d249b, void, Params(bool unk1), Args(unk1));
		DefineMethod(SetData, 0x8d4551, void, Params(unsigned int unk1, unsigned long unk2), Args(unk1, unk2));
		DefineMethod(SetEventState, 0x8d247d, void, Params(const char* unk1, bool unk2), Args(unk1, unk2));
		DefineMethod(SetFloat1, 0x423b4d, void, Params(float unk1), Args(unk1));
		DefineMethod(SetProperty, 0x8dfb76, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
		DefineMethod(SetSequencePlayingNIS, 0x8d244f, void, Params(bool unk1), Args(unk1));
		DefineMethod(ValidateRoleCaptured, 0x8d7459, void, Params(const char* unk1), Args(unk1));
	};

	class FlickManager {
	public:
		DefineMethod(RSCreateAndLaunchServerSequence, 0x8e0d68, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	};

	namespace FuBiEvent {
		DefineFunction(OnSeqCmdInit, 0x8d402b, bool, Params(Skrit::Object* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3), Args(unk1, unk2, unk3));
		DefineFunction(OnSeqCmdTick, 0x8d409a, bool, Params(Skrit::Object* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3, double unk4), Args(unk1, unk2, unk3, unk4));
		DefineFunction(OnGetSeqRoleForBind, 0x8d3fbc, const Goid_*, Params(Skrit::Object* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
		DefineFunction(OnSeqCmdExit, 0x8d4109, void, Params(Skrit::Object* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3), Args(unk1, unk2, unk3));
	};

	DefineFunction(BindSequenceProperty, 0x8d2870, bool, Params(unsigned long unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineFunction(BindSequenceRole, 0x8d283a, bool, Params(unsigned long unk1, const char* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(BindSequenceRole, 0x8d2858, bool, Params(unsigned long unk1, const char* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineFunction(BindSequenceRole, 0x8d2804, bool, Params(unsigned long unk1, const char* unk2, const Scid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(BindSequenceRole, 0x8d2822, bool, Params(unsigned long unk1, const char* unk2, const Scid_* unk3), Args(unk1, unk2, unk3));
	DefineFunction(DestroySequence, 0x8d6385, bool, Params(const char* unk1), Args(unk1));
	DefineFunction(DestroySequence, 0x8d4d0b, bool, Params(unsigned long unk1), Args(unk1));
	DefineFunction(IsSequencePaused, 0x8d28e0, bool, Params(unsigned long unk1), Args(unk1));
	DefineFunction(IsSequenceRoleReserved, 0x8d28ec, bool, Params(unsigned long unk1, int unk2), Args(unk1, unk2));
	DefineFunction(LaunchSequence, 0x8d4cf6, bool, Params(unsigned long unk1), Args(unk1));
	DefineFunction(MarkSequenceForDestruction, 0x8d84c7, bool, Params(const char* unk1, const Scid_* unk2), Args(unk1, unk2));
	DefineFunction(MarkSequenceForDestruction, 0x8d84ae, bool, Params(const char* unk1), Args(unk1));
	DefineFunction(SSetRoleMood, 0x8d63bf, bool, Params(const Goid_* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(ValidateSequenceName, 0x8d96e8, bool, Params(const char* unk1), Args(unk1));
	DefineFunction(ValidateSequenceRoleName, 0x8d2925, bool, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineFunction(ValidateSequenceRoleType, 0x8d294f, bool, Params(unsigned long unk1, int unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetSequenceName, 0x8db18d, gpbstring<char>, Params(unsigned long unk1), Args(unk1));
	DefineFunction(GetSequenceRole, 0x8db1b6, gpbstring<char>, Params(unsigned long unk1, int unk2), Args(unk1, unk2));
	DefineFunction(GetSequenceCatalyst, 0x8d28d4, const Goid_*, Params(unsigned long unk1), Args(unk1));
	DefineFunction(GetSequenceOwner, 0x8d28c8, const Goid_*, Params(unsigned long unk1), Args(unk1));
	DefineFunction(GetSequenceState, 0x8d28b1, Flick::ESequenceState, Params(unsigned long unk1), Args(unk1));
	DefineFunction(RCSetRoleMood, 0x8d4d2a, FuBi::Cookie__*, Params(const Goid_* unk1, const gpbstring<char>& unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineFunction(CreateSequence, 0x8e09f9, unsigned long, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, bool unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineFunction(CreateSequence, 0x8e0b49, unsigned long, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(CreateSequence, 0x8e094c, unsigned long, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineFunction(CreateSequence, 0x8e0aa9, unsigned long, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineFunction(CreateSequence, 0x8e0bec, unsigned long, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetSequenceByName, 0x8d63ac, unsigned long, Params(const char* unk1), Args(unk1));
	DefineFunction(GetSequenceByScid, 0x8d84dd, unsigned long, Params(const Scid_* unk1), Args(unk1));
	DefineFunction(PauseSequence, 0x8d95e8, void, Params(const Scid_* unk1), Args(unk1));
	DefineFunction(PauseSequence, 0x8d288b, void, Params(unsigned long unk1), Args(unk1));
	DefineFunction(RSCreateAndLaunchSequence, 0x8e0c04, void, Params(const char* unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineFunction(RSPauseSequence, 0x8d95fd, void, Params(const Scid_* unk1), Args(unk1));
	DefineFunction(UnpauseSequence, 0x8d289e, void, Params(unsigned long unk1), Args(unk1));
};
