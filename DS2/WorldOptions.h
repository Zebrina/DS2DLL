#pragma once

#include "ClassMacros.h"

enum eDifficulty;

class WorldOptions {
public:
	DefineSingleton(WorldOptions, 0x40a605);

	/*WorldOptions*/ private: /*static*/ WorldOptions* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a605
	/*WorldOptions*/ public: bool /*__thiscall*/ GetAlwaysGib() const; //0x004094e9
	/*WorldOptions*/ public: bool /*__thiscall*/ GetBlockMCP() const; //0x00409483
	/*WorldOptions*/ public: bool /*__thiscall*/ GetCrowdingMCP() const; //0x004094b6
	/*WorldOptions*/ public: bool /*__thiscall*/ GetDebugMCP() const; //0x00409494
	/*WorldOptions*/ public: bool /*__thiscall*/ GetGoalMCP() const; //0x00409472
	/*WorldOptions*/ public: bool /*__thiscall*/ GetHudMCP() const; //0x00409461
	/*WorldOptions*/ public: bool /*__thiscall*/ GetLabelMCP() const; //0x0040943f
	/*WorldOptions*/ public: bool /*__thiscall*/ GetOptimizeMCP() const; //0x00409450
	/*WorldOptions*/ public: bool /*__thiscall*/ GetPowerReload() const; //0x0040951f
	/*WorldOptions*/ public: bool /*__thiscall*/ GetShareExpEnabled() const; //0x00409517
	/*WorldOptions*/ public: bool /*__thiscall*/ GetShareGoldEnabled() const; //0x0040951b
	/*WorldOptions*/ public: bool /*__thiscall*/ GetShowAll() const; //0x004093fa
	/*WorldOptions*/ public: bool /*__thiscall*/ GetShowMCP() const; //0x00409413
	/*WorldOptions*/ public: bool /*__thiscall*/ GetShowPathsMCP() const; //0x00409402
	/*WorldOptions*/ public: bool /*__thiscall*/ GetShowSpatialQueries(); //0x0040952b
	/*WorldOptions*/ public: bool /*__thiscall*/ GetShowTriggerSys() const; //0x004094c7
	/*WorldOptions*/ public: bool /*__thiscall*/ GetShowTriggerSysHits() const; //0x004094d8
	/*WorldOptions*/ public: bool /*__thiscall*/ GetSound() const; //0x00409393
	/*WorldOptions*/ public: bool /*__thiscall*/ GetTestMCP() const; //0x004094a5
	/*WorldOptions*/ public: bool /*__thiscall*/ GetUpdateBoneAnimation() const; //0x00409523
	/*WorldOptions*/ public: bool /*__thiscall*/ GetUpdateVertexAnimation() const; //0x00409527
	/*WorldOptions*/ public: bool /*__thiscall*/ IsLagMCPOverride() const; //0x0040943b
	/*WorldOptions*/ public: bool /*__thiscall*/ TestDebugHudOptions(eDebugHudOptions unk1) const; //0x004093d2
	/*WorldOptions*/ public: bool /*__thiscall*/ TestDebugHudOptionsEq(eDebugHudOptions unk1) const; //0x004093e5
	/*WorldOptions*/ public: eDifficulty /*__thiscall*/ GetDifficulty() const; //0x0083c6c8
	/*WorldOptions*/ public: float /*__thiscall*/ GetDifficultyFloat() const; //0x00409513
	/*WorldOptions*/ public: float /*__thiscall*/ GetGameSpeed(); //0x0083c7ff
	/*WorldOptions*/ public: float /*__thiscall*/ GetLagMCP() const; //0x00409424
	/*WorldOptions*/ public: float /*__thiscall*/ GetObjectDetailLevel() const; //0x004093fe
	/*WorldOptions*/ public: float /*__thiscall*/ GetSmoothTransitionDuration(); //0x00409543
	/*WorldOptions*/ public: int /*__thiscall*/ GetGibMultiplier() const; //0x004094fa
	/*WorldOptions*/ public: int /*__thiscall*/ GetMeleeAttackerCountLimit(); //0x0040953c
	/*WorldOptions*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetDifficulty(eDifficulty unk1); //0x0083c5ad
	/*WorldOptions*/ public: FuBi::Cookie__* /*__thiscall*/ RCSyncOnMachineHelper(unsigned long unk1, const_mem_ptr unk2); //0x0083d156
	/*WorldOptions*/ public: void /*__thiscall*/ ClearDebugHudOptions(eDebugHudOptions unk1); //0x004093b6
	/*WorldOptions*/ public: void /*__thiscall*/ RCSetGameSpeed(float unk1); //0x0083c86e
	/*WorldOptions*/ public: void /*__thiscall*/ RSSetGameSpeed(float unk1); //0x0083c958
	/*WorldOptions*/ public: void /*__thiscall*/ SetAlwaysGib(bool unk1); //0x004094ed
	/*WorldOptions*/ public: void /*__thiscall*/ SetBlockMCP(bool unk1); //0x00409487
	/*WorldOptions*/ public: void /*__thiscall*/ SetCrowdingMCP(bool unk1); //0x004094ba
	/*WorldOptions*/ public: void /*__thiscall*/ SetDebugHudOptions(eDebugHudOptions unk1, bool unk2); //0x00409396
	/*WorldOptions*/ public: void /*__thiscall*/ SetDebugMCP(bool unk1); //0x00409498
	/*WorldOptions*/ public: void /*__thiscall*/ SetGameSpeed(float unk1, bool unk2); //0x0083c735
	/*WorldOptions*/ public: void /*__thiscall*/ SetGameSpeed(float unk1); //0x0040937e
	/*WorldOptions*/ public: void /*__thiscall*/ SetGibMultiplier(int unk1); //0x004094fe
	/*WorldOptions*/ public: void /*__thiscall*/ SetGoalMCP(bool unk1); //0x00409476
	/*WorldOptions*/ public: void /*__thiscall*/ SetHudMCP(bool unk1); //0x00409465
	/*WorldOptions*/ public: void /*__thiscall*/ SetLabelMCP(bool unk1); //0x00409443
	/*WorldOptions*/ public: void /*__thiscall*/ SetLagMCP(float unk1, bool unk2); //0x00409428
	/*WorldOptions*/ public: void /*__thiscall*/ SetOptimizeMCP(bool unk1); //0x00409454
	/*WorldOptions*/ public: void /*__thiscall*/ SetShowMCP(bool unk1); //0x00409417
	/*WorldOptions*/ public: void /*__thiscall*/ SetShowPathsMCP(bool unk1); //0x00409406
	/*WorldOptions*/ public: void /*__thiscall*/ SetShowSpatialQueries(bool unk1); //0x0040952f
	/*WorldOptions*/ public: void /*__thiscall*/ SetShowTriggerSys(bool unk1); //0x004094cb
	/*WorldOptions*/ public: void /*__thiscall*/ SetShowTriggerSysHits(bool unk1); //0x004094dc
	/*WorldOptions*/ public: void /*__thiscall*/ SetTestMCP(bool unk1); //0x004094a9
	/*WorldOptions*/ public: void /*__thiscall*/ ToggleDebugHudOptions(eDebugHudOptions unk1); //0x004093c5
};
