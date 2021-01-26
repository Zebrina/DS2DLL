#pragma once

#include "Enums.h"
#include "GoidScid.h"
#include "GPString.h"
#include "Player.h"
#include "RegionId.h"
#include "Skrit.h"

namespace Flick {
	enum eSequenceState {
        SS_NONE,
        SS_LAUNCHING,
        SS_PAUSED,
        SS_PLAYING,
        SS_WAITING,
        SS_TIMEDOUT,
        SS_LOADING,
	};

	class CSeqFunctionContext {
	public:
		$Method(0x008dd5a7, BindSequenceCatalyst, bool, Go* unk1);
		$Method(0x008d7404, CanRoleMoveTo, bool, const char* unk1, const char* unk2, bool unk3, bool unk4);
		$Method(0x008d73e1, CanThisRoleJumpTo, bool, const char* unk1);
		$Method(0x008d7430, CanThisRoleMoveTo, bool, const char* unk1, bool unk2, bool unk3);
		$ConstMethod(0x008d7593, GetBool, bool, const char* unk1);
		$ConstMethod(0x008d253b, GetEventState, bool, const char* unk1);
		$ConstMethod(0x008d46f9, GetJobLatchStatus, bool, int unk1);
		$ConstMethod(0x008d475e, GetMessageLatchStatus, bool, int unk1);
		$Method(0x008d246b, GetSequencePlayingNIS, bool);
		$Method(0x008d73b0, GotoLabel, bool, const char* unk1);
		$ConstMethod(0x008d24ec, HasThisRole, bool);
		$Method(0x008d7573, IsDefaultArg, bool, const char* unk1);
		$ConstMethod(0x008d24d6, IsLatentModeWait, bool);
		$Method(0x008d7555, IsRoleBusy, bool, const char* unk1);
		$Method(0x008d74dd, IsRoleCaptured, bool, const char* unk1);
		$Method(0x008d7537, IsRoleDead, bool, const char* unk1);
		$Method(0x008d74bf, IsRoleDynamic, bool, const char* unk1);
		$Method(0x008d74fb, IsRoleExternal, bool, const char* unk1);
		$Method(0x008d7519, IsRoleRetired, bool, const char* unk1);
		$Method(0x008d7492, IsRoleType, bool, const char* unk1, const char* unk2);
		$ConstMethod(0x008d24e5, IsSequenceServerOnly, bool);
		$Method(0x008e0d26, LaunchThread, bool, const char* unk1);
		$ConstMethod(0x008de3b7, GetArgUserString, GPBString, const char* unk1);
		$ConstMethod(0x008da351, GetRoleName, GPBString, const char* unk1);
		$ConstMethod(0x008da386, GetRoleState, GPBString, const char* unk1);
		$ConstMethod(0x008d76ef, GetEffectName, const char*, const char* unk1);
		$ConstMethod(0x008d771f, GetEffectParams, const char*, const char* unk1);
		$ConstMethod(0x008d76ba, GetEventName, const char*, const char* unk1);
		$ConstMethod(0x008d7756, GetPointName, const char*, const char* unk1);
		$ConstMethod(0x008d5ff1, GetSequenceName, const char*);
		$ConstMethod(0x008d7644, GetString, const char*, const char* unk1);
		$ConstMethod(0x008d46ed, GetThisRoleName, const char*);
		$ConstMethod(0x008d2556, GetThreadName, const char*);
		$ConstMethod(0x008d2503, GetCatalystGoid, const Goid*);
		$ConstMethod(0x008d24fd, GetOwnerGoid, const Goid*);
		$ConstMethod(0x008d77d4, GetRoleGoid, const Goid*, const char* unk1);
		$ConstMethod(0x008d2515, GetSeqRoleGoidByName, const Goid*, const char* unk1);
		$ConstMethod(0x008d2509, GetTargetGoid, const Goid*);
		$ConstMethod(0x008d46d5, GetThisRoleGoid, const Goid*);
		$ConstMethod(0x008d250f, GetCatalystPlayerId, const PlayerId*);
		$ConstMethod(0x008d24f7, GetSourceRegion, const RegionId*);
		$ConstMethod(0x008d782b, GetRoleScid, const Scid*, const char* unk1);
		$ConstMethod(0x008d46e1, GetThisRoleScid, const Scid*);
		$ConstMethod(0x008d7609, GetFloat, double, const char* unk1);
		$ConstMethod(0x008d472e, GetJobLatchResult, eJobResult, int unk1);
		$ConstMethod(0x00423b5a, GetFloat1, float);
		$Method(0x008d81af, AddData, int, uint unk1);
		$Method(0x008d8141, AddJobLatch, int, const Goid* unk1, eJobAbstractType unk2);
		$Method(0x008d891c, AddJobLatch, int, const Goid* unk1);
		$Method(0x008de321, AddMessageLatch, int, const Goid* unk1, eWorldEvent unk2, uint unk3);
		$Method(0x008de9f8, AddMessageLatch, int, const Goid* unk1, eWorldEvent unk2);
		$Method(0x008de36a, AddMessageLatch, int, const Scid* unk1, eWorldEvent unk2, uint unk3);
		$Method(0x008dea0c, AddMessageLatch, int, const Scid* unk1, eWorldEvent unk2);
		$ConstMethod(0x008d47c3, GetArgCount, int);
		$ConstMethod(0x008d767f, GetFourCC, int, const char* unk1);
		$ConstMethod(0x008d75ce, GetInt, int, const char* unk1);
		$ConstMethod(0x004243dd, GetJobLatchCount, int);
		$ConstMethod(0x004243ea, GetMessageLatchCount, int);
		$ConstMethod(0x008da467, AttachEffectToLineSegment, uint, const char* unk1);
		$ConstMethod(0x008da3b5, AttachEffectToPoint, uint, const char* unk1);
		$ConstMethod(0x008da536, AttachEffectToTriangle, uint, const char* unk1);
		$ConstMethod(0x008d47a2, GetData, uint, uint unk1);
		$ConstMethod(0x008d478e, GetMessageLatchData1, uint, int unk1);
		$ConstMethod(0x008d7786, GetPointId, uint, const char* unk1);
		$ConstMethod(0x008d2564, GetThreadId, uint);
		$Method(0x008da33d, CaptureThisRole, void);
		$Method(0x00424758, ClearJobLatches, void);
		$Method(0x00424935, ClearMessageLatches, void);
		$Method(0x008d453d, ReleaseThisRole, void);
		$Method(0x008d249b, SetAllEventStates, void, bool unk1);
		$Method(0x008d4551, SetData, void, uint unk1, uint unk2);
		$Method(0x008d247d, SetEventState, void, const char* unk1, bool unk2);
		$Method(0x00423b4d, SetFloat1, void, float unk1);
		$Method(0x008dfb76, SetProperty, void, const GPBString& unk1, const GPBString& unk2);
		$Method(0x008d244f, SetSequencePlayingNIS, void, bool unk1);
		$Method(0x008d7459, ValidateRoleCaptured, void, const char* unk1);

