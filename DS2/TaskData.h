#pragma once

#include "ClassMacros.h"

struct TaskData {
	DefineStaticMethod(FUBI_PodGetSize, 0x412a78, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetParallelTask, 0x412a7f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDescription, 0x41885b, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetName, 0x41882f, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRadarIcon, 0x418871, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTitle, 0x418845, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIndex, 0x412a7c, int, NO_PARAMS, NO_ARGS);
};
