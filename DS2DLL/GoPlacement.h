#pragma once

#include "FuBi.h"
#include "GoComponent.h"
#include "GPMath.h"
#include "Siege.h"
#include "SiegePos.h"

class GoPlacement : public GoComponent {
public:
	$StaticMethod(0x0040883c, FUBI_NetToInstance, GoPlacement*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00408833, FUBI_InstanceToNet, uint, GoPlacement* unk1);
	$Method(0x008078cd, GetAttackPointState, bool, const Scid* unk1);
	$ConstMethod(0x008045a8, GetIsInVisibleNode, bool);
	$ConstMethod(0x008045c8, GetIsNodeInAnyWorldFrustum, bool);
	$ConstMethod(0x00804e72, HasAttackPoints, bool);
	$ConstMethod(0x00804dbe, HasDropPoints, bool);
	$ConstMethod(0x00804e18, HasGatherPoints, bool);
	$ConstMethod(0x00804d61, HasUsePoints, bool);
	$ConstMethod(0x008043bf, IsPosOnBackSide, bool, const SiegePos& unk1);
	$ConstMethod(0x00804334, IsPosOnFrontSide, bool, const SiegePos& unk1);
	$ConstMethod(0x008044f9, IsPosOnLeftSide, bool, const SiegePos& unk1);
	$ConstMethod(0x0080444a, IsPosOnRightSide, bool, const SiegePos& unk1);
	$Method(0x0080790b, SetAttackPointState, bool, const Scid* unk1, bool unk2);
	$ConstMethod(0x0040a364, GetOrientation, const Quat&);
	$ConstMethod(0x00804cda, GetOriginalPosition, const SiegePos&);
	$ConstMethod(0x00803c59, GetPosition, const SiegePos&);
	$ConstMethod(0x00408821, GetRawPosition, const SiegePos&);
	$ConstMethod(0x00408825, GetLiquidHeight, float);
	$ConstMethod(0x0040882c, GetLiquidFlags, siege::eLogicalNodeFlags);
	$ConstMethod(0x0040a387, Get2DDirection, void, Vector3& unk1);
	$ConstMethod(0x008042f2, GetWorld2DDirection, void, Vector3& unk1);
	$Method(0x00805988, RCSetOrientation, void, const Quat& unk1);
	$Method(0x00805a8d, RCSetPlacementPeek, void, SiegePos unk1, Quat unk2);
	$Method(0x008057fc, RCSetPosition, void, const SiegePos& unk1);
	$Method(0x00805fad, RSSetPosition, void, const SiegePos& unk1);
	$Method(0x00805a71, SSetOrientation, void, const Quat& unk1);
	$Method(0x008060d7, SSetPlacement, void, const SiegePos& unk1, const Quat& unk2, bool unk3);
	$Method(0x008058e5, SSetPosition, void, const SiegePos& unk1, bool unk2);
};
