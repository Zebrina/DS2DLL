#pragma once

#include "AnimReq.h"
#include "BoneTranslator.h"
#include "FuBi.h"
#include "GoComponent.h"
#include "Siege.h"

class GoBody : public GoComponent {
public:
	$StaticMethod(0x00472509, FUBI_NetToInstance, GoBody*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x00472500, FUBI_InstanceToNet, uint, GoBody* unk1);
	$ConstMethod(0x00949330, IsPositionWalkable, bool, const SiegePos& unk1);
	$ConstMethod(0x00475fda, GetBoneTranslator, const BoneTranslator&);
	$Method(0x00949326, GetAvgMoveVelocity, float);
	$ConstMethod(0x0094957e, GetBoneBoundingRadius, float, const GPBString& unk1);
	
	$ConstMethod(0x004724e7, GetMaxMoveVelocity, float);
	$Method(0x00473fcd, GetMeleeAnimationSpeedBonus, float);
	$ConstMethod(0x004724d2, GetMinMoveVelocity, float);
	$ConstMethod(0x004724d6, GetNaturalAvgMoveVelocity, float);
	$Method(0x00473fd1, GetRangedAnimationSpeedBonus, float);
	$Method(0x009498c1, RCAnimate, void, const AnimReq& unk1);
	$Method(0x00949ee7, RCSetBaseSkinTone, void);
	$Method(0x009499a6, SAnimate, void, const AnimReq& unk1);
	$Method(0x004724da, SetAvgMoveVelocity, void, float unk1);
	$Method(0x00475fde, SetMeleeAnimationSpeedBonus, void, float unk1);
	$Method(0x00475feb, SetRangedAnimationSpeedBonus, void, float unk1);
	$ConstMethod(0x00473fd5, GetCastAnimationSpeedBonus, float);
	$Method(0x00475ff8, SetCastAnimationSpeedBonus, void, float unk1);
	$Method(0x00476005, SetMoveAnimationSpeedBonus, void, float unk1);
	$Method(0x00473fd9, GetMoveAnimationSpeedBonus, float);
	$ConstMethod(0x004724eb, GetTerrainMovementPermissions, siege::eLogicalNodeFlags);
	$Method(0x004724fc, GetFreeze, bool);
	$Method(0x004724ef, SetFreeze, void, bool unk1);

	// 0x1c
	BoneTranslator boneTranslator;
	// 0x20
	float minMoveVelocity;
	// 0x24
	float naturalAvgMoveVelocity;
	// 0x28
	float maxMoveVelocity;
	// 0x30
	float meleeSpeedAnimationBonus;
	// 0x38
	float rangedAnimationSpeedBonus;
	// 0x40
	float castAnimationSpeedBonus;
	// 0x48
	float moveAnimationSpeedBonus;
	// 0x4c
	siege::eLogicalNodeFlags terrainMovementPermissions;
	// 0x50
	bool freeze;
};
