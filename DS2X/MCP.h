#pragma once

#include "Enums.h"
#include "Skrit.h"



struct Goid_;
struct SiegePos;

class MCP {
public:
	enum eOrientMode {
		undefined = 0,
		lock_to_heading = 1,
		fixed_direction = 2,
		fixed_position = 3,
		track_object = 4,
		lock_to_heading_reverse = 5,
		fixed_position_reverse = 6,
		track_object_reverse = 7,
	};

	enum eReqFlag {

	};

	enum eRequest {
		pl_none = 0,
		pl_approach = 1,
		pl_follow = 2,
		pl_intercept = 3,
		pl_avoid = 4,
		pl_face = 5,
		pl_die = 6,
		pl_attack_object_melee = 7,
		pl_attack_object_ranged = 8,
		pl_attack_position_melee = 9,
		pl_attack_position_ranged = 10,
		pl_cast = 11,
		pl_cast_on_object = 12,
		pl_cast_on_position = 13,
		pl_fidget = 14,
		pl_open = 15,
		pl_close = 16,
		pl_wait_for_contact = 17,
		pl_playanim = 18,
		pl_railmove = 19,
	};

	enum eReqRetCode {
		request_ok = 0,
		request_ok_in_range = 1,
		request_ok_inside_range = 2,
		request_ok_beyond_range = 3,
		request_ok_crowded = 4,
		request_failed = 5,
		request_failed_bad_type = 6,
		request_failed_bad_owner = 7,
		request_failed_bad_target = 8,
		request_failed_missing_follower = 9,
		request_failed_no_path = 10,
		request_failed_bad_path_begin = 11,
		request_failed_bad_path_end = 12,
		request_failed_zero_velocity = 13,
		request_failed_overcrowded = 14,
		request_failed_path_leaves_world = 15,
	};

	enum eRID {
		rid_blockid = 0,
	};

	class Manager {
	public:
		DefineSingleton(Manager, 0x41425f);

