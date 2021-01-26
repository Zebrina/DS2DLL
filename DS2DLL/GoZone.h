#pragma once

#include "GoComponent.h"
#include "GPMath.h"
#include "SiegePos.h"

class GoZone : public GoComponent {
public:
	$ConstMethod(0x0090cf52, IsPosInZone, bool, const SiegePos& pos);
	$ConstMethod(0x0090cf7e, IsPosOnBackSide, bool, const SiegePos& pos);
	$ConstMethod(0x0090cf68, IsPosOnFrontSide, bool, const SiegePos& pos);
	$ConstMethod(0x0090cf94, IsPosOnLeftSide, bool, const SiegePos& pos);
	$ConstMethod(0x0090cfaa, IsPosOnRightSide, bool, const SiegePos& pos);
	$ConstMethod(0x004283e0, IsValid, bool);
	$Method(0x0090cfc0, GetPosition, const SiegePos&);
	$Method(0x0090cfed, GetBackDirection, void, Vector3& unk1);
	$Method(0x0090cfd2, GetFrontDirection, void, Vector3& unk1);
	$Method(0x0090d03e, GetLeftDirection, void, Vector3& unk1);
	$Method(0x0090d023, GetRightDirection, void, Vector3& unk1);

private:
	// 0x14
	$Padding(0x14, 0x18);
	// 0x18
	SiegePos* position;
};
