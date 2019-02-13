#pragma once

#include "ClassMacros.h"

class ContentDb {
public:
	DefineSingleton(ContentDb, 0x40a20f);

	/*ContentDb*/ private: /*static*/ ContentDb* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a20f
	DefineConstMethod(DoesTemplateExist, 0x7e1ec2, bool, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(DoesTemplateHaveComponent, 0x7e3f46, bool, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	DefineMethod(EvalBoolFormula, 0x7dd617, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(EvalBoolFormula, 0x408464, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(GetTemplateBool, 0x7e41c6, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineMethod(GetTemplateBool, 0x408486, bool, Params(const char* unk1), Args(const char* unk1));
	/*ContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateInternalFieldAddress(const char* unk1, const char* unk2); //0x007e210c
	/*ContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateScreenName(const char* unk1) const; //0x007e3f08
	/*ContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateString(const char* unk1, const gpbstring<char>& unk2); //0x007e41f0
	/*ContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateString(const char* unk1); //0x0040b2cc
	/*ContentDb*/ public: const Scid_* /*__thiscall*/ GetTemplateScid(const char* unk1, const Scid_* unk2); //0x007e420b
	/*ContentDb*/ public: const Scid_* /*__thiscall*/ GetTemplateScid(const char* unk1); //0x004084ac
	DefineMethod(EvalFloatFormula, 0x7dd5e2, double, Params(const char* unk1, double unk2), Args(const char* unk1, double unk2));
	DefineMethod(EvalFloatFormula, 0x40843d, double, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(GetTemplateFloat, 0x7e41db, float, Params(const char* unk1, float unk2), Args(const char* unk1, float unk2));
	DefineMethod(GetTemplateFloat, 0x408497, float, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(EvalIntFormula, 0x7dd5ff, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(EvalIntFormula, 0x408453, int, Params(const char* unk1), Args(const char* unk1));
	DefineConstMethod(GetLargeGoldAmount, 0x408436, int, Params(), Args());
	DefineConstMethod(GetMaxPartyGold, 0x408421, int, Params(), Args());
	DefineConstMethod(GetMediumGoldAmount, 0x40842f, int, Params(), Args());
	DefineConstMethod(GetSmallGoldAmount, 0x408428, int, Params(), Args());
	DefineMethod(GetTemplateInt, 0x7e41b1, int, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
	DefineMethod(GetTemplateInt, 0x408475, int, Params(const char* unk1), Args(const char* unk1));
};
