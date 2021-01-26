#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "Memory.h"

class WorldOptions {
public:
	$Singleton(WorldOptions, 0x0040a605);

	$ConstMethod(0x004094e9, GetAlwaysGib, bool);
	$ConstMethod(0x00409483, GetBlockMCP, bool);
	$ConstMethod(0x004094b6, GetCrowdingMCP, bool);
	$ConstMethod(0x00409494, GetDebugMCP, bool);
	$ConstMethod(0x00409472, GetGoalMCP, bool);
	$ConstMethod(0x00409461, GetHudMCP, bool);
	$ConstMethod(0x0040943f, GetLabelMCP, bool);
	$ConstMethod(0x00409450, GetOptimizeMCP, bool);
	$ConstMethod(0x0040951f, GetPowerReload, bool);
	$ConstMethod(0x00409517, GetShareExpEnabled, bool);
	$ConstMethod(0x0040951b, GetShareGoldEnabled, bool);
	$ConstMethod(0x004093fa, GetShowAll, bool);
	$ConstMethod(0x00409413, GetShowMCP, bool);
	$ConstMethod(0x00409402, GetShowPathsMCP, bool);
	$Method(0x0040952b, GetShowSpatialQueries, bool);
	$ConstMethod(0x004094c7, GetShowTriggerSys, bool);
	$ConstMethod(0x004094d8, GetShowTriggerSysHits, bool);
	$ConstMethod(0x00409393, GetSound, bool);
	$ConstMethod(0x004094a5, GetTestMCP, bool);
	$ConstMethod(0x00409523, GetUpdateBoneAnimation, bool);
	$ConstMethod(0x00409527, GetUpdateVertexAnimation, bool);
	$ConstMethod(0x0040943b, IsLagMCPOverride, bool);
	$ConstMethod(0x004093d2, TestDebugHudOptions, bool, eDebugHudOptions options);
	$ConstMethod(0x004093e5, TestDebugHudOptionsEq, bool, eDebugHudOptions options);
	$ConstMethod(0x0083c6c8, GetDifficulty, eDifficulty);
	$ConstMethod(0x00409513, GetDifficultyFloat, float);
	$Method(0x0083c7ff, GetGameSpeed, float);
	$ConstMethod(0x00409424, GetLagMCP, float);
	$ConstMethod(0x004093fe, GetObjectDetailLevel, float);
	$Method(0x00409543, GetSmoothTransitionDuration, float);
	$ConstMethod(0x004094fa, GetGibMultiplier, int);
	$Method(0x0040953c, GetMeleeAttackerCountLimit, int);
	$Method(0x0083c5ad, RCSetDifficulty, FuBiCookie*, eDifficulty difficulty);
	$Method(0x0083d156, RCSyncOnMachineHelper, FuBiCookie*, uint unk1, const_mem_ptr unk2);
	$Method(0x004093b6, ClearDebugHudOptions, void, eDebugHudOptions options);
	$Method(0x0083c86e, RCSetGameSpeed, void, float unk1);
	$Method(0x0083c958, RSSetGameSpeed, void, float unk1);
	$Method(0x004094ed, SetAlwaysGib, void, bool unk1);
	$Method(0x00409487, SetBlockMCP, void, bool unk1);
	$Method(0x004094ba, SetCrowdingMCP, void, bool unk1);
	$Method(0x00409396, SetDebugHudOptions, void, eDebugHudOptions options, bool unk2);
	$Method(0x00409498, SetDebugMCP, void, bool unk1);
	$Method(0x0083c735, SetGameSpeed, void, float value, bool report);
	$Method(0x0040937e, SetGameSpeed, void, float value);
	$Method(0x004094fe, SetGibMultiplier, void, int unk1);
	$Method(0x00409476, SetGoalMCP, void, bool unk1);
	$Method(0x00409465, SetHudMCP, void, bool unk1);
	$Method(0x00409443, SetLabelMCP, void, bool unk1);
	$Method(0x00409428, SetLagMCP, void, float unk1, bool unk2);
	$Method(0x00409454, SetOptimizeMCP, void, bool unk1);
	$Method(0x00409417, SetShowMCP, void, bool unk1);
	$Method(0x00409406, SetShowPathsMCP, void, bool unk1);
	$Method(0x0040952f, SetShowSpatialQueries, void, bool unk1);
	$Method(0x004094cb, SetShowTriggerSys, void, bool unk1);
	$Method(0x004094dc, SetShowTriggerSysHits, void, bool unk1);
	$Method(0x004094a9, SetTestMCP, void, bool unk1);
	$Method(0x004093c5, ToggleDebugHudOptions, void, eDebugHudOptions options);