		// 0x00
		void* ptr_00;
		// 0x08
		void* ptr_08;
		// 0x0c
		void* ptr_0c;
		// 0x2c
		float float1; // ??
	};

	class FlickManager {
	public:
		$Method(0x008e0d68, RSCreateAndLaunchServerSequence, void, const char* unk1, const Goid* unk2, const Goid* unk3);
	};

	namespace FuBiEvent {
		$Function(0x008d402b, OnSeqCmdInit, bool, SkritObject* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3);
		$Function(0x008d409a, OnSeqCmdTick, bool, SkritObject* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3, double unk4);
		$Function(0x008d3fbc, OnGetSeqRoleForBind, const Goid*, SkritObject* unk1, const char* unk2, int unk3);
		$Function(0x008d4109, OnSeqCmdExit, void, SkritObject* unk1, const char* unk2, Flick::CSeqFunctionContext* unk3);
	};

	$Function(0x008d2870, BindSequenceProperty, bool, uint unk1, const char* unk2, const char* unk3);
	$Function(0x008d283a, BindSequenceRole, bool, uint unk1, const char* unk2, const Goid* unk3, bool unk4);
	$Function(0x008d2858, BindSequenceRole, bool, uint unk1, const char* unk2, const Goid* unk3);
	$Function(0x008d2804, BindSequenceRole, bool, uint unk1, const char* unk2, const Scid* unk3, bool unk4);
	$Function(0x008d2822, BindSequenceRole, bool, uint unk1, const char* unk2, const Scid* unk3);
	$Function(0x008d6385, DestroySequence, bool, const char* unk1);
	$Function(0x008d4d0b, DestroySequence, bool, uint unk1);
	$Function(0x008d28e0, IsSequencePaused, bool, uint unk1);
	$Function(0x008d28ec, IsSequenceRoleReserved, bool, uint unk1, int unk2);
	$Function(0x008d4cf6, LaunchSequence, bool, uint unk1);
	$Function(0x008d84c7, MarkSequenceForDestruction, bool, const char* unk1, const Scid* unk2);
	$Function(0x008d84ae, MarkSequenceForDestruction, bool, const char* unk1);
	$Function(0x008d63bf, SSetRoleMood, bool, const Goid* unk1, const GPBString& unk2);
	$Function(0x008d96e8, ValidateSequenceName, bool, const char* unk1);
	$Function(0x008d2925, ValidateSequenceRoleName, bool, uint unk1, const char* unk2);
	$Function(0x008d294f, ValidateSequenceRoleType, bool, uint unk1, int unk2, const char* unk3);
	$Function(0x008db18d, GetSequenceName, GPBString, uint unk1);
	$Function(0x008db1b6, GetSequenceRole, GPBString, uint unk1, int unk2);
	$Function(0x008d28d4, GetSequenceCatalyst, const Goid*, uint unk1);
	$Function(0x008d28c8, GetSequenceOwner, const Goid*, uint unk1);
	$Function(0x008d28b1, GetSequenceState, eSequenceState, uint unk1);
	$Function(0x008d4d2a, RCSetRoleMood, FuBiCookie*, const Goid* unk1, const GPBString& unk2, uint unk3);
	$Function(0x008e09f9, CreateSequence, uint, const char* unk1, const Goid* unk2, const Goid* unk3, bool unk4, bool unk5);
	$Function(0x008e0b49, CreateSequence, uint, const char* unk1, const Goid* unk2, const Goid* unk3, bool unk4);
	$Function(0x008e094c, CreateSequence, uint, const char* unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4, bool unk5, bool unk6);
	$Function(0x008e0aa9, CreateSequence, uint, const char* unk1, const Goid* unk2, const Goid* unk3, const Goid* unk4, bool unk5);
	$Function(0x008e0bec, CreateSequence, uint, const char* unk1, const Goid* unk2, const Goid* unk3);
	$Function(0x008d63ac, GetSequenceByName, uint, const char* unk1);
	$Function(0x008d84dd, GetSequenceByScid, uint, const Scid* unk1);
	$Function(0x008d95e8, PauseSequence, void, const Scid* unk1);
	$Function(0x008d288b, PauseSequence, void, uint unk1);
	$Function(0x008e0c04, RSCreateAndLaunchSequence, void, const char* unk1, const Goid* unk2, const Goid* unk3);
	$Function(0x008d95fd, RSPauseSequence, void, const Scid* unk1);
	$Function(0x008d289e, UnpauseSequence, void, uint unk1);
};

typedef Flick::eSequenceState eSequenceState;
