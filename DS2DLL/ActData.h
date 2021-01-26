#pragma once

#include "GPString.h"
#include "QuestData.h"

struct ActData {
	ActData() = default;
	ActData(const ActData&) = default;
	~ActData() = default;

	ActData& operator=(const ActData&) = default;

	$ConstMethod(0x0041890b, GetName, GPBString);
	$ConstMethod(0x004188f5, GetTab, GPBString);
	$ConstMethod(0x00418921, GetTitle, GPBString);
	$ConstMethod(0x004142cc, GetQuestData, const QuestData*, uint unk1);
	$ConstMethod(0x00412aa2, GetIndex, int);
	$ConstMethod(0x004142ad, GetPrimaryQuestCount, int);
	$ConstMethod(0x004142bf, GetQuestCount, int);
	$ConstMethod(0x00412aa5, GetSecondaryQuestCount, int);

	// 0x00
	int index;
	// 0x04
	$Padding(0x04, 0x10);
	// 0x10
	int secondaryQuestCount;
	// questCount = floor((quest18 - quest14) / 56)
	// primaryQuestCount = questCount - secondaryQuestCount
	// 0x14
    $Padding(0x14, 0x1c);
};

// Size confirmed.
STATIC_ASSERT(sizeof(ActData) == 0x1c);