	// 0x00
	bool bSound;
	bool b01;
	bool b02;
	bool b03;
	// 0x04
	bool bShowAll;
	// 0x08
	float objectDetailLevel;
	// 0x0c
	bool b0C;
	bool b0D;
	bool b0E;
	bool bShowPathsMCP;
	// 0x10
	bool bShowMCP;
	// 0x14
	float lagMCP;
	// 0x18
	bool bLagMCPOverride;
	bool bLabelMCP;
	bool bOptimizeMCP;
	bool bHudMCP;
	// 0x1c
	bool bGoalMCP;
	bool bBlockMCP;
	bool bDebugMCP;
	bool bTestMCP;
	// 0x20
	bool bCrowdingMCP;
	bool bShowTriggerSys;
	bool bShowTriggerSysHits;
	bool b23;
	// 0x24
	$Padding(0x24, 0x28);
	// 0x28
	bool bAlwaysGib;
	// 0x2c
	float gibMultiplier;
	// 0x30
	$Padding(0x30, 0x44);
	// 0x44
	eDebugHudOptions debugHudOptions;
	// 0x48
	float difficultyFloat;
	// 0x4c
	$Padding(0x4c, 0x50);
	// 0x50
	bool b50;
	bool bAllowCommandCast; // ?? 0x0093e3ec
	bool b52;
	bool b53;
	// 0x54
	bool bShareExpEnabled;
	bool bShareGoldEnabled;
	bool bPowerReload;
	bool bUpdateBoneAnimation;
	// 0x58
	bool bUpdateVertexAnimation;
	bool b59;
	bool bShowSpatialQueries;
	bool b5B;
	// 0x5c
	$Padding(0x5c, 0x74);
	// 0x74
	float gameSpeed;
	// 0x78
	$Padding(0x78, 0x94);
	// 0x94
	int meleeAttackerCountLimit;
	// 0x98
	bool bUseSmoothTransition; // ??
	// 0x9c
	float smoothTransitionDuration;
    // 0xa0
    $Padding(0xa0, 0xa4);
};

STATIC_ASSERT(sizeof(WorldOptions) == 0xa4);
STATIC_ASSERT_OFFSETOF(WorldOptions, bShowAll, 0x04);
STATIC_ASSERT_OFFSETOF(WorldOptions, objectDetailLevel, 0x08);
STATIC_ASSERT_OFFSETOF(WorldOptions, bShowPathsMCP, 0x0f);
STATIC_ASSERT_OFFSETOF(WorldOptions, bHudMCP, 0x1b);
STATIC_ASSERT_OFFSETOF(WorldOptions, bShowTriggerSysHits, 0x22);
STATIC_ASSERT_OFFSETOF(WorldOptions, bAlwaysGib, 0x28);
STATIC_ASSERT_OFFSETOF(WorldOptions, gibMultiplier, 0x2c);
STATIC_ASSERT_OFFSETOF(WorldOptions, debugHudOptions, 0x44);
STATIC_ASSERT_OFFSETOF(WorldOptions, difficultyFloat, 0x48);
STATIC_ASSERT_OFFSETOF(WorldOptions, bUpdateBoneAnimation, 0x57);
STATIC_ASSERT_OFFSETOF(WorldOptions, bUpdateVertexAnimation, 0x58);
STATIC_ASSERT_OFFSETOF(WorldOptions, bShowSpatialQueries, 0x5a);
STATIC_ASSERT_OFFSETOF(WorldOptions, gameSpeed, 0x74);
STATIC_ASSERT_OFFSETOF(WorldOptions, meleeAttackerCountLimit, 0x94);
STATIC_ASSERT_OFFSETOF(WorldOptions, bUseSmoothTransition, 0x98);
STATIC_ASSERT_OFFSETOF(WorldOptions, smoothTransitionDuration, 0x9c);
