#pragma once

#include "Enums.h"
#include "GoidScid.h"
#include "GPString.h"
#include "IntColl.h"

class GoBits {
public:
	$Singleton(GoBits, 0x007b25a3);

	// GoBit - Bool
	//$ConstMethod(0x007b0a5e, GetGoBitBool, bool, const Goid* goid, const char* unk2);
	$ConstMethod(0x007b0a44, GetGoBitBool, bool, const Goid* goid, const char* key, bool defaultValue = false);
	//$ConstMethod(0x009618ed, GetGoBitBool, bool, const Goid* goid, const char* unk2, const char* unk3);
	$ConstMethod(0x009618c2, GetGoBitBool, bool, const Goid* goid, const char* key, const char* unk3 = "default", bool defaultValue = false);
	$Method(0x007b0c1a, SetGoBitBool, void, const Goid* goid, const char* key, bool unk3);
	$Method(0x007b0c00, SetGoBitBool, void, const Goid* goid, const char* key, const char* unk3, bool unk4);
    $Method(0x00963ecc, SetGoBitBool, void, const Goid* goid, const char* key, const char* unk3, bool unk4, eGoBitType type);
	$Method(0x007b0bae, SSetGoBitBool, void, const Goid* goid, const char* key, bool unk3);
	$Method(0x007b0b94, SSetGoBitBool, void, const Goid* goid, const char* key, const char* unk3, bool unk4);
	$Method(0x0096430f, SSetGoBitBool, void, const Goid* goid, const char* key, const char* unk3, bool unk4, eGoBitType type);
	$Method(0x007b0be4, RSSetGoBitBool, void, const Goid* goid, const char* key, bool unk3);
	$Method(0x007b0bca, RSSetGoBitBool, void, const Goid* goid, const char* key, const char* unk3, bool unk4);
	$Method(0x00964367, RSSetGoBitBool, void, const Goid* goid, const char* key, const char* unk3, bool unk4, eGoBitType type);

	// GoBit - Int
	$ConstMethod(0x007b0a2d, GetGoBitInt, int, const Goid* goid, const char* key);
	$ConstMethod(0x007b0a13, GetGoBitInt, int, const Goid* goid, const char* key, int defaultValue = 0);
	$ConstMethod(0x009618ab, GetGoBitInt, int, const Goid* goid, const char* key, const char* unk3);
	$ConstMethod(0x00961880, GetGoBitInt, int, const Goid* goid, const char* key, const char* unk3 = "default", int defaultValue = 0);
	$Method(0x007b0b78, SetGoBitInt, void, const Goid* goid, const char* key, int unk3);
	$Method(0x007b0b5e, SetGoBitInt, void, const Goid* goid, const char* key, const char* unk3, int unk4);
	$Method(0x00963e74, SetGoBitInt, void, const Goid* goid, const char* key, const char* unk3, int unk4, eGoBitType type);
	$Method(0x007b0b0c, SSetGoBitInt, void, const Goid* goid, const char* key, int unk3);
	$Method(0x007b0af2, SSetGoBitInt, void, const Goid* goid, const char* key, const char* unk3, int unk4);
	$Method(0x009641c1, SSetGoBitInt, void, const Goid* goid, const char* key, const char* unk3, int unk4, eGoBitType type);
	$Method(0x007b0b42, RSSetGoBitInt, void, const Goid* goid, const char* key, int unk3);
	$Method(0x007b0b28, RSSetGoBitInt, void, const Goid* goid, const char* key, const char* unk3, int unk4);
	$Method(0x00964219, RSSetGoBitInt, void, const Goid* goid, const char* key, const char* unk3, int unk4, eGoBitType type);

	// GoBit - Float
	$ConstMethod(0x007b0a93, GetGoBitFloat, float, const Goid* goid, const char* key);
	$ConstMethod(0x007b0a75, GetGoBitFloat, float, const Goid* goid, const char* key, float defaultValue = 0.0f);
	$ConstMethod(0x0096192f, GetGoBitFloat, float, const Goid* goid, const char* key, const char* unk3);
	$ConstMethod(0x00961904, GetGoBitFloat, float, const Goid* goid, const char* key, const char* unk3, float defaultValue = 0.0f);
	$Method(0x007b0cd0, SetGoBitFloat, void, const Goid* goid, const char* key, float unk3);
	$Method(0x007b0cb2, SetGoBitFloat, void, const Goid* goid, const char* key, const char* unk3, float unk4);
	$Method(0x00963f24, SetGoBitFloat, void, const Goid* goid, const char* key, const char* unk3, float unk4, eGoBitType type);
	$Method(0x007b0c54, SSetGoBitFloat, void, const Goid* goid, const char* key, float unk3);
	$Method(0x007b0c36, SSetGoBitFloat, void, const Goid* goid, const char* key, const char* unk3, float unk4);
	$Method(0x0096445d, SSetGoBitFloat, void, const Goid* goid, const char* key, const char* unk3, float unk4, eGoBitType type);
	$Method(0x007b0c92, RSSetGoBitFloat, void, const Goid* goid, const char* key, float unk3);
	$Method(0x007b0c74, RSSetGoBitFloat, void, const Goid* goid, const char* key, const char* unk3, float unk4);
	$Method(0x009644c1, RSSetGoBitFloat, void, const Goid* goid, const char* key, const char* unk3, float unk4, eGoBitType type);

