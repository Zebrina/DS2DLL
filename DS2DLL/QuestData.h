#pragma once

#include "GPString.h"
#include "TaskData.h"

struct QuestData {
	QuestData() = default;
	QuestData(const QuestData&) = default;
	~QuestData() = default;

	QuestData& operator=(const QuestData&) = default;

    $ConstMethod(0x00412a87, GetIndex, int);
	$ConstMethod(0x00412a8a, GetSecondary, bool);
	$ConstMethod(0x004188b3, GetDescription, GPBString);
	$ConstMethod(0x004188c9, GetDescription2, GPBString);
	$ConstMethod(0x004188df, GetImage, GPBString);
	$ConstMethod(0x00418887, GetName, GPBString);
	$ConstMethod(0x0041889d, GetTitle, GPBString);
	$ConstMethod(0x00414284, GetTaskData, const TaskData*, uint unk1);
	$ConstMethod(0x00412a8e, GetAct, int);
	$ConstMethod(0x00412a92, GetMercenaryLevel, int);
	$ConstMethod(0x00412a96, GetVeteranLevel, int);
	$ConstMethod(0x00412a9a, GetEliteLevel, int);
	$ConstMethod(0x00414277, GetTaskCount, int);

	// 0x00
	int index;
	// 0x04
	$Padding(0x04, 0x18);
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
    // 0x2c
    $Padding(0x2c, 0x38);
};

// Size confirmed.
STATIC_ASSERT(sizeof(QuestData) == 0x38);
STATIC_ASSERT_OFFSETOF(QuestData, eliteLevel, 0x28);