		DefineMethod(BeginTeleport, 0x882005, bool, Params(const Goid_* unk1), Args(unk1));
		DefineMethod(Flush, 0x881f10, bool, Params(const Goid_* unk1, float unk2), Args(unk1, unk2));
		DefineMethod(Flush, 0x4126a7, bool, Params(const Goid_* unk1), Args(unk1));
		DefineMethod(GetLastChoreRequestedIsStillValid, 0x96a35c, bool, Params(const Goid_* unk1, eAnimChore unk2, eAnimStance unk3), Args(unk1, unk2, unk3));
		DefineMethod(GetTargetUnusedGatherPoint, 0x96abeb, bool, Params(const Goid_* unk1, const Goid_* unk2, SiegePos& unk3), Args(unk1, unk2, unk3));
		DefineMethod(MessagesAreInSync, 0x9680e1, bool, Params(const Goid_* unk1, eRID rid, eWorldEvent unk3), Args(unk1, rid, unk3));
		DefineMethod(ReconstructDependancy, 0x96942c, bool, Params(const Goid_* unk1, const Goid_* unk2, float unk3), Args(unk1, unk2, unk3));
		DefineMethod(GetLastRequestTimeRemaining, 0x96811c, float, Params(const Goid_* unk1), Args(unk1));
		DefineMethod(MakeContinuousMoveRequest, 0x968ed1, eReqRetCode, Params(const Goid_* unk1, const SiegePos& unk2, float unk3), Args(unk1, unk2, unk3));
		DefineMethod(MakeJumpRailRequest, 0x969db2, eReqRetCode, Params(const Goid_* unk1, eAnimChore unk2, const SiegePos& unk3, float unk4, float unk5, unsigned long unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
		DefineMethod(MakeLineRailRequest, 0x96a9d9, eReqRetCode, Params(const Goid_* unk1, eAnimChore unk2, unsigned long unk3, float unk4, const vector_3& unk5, bool unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
		DefineMethod(MakeLineRailRequest, 0x96a5ed, eReqRetCode, Params(const Goid_* unk1, eAnimChore unk2, unsigned long unk3, float unk4, const vector_3& unk5, float unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
		DefineMethod(MakeRequest, 0x96cb1d, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3, float unk4, float unk5, float unk6, eReqFlag unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
		DefineMethod(MakeRequest, 0x96cba0, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3, float unk4, float unk5, float unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
		DefineMethod(MakeRequest, 0x968cd1, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3, eReqFlag unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineMethod(MakeRequest, 0x9693dc, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3, eReqFlag unk4), Args(unk1, unk2, unk3, unk4));
		DefineMethod(MakeRequest, 0x9693bf, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
		DefineMethod(MakeRequest, 0x96a54b, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, float unk4, eReqFlag unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineMethod(MakeRequest, 0x96a521, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, float unk4), Args(unk1, unk2, unk3, unk4));
		DefineMethod(MakeRequest, 0x968b28, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegePos& unk3, eReqFlag unk4), Args(unk1, unk2, unk3, unk4));
		DefineMethod(MakeRequest, 0x969391, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegePos& unk3), Args(unk1, unk2, unk3));
		DefineMethod(MakeRequest, 0x968be9, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegeRot& unk3, eReqFlag unk4), Args(unk1, unk2, unk3, unk4));
		DefineMethod(MakeRequest, 0x9693a8, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, const SiegeRot& unk3), Args(unk1, unk2, unk3));
		DefineMethod(MakeRequest, 0x9693fa, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, eAnimChore unk3, const Skrit::SiegeRailWrapper& unk4, float unk5, unsigned long unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
		DefineMethod(MakeRequest, 0x968de8, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, eAnimChore unk3, const Skrit::SiegeRailWrapper& unk4, float unk5, unsigned long unk6, unsigned long unk7, bool unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
		DefineMethod(MakeRequest, 0x968a27, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, eAnimChore unk3, unsigned long unk4, unsigned long unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineMethod(MakeRequest, 0x96cc5e, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, const Goid_* unk4, float unk5, float unk6, float unk7, eReqFlag unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
		DefineMethod(MakeRequest, 0x96cc21, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, const Goid_* unk4, float unk5, float unk6, float unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
		DefineMethod(MakeRequest, 0x96a59d, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, const SiegePos& unk4, float unk5, eReqFlag unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
		DefineMethod(MakeRequest, 0x96a576, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, const SiegePos& unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineMethod(MakeRequest, 0x96c4ed, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8, eReqFlag unk9, float unk10), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10));
		DefineMethod(MakeRequest, 0x96ccda, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8, eReqFlag unk9), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9));
		DefineMethod(MakeRequest, 0x96cc9c, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const Goid_* unk5, float unk6, float unk7, float unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
		DefineMethod(MakeRequest, 0x969b3a, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const SiegePos& unk5, float unk6, eReqFlag unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
		DefineMethod(MakeRequest, 0x96a5c5, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, float unk3, unsigned long unk4, const SiegePos& unk5, float unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
		DefineMethod(MakeRequest, 0x969363, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, eReqFlag unk3), Args(unk1, unk2, unk3));
		DefineMethod(MakeRequest, 0x96cb5e, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, const Goid_* unk4, float unk5, float unk6, float unk7, eReqFlag unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
		DefineMethod(MakeRequest, 0x96cbe0, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, const Goid_* unk4, float unk5, float unk6, float unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
		DefineMethod(MakeRequest, 0x96a4f5, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, const SiegePos& unk4, float unk5, eReqFlag unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
		DefineMethod(MakeRequest, 0x96a4ca, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, const SiegePos& unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
		DefineMethod(MakeRequest, 0x968804, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, eReqFlag unk4), Args(unk1, unk2, unk3, unk4));
		DefineMethod(MakeRequest, 0x96937a, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3), Args(unk1, unk2, unk3));
		DefineMethod(MakeRequest, 0x96934d, eReqRetCode, Params(const Goid_* unk1, eRequest unk2), Args(unk1, unk2));
		DefineMethod(MakeSpeedRequest, 0x968f5a, eReqRetCode, Params(const Goid_* unk1, eRequest unk2, unsigned long unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	};
};

DefineFunction(ToString, 0x880bd0, const char*, Params(MCP::eOrientMode orientMode), Args(orientMode));
DefineFunction(ToString, 0x967fe2, const char*, Params(MCP::eReqRetCode unk1), Args(unk1));
DefineFunction(ToString, 0x967fd0, const char*, Params(MCP::eRequest unk1), Args(unk1));
DefineFunction(ToString, 0x880c1e, const char*, Params(MCP::eRID rid), Args(rid));
