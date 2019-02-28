#pragma once

class ContentDb {
public:
	DefineSingleton(ContentDb, 0x40a20f);

	DefineConstMethod(DoesTemplateExist, 0x7e1ec2, bool, Params(const char* unk1), Args(unk1));
	DefineConstMethod(DoesTemplateHaveComponent, 0x7e3f46, bool, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineMethod(EvalBoolFormula, 0x7dd617, bool, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(EvalBoolFormula, 0x408464, bool, Params(const char* unk1), Args(unk1));
	DefineMethod(GetTemplateBool, 0x7e41c6, bool, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(GetTemplateBool, 0x408486, bool, Params(const char* unk1), Args(unk1));
	DefineMethod(GetTemplateInternalFieldAddress, 0x7e210c, gpbstring<char>, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineConstMethod(GetTemplateScreenName, 0x7e3f08, gpbstring<char>, Params(const char* unk1), Args(unk1));
	DefineMethod(GetTemplateString, 0x7e41f0, gpbstring<char>, Params(const char* unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(GetTemplateString, 0x40b2cc, gpbstring<char>, Params(const char* unk1), Args(unk1));
	DefineMethod(GetTemplateScid, 0x7e420b, const Scid_*, Params(const char* unk1, const Scid_* unk2), Args(unk1, unk2));
	DefineMethod(GetTemplateScid, 0x4084ac, const Scid_*, Params(const char* unk1), Args(unk1));
	DefineMethod(EvalFloatFormula, 0x7dd5e2, double, Params(const char* unk1, double unk2), Args(unk1, unk2));
	DefineMethod(EvalFloatFormula, 0x40843d, double, Params(const char* unk1), Args(unk1));
	DefineMethod(GetTemplateFloat, 0x7e41db, float, Params(const char* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(GetTemplateFloat, 0x408497, float, Params(const char* unk1), Args(unk1));
	DefineMethod(EvalIntFormula, 0x7dd5ff, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(EvalIntFormula, 0x408453, int, Params(const char* unk1), Args(unk1));
	DefineConstMethod(GetMaxPartyGold, 0x408421, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSmallGoldAmount, 0x408428, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMediumGoldAmount, 0x40842f, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLargeGoldAmount, 0x408436, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetTemplateInt, 0x7e41b1, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(GetTemplateInt, 0x408475, int, Params(const char* unk1), Args(unk1));

private:
  // 0x000
  FillStruct(0x000, 0x134);
  // 0x134
  int maxPartyGold;
  // 0x138
  int smallGoldAmount;
  // 0x13c
  int mediumGoldAmount;
  // 0x140
  int largeGoldAmount;
};
