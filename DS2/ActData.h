#pragma once

#include "GPBString.h"
#include "QuestData.h"

#include "ClassMacros.h"

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
};
