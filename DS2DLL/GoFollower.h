#pragma once

#include "BoneTranslator.h"
#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "MCP.h"
#include "Memory.h"
#include "SiegePos.h"
#include "SiegeRot.h"

class GoFollower : public GoComponent {
public:
	$StaticMethod(0x004283c1, FUBI_NetToInstance, GoFollower*, uint unk1, FuBiCookie** out);
	$StaticMethod(0x004283b8, FUBI_InstanceToNet, uint, GoFollower* unk1);
	$ConstMethod(0x0042837e, GetCurrentOrientTargetBone, BoneTranslator::eBone);
	$ConstMethod(0x0042835f, IsOrientModeDefined, bool);
	$ConstMethod(0x00428368, GetCurrentOrientTarget, const Goid*);
	$ConstMethod(0x00428393, GetCurrentOrientTargPos, const SiegePos&);
	$ConstMethod(0x004283a9, GetCurrentOrientationGoal, const SiegeRot&);
	$Method(0x00903915, GetCurrentTurnAngle, float, double unk1);
	$ConstMethod(0x00902174, GetCurrentVelocity, float);
	$ConstMethod(0x0042835b, GetCurrentOrientMode, MCP::eOrientMode);
	$Method(0x00907196, RCSendPackedClipToFollowers, void, const_mem_ptr unk1);
	$Method(0x00903bca, RCSendPackedPositionUpdateToFollowers, void, const_mem_ptr unk1);
	$Method(0x00907534, RCSendPackedUpdateToFollowers, void, const_mem_ptr unk1);

	// 0x14
	MCP::eOrientMode currentOrientMode;
	// 0x18
	SiegeRot currentOrientationGoal;
	// 0x28
	$Padding(0x2c, 0x40);
	// 0x40
	SiegePos currentOrientTargPos;
	// 0x54
	$Padding(0x54, 0x68);
	// 0x68
	Goid* currentOrientTarget;
	// 0x6c
	$Padding(0x6c, 0xe8);
	// 0xe8
	float currentVelocityVar;
};

STATIC_ASSERT_OFFSETOF(GoFollower, currentOrientMode, 0x14);
STATIC_ASSERT_OFFSETOF(GoFollower, currentOrientTargPos, 0x40);
STATIC_ASSERT_OFFSETOF(GoFollower, currentOrientTarget, 0x68);
STATIC_ASSERT_OFFSETOF(GoFollower, currentVelocityVar, 0xe8);
