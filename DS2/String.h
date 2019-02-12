#pragma once

namespace String {
	/*String*/ private: /*static*/ bool /*__cdecl*/ GetDelimitedBool(const char* unk1, int unk2, char unk3, bool unk4); //0x0099789b
	/*String*/ private: /*static*/ bool /*__cdecl*/ GetDelimitedBool(const char* unk1, int unk2, char unk3); //0x004279f4
	/*String*/ private: /*static*/ bool /*__cdecl*/ GetDelimitedBool(const char* unk1, int unk2); //0x00427a0c
	/*String*/ private: /*static*/ bool /*__cdecl*/ IsEmpty(const char* unk1); //0x0099732f
	/*String*/ private: /*static*/ bool /*__cdecl*/ SameNoCase(const char* unk1, const char* unk2, int unk3); //0x00997635
	/*String*/ private: /*static*/ bool /*__cdecl*/ SameNoCase(const char* unk1, const char* unk2); //0x009975eb
	/*String*/ private: /*static*/ bool /*__cdecl*/ SameWithCase(const char* unk1, const char* unk2, int unk3); //0x00997756
	/*String*/ private: /*static*/ bool /*__cdecl*/ SameWithCase(const char* unk1, const char* unk2); //0x0099767e
	/*String*/ private: /*static*/ bool /*__cdecl*/ StringInString(const char* unk1, const char* unk2); //0x00997712
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
	/*String*/ private: /*static*/ float /*__cdecl*/ GetDelimitedFloat(const char* unk1, int unk2, char unk3, float unk4); //0x009978e3
	/*String*/ private: /*static*/ float /*__cdecl*/ GetDelimitedFloat(const char* unk1, int unk2, char unk3); //0x00427a52
	/*String*/ private: /*static*/ float /*__cdecl*/ GetDelimitedFloat(const char* unk1, int unk2); //0x00427a6e
	/*String*/ private: /*static*/ int /*__cdecl*/ GetDelimitedInt(const char* unk1, int unk2, char unk3, int unk4); //0x009978bf
	/*String*/ private: /*static*/ int /*__cdecl*/ GetDelimitedInt(const char* unk1, int unk2, char unk3); //0x00427a23
	/*String*/ private: /*static*/ int /*__cdecl*/ GetDelimitedInt(const char* unk1, int unk2); //0x00427a3b
	/*String*/ private: /*static*/ int /*__cdecl*/ GetLength(const gpbstring<char>& unk1); //0x0099735d
	/*String*/ private: /*static*/ int /*__cdecl*/ GetNumDelimitedValues(const char* unk1, char unk2); //0x009977e9
	/*String*/ private: /*static*/ int /*__cdecl*/ GetNumDelimitedValues(const char* unk1); //0x004279e3
	/*String*/ private: /*static*/ void /*__cdecl*/ PadBackToLength(gpbstring<char>& unk1, char unk2, unsigned int unk3); //0x00997740
	/*String*/ private: /*static*/ void /*__cdecl*/ PadFrontToLength(gpbstring<char>& unk1, char unk2, unsigned int unk3); //0x0099772a
}
