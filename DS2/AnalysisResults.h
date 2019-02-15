#pragma once

#include "ClassMacros.h"

enum eItemSkillType {

};

class AnalysisResults {
public:
	DefineStaticMethod(FUBI_PodGetSize, 0x408df9, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetForceAnalysis, 0x408e61, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRandomCharacter, 0x408e3f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAttackClass, 0x408e50, eAttackClass, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetItemSkillType, 0x408e1d, eItemSkillType, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSpecificType, 0x408e0c, ePContentType, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetType, 0x408dfd, ePContentType, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetItemLevel, 0x408e2e, int, NO_PARAMS, NO_ARGS);
	DefineMethod(SetAttackClass, 0x408e54, void, Params(eAttackClass unk1), Args(unk1));
	DefineMethod(SetForceAnalysis, 0x408e65, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetItemLevel, 0x408e32, void, Params(int unk1), Args(unk1));
	DefineMethod(SetItemSkillType, 0x408e21, void, Params(eItemSkillType unk1), Args(unk1));
	DefineMethod(SetRandomCharacter, 0x408e43, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetSpecificType, 0x408e10, void, Params(ePContentType unk1), Args(unk1));
	DefineMethod(SetType, 0x408e00, void, Params(ePContentType unk1), Args(unk1));
};
