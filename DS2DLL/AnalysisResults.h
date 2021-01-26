#pragma once

#include "Enums.h"

class AnalysisResults {
public:
	AnalysisResults() = default;
	AnalysisResults(const AnalysisResults&) = default;
	~AnalysisResults() = default;

	AnalysisResults& operator=(const AnalysisResults&) = default;

    $ConstMethod(0x00408dfd, GetType, ePContentType);
	$Method(0x00408e00, SetType, void, ePContentType newType);
	$ConstMethod(0x00408e0c, GetSpecificType, ePContentType);
	$Method(0x00408e10, SetSpecificType, void, ePContentType newType);
	$ConstMethod(0x00408e1d, GetItemSkillType, eItemSkillType);
	$Method(0x00408e21, SetItemSkillType, void, eItemSkillType newType);
	$ConstMethod(0x00408e2e, GetItemLevel, int);
	$Method(0x00408e32, SetItemLevel, void, int newValue);
	$ConstMethod(0x00408e3f, GetRandomCharacter, bool);
	$Method(0x00408e43, SetRandomCharacter, void, bool flag);
	$ConstMethod(0x00408e50, GetAttackClass, eAttackClass);
	$Method(0x00408e54, SetAttackClass, void, eAttackClass newClass);
	$ConstMethod(0x00408e61, GetForceAnalysis, bool);
	$Method(0x00408e65, SetForceAnalysis, void, bool flag);

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
	// 0x14
	eAttackClass attackClass;
	// 0x18
	bool forceAnalysis;
};

// Size confirmed.
STATIC_ASSERT(sizeof(AnalysisResults) == 0x1c);
STATIC_ASSERT_OFFSETOF(AnalysisResults, attackClass, 0x14);
STATIC_ASSERT_OFFSETOF(AnalysisResults, forceAnalysis, 0x18);
