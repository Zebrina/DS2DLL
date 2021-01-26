#pragma once

#include "FuBi.h"
#include "GoComponent.h"

class GoPotion : public GoComponent {
public:
	$StaticMethod(0x007c84ca, FUBI_InstanceToNet, uint, GoPotion* unk1);
	$StaticMethod(0x007c84d3, FUBI_NetToInstance, GoPotion*, uint unk1, FuBiCookie** unk2);
};
