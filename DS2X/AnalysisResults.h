#pragma once

#include "Enums.h"

class AnalysisResults {
public:
	DefineStaticMethod(FUBI_PodGetSize, 0x408df9, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetType, 0x408dfd, ePContentType, NO_PARAMS, NO_ARGS);
	DefineMethod(SetType, 0x408e00, void, Params(ePContentType newType), Args(newType));
	DefineConstMethod(GetSpecificType, 0x408e0c, ePContentType, NO_PARAMS, NO_ARGS);
	DefineMethod(SetSpecificType, 0x408e10, void, Params(ePContentType newType), Args(newType));
	DefineConstMethod(GetItemSkillType, 0x408e1d, eItemSkillType, NO_PARAMS, NO_ARGS);
	DefineMethod(SetItemSkillType, 0x408e21, void, Params(eItemSkillType newType), Args(newType));
	DefineConstMethod(GetItemLevel, 0x408e2e, int, NO_PARAMS, NO_ARGS);
	DefineMethod(SetItemLevel, 0x408e32, void, Params(int newValue), Args(newValue));
	DefineConstMethod(GetRandomCharacter, 0x408e3f, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(SetRandomCharacter, 0x408e43, void, Params(bool flag), Args(flag));
	DefineConstMethod(GetAttackClass, 0x408e50, eAttackClass, NO_PARAMS, NO_ARGS);
	DefineMethod(SetAttackClass, 0x408e54, void, Params(eAttackClass newClass), Args(newClass));
	DefineConstMethod(GetForceAnalysis, 0x408e61, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(SetForceAnalysis, 0x408e65, void, Params(bool flag), Args(flag));

	// 0x00
	ePContentType type;
	// 0x04
	ePContentType specificType;
	// 0x08
	eItemSkillType itemSkillType;
	// 0x0c
	int itemLevel;
	// 0x10
	bool randomCharacter;
	// 0x11
	FillStruct(0x11, 0x14);
	// 0x14
	eAttackClass attackClass;
	// 0x18
	bool forceAnalysis;
};

STATIC_ASSERT_OFFSETOF(AnalysisResults, attackClass, 0x14);
STATIC_ASSERT_OFFSETOF(AnalysisResults, forceAnalysis, 0x18);
