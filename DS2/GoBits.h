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
	DefineMethod(DeleteGoidColl, 0x962680, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DeleteGopColl, 0x962634, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DeleteIntColl, 0x9626cc, void, Params(unsigned long unk1), Args(unsigned long unk1));
	/*GoBits*/ public: /*static*/ GoBits* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x007b25a3
	DefineConstMethod(GetGoBitBool, 0x7b0a44, bool, Params(const Goid_* unk1, const char* unk2, bool unk3), Args(const Goid_* unk1, const char* unk2, bool unk3));
	DefineConstMethod(GetGoBitBool, 0x9618c2, bool, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineConstMethod(GetGoBitBool, 0x9618ed, bool, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(const Goid_* unk1, const char* unk2, const char* unk3));
	DefineConstMethod(GetGoBitBool, 0x7b0a5e, bool, Params(const Goid_* unk1, const char* unk2), Args(const Goid_* unk1, const char* unk2));
	DefineConstMethod(GetQuestBool, 0x7b086c, bool, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineConstMethod(GetQuestBool, 0x7b0875, bool, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(const Goid_* unk1, const char* unk2, const char* unk3));
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4) const; //0x00961669
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetGoBitString(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x009616f7
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetGoBitString(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3) const; //0x007b0aaa
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetGoBitString(const Goid_* unk1, const char* unk2) const; //0x007b0ac4
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetQuestString(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4) const; //0x007b08a3
	/*GoBits*/ public: const gpbstring<char>& /*__thiscall*/ GetQuestString(const Goid_* unk1, const char* unk2, const char* unk3) const; //0x007b08ac
	DefineConstMethod(GetGoBitFloat, 0x961904, float, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4));
	DefineConstMethod(GetGoBitFloat, 0x96192f, float, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(const Goid_* unk1, const char* unk2, const char* unk3));
	DefineConstMethod(GetGoBitFloat, 0x7b0a75, float, Params(const Goid_* unk1, const char* unk2, float unk3), Args(const Goid_* unk1, const char* unk2, float unk3));
	DefineConstMethod(GetGoBitFloat, 0x7b0a93, float, Params(const Goid_* unk1, const char* unk2), Args(const Goid_* unk1, const char* unk2));
	DefineConstMethod(GetQuestFloat, 0x7b087e, float, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4));
	DefineConstMethod(GetQuestFloat, 0x7b089a, float, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(const Goid_* unk1, const char* unk2, const char* unk3));
	DefineConstMethod(GetGoBitInt, 0x961880, int, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4));
	DefineConstMethod(GetGoBitInt, 0x9618ab, int, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(const Goid_* unk1, const char* unk2, const char* unk3));
	DefineConstMethod(GetGoBitInt, 0x7b0a13, int, Params(const Goid_* unk1, const char* unk2, int unk3), Args(const Goid_* unk1, const char* unk2, int unk3));
	DefineConstMethod(GetGoBitInt, 0x7b0a2d, int, Params(const Goid_* unk1, const char* unk2), Args(const Goid_* unk1, const char* unk2));
	DefineConstMethod(GetQuestInt, 0x7b085a, int, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4));
	DefineConstMethod(GetQuestInt, 0x7b0863, int, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(const Goid_* unk1, const char* unk2, const char* unk3));
	DefineMethod(ClearGoBit, 0x963e49, void, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(const Goid_* unk1, const char* unk2, const char* unk3));
	DefineMethod(ClearGoBit, 0x7b0adb, void, Params(const Goid_* unk1, const char* unk2), Args(const Goid_* unk1, const char* unk2));
	DefineMethod(RCSetGoBitString, 0x963f88, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5));
	DefineMethod(RCSetGoBitString, 0x7b0d5c, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4));
	DefineMethod(RCSetGoBitString, 0x7b0d76, void, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3));
	DefineMethod(RCSetQuestString, 0x7b09df, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4));
	DefineMethod(RSSetGoBitBool, 0x7b0be4, void, Params(const Goid_* unk1, const char* unk2, bool unk3), Args(const Goid_* unk1, const char* unk2, bool unk3));
	DefineMethod(RSSetGoBitBool, 0x964367, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5));
	DefineMethod(RSSetGoBitBool, 0x7b0bca, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineMethod(RSSetGoBitFloat, 0x9644c1, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5));
	DefineMethod(RSSetGoBitFloat, 0x7b0c74, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4));
	DefineMethod(RSSetGoBitFloat, 0x7b0c92, void, Params(const Goid_* unk1, const char* unk2, float unk3), Args(const Goid_* unk1, const char* unk2, float unk3));
	DefineMethod(RSSetGoBitInt, 0x964219, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5));
	DefineMethod(RSSetGoBitInt, 0x7b0b28, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4));
	DefineMethod(RSSetGoBitInt, 0x7b0b42, void, Params(const Goid_* unk1, const char* unk2, int unk3), Args(const Goid_* unk1, const char* unk2, int unk3));
	DefineMethod(RSSetGoBitString, 0x9640ca, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5));
	DefineMethod(RSSetGoBitString, 0x7b0d26, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4));
	DefineMethod(RSSetGoBitString, 0x7b0d40, void, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3));
	DefineMethod(RSSetQuestBool, 0x7b091d, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineMethod(RSSetQuestFloat, 0x7b096f, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4));
	DefineMethod(RSSetQuestInt, 0x7b08cf, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4));
	DefineMethod(RSSetQuestString, 0x7b09c5, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4));
	DefineMethod(SetGoBitBool, 0x7b0c1a, void, Params(const Goid_* unk1, const char* unk2, bool unk3), Args(const Goid_* unk1, const char* unk2, bool unk3));
	DefineMethod(SetGoBitBool, 0x963ecc, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5));
	DefineMethod(SetGoBitBool, 0x7b0c00, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineMethod(SetGoBitFloat, 0x963f24, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5));
	DefineMethod(SetGoBitFloat, 0x7b0cb2, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4));
	DefineMethod(SetGoBitFloat, 0x7b0cd0, void, Params(const Goid_* unk1, const char* unk2, float unk3), Args(const Goid_* unk1, const char* unk2, float unk3));
	DefineMethod(SetGoBitInt, 0x963e74, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5));
	DefineMethod(SetGoBitInt, 0x7b0b5e, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4));
	DefineMethod(SetGoBitInt, 0x7b0b78, void, Params(const Goid_* unk1, const char* unk2, int unk3), Args(const Goid_* unk1, const char* unk2, int unk3));
	DefineMethod(SetGoBitString, 0x963c09, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5));
	DefineMethod(SetGoBitString, 0x7b0d92, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4));
	DefineMethod(SetGoBitString, 0x7b0dac, void, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3));
	DefineMethod(SetQuestBool, 0x7b0937, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineMethod(SetQuestFloat, 0x7b098d, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4));
	DefineMethod(SetQuestInt, 0x7b08e9, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4));
	DefineMethod(SetQuestString, 0x7b09f9, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4));
	DefineMethod(SSetGoBitBool, 0x7b0bae, void, Params(const Goid_* unk1, const char* unk2, bool unk3), Args(const Goid_* unk1, const char* unk2, bool unk3));
	DefineMethod(SSetGoBitBool, 0x96430f, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5));
	DefineMethod(SSetGoBitBool, 0x7b0b94, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineMethod(SSetGoBitFloat, 0x96445d, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5));
	DefineMethod(SSetGoBitFloat, 0x7b0c36, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4));
	DefineMethod(SSetGoBitFloat, 0x7b0c54, void, Params(const Goid_* unk1, const char* unk2, float unk3), Args(const Goid_* unk1, const char* unk2, float unk3));
	DefineMethod(SSetGoBitInt, 0x9641c1, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5));
	DefineMethod(SSetGoBitInt, 0x7b0af2, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4));
	DefineMethod(SSetGoBitInt, 0x7b0b0c, void, Params(const Goid_* unk1, const char* unk2, int unk3), Args(const Goid_* unk1, const char* unk2, int unk3));
	DefineMethod(SSetGoBitString, 0x9640c1, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5));
	DefineMethod(SSetGoBitString, 0x7b0cf0, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4));
	DefineMethod(SSetGoBitString, 0x7b0d0a, void, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3));
	DefineMethod(SSetQuestBool, 0x7b0903, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4));
	DefineMethod(SSetQuestFloat, 0x7b0951, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, float unk4));
	DefineMethod(SSetQuestInt, 0x7b08b5, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, int unk4));
	DefineMethod(SSetQuestString, 0x7b09ab, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4));
};
