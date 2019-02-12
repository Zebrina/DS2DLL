#pragma once

#include "FuBi.h"
#include "Siege.h"

class GoBody {
public:
	/*GoBody*/ private: /*static*/ GoBody* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00472509
	/*GoBody*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoBody* unk1); //0x00472500
	/*GoBody*/ public: bool /*__thiscall*/ GetFreeze(); //0x004724fc
	/*GoBody*/ public: bool /*__thiscall*/ IsPositionWalkable(const SiegePos& unk1) const; //0x00949330
	/*GoBody*/ public: const BoneTranslator& /*__thiscall*/ GetBoneTranslator() const; //0x00475fda
	/*GoBody*/ public: float /*__thiscall*/ GetAvgMoveVelocity(); //0x00949326
	/*GoBody*/ public: float /*__thiscall*/ GetBoneBoundingRadius(const gpbstring<char>& unk1) const; //0x0094957e
	/*GoBody*/ public: float /*__thiscall*/ GetCastAnimationSpeedBonus(); //0x00473fd5
	/*GoBody*/ public: float /*__thiscall*/ GetMaxMoveVelocity() const; //0x004724e7
	/*GoBody*/ public: float /*__thiscall*/ GetMeleeAnimationSpeedBonus(); //0x00473fcd
	/*GoBody*/ public: float /*__thiscall*/ GetMinMoveVelocity() const; //0x004724d2
	/*GoBody*/ public: float /*__thiscall*/ GetMoveAnimationSpeedBonus(); //0x00473fd9
	/*GoBody*/ public: float /*__thiscall*/ GetNaturalAvgMoveVelocity() const; //0x004724d6
	/*GoBody*/ public: float /*__thiscall*/ GetRangedAnimationSpeedBonus(); //0x00473fd1
	/*GoBody*/ public: siege::eLogicalNodeFlags /*__thiscall*/ GetTerrainMovementPermissions() const; //0x004724eb
	/*GoBody*/ public: void /*__thiscall*/ RCAnimate(const AnimReq& unk1); //0x009498c1
	/*GoBody*/ public: void /*__thiscall*/ RCSetBaseSkinTone(); //0x00949ee7
	/*GoBody*/ public: void /*__thiscall*/ SAnimate(const AnimReq& unk1); //0x009499a6
	/*GoBody*/ public: void /*__thiscall*/ SetAvgMoveVelocity(float unk1); //0x004724da
	/*GoBody*/ public: void /*__thiscall*/ SetCastAnimationSpeedBonus(float unk1); //0x00475ff8
	/*GoBody*/ public: void /*__thiscall*/ SetFreeze(bool unk1); //0x004724ef
	/*GoBody*/ public: void /*__thiscall*/ SetMeleeAnimationSpeedBonus(float unk1); //0x00475fde
	/*GoBody*/ public: void /*__thiscall*/ SetMoveAnimationSpeedBonus(float unk1); //0x00476005
	/*GoBody*/ public: void /*__thiscall*/ SetRangedAnimationSpeedBonus(float unk1); //0x00475feb
};
