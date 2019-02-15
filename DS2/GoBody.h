#pragma once

#include "FuBi.h"
#include "Siege.h"

class GoBody {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x472509, GoBody*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x472500, unsigned long, Params(GoBody* unk1), Args(unk1));
	DefineMethod(GetFreeze, 0x4724fc, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsPositionWalkable, 0x949330, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(GetBoneTranslator, 0x475fda, const BoneTranslator&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAvgMoveVelocity, 0x949326, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBoneBoundingRadius, 0x94957e, float, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetCastAnimationSpeedBonus, 0x473fd5, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMaxMoveVelocity, 0x4724e7, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMeleeAnimationSpeedBonus, 0x473fcd, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMinMoveVelocity, 0x4724d2, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMoveAnimationSpeedBonus, 0x473fd9, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNaturalAvgMoveVelocity, 0x4724d6, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetRangedAnimationSpeedBonus, 0x473fd1, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTerrainMovementPermissions, 0x4724eb, siege::eLogicalNodeFlags, NO_PARAMS, NO_ARGS);
	DefineMethod(RCAnimate, 0x9498c1, void, Params(const AnimReq& unk1), Args(unk1));
	DefineMethod(RCSetBaseSkinTone, 0x949ee7, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SAnimate, 0x9499a6, void, Params(const AnimReq& unk1), Args(unk1));
	DefineMethod(SetAvgMoveVelocity, 0x4724da, void, Params(float unk1), Args(unk1));
	DefineMethod(SetCastAnimationSpeedBonus, 0x475ff8, void, Params(float unk1), Args(unk1));
	DefineMethod(SetFreeze, 0x4724ef, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetMeleeAnimationSpeedBonus, 0x475fde, void, Params(float unk1), Args(unk1));
	DefineMethod(SetMoveAnimationSpeedBonus, 0x476005, void, Params(float unk1), Args(unk1));
	DefineMethod(SetRangedAnimationSpeedBonus, 0x475feb, void, Params(float unk1), Args(unk1));
};
