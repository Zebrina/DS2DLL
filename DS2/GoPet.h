#pragma once

class GoPet {
public:
	/*GoPet*/ private: /*static*/ GoPet* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x00485ab4
	/*GoPet*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoPet* unk1); //0x00485aab
	/*GoPet*/ public: const gpbstring<char>& /*__thiscall*/ GetPetClass(); //0x00485aa7
	/*GoPet*/ public: const Goid_* /*__thiscall*/ GetPetEmanation(); //0x00485aa3
	/*GoPet*/ public: const Goid_* /*__thiscall*/ GetPetSpell(); //0x00485a9f
	/*GoPet*/ public: const Goid_* /*__thiscall*/ GetPetWeapon(); //0x00485a9b
	/*GoPet*/ public: float /*__thiscall*/ GetFullPetLevel(); //0x00485a88
	/*GoPet*/ public: float /*__thiscall*/ GetPetLevelProgress(); //0x00485a8f
	/*GoPet*/ public: int /*__thiscall*/ GetPetLevel(); //0x00485a84
	/*GoPet*/ public: void /*__thiscall*/ EatItem(const Goid_* unk1); //0x00958284
	/*GoPet*/ public: void /*__thiscall*/ RCBuildPetEquipment(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3); //0x0095672d
	/*GoPet*/ public: void /*__thiscall*/ RCSetPetBonus(int unk1, int unk2); //0x00956b31
	/*GoPet*/ public: void /*__thiscall*/ RCSetPetLevel(int unk1); //0x009547ad
	/*GoPet*/ public: void /*__thiscall*/ RCSetPetStats(bool unk1); //0x00957235
	/*GoPet*/ public: void /*__thiscall*/ RSFinishPetLevelUp(); //0x00954e00
	/*GoPet*/ public: void /*__thiscall*/ RSRequestStatRefresh(); //0x00958ae6
	/*GoPet*/ public: void /*__thiscall*/ RSSetPetBonus(int unk1, int unk2); //0x00957f10
	/*GoPet*/ public: void /*__thiscall*/ RSSetPetLevel(int unk1); //0x00954f3e
	/*GoPet*/ public: void /*__thiscall*/ RSSetPetStats(const Goid_* unk1, bool unk2, bool unk3); //0x0095807b
	/*GoPet*/ public: void /*__thiscall*/ SBuildPetStats(bool unk1, bool unk2); //0x00958a66
};
