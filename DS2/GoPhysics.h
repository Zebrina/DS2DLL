#pragma once

class GoPhysics {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x47276e, GoPhysics*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoPhysics*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoPhysics* unk1); //0x00472765
	DefineMethod(AddBreakParticulates, 0x94fc4f, bool, Params(const gpbstring<char>& unk1, int unk2), Args(const gpbstring<char>& unk1, int unk2));
	DefineConstMethod(GetDamageAll, 0x94f1dd, bool, Params(), Args());
	DefineConstMethod(GetExplodeIfHitGo, 0x472702, bool, Params(), Args());
	DefineConstMethod(GetExplodeIfHitTerrain, 0x47270b, bool, Params(), Args());
	DefineConstMethod(GetExplodeOnExpiration, 0x47271f, bool, Params(), Args());
	DefineConstMethod(GetExplodeWhenKilled, 0x472715, bool, Params(), Args());
	DefineConstMethod(GetHasExploded, 0x472729, bool, Params(), Args());
	DefineConstMethod(GetIsBreakable, 0x4726e7, bool, Params(), Args());
	DefineConstMethod(GetPenetrate, 0x472747, bool, Params(), Args());
	DefineConstMethod(GetRandomizeVelocity, 0x94f4c0, bool, Params(), Args());
	/*GoPhysics*/ public: const vector_3& /*__thiscall*/ GetAngularVelocity() const; //0x0094f4f9
	DefineConstMethod(GetExplosionMagnitude, 0x94f132, float, Params(), Args());
	DefineConstMethod(GetGibMinDamage, 0x94f16b, float, Params(), Args());
	DefineConstMethod(GetGibThreshold, 0x94f1a4, float, Params(), Args());
	DefineConstMethod(GetGravity, 0x94f530, float, Params(), Args());
	DefineConstMethod(GetVelocity, 0x94f487, float, Params(), Args());
	DefineMethod(ClearBreakParticulates, 0x94f653, void, Params(), Args());
	DefineMethod(RCSetPassThrough, 0x94ea92, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RCSetPenetrate, 0x94eb77, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetIsBreakable, 0x4726f1, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetPassThrough, 0x472733, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetPenetrate, 0x472751, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SSetPassThrough, 0x94ee09, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SSetPenetrate, 0x94ee12, void, Params(bool unk1), Args(bool unk1));
};
