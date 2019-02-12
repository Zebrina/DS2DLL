#pragma once

class GoHire {
public:
	/*GoHire*/ private: /*static*/ GoHire* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x004cfe90
	/*GoHire*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoHire* unk1); //0x004cfe87
	/*GoHire*/ public: void /*__thiscall*/ RCCreateCharacter(const gpbstring<char>& unk1, const CharacterStats& unk2, const Goid_* unk3, int unk4); //0x0095c814
	/*GoHire*/ public: void /*__thiscall*/ RCGenerateHires(unsigned long unk1); //0x0095d73b
	/*GoHire*/ public: void /*__thiscall*/ RCSetCharacterStats(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const CharacterStats& unk3, unsigned long unk4); //0x0095e138
	/*GoHire*/ public: void /*__thiscall*/ RSCompletePurchase(const Goid_* unk1, const Goid_* unk2); //0x0095c38d
	/*GoHire*/ public: void /*__thiscall*/ RSCreateCharacter(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const CharacterStats& unk3, int unk4); //0x0095cc0c
	/*GoHire*/ public: void /*__thiscall*/ RSGenerateHires(const Goid_* unk1); //0x0095e561
};
