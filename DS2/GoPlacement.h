#pragma once

#include "FuBi.h"
#include "Siege.h"

class GoPlacement {
public:
	/*GoPlacement*/ private: /*static*/ GoPlacement* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x0040883c
	/*GoPlacement*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoPlacement* unk1); //0x00408833
	/*GoPlacement*/ public: bool /*__thiscall*/ GetAttackPointState(const Scid_* unk1); //0x008078cd
	/*GoPlacement*/ public: bool /*__thiscall*/ GetIsInVisibleNode() const; //0x008045a8
	/*GoPlacement*/ public: bool /*__thiscall*/ GetIsNodeInAnyWorldFrustum() const; //0x008045c8
	/*GoPlacement*/ public: bool /*__thiscall*/ HasAttackPoints() const; //0x00804e72
	/*GoPlacement*/ public: bool /*__thiscall*/ HasDropPoints() const; //0x00804dbe
	/*GoPlacement*/ public: bool /*__thiscall*/ HasGatherPoints() const; //0x00804e18
	/*GoPlacement*/ public: bool /*__thiscall*/ HasUsePoints() const; //0x00804d61
	/*GoPlacement*/ public: bool /*__thiscall*/ IsPosOnBackSide(const SiegePos& unk1) const; //0x008043bf
	/*GoPlacement*/ public: bool /*__thiscall*/ IsPosOnFrontSide(const SiegePos& unk1) const; //0x00804334
	/*GoPlacement*/ public: bool /*__thiscall*/ IsPosOnLeftSide(const SiegePos& unk1) const; //0x008044f9
	/*GoPlacement*/ public: bool /*__thiscall*/ IsPosOnRightSide(const SiegePos& unk1) const; //0x0080444a
	/*GoPlacement*/ public: bool /*__thiscall*/ SetAttackPointState(const Scid_* unk1, bool unk2); //0x0080790b
	/*GoPlacement*/ public: const Quat& /*__thiscall*/ GetOrientation() const; //0x0040a364
	/*GoPlacement*/ public: const SiegePos& /*__thiscall*/ GetOriginalPosition() const; //0x00804cda
	/*GoPlacement*/ public: const SiegePos& /*__thiscall*/ GetPosition() const; //0x00803c59
	/*GoPlacement*/ public: const SiegePos& /*__thiscall*/ GetRawPosition() const; //0x00408821
	/*GoPlacement*/ public: float /*__thiscall*/ GetLiquidHeight() const; //0x00408825
	/*GoPlacement*/ public: siege::eLogicalNodeFlags /*__thiscall*/ GetLiquidFlags() const; //0x0040882c
	/*GoPlacement*/ public: void /*__thiscall*/ Get2DDirection(vector_3& unk1) const; //0x0040a387
	/*GoPlacement*/ public: void /*__thiscall*/ GetWorld2DDirection(vector_3& unk1) const; //0x008042f2
	/*GoPlacement*/ public: void /*__thiscall*/ RCSetOrientation(const Quat& unk1); //0x00805988
	/*GoPlacement*/ public: void /*__thiscall*/ RCSetPlacementPeek(SiegePos unk1, Quat unk2); //0x00805a8d
	/*GoPlacement*/ public: void /*__thiscall*/ RCSetPosition(const SiegePos& unk1); //0x008057fc
	/*GoPlacement*/ public: void /*__thiscall*/ RSSetPosition(const SiegePos& unk1); //0x00805fad
	/*GoPlacement*/ public: void /*__thiscall*/ SSetOrientation(const Quat& unk1); //0x00805a71
	/*GoPlacement*/ public: void /*__thiscall*/ SSetPlacement(const SiegePos& unk1, const Quat& unk2, bool unk3); //0x008060d7
	/*GoPlacement*/ public: void /*__thiscall*/ SSetPosition(const SiegePos& unk1, bool unk2); //0x008058e5
};
