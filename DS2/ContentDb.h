#pragma once

#include "ClassMacros.h"

class ContentDb {
public:
	DefineSingleton(ContentDb, 0x40a20f);

	/*ContentDb*/ private: /*static*/ ContentDb* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a20f
	/*ContentDb*/ public: bool /*__thiscall*/ DoesTemplateExist(const char* unk1) const; //0x007e1ec2
	/*ContentDb*/ public: bool /*__thiscall*/ DoesTemplateHaveComponent(const char* unk1, const char* unk2) const; //0x007e3f46
	/*ContentDb*/ public: bool /*__thiscall*/ EvalBoolFormula(const char* unk1, bool unk2); //0x007dd617
	/*ContentDb*/ public: bool /*__thiscall*/ EvalBoolFormula(const char* unk1); //0x00408464
	/*ContentDb*/ public: bool /*__thiscall*/ GetTemplateBool(const char* unk1, bool unk2); //0x007e41c6
	/*ContentDb*/ public: bool /*__thiscall*/ GetTemplateBool(const char* unk1); //0x00408486
	/*ContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateInternalFieldAddress(const char* unk1, const char* unk2); //0x007e210c
	/*ContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateScreenName(const char* unk1) const; //0x007e3f08
	/*ContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateString(const char* unk1, const gpbstring<char>& unk2); //0x007e41f0
	/*ContentDb*/ public: gpbstring<char> /*__thiscall*/ GetTemplateString(const char* unk1); //0x0040b2cc
	/*ContentDb*/ public: const Scid_* /*__thiscall*/ GetTemplateScid(const char* unk1, const Scid_* unk2); //0x007e420b
	/*ContentDb*/ public: const Scid_* /*__thiscall*/ GetTemplateScid(const char* unk1); //0x004084ac
	/*ContentDb*/ public: double /*__thiscall*/ EvalFloatFormula(const char* unk1, double unk2); //0x007dd5e2
	/*ContentDb*/ public: double /*__thiscall*/ EvalFloatFormula(const char* unk1); //0x0040843d
	/*ContentDb*/ public: float /*__thiscall*/ GetTemplateFloat(const char* unk1, float unk2); //0x007e41db
	/*ContentDb*/ public: float /*__thiscall*/ GetTemplateFloat(const char* unk1); //0x00408497
	/*ContentDb*/ public: int /*__thiscall*/ EvalIntFormula(const char* unk1, int unk2); //0x007dd5ff
	/*ContentDb*/ public: int /*__thiscall*/ EvalIntFormula(const char* unk1); //0x00408453
	/*ContentDb*/ public: int /*__thiscall*/ GetLargeGoldAmount() const; //0x00408436
	/*ContentDb*/ public: int /*__thiscall*/ GetMaxPartyGold() const; //0x00408421
	/*ContentDb*/ public: int /*__thiscall*/ GetMediumGoldAmount() const; //0x0040842f
	/*ContentDb*/ public: int /*__thiscall*/ GetSmallGoldAmount() const; //0x00408428
	/*ContentDb*/ public: int /*__thiscall*/ GetTemplateInt(const char* unk1, int unk2); //0x007e41b1
	/*ContentDb*/ public: int /*__thiscall*/ GetTemplateInt(const char* unk1); //0x00408475
};
