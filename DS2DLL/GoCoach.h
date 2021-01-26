#pragma once

#include "Enums.h"
#include "FuBi.h"
#include "Go.h"
#include "GoComponent.h"
#include "GoidScid.h"

class GoCoach : public GoComponent {
public:
	$StaticMethod(0x0080a844, FUBI_NetToInstance, GoCoach*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x0080a83b, FUBI_InstanceToNet, uint, GoCoach* unk1);
	$Method(0x00967139, AddMember, bool, Go* unk1);
	$Method(0x00966e40, GetMember, Go*, eJobAttribute unk1);
	$ConstMethod(0x0080a830, GetMembers, const GoidColl&);
	$ConstMethod(0x0096707b, GetMaxMemberCount, int);
	$Method(0x00966fbb, RemoveAllMembers, void);
	$Method(0x009670b4, RemoveMember, void, Go* unk1);
	$Method(0x00966eea, RemoveMember, void, const Goid* unk1);
	$Method(0x0080a823, SetAllowNewMembers, void, bool unk1); // Exported as: SetAllowNewMemebers
};
