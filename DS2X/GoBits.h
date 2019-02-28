#pragma once

#include "Enums.h"
#include "GoidColl.h"
#include "GopColl.h"
#include "GPBString.h"
#include "IntColl.h"

class GoBits {
public:
	DefineSingleton(GoBits, 0x7b25a3);

	DefineMethod(GetGoidColl, 0x961264, GoidColl&, Params(unsigned long unk1), Args(unk1));
	DefineMethod(GetGopColl, 0x961213, GopColl&, Params(unsigned long unk1), Args(unk1));
	DefineMethod(GetIntColl, 0x9612b5, IntColl&, Params(unsigned long unk1), Args(unk1));
	DefineMethod(CreateGoidColl, 0x961d39, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(CreateGopColl, 0x961cf1, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(CreateIntColl, 0x961d81, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(DeleteGoidColl, 0x962680, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(DeleteGopColl, 0x962634, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(DeleteIntColl, 0x9626cc, void, Params(unsigned long unk1), Args(unk1));
	DefineConstMethod(GetGoBitBool, 0x7b0a44, bool, Params(const Goid_* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitBool, 0x9618c2, bool, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetGoBitBool, 0x9618ed, bool, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitBool, 0x7b0a5e, bool, Params(const Goid_* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetQuestBool, 0x7b086c, bool, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetQuestBool, 0x7b0875, bool, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitString, 0x961669, const gpbstring<char>&, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetGoBitString, 0x9616f7, const gpbstring<char>&, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitString, 0x7b0aaa, const gpbstring<char>&, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitString, 0x7b0ac4, const gpbstring<char>&, Params(const Goid_* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetQuestString, 0x7b08a3, const gpbstring<char>&, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetQuestString, 0x7b08ac, const gpbstring<char>&, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitFloat, 0x961904, float, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetGoBitFloat, 0x96192f, float, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitFloat, 0x7b0a75, float, Params(const Goid_* unk1, const char* unk2, float unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitFloat, 0x7b0a93, float, Params(const Goid_* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetQuestFloat, 0x7b087e, float, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetQuestFloat, 0x7b089a, float, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitInt, 0x961880, int, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetGoBitInt, 0x9618ab, int, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitInt, 0x7b0a13, int, Params(const Goid_* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineConstMethod(GetGoBitInt, 0x7b0a2d, int, Params(const Goid_* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetQuestInt, 0x7b085a, int, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineConstMethod(GetQuestInt, 0x7b0863, int, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineMethod(ClearGoBit, 0x963e49, void, Params(const Goid_* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineMethod(ClearGoBit, 0x7b0adb, void, Params(const Goid_* unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(RCSetGoBitString, 0x963f88, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RCSetGoBitString, 0x7b0d5c, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCSetGoBitString, 0x7b0d76, void, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetQuestString, 0x7b09df, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSSetGoBitBool, 0x7b0be4, void, Params(const Goid_* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSSetGoBitBool, 0x964367, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RSSetGoBitBool, 0x7b0bca, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSSetGoBitFloat, 0x9644c1, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RSSetGoBitFloat, 0x7b0c74, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSSetGoBitFloat, 0x7b0c92, void, Params(const Goid_* unk1, const char* unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSSetGoBitInt, 0x964219, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RSSetGoBitInt, 0x7b0b28, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSSetGoBitInt, 0x7b0b42, void, Params(const Goid_* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSSetGoBitString, 0x9640ca, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RSSetGoBitString, 0x7b0d26, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSSetGoBitString, 0x7b0d40, void, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSSetQuestBool, 0x7b091d, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSSetQuestFloat, 0x7b096f, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSSetQuestInt, 0x7b08cf, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSSetQuestString, 0x7b09c5, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetGoBitBool, 0x7b0c1a, void, Params(const Goid_* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetGoBitBool, 0x963ecc, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SetGoBitBool, 0x7b0c00, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetGoBitFloat, 0x963f24, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SetGoBitFloat, 0x7b0cb2, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetGoBitFloat, 0x7b0cd0, void, Params(const Goid_* unk1, const char* unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetGoBitInt, 0x963e74, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SetGoBitInt, 0x7b0b5e, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetGoBitInt, 0x7b0b78, void, Params(const Goid_* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetGoBitString, 0x963c09, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SetGoBitString, 0x7b0d92, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetGoBitString, 0x7b0dac, void, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetQuestBool, 0x7b0937, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetQuestFloat, 0x7b098d, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetQuestInt, 0x7b08e9, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetQuestString, 0x7b09f9, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SSetGoBitBool, 0x7b0bae, void, Params(const Goid_* unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SSetGoBitBool, 0x96430f, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SSetGoBitBool, 0x7b0b94, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SSetGoBitFloat, 0x96445d, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SSetGoBitFloat, 0x7b0c36, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SSetGoBitFloat, 0x7b0c54, void, Params(const Goid_* unk1, const char* unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(SSetGoBitInt, 0x9641c1, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SSetGoBitInt, 0x7b0af2, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SSetGoBitInt, 0x7b0b0c, void, Params(const Goid_* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(SSetGoBitString, 0x9640c1, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4, eGoBitType unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SSetGoBitString, 0x7b0cf0, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SSetGoBitString, 0x7b0d0a, void, Params(const Goid_* unk1, const char* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(SSetQuestBool, 0x7b0903, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SSetQuestFloat, 0x7b0951, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SSetQuestInt, 0x7b08b5, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SSetQuestString, 0x7b09ab, void, Params(const Goid_* unk1, const char* unk2, const char* unk3, const gpbstring<char>& unk4), Args(unk1, unk2, unk3, unk4));
};
