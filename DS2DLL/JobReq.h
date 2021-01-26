#pragma once

#include "Enums.h"
#include "GoidScid.h"
#include "Job.h"
#include "SiegePos.h"

struct JobReq {
	JobReq() = default;
	JobReq(const JobReq&) = default;
	~JobReq() = default;

	JobReq& operator=(const JobReq&) = default;

	$ConstMethod(0x00428044, GetGoalModifier, const Goid*);
	$ConstMethod(0x00428033, GetGoalObject, const Goid*);
	$ConstMethod(0x00428022, GetNotify, const Goid*);
	$ConstMethod(0x0042806f, GetGoalOrientation, const Quat&);
	$ConstMethod(0x004280b2, GetSECommandScid, const Scid*);
	$ConstMethod(0x00428055, GetGoalPosition, const SiegePos&);
	$ConstMethod(0x00427fef, GetOrigin, eActionOrigin);
	$ConstMethod(0x0042807f, GetSlot, eEquipSlot);
	$ConstMethod(0x00427fbe, GetJat, eJobAbstractType);
	$ConstMethod(0x00427fcd, GetQ, eJobQ);
	$ConstMethod(0x00427fde, GetQPlace, eQPlace);
	$ConstMethod(0x004280c3, GetFloat1, float);
	$ConstMethod(0x00428090, GetInt1, int);
	$ConstMethod(0x004280a1, GetInt2, int);
	$ConstMethod(0x00428011, GetPlaceAfter, uint);
	$ConstMethod(0x00428000, GetPlaceBefore, uint);
	$Method(0x004280c7, SetFloat1, void, float unk1);
	$Method(0x00428048, SetGoalModifier, void, const Goid* unk1);
	$Method(0x00428037, SetGoalObject, void, const Goid* unk1);
	$Method(0x00428073, SetGoalOrientation, void, const Quat& unk1);
	$Method(0x00428059, SetGoalPosition, void, const SiegePos& unk1);
	$Method(0x00428094, SetInt1, void, int unk1);
	$Method(0x004280a5, SetInt2, void, int unk1);
	$Method(0x00427fc1, SetJat, void, eJobAbstractType unk1);
	$Method(0x00428026, SetNotify, void, const Goid* unk1);
	$Method(0x00427ff3, SetOrigin, void, eActionOrigin unk1);
	$Method(0x00428015, SetPlaceAfter, void, uint unk1);
	$Method(0x00428004, SetPlaceBefore, void, uint unk1);
	$Method(0x00427fd1, SetQ, void, eJobQ unk1);
	$Method(0x00427fe2, SetQPlace, void, eQPlace unk1);
	$Method(0x004280b6, SetSECommandScid, void, const Scid* unk1);
	$Method(0x00428083, SetSlot, void, eEquipSlot unk1);

    // 0x00
    $Padding(0x00, 0x78);
};

// Size confirmed.
STATIC_ASSERT(sizeof(JobReq) == 0x78);