	// GoBit - String
	$ConstMethod(0x007b0ac4, GetGoBitString, const GPBString&, const Goid* goid, const char* unk2);
	$ConstMethod(0x007b0aaa, GetGoBitString, const GPBString&, const Goid* goid, const char* unk2, const GPBString& defaultValue = GPBStringEMPTY);
	$ConstMethod(0x009616f7, GetGoBitString, const GPBString&, const Goid* goid, const char* unk2, const char* unk3);
	$ConstMethod(0x00961669, GetGoBitString, const GPBString&, const Goid* goid, const char* unk2, const char* unk3, const GPBString& defaultValue = GPBStringEMPTY);
	$Method(0x007b0dac, SetGoBitString, void, const Goid* goid, const char* key, const GPBString& unk3);
	$Method(0x007b0d92, SetGoBitString, void, const Goid* goid, const char* key, const char* unk3, const GPBString& unk4);
	$Method(0x00963c09, SetGoBitString, void, const Goid* goid, const char* key, const char* unk3, const GPBString& unk4, eGoBitType type);
	$Method(0x007b0d0a, SSetGoBitString, void, const Goid* goid, const char* key, const GPBString& unk3);
	$Method(0x007b0cf0, SSetGoBitString, void, const Goid* goid, const char* key, const char* unk3, const GPBString& unk4);
	$Method(0x009640c1, SSetGoBitString, void, const Goid* goid, const char* key, const char* unk3, const GPBString& unk4, eGoBitType type);
	$Method(0x007b0d40, RSSetGoBitString, void, const Goid* goid, const char* key, const GPBString& unk3);
	$Method(0x007b0d26, RSSetGoBitString, void, const Goid* goid, const char* key, const char* unk3, const GPBString& unk4);
	$Method(0x009640ca, RSSetGoBitString, void, const Goid* goid, const char* key, const char* unk3, const GPBString& unk4, eGoBitType type);
	$Method(0x007b0d76, RCSetGoBitString, void, const Goid* goid, const char* key, const GPBString& unk3);
	$Method(0x007b0d5c, RCSetGoBitString, void, const Goid* goid, const char* key, const char* unk3, const GPBString& unk4);
	$Method(0x00963f88, RCSetGoBitString, void, const Goid* goid, const char* key, const char* unk3, const GPBString& unk4, eGoBitType type);

	// GoBit - Clear
	$Method(0x007b0adb, ClearGoBit, void, const Goid* goid, const char* key);
	$Method(0x00963e49, ClearGoBit, void, const Goid* goid, const char* key, const char* unk3);

	// Quest - Bool
	$ConstMethod(0x007b0875, GetQuestBool, bool, const Goid* goid, const char* unk2, const char* unk3);
	$ConstMethod(0x007b086c, GetQuestBool, bool, const Goid* goid, const char* unk2, const char* unk3, bool defaultValue);
	$Method(0x007b0937, SetQuestBool, void, const Goid* goid, const char* unk2, const char* unk3, bool unk4);
	$Method(0x007b0903, SSetQuestBool, void, const Goid* goid, const char* unk2, const char* unk3, bool unk4);
	$Method(0x007b091d, RSSetQuestBool, void, const Goid* goid, const char* unk2, const char* unk3, bool unk4);

	// Quest - Int
	$ConstMethod(0x007b0863, GetQuestInt, int, const Goid* goid, const char* unk2, const char* unk3);
	$ConstMethod(0x007b085a, GetQuestInt, int, const Goid* goid, const char* unk2, const char* unk3, int defaultValue);
	$Method(0x007b08e9, SetQuestInt, void, const Goid* goid, const char* unk2, const char* unk3, int unk4);
	$Method(0x007b08b5, SSetQuestInt, void, const Goid* goid, const char* unk2, const char* unk3, int unk4);
	$Method(0x007b08cf, RSSetQuestInt, void, const Goid* goid, const char* unk2, const char* unk3, int unk4);

	// Quest - Float
	$ConstMethod(0x007b089a, GetQuestFloat, float, const Goid* goid, const char* unk2, const char* unk3);
	$ConstMethod(0x007b087e, GetQuestFloat, float, const Goid* goid, const char* unk2, const char* unk3, float defaultValue);
	$Method(0x007b098d, SetQuestFloat, void, const Goid* goid, const char* unk2, const char* unk3, float unk4);
	$Method(0x007b0951, SSetQuestFloat, void, const Goid* goid, const char* unk2, const char* unk3, float unk4);
	$Method(0x007b096f, RSSetQuestFloat, void, const Goid* goid, const char* unk2, const char* unk3, float unk4);

	// Quest - String
	$ConstMethod(0x007b08ac, GetQuestString, const GPBString&, const Goid* goid, const char* unk2, const char* unk3);
	$ConstMethod(0x007b08a3, GetQuestString, const GPBString&, const Goid* goid, const char* unk2, const char* unk3, const GPBString& defaultValue);
	$Method(0x007b09f9, SetQuestString, void, const Goid* goid, const char* unk2, const char* unk3, const GPBString& unk4);
	$Method(0x007b09ab, SSetQuestString, void, const Goid* goid, const char* unk2, const char* unk3, const GPBString& unk4);
	$Method(0x007b09c5, RSSetQuestString, void, const Goid* goid, const char* unk2, const char* unk3, const GPBString& unk4);
	$Method(0x007b09df, RCSetQuestString, void, const Goid* goid, const char* unk2, const char* unk3, const GPBString& unk4);

	// GoidColl
	$Method(0x00961264, GetGoidColl, GoidColl&, uint unk1);
	$Method(0x00961d39, CreateGoidColl, uint);
	$Method(0x00962680, DeleteGoidColl, void, uint unk1);

	// GopColl
	$Method(0x00961213, GetGopColl, GopColl&, uint unk1);
	$Method(0x00961cf1, CreateGopColl, uint);
	$Method(0x00962634, DeleteGopColl, void, uint unk1);

	// IntColl
	$Method(0x009612b5, GetIntColl, IntColl&, uint unk1);
	$Method(0x00961d81, CreateIntColl, uint);
	$Method(0x009626cc, DeleteIntColl, void, uint unk1);
};
