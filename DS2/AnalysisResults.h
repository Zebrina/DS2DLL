#pragma once

class AnalysisResults {
public:
	/*AnalysisResults*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00408df9
	DefineConstMethod(GetForceAnalysis, 0x408e61, bool, Params(), Args());
	DefineConstMethod(GetRandomCharacter, 0x408e3f, bool, Params(), Args());
	DefineConstMethod(GetAttackClass, 0x408e50, eAttackClass, Params(), Args());
	DefineConstMethod(GetItemSkillType, 0x408e1d, eItemSkillType, Params(), Args());
	DefineConstMethod(GetSpecificType, 0x408e0c, ePContentType, Params(), Args());
	DefineConstMethod(GetType, 0x408dfd, ePContentType, Params(), Args());
	DefineConstMethod(GetItemLevel, 0x408e2e, int, Params(), Args());
	DefineMethod(SetAttackClass, 0x408e54, void, Params(eAttackClass unk1), Args(eAttackClass unk1));
	DefineMethod(SetForceAnalysis, 0x408e65, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetItemLevel, 0x408e32, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetItemSkillType, 0x408e21, void, Params(eItemSkillType unk1), Args(eItemSkillType unk1));
	DefineMethod(SetRandomCharacter, 0x408e43, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetSpecificType, 0x408e10, void, Params(ePContentType unk1), Args(ePContentType unk1));
	DefineMethod(SetType, 0x408e00, void, Params(ePContentType unk1), Args(ePContentType unk1));
};