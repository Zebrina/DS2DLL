#pragma once

#include "GPBString.h"
#include "TaskData.h"

struct QuestData {
	DefineStaticMethod(FUBI_PodGetSize, 0x412a83, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSecondary, 0x412a8a, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDescription, 0x4188b3, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDescription2, 0x4188c9, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetImage, 0x4188df, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetName, 0x418887, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTitle, 0x41889d, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTaskData, 0x414284, const TaskData*, Params(unsigned int unk1), Args(unk1));
	DefineConstMethod(GetAct, 0x412a8e, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetEliteLevel, 0x412a9a, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIndex, 0x412a87, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMercenaryLevel, 0x412a92, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTaskCount, 0x414277, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetVeteranLevel, 0x412a96, int, NO_PARAMS, NO_ARGS);

	// 0x00
	int index;
	// 0x04
	FillStruct(0x04, 0x18);
	// 0x18
	bool secondary;
	// 0x1c
	int act;
	// 0x20
	int mercenaryLevel;
	// 0x24
	int veteranLevel;
	// 0x28
	int eliteLevel;
};
