#pragma once

class GoPhysics {
public:
	/*GoPhysics*/ private: /*static*/ GoPhysics* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x0047276e
	/*GoPhysics*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoPhysics* unk1); //0x00472765
	/*GoPhysics*/ public: bool /*__thiscall*/ AddBreakParticulates(const gpbstring<char>& unk1, int unk2); //0x0094fc4f
	/*GoPhysics*/ public: bool /*__thiscall*/ GetDamageAll() const; //0x0094f1dd
	/*GoPhysics*/ public: bool /*__thiscall*/ GetExplodeIfHitGo() const; //0x00472702
	/*GoPhysics*/ public: bool /*__thiscall*/ GetExplodeIfHitTerrain() const; //0x0047270b
	/*GoPhysics*/ public: bool /*__thiscall*/ GetExplodeOnExpiration() const; //0x0047271f
	/*GoPhysics*/ public: bool /*__thiscall*/ GetExplodeWhenKilled() const; //0x00472715
	/*GoPhysics*/ public: bool /*__thiscall*/ GetHasExploded() const; //0x00472729
	/*GoPhysics*/ public: bool /*__thiscall*/ GetIsBreakable() const; //0x004726e7
	/*GoPhysics*/ public: bool /*__thiscall*/ GetPenetrate() const; //0x00472747
	/*GoPhysics*/ public: bool /*__thiscall*/ GetRandomizeVelocity() const; //0x0094f4c0
	/*GoPhysics*/ public: const vector_3& /*__thiscall*/ GetAngularVelocity() const; //0x0094f4f9
	/*GoPhysics*/ public: float /*__thiscall*/ GetExplosionMagnitude() const; //0x0094f132
	/*GoPhysics*/ public: float /*__thiscall*/ GetGibMinDamage() const; //0x0094f16b
	/*GoPhysics*/ public: float /*__thiscall*/ GetGibThreshold() const; //0x0094f1a4
	/*GoPhysics*/ public: float /*__thiscall*/ GetGravity() const; //0x0094f530
	/*GoPhysics*/ public: float /*__thiscall*/ GetVelocity() const; //0x0094f487
	/*GoPhysics*/ public: void /*__thiscall*/ ClearBreakParticulates(); //0x0094f653
	/*GoPhysics*/ public: void /*__thiscall*/ RCSetPassThrough(bool unk1); //0x0094ea92
	/*GoPhysics*/ public: void /*__thiscall*/ RCSetPenetrate(bool unk1); //0x0094eb77
	/*GoPhysics*/ public: void /*__thiscall*/ SetIsBreakable(bool unk1); //0x004726f1
	/*GoPhysics*/ public: void /*__thiscall*/ SetPassThrough(bool unk1); //0x00472733
	/*GoPhysics*/ public: void /*__thiscall*/ SetPenetrate(bool unk1); //0x00472751
	/*GoPhysics*/ public: void /*__thiscall*/ SSetPassThrough(bool unk1); //0x0094ee09
	/*GoPhysics*/ public: void /*__thiscall*/ SSetPenetrate(bool unk1); //0x0094ee12
};
