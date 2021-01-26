#pragma once

#include "GPString.h"

struct TaskData {
	TaskData() = default;
	TaskData(const TaskData&) = default;
	~TaskData() = default;

	TaskData& operator=(const TaskData&) = default;

	$ConstMethod(0x00412a7c, GetIndex, int);
	$ConstMethod(0x0041885b, GetDescription, GPBString);
	$ConstMethod(0x0041882f, GetName, GPBString);
	$ConstMethod(0x00418871, GetRadarIcon, GPBString);
	$ConstMethod(0x00418845, GetTitle, GPBString);
	$ConstMethod(0x00412a7f, GetParallelTask, bool);

	// 0x00
	int index;
	// 0x04
	$Padding(0x04, 0x14);
	// 0x14
	bool parallelTask;
};

// Size confirmed.
STATIC_ASSERT(sizeof(TaskData) == 0x18);
STATIC_ASSERT_OFFSETOF(TaskData, parallelTask, 0x14);
