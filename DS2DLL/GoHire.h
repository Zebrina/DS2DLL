#pragma once

#include "CharacterStats.h"
#include "FuBi.h"
#include "GoComponent.h"
#include "GoidScid.h"
#include "GPString.h"

class GoHire : public GoComponent {
public:
	$StaticMethod(0x004cfe90, FUBI_NetToInstance, GoHire*, uint unk1, FuBiCookie** unk2);
	$StaticMethod(0x004cfe87, FUBI_InstanceToNet, uint, GoHire* unk1);
	$Method(0x0095cc0c, RSCreateCharacter, void, const GPBString& unk1, const GPBString& unk2, const CharacterStats& stats, int unk4);
	$Method(0x0095c814, RCCreateCharacter, void, const GPBString& unk1, const CharacterStats& stats, const Goid* unk3, int unk4);
	$Method(0x0095e138, RCSetCharacterStats, void, const GPBString& unk1, const GPBString& unk2, const CharacterStats& stats, uint unk4);
	$Method(0x0095c38d, RSCompletePurchase, void, const Goid* unk1, const Goid* unk2);
	$Method(0x0095e561, RSGenerateHires, void, const Goid* unk1);
	$Method(0x0095d73b, RCGenerateHires, void, uint unk1);
};
