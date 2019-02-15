#pragma once

#include "FuBi.h"
#include "Siege.h"

class GoPlacement {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x40883c, GoPlacement*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x408833, unsigned long, Params(GoPlacement* unk1), Args(unk1));
	DefineMethod(GetAttackPointState, 0x8078cd, bool, Params(const Scid_* unk1), Args(unk1));
	DefineConstMethod(GetIsInVisibleNode, 0x8045a8, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsNodeInAnyWorldFrustum, 0x8045c8, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasAttackPoints, 0x804e72, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasDropPoints, 0x804dbe, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasGatherPoints, 0x804e18, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasUsePoints, 0x804d61, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsPosOnBackSide, 0x8043bf, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(IsPosOnFrontSide, 0x804334, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(IsPosOnLeftSide, 0x8044f9, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineConstMethod(IsPosOnRightSide, 0x80444a, bool, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(SetAttackPointState, 0x80790b, bool, Params(const Scid_* unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(GetOrientation, 0x40a364, const Quat&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetOriginalPosition, 0x804cda, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPosition, 0x803c59, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRawPosition, 0x408821, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLiquidHeight, 0x408825, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLiquidFlags, 0x40882c, siege::eLogicalNodeFlags, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get2DDirection, 0x40a387, void, Params(vector_3& unk1), Args(unk1));
	DefineConstMethod(GetWorld2DDirection, 0x8042f2, void, Params(vector_3& unk1), Args(unk1));
	DefineMethod(RCSetOrientation, 0x805988, void, Params(const Quat& unk1), Args(unk1));
	DefineMethod(RCSetPlacementPeek, 0x805a8d, void, Params(SiegePos unk1, Quat unk2), Args(unk1, unk2));
	DefineMethod(RCSetPosition, 0x8057fc, void, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(RSSetPosition, 0x805fad, void, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(SSetOrientation, 0x805a71, void, Params(const Quat& unk1), Args(unk1));
	DefineMethod(SSetPlacement, 0x8060d7, void, Params(const SiegePos& unk1, const Quat& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SSetPosition, 0x8058e5, void, Params(const SiegePos& unk1, bool unk2), Args(unk1, unk2));
};
