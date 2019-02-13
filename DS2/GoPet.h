#pragma once

class GoPet {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x485ab4, GoPet*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoPet*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoPet* unk1); //0x00485aab
	/*GoPet*/ public: const gpbstring<char>& /*__thiscall*/ GetPetClass(); //0x00485aa7
	/*GoPet*/ public: const Goid_* /*__thiscall*/ GetPetEmanation(); //0x00485aa3
	/*GoPet*/ public: const Goid_* /*__thiscall*/ GetPetSpell(); //0x00485a9f
	/*GoPet*/ public: const Goid_* /*__thiscall*/ GetPetWeapon(); //0x00485a9b
	DefineMethod(GetFullPetLevel, 0x485a88, float, Params(), Args());
	DefineMethod(GetPetLevelProgress, 0x485a8f, float, Params(), Args());
	DefineMethod(GetPetLevel, 0x485a84, int, Params(), Args());
	DefineMethod(EatItem, 0x958284, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCBuildPetEquipment, 0x95672d, void, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(RCSetPetBonus, 0x956b31, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
	DefineMethod(RCSetPetLevel, 0x9547ad, void, Params(int unk1), Args(int unk1));
	DefineMethod(RCSetPetStats, 0x957235, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(RSFinishPetLevelUp, 0x954e00, void, Params(), Args());
	DefineMethod(RSRequestStatRefresh, 0x958ae6, void, Params(), Args());
	DefineMethod(RSSetPetBonus, 0x957f10, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
	DefineMethod(RSSetPetLevel, 0x954f3e, void, Params(int unk1), Args(int unk1));
	DefineMethod(RSSetPetStats, 0x95807b, void, Params(const Goid_* unk1, bool unk2, bool unk3), Args(const Goid_* unk1, bool unk2, bool unk3));
	DefineMethod(SBuildPetStats, 0x958a66, void, Params(bool unk1, bool unk2), Args(bool unk1, bool unk2));
};
