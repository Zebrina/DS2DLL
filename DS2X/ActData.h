#pragma once

#include "GPBString.h"
#include "QuestData.h"

struct ActData {
	DefineStaticMethod(FUBI_PodGetSize, 0x412a9e, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetName, 0x41890b, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTab, 0x4188f5, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTitle, 0x418921, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetQuestData, 0x4142cc, const QuestData*, Params(unsigned int unk1), Args(unk1));
	DefineConstMethod(GetIndex, 0x412aa2, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPrimaryQuestCount, 0x4142ad, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetQuestCount, 0x4142bf, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSecondaryQuestCount, 0x412aa5, int, NO_PARAMS, NO_ARGS);

	// 0x00
	int index;
	// 0x04
	FillStruct(0x04, 0x10);
	// 0x10
	int secondaryQuestCount;
	// questCount = floor((quest18 - quest14) / 56)
	// primaryQuestCount = questCount - secondaryQuestCount
	// 0x14
	int quest14;
	// 0x18
	int quest18;

	const QuestData* GetQuestData2(ActData* this_, uint32_t index) {
		int32_t v2 = *(int32_t *)quest14; // 0x4142d2
		int32_t v3 = *(int32_t *)quest18 - v2; // 0x4142d2
		int32_t result = (int32_t)((0x100000000 * (int64_t)(v3 >> 31) | (int64_t)v3) / 56);
		if (result <= index) {
			return NULL;
		}
		return (QuestData*)(v2 + 56 * index);
	}
};

STATIC_ASSERT_SIZEOF(ActData, 0x1c);
