#pragma once

#include "BoneTranslator.h"
#include "FuBi.h"
#include "MCP.h"

class GoFollower {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x4283c1, GoFollower*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x4283b8, unsigned long, Params(GoFollower* unk1), Args(unk1));
	DefineConstMethod(GetCurrentOrientTargetBone, 0x42837e, BoneTranslator::eBone, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsOrientModeDefined, 0x42835f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCurrentOrientTarget, 0x428368, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCurrentOrientTargPos, 0x428393, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCurrentOrientationGoal, 0x4283a9, const SiegeRot&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCurrentTurnAngle, 0x903915, float, Params(double unk1), Args(unk1));
	DefineConstMethod(GetCurrentVelocity, 0x902174, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCurrentOrientMode, 0x42835b, MCP::eOrientMode, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSendPackedClipToFollowers, 0x907196, void, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RCSendPackedPositionUpdateToFollowers, 0x903bca, void, Params(const_mem_ptr unk1), Args(unk1));
	DefineMethod(RCSendPackedUpdateToFollowers, 0x907534, void, Params(const_mem_ptr unk1), Args(unk1));
};
