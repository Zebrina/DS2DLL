#pragma once

#include "ClassMacros.h"

enum eDifficulty;

class WorldOptions {
public:
	DefineSingleton(WorldOptions, 0x40a605);

	/*WorldOptions*/ private: /*static*/ WorldOptions* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a605
	DefineConstMethod(GetAlwaysGib, 0x4094e9, bool, Params(), Args());
	DefineConstMethod(GetBlockMCP, 0x409483, bool, Params(), Args());
	DefineConstMethod(GetCrowdingMCP, 0x4094b6, bool, Params(), Args());
	DefineConstMethod(GetDebugMCP, 0x409494, bool, Params(), Args());
	DefineConstMethod(GetGoalMCP, 0x409472, bool, Params(), Args());
	DefineConstMethod(GetHudMCP, 0x409461, bool, Params(), Args());
	DefineConstMethod(GetLabelMCP, 0x40943f, bool, Params(), Args());
	DefineConstMethod(GetOptimizeMCP, 0x409450, bool, Params(), Args());
	DefineConstMethod(GetPowerReload, 0x40951f, bool, Params(), Args());
	DefineConstMethod(GetShareExpEnabled, 0x409517, bool, Params(), Args());
	DefineConstMethod(GetShareGoldEnabled, 0x40951b, bool, Params(), Args());
	DefineConstMethod(GetShowAll, 0x4093fa, bool, Params(), Args());
	DefineConstMethod(GetShowMCP, 0x409413, bool, Params(), Args());
	DefineConstMethod(GetShowPathsMCP, 0x409402, bool, Params(), Args());
	DefineMethod(GetShowSpatialQueries, 0x40952b, bool, Params(), Args());
	DefineConstMethod(GetShowTriggerSys, 0x4094c7, bool, Params(), Args());
	DefineConstMethod(GetShowTriggerSysHits, 0x4094d8, bool, Params(), Args());
	DefineConstMethod(GetSound, 0x409393, bool, Params(), Args());
	DefineConstMethod(GetTestMCP, 0x4094a5, bool, Params(), Args());
	DefineConstMethod(GetUpdateBoneAnimation, 0x409523, bool, Params(), Args());
	DefineConstMethod(GetUpdateVertexAnimation, 0x409527, bool, Params(), Args());
	DefineConstMethod(IsLagMCPOverride, 0x40943b, bool, Params(), Args());
	DefineConstMethod(TestDebugHudOptions, 0x4093d2, bool, Params(eDebugHudOptions unk1), Args(eDebugHudOptions unk1));
	DefineConstMethod(TestDebugHudOptionsEq, 0x4093e5, bool, Params(eDebugHudOptions unk1), Args(eDebugHudOptions unk1));
	DefineConstMethod(GetDifficulty, 0x83c6c8, eDifficulty, Params(), Args());
	DefineConstMethod(GetDifficultyFloat, 0x409513, float, Params(), Args());
	DefineMethod(GetGameSpeed, 0x83c7ff, float, Params(), Args());
	DefineConstMethod(GetLagMCP, 0x409424, float, Params(), Args());
	DefineConstMethod(GetObjectDetailLevel, 0x4093fe, float, Params(), Args());
	DefineMethod(GetSmoothTransitionDuration, 0x409543, float, Params(), Args());
	DefineConstMethod(GetGibMultiplier, 0x4094fa, int, Params(), Args());
	DefineMethod(GetMeleeAttackerCountLimit, 0x40953c, int, Params(), Args());
	DefineMethod(RCSetDifficulty, 0x83c5ad, FuBi::Cookie__*, Params(eDifficulty unk1), Args(eDifficulty unk1));
	DefineMethod(RCSyncOnMachineHelper, 0x83d156, FuBi::Cookie__*, Params(unsigned long unk1, const_mem_ptr unk2), Args(unsigned long unk1, const_mem_ptr unk2));
	DefineMethod(ClearDebugHudOptions, 0x4093b6, void, Params(eDebugHudOptions unk1), Args(eDebugHudOptions unk1));
	DefineMethod(RCSetGameSpeed, 0x83c86e, void, Params(float unk1), Args(float unk1));
	DefineMethod(RSSetGameSpeed, 0x83c958, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetAlwaysGib, 0x4094ed, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetBlockMCP, 0x409487, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetCrowdingMCP, 0x4094ba, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetDebugHudOptions, 0x409396, void, Params(eDebugHudOptions unk1, bool unk2), Args(eDebugHudOptions unk1, bool unk2));
	DefineMethod(SetDebugMCP, 0x409498, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetGameSpeed, 0x83c735, void, Params(float unk1, bool unk2), Args(float unk1, bool unk2));
	DefineMethod(SetGameSpeed, 0x40937e, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetGibMultiplier, 0x4094fe, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetGoalMCP, 0x409476, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetHudMCP, 0x409465, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetLabelMCP, 0x409443, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetLagMCP, 0x409428, void, Params(float unk1, bool unk2), Args(float unk1, bool unk2));
	DefineMethod(SetOptimizeMCP, 0x409454, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetShowMCP, 0x409417, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetShowPathsMCP, 0x409406, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetShowSpatialQueries, 0x40952f, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetShowTriggerSys, 0x4094cb, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetShowTriggerSysHits, 0x4094dc, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetTestMCP, 0x4094a9, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(ToggleDebugHudOptions, 0x4093c5, void, Params(eDebugHudOptions unk1), Args(eDebugHudOptions unk1));
};
