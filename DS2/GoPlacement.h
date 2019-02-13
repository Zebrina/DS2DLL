#pragma once

#include "FuBi.h"
#include "Siege.h"

class GoPlacement {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x40883c, GoPlacement*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unsigned long unk1, FuBi::Cookie__** unk2));
	/*GoPlacement*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoPlacement* unk1); //0x00408833
	DefineMethod(GetAttackPointState, 0x8078cd, bool, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineConstMethod(GetIsInVisibleNode, 0x8045a8, bool, Params(), Args());
	DefineConstMethod(GetIsNodeInAnyWorldFrustum, 0x8045c8, bool, Params(), Args());
	DefineConstMethod(HasAttackPoints, 0x804e72, bool, Params(), Args());
	DefineConstMethod(HasDropPoints, 0x804dbe, bool, Params(), Args());
	DefineConstMethod(HasGatherPoints, 0x804e18, bool, Params(), Args());
	DefineConstMethod(HasUsePoints, 0x804d61, bool, Params(), Args());
	DefineConstMethod(IsPosOnBackSide, 0x8043bf, bool, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineConstMethod(IsPosOnFrontSide, 0x804334, bool, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineConstMethod(IsPosOnLeftSide, 0x8044f9, bool, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineConstMethod(IsPosOnRightSide, 0x80444a, bool, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(SetAttackPointState, 0x80790b, bool, Params(const Scid_* unk1, bool unk2), Args(const Scid_* unk1, bool unk2));
	/*GoPlacement*/ public: const Quat& /*__thiscall*/ GetOrientation() const; //0x0040a364
	/*GoPlacement*/ public: const SiegePos& /*__thiscall*/ GetOriginalPosition() const; //0x00804cda
	/*GoPlacement*/ public: const SiegePos& /*__thiscall*/ GetPosition() const; //0x00803c59
	/*GoPlacement*/ public: const SiegePos& /*__thiscall*/ GetRawPosition() const; //0x00408821
	DefineConstMethod(GetLiquidHeight, 0x408825, float, Params(), Args());
	DefineConstMethod(GetLiquidFlags, 0x40882c, siege::eLogicalNodeFlags, Params(), Args());
	DefineConstMethod(Get2DDirection, 0x40a387, void, Params(vector_3& unk1), Args(vector_3& unk1));
	DefineConstMethod(GetWorld2DDirection, 0x8042f2, void, Params(vector_3& unk1), Args(vector_3& unk1));
	DefineMethod(RCSetOrientation, 0x805988, void, Params(const Quat& unk1), Args(const Quat& unk1));
	DefineMethod(RCSetPlacementPeek, 0x805a8d, void, Params(SiegePos unk1, Quat unk2), Args(SiegePos unk1, Quat unk2));
	DefineMethod(RCSetPosition, 0x8057fc, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(RSSetPosition, 0x805fad, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(SSetOrientation, 0x805a71, void, Params(const Quat& unk1), Args(const Quat& unk1));
	DefineMethod(SSetPlacement, 0x8060d7, void, Params(const SiegePos& unk1, const Quat& unk2, bool unk3), Args(const SiegePos& unk1, const Quat& unk2, bool unk3));
	DefineMethod(SSetPosition, 0x8058e5, void, Params(const SiegePos& unk1, bool unk2), Args(const SiegePos& unk1, bool unk2));
};
