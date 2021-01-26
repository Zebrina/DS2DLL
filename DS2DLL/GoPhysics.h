#pragma once

#include "FuBi.h"
#include "GoComponent.h"
#include "GPMath.h"

class GoPhysics : public GoComponent {
public:
	$StaticMethod(0x0047276e, FUBI_NetToInstance, GoPhysics*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00472765, FUBI_InstanceToNet, uint, GoPhysics* unk1);
	$Method(0x0094fc4f, AddBreakParticulates, bool, const GPBString& unk1, int unk2);
	$ConstMethod(0x0094f1dd, GetDamageAll, bool);
	$ConstMethod(0x00472702, GetExplodeIfHitGo, bool);
	$ConstMethod(0x0047270b, GetExplodeIfHitTerrain, bool);
	$ConstMethod(0x0047271f, GetExplodeOnExpiration, bool);
	$ConstMethod(0x00472715, GetExplodeWhenKilled, bool);
	$ConstMethod(0x00472729, GetHasExploded, bool);
	$ConstMethod(0x004726e7, GetIsBreakable, bool);
	$ConstMethod(0x00472747, GetPenetrate, bool);
	$ConstMethod(0x0094f4c0, GetRandomizeVelocity, bool);
	$ConstMethod(0x0094f4f9, GetAngularVelocity, const Vector3&);
	$ConstMethod(0x0094f132, GetExplosionMagnitude, float);
	$ConstMethod(0x0094f16b, GetGibMinDamage, float);
	$ConstMethod(0x0094f1a4, GetGibThreshold, float);
	$ConstMethod(0x0094f530, GetGravity, float);
	$ConstMethod(0x0094f487, GetVelocity, float);
	$Method(0x0094f653, ClearBreakParticulates, void);
	$Method(0x0094ea92, RCSetPassThrough, void, bool unk1);
	$Method(0x0094eb77, RCSetPenetrate, void, bool unk1);
	$Method(0x004726f1, SetIsBreakable, void, bool unk1);
	$Method(0x00472733, SetPassThrough, void, bool unk1);
	$Method(0x00472751, SetPenetrate, void, bool unk1);
	$Method(0x0094ee09, SSetPassThrough, void, bool unk1);
	$Method(0x0094ee12, SSetPenetrate, void, bool unk1);
};
