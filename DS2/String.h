#pragma once

#include "GPBString.h"

#include "ClassMacros.h"

namespace String {
	DefineFunction(GetDelimitedBool, 0x99789b, bool, Params(const char* unk1, int unk2, char unk3, bool unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(GetDelimitedBool, 0x4279f4, bool, Params(const char* unk1, int unk2, char unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetDelimitedBool, 0x427a0c, bool, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineFunction(IsEmpty, 0x99732f, bool, Params(const char* unk1), Args(unk1));
	DefineFunction(SameNoCase, 0x997635, bool, Params(const char* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SameNoCase, 0x9975eb, bool, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineFunction(SameWithCase, 0x997756, bool, Params(const char* unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SameWithCase, 0x99767e, bool, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineFunction(StringInString, 0x997712, bool, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineFunction(GetDelimitedString, 0x9977fb, gpbstring<char>, Params(const char* unk1, int unk2, char unk3, const char* unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineFunction(GetDelimitedString, 0x427ace, gpbstring<char>, Params(const char* unk1, int unk2, char unk3, const char* unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(GetDelimitedString, 0x427aef, gpbstring<char>, Params(const char* unk1, int unk2, char unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetDelimitedString, 0x427b10, gpbstring<char>, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineFunction(GetFileNameOnly, 0x99733f, gpbstring<char>, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineFunction(Left, 0x99754d, gpbstring<char>, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineFunction(Mid, 0x997568, gpbstring<char>, Params(const gpbstring<char>& unk1, int unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(Mid, 0x997584, gpbstring<char>, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineFunction(Right, 0x9975af, gpbstring<char>, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineFunction(Append, 0x997371, gpbstring<char>&, Params(gpbstring<char>& unk1, const char* unk2), Args(unk1, unk2));
	//DefineVarArgFunction(AppendF, 0x9973ae, gpbstring<char>&, Params(gpbstring<char>& unk1, const char* unk2));
	DefineFunction(Assign, 0x99745f, gpbstring<char>&, Params(gpbstring<char>& unk1, const char* unk2), Args(unk1, unk2));
	//DefineVarArgFunction(AssignF, 0x99749c, gpbstring<char>&, Params(gpbstring<char>& unk1, const char* unk2));
	DefineFunction(GetDelimitedFloat, 0x9978e3, float, Params(const char* unk1, int unk2, char unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(GetDelimitedFloat, 0x427a52, float, Params(const char* unk1, int unk2, char unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetDelimitedFloat, 0x427a6e, float, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineFunction(GetDelimitedInt, 0x9978bf, int, Params(const char* unk1, int unk2, char unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(GetDelimitedInt, 0x427a23, int, Params(const char* unk1, int unk2, char unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetDelimitedInt, 0x427a3b, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineFunction(GetLength, 0x99735d, int, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineFunction(GetNumDelimitedValues, 0x9977e9, int, Params(const char* unk1, char unk2), Args(unk1, unk2));
	DefineFunction(GetNumDelimitedValues, 0x4279e3, int, Params(const char* unk1), Args(unk1));
	DefineFunction(PadBackToLength, 0x997740, void, Params(gpbstring<char>& unk1, char unk2, unsigned int unk3), Args(unk1, unk2, unk3));
	DefineFunction(PadFrontToLength, 0x99772a, void, Params(gpbstring<char>& unk1, char unk2, unsigned int unk3), Args(unk1, unk2, unk3));
}
