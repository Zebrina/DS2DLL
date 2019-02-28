#pragma once

#include "Enums.h"

class WorldOptions {
public:
	DefineSingleton(WorldOptions, 0x40a605);

	DefineConstMethod(GetAlwaysGib, 0x4094e9, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetBlockMCP, 0x409483, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCrowdingMCP, 0x4094b6, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDebugMCP, 0x409494, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalMCP, 0x409472, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetHudMCP, 0x409461, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLabelMCP, 0x40943f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetOptimizeMCP, 0x409450, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPowerReload, 0x40951f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShareExpEnabled, 0x409517, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShareGoldEnabled, 0x40951b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShowAll, 0x4093fa, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShowMCP, 0x409413, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShowPathsMCP, 0x409402, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetShowSpatialQueries, 0x40952b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShowTriggerSys, 0x4094c7, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShowTriggerSysHits, 0x4094d8, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSound, 0x409393, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTestMCP, 0x4094a5, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUpdateBoneAnimation, 0x409523, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetUpdateVertexAnimation, 0x409527, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsLagMCPOverride, 0x40943b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(TestDebugHudOptions, 0x4093d2, bool, Params(eDebugHudOptions options), Args(options));
	DefineConstMethod(TestDebugHudOptionsEq, 0x4093e5, bool, Params(eDebugHudOptions options), Args(options));
	DefineConstMethod(GetDifficulty, 0x83c6c8, eDifficulty, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDifficultyFloat, 0x409513, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetGameSpeed, 0x83c7ff, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLagMCP, 0x409424, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetObjectDetailLevel, 0x4093fe, float, NO_PARAMS, NO_ARGS);
	DefineMethod(GetSmoothTransitionDuration, 0x409543, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGibMultiplier, 0x4094fa, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMeleeAttackerCountLimit, 0x40953c, int, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSetDifficulty, 0x83c5ad, FuBi::Cookie__*, Params(eDifficulty difficulty), Args(difficulty));
	DefineMethod(RCSyncOnMachineHelper, 0x83d156, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2), Args(unk1, unk2));
	DefineMethod(ClearDebugHudOptions, 0x4093b6, void, Params(eDebugHudOptions options), Args(options));
	DefineMethod(RCSetGameSpeed, 0x83c86e, void, Params(float unk1), Args(unk1));
	DefineMethod(RSSetGameSpeed, 0x83c958, void, Params(float unk1), Args(unk1));
	DefineMethod(SetAlwaysGib, 0x4094ed, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetBlockMCP, 0x409487, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetCrowdingMCP, 0x4094ba, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetDebugHudOptions, 0x409396, void, Params(eDebugHudOptions options, bool unk2), Args(options, unk2));
	DefineMethod(SetDebugMCP, 0x409498, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetGameSpeed, 0x83c735, void, Params(float unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetGameSpeed, 0x40937e, void, Params(float unk1), Args(unk1));
	DefineMethod(SetGibMultiplier, 0x4094fe, void, Params(int unk1), Args(unk1));
	DefineMethod(SetGoalMCP, 0x409476, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetHudMCP, 0x409465, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetLabelMCP, 0x409443, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetLagMCP, 0x409428, void, Params(float unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetOptimizeMCP, 0x409454, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetShowMCP, 0x409417, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetShowPathsMCP, 0x409406, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetShowSpatialQueries, 0x40952f, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetShowTriggerSys, 0x4094cb, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetShowTriggerSysHits, 0x4094dc, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetTestMCP, 0x4094a9, void, Params(bool unk1), Args(unk1));
	DefineMethod(ToggleDebugHudOptions, 0x4093c5, void, Params(eDebugHudOptions options), Args(options));
};
