#pragma once

#include "ClassMacros.h"

class GameAuditor {
public:
	DefineSingleton(GameAuditor, 0x414146);

	/*GameAuditor*/ private: /*static*/ GameAuditor* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414146
	/*GameAuditor*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(AuditorDb* unk1); //0x00411771
	/*GameAuditor*/ public: AuditorDb* /*__thiscall*/ AddDb(const char* unk1, bool unk2); //0x0085f599
	/*GameAuditor*/ public: AuditorDb* /*__thiscall*/ FindDb(const char* unk1); //0x0085e576
	/*GameAuditor*/ public: AuditorDb* /*__thiscall*/ GetDb(); //0x00411718
	/*GameAuditor*/ public: void /*__thiscall*/ RCSet(const char* unk1, int unk2, unsigned long unk3); //0x0085ff4d
	/*GameAuditor*/ public: void /*__thiscall*/ RCSet(const char* unk1, int unk2); //0x0041171b
	/*GameAuditor*/ public: void /*__thiscall*/ RCSet(int unk1, const char* unk2, int unk3, unsigned long unk4); //0x00860039
	/*GameAuditor*/ public: void /*__thiscall*/ RCSet(int unk1, const char* unk2, int unk3); //0x0041172f
	/*GameAuditor*/ public: void /*__thiscall*/ RCSetBool(const char* unk1, bool unk2, unsigned long unk3); //0x00860128
	/*GameAuditor*/ public: void /*__thiscall*/ RCSetBool(const char* unk1, bool unk2); //0x00411746
	/*GameAuditor*/ public: void /*__thiscall*/ RCSetBool(int unk1, const char* unk2, bool unk3, unsigned long unk4); //0x00860214
	/*GameAuditor*/ public: void /*__thiscall*/ RCSetBool(int unk1, const char* unk2, bool unk3); //0x0041175a
};
