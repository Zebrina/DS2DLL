#pragma once

#include "BoneTranslator.h"
#include "FuBi.h"
#include "MCP.h"

class GoFollower {
public:
	/*GoFollower*/ private: /*static*/ GoFollower* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x004283c1
	/*GoFollower*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoFollower* unk1); //0x004283b8
	/*GoFollower*/ public: BoneTranslator::eBone /*__thiscall*/ GetCurrentOrientTargetBone() const; //0x0042837e
	/*GoFollower*/ public: bool /*__thiscall*/ IsOrientModeDefined() const; //0x0042835f
	/*GoFollower*/ public: const Goid_* /*__thiscall*/ GetCurrentOrientTarget() const; //0x00428368
	/*GoFollower*/ public: const SiegePos& /*__thiscall*/ GetCurrentOrientTargPos() const; //0x00428393
	/*GoFollower*/ public: const SiegeRot& /*__thiscall*/ GetCurrentOrientationGoal() const; //0x004283a9
	/*GoFollower*/ public: float /*__thiscall*/ GetCurrentTurnAngle(double unk1); //0x00903915
	/*GoFollower*/ public: float /*__thiscall*/ GetCurrentVelocity() const; //0x00902174
	/*GoFollower*/ public: MCP::eOrientMode /*__thiscall*/ GetCurrentOrientMode() const; //0x0042835b
	/*GoFollower*/ public: void /*__thiscall*/ RCSendPackedClipToFollowers(const_mem_ptr unk1); //0x00907196
	/*GoFollower*/ public: void /*__thiscall*/ RCSendPackedPositionUpdateToFollowers(const_mem_ptr unk1); //0x00903bca
	/*GoFollower*/ public: void /*__thiscall*/ RCSendPackedUpdateToFollowers(const_mem_ptr unk1); //0x00907534
};
