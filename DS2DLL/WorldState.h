#pragma once

#include "Enums.h"
#include "FuBi.h"

class WorldState {
public:
	$Singleton(WorldState, 0x0040a1d2);

	$ConstMethod(0x0040834a, GetCurrentState, eWorldState);
	$ConstMethod(0x0040834e, GetPendingState, eWorldState);
	$ConstMethod(0x00408346, GetPreviousState, eWorldState);
	$ConstMethod(0x00408352, IsStateChangePending, bool);
	$ConstMethod(0x007d6036, IsTransitionValid, bool, eWorldState worldState);
	$Method(0x0040832b, Request, int, eWorldState worldState);
	$Method(0x007d5ae0, Request, int, eWorldState worldState, double unk2);
	$Method(0x00408341, ForceUpdate, void);
	$Method(0x007d5c39, RCSetWorldStateOnMachine, FuBiCookie*, uint unk1, eWorldState unk2, eWorldState unk3, double unk4);
	$Method(0x007d5d7d, RCSetPreviousWorldStateOnMachine, FuBiCookie*, uint unk1, eWorldState worldState, double unk3);
	$Method(0x007d5ee4, RCSetWorldStateIfInGame, void, uint unk1, eWorldState worldState);

	// 0x00
	$Padding(0x00, 0x14);
	// 0x14
	eWorldState previousState;
	// 0x18
	$Padding(0x18, 0x1c);
	// 0x1c
	eWorldState currentState;
	// 0x20
	$Padding(0x20, 0x24);
	// 0x24
	eWorldState pendingState;
    // 0x28
    $Padding(0x28, 0x50);
};

STATIC_ASSERT(sizeof(WorldState) == 0x50);
STATIC_ASSERT_OFFSETOF(WorldState, pendingState, 0x24);

$Function(0x007d5247, IsEndGame, bool, eWorldState worldState);
$Function(0x007d5230, IsGameStarting, bool, eWorldState worldState);
$Function(0x007d51ab, IsInFrontend, bool, eWorldState worldState);
$Function(0x007d5163, IsInGame, bool, eWorldState worldState);
$Function(0x007d5194, IsInGameInteractive, bool, eWorldState worldState);
$Function(0x007d5202, IsInLobby, bool, eWorldState worldState);
$Function(0x007d51eb, IsInStagingArea, bool, eWorldState worldState);
$Function(0x007d5219, IsLoading, bool, eWorldState worldState);
$Function(0x007d5269, IsStagingArea, bool, eWorldState worldState);
