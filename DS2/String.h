#pragma once

namespace String {
	DefineStaticMethod(GetDelimitedBool, 0x99789b, bool, Params(const char* unk1, int unk2, char unk3, bool unk4), Args(const char* unk1, int unk2, char unk3, bool unk4));
	DefineStaticMethod(GetDelimitedBool, 0x4279f4, bool, Params(const char* unk1, int unk2, char unk3), Args(const char* unk1, int unk2, char unk3));
	DefineStaticMethod(GetDelimitedBool, 0x427a0c, bool, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineStaticMethod(IsEmpty, 0x99732f, bool, Params(const char* unk1), Args(const char* unk1));
	DefineStaticMethod(SameNoCase, 0x997635, bool, Params(const char* unk1, const char* unk2, int unk3), Args(const char* unk1, const char* unk2, int unk3));
	DefineStaticMethod(SameNoCase, 0x9975eb, bool, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	DefineStaticMethod(SameWithCase, 0x997756, bool, Params(const char* unk1, const char* unk2, int unk3), Args(const char* unk1, const char* unk2, int unk3));
	DefineStaticMethod(SameWithCase, 0x99767e, bool, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	DefineStaticMethod(StringInString, 0x997712, bool, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ GetDelimitedString(const char* unk1, int unk2, char unk3, const char* unk4, bool unk5); //0x009977fb
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ GetDelimitedString(const char* unk1, int unk2, char unk3, const char* unk4); //0x00427ace
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ GetDelimitedString(const char* unk1, int unk2, char unk3); //0x00427aef
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ GetDelimitedString(const char* unk1, int unk2); //0x00427b10
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ GetFileNameOnly(const gpbstring<char>& unk1); //0x0099733f
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ Left(const gpbstring<char>& unk1, int unk2); //0x0099754d
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ Mid(const gpbstring<char>& unk1, int unk2, int unk3); //0x00997568
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ Mid(const gpbstring<char>& unk1, int unk2); //0x00997584
	/*String*/ private: /*static*/ gpbstring<char> /*__cdecl*/ Right(const gpbstring<char>& unk1, int unk2); //0x009975af
	/*String*/ private: /*static*/ gpbstring<char>& /*__cdecl*/ Append(gpbstring<char>& unk1, const char* unk2); //0x00997371
	/*String*/ private: /*static*/ gpbstring<char>& /*__cdecl*/ AppendF(gpbstring<char>& unk1, const char* unk2, ... unk3); //0x009973ae
	/*String*/ private: /*static*/ gpbstring<char>& /*__cdecl*/ Assign(gpbstring<char>& unk1, const char* unk2); //0x0099745f
	/*String*/ private: /*static*/ gpbstring<char>& /*__cdecl*/ AssignF(gpbstring<char>& unk1, const char* unk2, ... unk3); //0x0099749c
	DefineStaticMethod(GetDelimitedFloat, 0x9978e3, float, Params(const char* unk1, int unk2, char unk3, float unk4), Args(const char* unk1, int unk2, char unk3, float unk4));
	DefineStaticMethod(GetDelimitedFloat, 0x427a52, float, Params(const char* unk1, int unk2, char unk3), Args(const char* unk1, int unk2, char unk3));
	DefineStaticMethod(GetDelimitedFloat, 0x427a6e, float, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineStaticMethod(GetDelimitedInt, 0x9978bf, int, Params(const char* unk1, int unk2, char unk3, int unk4), Args(const char* unk1, int unk2, char unk3, int unk4));
	DefineStaticMethod(GetDelimitedInt, 0x427a23, int, Params(const char* unk1, int unk2, char unk3), Args(const char* unk1, int unk2, char unk3));
	DefineStaticMethod(GetDelimitedInt, 0x427a3b, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineStaticMethod(GetLength, 0x99735d, int, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineStaticMethod(GetNumDelimitedValues, 0x9977e9, int, Params(const char* unk1, char unk2), Args(const char* unk1, char unk2));
	DefineStaticMethod(GetNumDelimitedValues, 0x4279e3, int, Params(const char* unk1), Args(const char* unk1));
	DefineStaticMethod(PadBackToLength, 0x997740, void, Params(gpbstring<char>& unk1, char unk2, unsigned int unk3), Args(gpbstring<char>& unk1, char unk2, unsigned int unk3));
	DefineStaticMethod(PadFrontToLength, 0x99772a, void, Params(gpbstring<char>& unk1, char unk2, unsigned int unk3), Args(gpbstring<char>& unk1, char unk2, unsigned int unk3));
}
