#pragma once

#include "BoneTranslator.h"
#include "FuBi.h"
#include "MCP.h"

class GoFollower {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x4283c1, GoFollower*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoFollower*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoFollower* unk1); //0x004283b8
	DefineConstMethod(GetCurrentOrientTargetBone, 0x42837e, BoneTranslator::eBone, Params(), Args());
	DefineConstMethod(IsOrientModeDefined, 0x42835f, bool, Params(), Args());
	/*GoFollower*/ public: const Goid_* /*__thiscall*/ GetCurrentOrientTarget() const; //0x00428368
	/*GoFollower*/ public: const SiegePos& /*__thiscall*/ GetCurrentOrientTargPos() const; //0x00428393
	/*GoFollower*/ public: const SiegeRot& /*__thiscall*/ GetCurrentOrientationGoal() const; //0x004283a9
	DefineMethod(GetCurrentTurnAngle, 0x903915, float, Params(double unk1), Args(double unk1));
	DefineConstMethod(GetCurrentVelocity, 0x902174, float, Params(), Args());
	DefineConstMethod(GetCurrentOrientMode, 0x42835b, MCP::eOrientMode, Params(), Args());
	DefineMethod(RCSendPackedClipToFollowers, 0x907196, void, Params(const_mem_ptr unk1), Args(const_mem_ptr unk1));
	DefineMethod(RCSendPackedPositionUpdateToFollowers, 0x903bca, void, Params(const_mem_ptr unk1), Args(const_mem_ptr unk1));
	DefineMethod(RCSendPackedUpdateToFollowers, 0x907534, void, Params(const_mem_ptr unk1), Args(const_mem_ptr unk1));
};
