#pragma once

#include "Enums.h"
#include "GoidScid.h"
#include "SiegePos.h"
#include "Skrit.h"

class MCP {
public:
	enum eOrientMode {
		UNDEFINED = 0,
		LOCK_TO_HEADING = 1,
		FIXED_DIRECTION = 2,
		FIXED_POSITION = 3,
		TRACK_OBJECT = 4,
		LOCK_TO_HEADING_REVERSE = 5,
		FIXED_POSITION_REVERSE = 6,
		TRACK_OBJECT_REVERSE = 7,
	};

	enum eReqFlag {
        REQFLAG_DEFAULT,
        REQFLAG_NOMOVE,
        REQFLAG_NOTURN,
        REQFLAG_NOMOVETURN,
        REQFLAG_FACEREVERSE,
	};

	enum eRequest {
		PL_NONE = 0,
		PL_APPROACH = 1,
		PL_FOLLOW = 2,
		PL_INTERCEPT = 3,
		PL_AVOID = 4,
		PL_FACE = 5,
		PL_DIE = 6,
		PL_ATTACK_OBJECT_MELEE = 7,
		PL_ATTACK_OBJECT_RANGED = 8,
		PL_ATTACK_POSITION_MELEE = 9,
		PL_ATTACK_POSITION_RANGED = 10,
		PL_CAST = 11,
		PL_CAST_ON_OBJECT = 12,
		PL_CAST_ON_POSITION = 13,
		PL_FIDGET = 14,
		PL_OPEN = 15,
		PL_CLOSE = 16,
		PL_WAIT_FOR_CONTACT = 17,
		PL_PLAYANIM = 18,
		PL_RAILMOVE = 19,
	};

	enum eReqRetCode {
		REQUEST_OK = 0,
		REQUEST_OK_IN_RANGE = 1,
		REQUEST_OK_INSIDE_RANGE = 2,
		REQUEST_OK_BEYOND_RANGE = 3,
		REQUEST_OK_CROWDED = 4,
		REQUEST_FAILED = 5,
		REQUEST_FAILED_BAD_TYPE = 6,
		REQUEST_FAILED_BAD_OWNER = 7,
		REQUEST_FAILED_BAD_TARGET = 8,
		REQUEST_FAILED_MISSING_FOLLOWER = 9,
		REQUEST_FAILED_NO_PATH = 10,
		REQUEST_FAILED_BAD_PATH_BEGIN = 11,
		REQUEST_FAILED_BAD_PATH_END = 12,
		REQUEST_FAILED_ZERO_VELOCITY = 13,
		REQUEST_FAILED_OVERCROWDED = 14,
		REQUEST_FAILED_PATH_LEAVES_WORLD = 15,
	};

    enum eRID {
        RID_UNDEFINED,
        RID_INTERNAL,
        RID_LOCKMOVE,
        RID_SYNCH,
        RID_CLIP,
        RID_REFRESH,
        RID_DUMMYSAVED,
        RID_OVERRIDE,
		RID_BLOCKID,
	};

	class Manager {
	public:
		$Singleton(Manager, 0x0041425f);

