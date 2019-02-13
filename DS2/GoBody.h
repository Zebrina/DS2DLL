#pragma once

#include "FuBi.h"
#include "Siege.h"

class GoBody {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x472509, GoBody*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoBody*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoBody* unk1); //0x00472500
	DefineMethod(GetFreeze, 0x4724fc, bool, Params(), Args());
	DefineConstMethod(IsPositionWalkable, 0x949330, bool, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	/*GoBody*/ public: const BoneTranslator& /*__thiscall*/ GetBoneTranslator() const; //0x00475fda
	DefineMethod(GetAvgMoveVelocity, 0x949326, float, Params(), Args());
	DefineConstMethod(GetBoneBoundingRadius, 0x94957e, float, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(GetCastAnimationSpeedBonus, 0x473fd5, float, Params(), Args());
	DefineConstMethod(GetMaxMoveVelocity, 0x4724e7, float, Params(), Args());
	DefineMethod(GetMeleeAnimationSpeedBonus, 0x473fcd, float, Params(), Args());
	DefineConstMethod(GetMinMoveVelocity, 0x4724d2, float, Params(), Args());
	DefineMethod(GetMoveAnimationSpeedBonus, 0x473fd9, float, Params(), Args());
	DefineConstMethod(GetNaturalAvgMoveVelocity, 0x4724d6, float, Params(), Args());
	DefineMethod(GetRangedAnimationSpeedBonus, 0x473fd1, float, Params(), Args());
	DefineConstMethod(GetTerrainMovementPermissions, 0x4724eb, siege::eLogicalNodeFlags, Params(), Args());
	DefineMethod(RCAnimate, 0x9498c1, void, Params(const AnimReq& unk1), Args(const AnimReq& unk1));
	DefineMethod(RCSetBaseSkinTone, 0x949ee7, void, Params(), Args());
	DefineMethod(SAnimate, 0x9499a6, void, Params(const AnimReq& unk1), Args(const AnimReq& unk1));
	DefineMethod(SetAvgMoveVelocity, 0x4724da, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetCastAnimationSpeedBonus, 0x475ff8, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetFreeze, 0x4724ef, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetMeleeAnimationSpeedBonus, 0x475fde, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetMoveAnimationSpeedBonus, 0x476005, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetRangedAnimationSpeedBonus, 0x475feb, void, Params(float unk1), Args(float unk1));
};
