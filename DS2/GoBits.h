#pragma once

#include "ClassMacros.h"

class GoBits {
public:
	DefineSingleton(GoBits, 0x7b25a3);

	/*GoBits*/ private: GoidColl& /*__thiscall*/ GetGoidColl(unsigned long unk1); //0x00961264
	/*GoBits*/ private: GopColl& /*__thiscall*/ GetGopColl(unsigned long unk1); //0x00961213
	/*GoBits*/ private: IntColl& /*__thiscall*/ GetIntColl(unsigned long unk1); //0x009612b5
	/*GoBits*/ private: unsigned long /*__thiscall*/ CreateGoidColl(); //0x00961d39
	/*GoBits*/ private: unsigned long /*__thiscall*/ CreateGopColl(); //0x00961cf1
	/*GoBits*/ private: unsigned long /*__thiscall*/ CreateIntColl(); //0x00961d81
	/*GoBits*/ private: void /*__thiscall*/ DeleteGoidColl(unsigned long unk1); //0x00962680
	/*GoBits*/ private: void /*__thiscall*/ DeleteGopColl(unsigned long unk1); //0x00962634
	/*GoBits*/ private: void /*__thiscall*/ DeleteIntColl(unsigned long unk1); //0x009626cc
	/*GoBits*/ public: /*static*/ GoBits* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x007b25a3
	/*GoBits*/ public: bool /*__thiscall*/ GetGoBitBool(const Goid_* unk1, const char* unk2, bool unk3) const; //0x007b0a44
	/*GoBits*/ public: bool /*__thiscall*/ GetGoBitBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4) const; //0x009618c2
	/*GoBits*/ public: bool /*__thiscall*/ GetGoBitBool(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x009618ed
	/*GoBits*/ public: bool /*__thiscall*/ GetGoBitBool(const Goid_* unk1, const char* unk2) const; //0x007b0a5e
	/*GoBits*/ public: bool /*__thiscall*/ GetQuestBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4) const; //0x007b086c
	/*GoBits*/ public: bool /*__thiscall*/ GetQuestBool(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x007b0875
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4) const; //0x00961669
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x009616f7
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetGoBitString(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3) const; //0x007b0aaa
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetGoBitString(const Goid_* unk1, const char* unk2) const; //0x007b0ac4
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetQuestString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4) const; //0x007b08a3
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetQuestString(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x007b08ac
	/*GoBits*/ public: float /*__thiscall*/ GetGoBitFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4) const; //0x00961904
	/*GoBits*/ public: float /*__thiscall*/ GetGoBitFloat(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x0096192f
	/*GoBits*/ public: float /*__thiscall*/ GetGoBitFloat(const Goid_* unk1, const char* unk2, float unk3) const; //0x007b0a75
	/*GoBits*/ public: float /*__thiscall*/ GetGoBitFloat(const Goid_* unk1, const char* unk2) const; //0x007b0a93
	/*GoBits*/ public: float /*__thiscall*/ GetQuestFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4) const; //0x007b087e
	/*GoBits*/ public: float /*__thiscall*/ GetQuestFloat(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x007b089a
	/*GoBits*/ public: int /*__thiscall*/ GetGoBitInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4) const; //0x00961880
	/*GoBits*/ public: int /*__thiscall*/ GetGoBitInt(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x009618ab
	/*GoBits*/ public: int /*__thiscall*/ GetGoBitInt(const Goid_* unk1, const char* unk2, int unk3) const; //0x007b0a13
	/*GoBits*/ public: int /*__thiscall*/ GetGoBitInt(const Goid_* unk1, const char* unk2) const; //0x007b0a2d
	/*GoBits*/ public: int /*__thiscall*/ GetQuestInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4) const; //0x007b085a
	/*GoBits*/ public: int /*__thiscall*/ GetQuestInt(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x007b0863
	/*GoBits*/ public: void /*__thiscall*/ ClearGoBit(const Goid_* unk1, const char* unk2, const char* unk3); //0x00963e49
	/*GoBits*/ public: void /*__thiscall*/ ClearGoBit(const Goid_* unk1, const char* unk2); //0x007b0adb
	/*GoBits*/ public: void /*__thiscall*/ RCSetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5); //0x00963f88
	/*GoBits*/ public: void /*__thiscall*/ RCSetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4); //0x007b0d5c
	/*GoBits*/ public: void /*__thiscall*/ RCSetGoBitString(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3); //0x007b0d76
	/*GoBits*/ public: void /*__thiscall*/ RCSetQuestString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4); //0x007b09df
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitBool(const Goid_* unk1, const char* unk2, bool unk3); //0x007b0be4
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5); //0x00964367
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4); //0x007b0bca
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5); //0x009644c1
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4); //0x007b0c74
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitFloat(const Goid_* unk1, const char* unk2, float unk3); //0x007b0c92
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5); //0x00964219
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4); //0x007b0b28
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitInt(const Goid_* unk1, const char* unk2, int unk3); //0x007b0b42
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5); //0x009640ca
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4); //0x007b0d26
	/*GoBits*/ public: void /*__thiscall*/ RSSetGoBitString(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3); //0x007b0d40
	/*GoBits*/ public: void /*__thiscall*/ RSSetQuestBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4); //0x007b091d
	/*GoBits*/ public: void /*__thiscall*/ RSSetQuestFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4); //0x007b096f
	/*GoBits*/ public: void /*__thiscall*/ RSSetQuestInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4); //0x007b08cf
	/*GoBits*/ public: void /*__thiscall*/ RSSetQuestString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4); //0x007b09c5
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitBool(const Goid_* unk1, const char* unk2, bool unk3); //0x007b0c1a
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5); //0x00963ecc
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4); //0x007b0c00
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5); //0x00963f24
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4); //0x007b0cb2
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitFloat(const Goid_* unk1, const char* unk2, float unk3); //0x007b0cd0
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5); //0x00963e74
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4); //0x007b0b5e
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitInt(const Goid_* unk1, const char* unk2, int unk3); //0x007b0b78
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5); //0x00963c09
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4); //0x007b0d92
	/*GoBits*/ public: void /*__thiscall*/ SetGoBitString(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3); //0x007b0dac
	/*GoBits*/ public: void /*__thiscall*/ SetQuestBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4); //0x007b0937
	/*GoBits*/ public: void /*__thiscall*/ SetQuestFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4); //0x007b098d
	/*GoBits*/ public: void /*__thiscall*/ SetQuestInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4); //0x007b08e9
	/*GoBits*/ public: void /*__thiscall*/ SetQuestString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4); //0x007b09f9
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitBool(const Goid_* unk1, const char* unk2, bool unk3); //0x007b0bae
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5); //0x0096430f
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4); //0x007b0b94
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5); //0x0096445d
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4); //0x007b0c36
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitFloat(const Goid_* unk1, const char* unk2, float unk3); //0x007b0c54
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5); //0x009641c1
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4); //0x007b0af2
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitInt(const Goid_* unk1, const char* unk2, int unk3); //0x007b0b0c
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5); //0x009640c1
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4); //0x007b0cf0
	/*GoBits*/ public: void /*__thiscall*/ SSetGoBitString(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3); //0x007b0d0a
	/*GoBits*/ public: void /*__thiscall*/ SSetQuestBool(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4); //0x007b0903
	/*GoBits*/ public: void /*__thiscall*/ SSetQuestFloat(const Goid_* unk1, const char* unk2, const char* unk3, float unk4); //0x007b0951
	/*GoBits*/ public: void /*__thiscall*/ SSetQuestInt(const Goid_* unk1, const char* unk2, const char* unk3, int unk4); //0x007b08b5
	/*GoBits*/ public: void /*__thiscall*/ SSetQuestString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4); //0x007b09ab
};