		$Method(0x00882005, BeginTeleport, bool, const Goid* unk1);
		$Method(0x00881f10, Flush, bool, const Goid* unk1, float unk2);
		$Method(0x004126a7, Flush, bool, const Goid* unk1);
		$Method(0x0096a35c, GetLastChoreRequestedIsStillValid, bool, const Goid* unk1, eAnimChore chore, eAnimStance unk3);
		$Method(0x0096abeb, GetTargetUnusedGatherPoint, bool, const Goid* unk1, const Goid* unk2, SiegePos& unk3);
		$Method(0x009680e1, MessagesAreInSync, bool, const Goid* unk1, eRID rid, eWorldEvent unk3);
		$Method(0x0096942c, ReconstructDependancy, bool, const Goid* unk1, const Goid* unk2, float unk3);
		$Method(0x0096811c, GetLastRequestTimeRemaining, float, const Goid* unk1);
		$Method(0x00968ed1, MakeContinuousMoveRequest, eReqRetCode, const Goid* unk1, const SiegePos& unk2, float unk3);
		$Method(0x00969db2, MakeJumpRailRequest, eReqRetCode, const Goid* unk1, eAnimChore chore, const SiegePos& unk3, float unk4, float unk5, uint unk6, bool unk7);
		$Method(0x0096a9d9, MakeLineRailRequest, eReqRetCode, const Goid* unk1, eAnimChore chore, uint unk3, float unk4, const Vector3& unk5, bool unk6);
		$Method(0x0096a5ed, MakeLineRailRequest, eReqRetCode, const Goid* unk1, eAnimChore chore, uint unk3, float unk4, const Vector3& unk5, float unk6, bool unk7);
		$Method(0x0096cb1d, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const Goid* target, float lookAhead, float maxApproachTime, float rangeToTarget, eReqFlag flags);
		$Method(0x0096cba0, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const Goid* target, float lookAhead, float maxApproachTime, float rangeToTarget);
		$Method(0x00968cd1, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const Goid* target, eReqFlag flags, float unk5);
		$Method(0x009693dc, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const Goid* target, eReqFlag flags);
		$Method(0x009693bf, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const Goid* target);
		$Method(0x0096a54b, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const SiegePos& position, float unk4, eReqFlag flags);
		$Method(0x0096a521, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const SiegePos& position, float unk4);
		$Method(0x00968b28, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const SiegePos& position, eReqFlag flags);
		$Method(0x00969391, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const SiegePos& position);
		$Method(0x00968be9, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const SiegeRot& position, eReqFlag flags);
		$Method(0x009693a8, MakeRequest, eReqRetCode, const Goid* source, eRequest request, const SiegeRot& position);
		$Method(0x009693fa, MakeRequest, eReqRetCode, const Goid* source, eRequest request, eAnimChore chore, const Skrit::SiegeRailWrapper& unk4, float unk5, uint unk6, bool unk7);
		$Method(0x00968de8, MakeRequest, eReqRetCode, const Goid* source, eRequest request, eAnimChore chore, const Skrit::SiegeRailWrapper& unk4, float unk5, uint unk6, uint unk7, bool unk8);
		$Method(0x00968a27, MakeRequest, eReqRetCode, const Goid* source, eRequest request, eAnimChore chore, uint subIndex, uint unk5);
		$Method(0x0096cc5e, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, const Goid* target, float lookAhead, float maxApproachTime, float rangeToTarget, eReqFlag flags);
		$Method(0x0096cc21, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, const Goid* target, float lookAhead, float maxApproachTime, float rangeToTarget);
		$Method(0x0096a59d, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, const SiegePos& position, float unk5, eReqFlag flags);
		$Method(0x0096a576, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, const SiegePos& position, float unk5);
		$Method(0x0096c4ed, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, uint subIndex, const Goid* target, float lookAhead, float maxApproachTime, float rangeToTarget, eReqFlag flags, float speed);
		$Method(0x0096ccda, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, uint subIndex, const Goid* target, float lookAhead, float maxApproachTime, float rangeToTarget, eReqFlag flags);
		$Method(0x0096cc9c, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, uint subIndex, const Goid* target, float lookAhead, float maxApproachTime, float rangeToTarget);
		$Method(0x00969b3a, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, uint subIndex, const SiegePos& unk5, float unk6, eReqFlag flags);
		$Method(0x0096a5c5, MakeRequest, eReqRetCode, const Goid* source, eRequest request, float loopDuration, uint subIndex, const SiegePos& unk5, float unk6);
		$Method(0x00969363, MakeRequest, eReqRetCode, const Goid* source, eRequest request, eReqFlag flags);
		$Method(0x0096cb5e, MakeRequest, eReqRetCode, const Goid* source, eRequest request, uint subIndex, const Goid* unk4, float lookAhead, float maxApproachTime, float rangeToTarget, eReqFlag flags);
		$Method(0x0096cbe0, MakeRequest, eReqRetCode, const Goid* source, eRequest request, uint subIndex, const Goid* unk4, float lookAhead, float maxApproachTime, float rangeToTarget);
		$Method(0x0096a4f5, MakeRequest, eReqRetCode, const Goid* source, eRequest request, uint subIndex, const SiegePos& position, float unk5, eReqFlag flags);
		$Method(0x0096a4ca, MakeRequest, eReqRetCode, const Goid* source, eRequest request, uint subIndex, const SiegePos& position, float unk5);
		$Method(0x00968804, MakeRequest, eReqRetCode, const Goid* source, eRequest request, uint subIndex, eReqFlag flags);
		$Method(0x0096937a, MakeRequest, eReqRetCode, const Goid* source, eRequest request, uint subIndex);
		$Method(0x0096934d, MakeRequest, eReqRetCode, const Goid* source, eRequest request);
		$Method(0x00968f5a, MakeSpeedRequest, eReqRetCode, const Goid* source, eRequest request, uint unk3, float unk4);
	};
};

typedef MCP::Manager MCPManager;
typedef MCP::eOrientMode eOrientMode;
typedef MCP::eReqFlag eReqFlag;
typedef MCP::eRequest eRequest;
typedef MCP::eReqRetCode eReqRetCode;
typedef MCP::eRID eRID;

$Function(0x00880bd0, ToString, const char*, eOrientMode orientMode);
$Function(0x00967fe2, ToString, const char*, eReqRetCode reqRetCode);
$Function(0x00967fd0, ToString, const char*, eRequest request);
$Function(0x00880c1e, ToString, const char*, eRID rid);
