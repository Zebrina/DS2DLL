#pragma once

#include "Enums.h"
#include "GoidScid.h"
#include "GPMath.h"

// Only referenced by IPhysicsControl.
enum ePhysicsInfluenceType {

};

// Only referenced by IPhysicsControl.
enum ePhysicsPropertiesType {

};

class IPhysicsControl {
public:
	$Singleton(IPhysicsControl, 0x00549bf0);

	$Method(0x0095f5a3, DoesControlExist, bool, const Goid* unk1);
	$Method(0x0095fab6, GetProperty, float, const Goid* unk1, ePhysicsPropertiesType unk2, int unk3);
	$Method(0x0095fa80, GetPropertyDefault, float, const Goid* unk1, ePhysicsPropertiesType unk2);
	$Method(0x0095f970, AddInfluence, int, const Goid* unk1, ePhysicsInfluenceType unk2, const Vector3& unk3, const Vector3& unk4, int unk5);
	$Method(0x0095fb3b, AddInfluenceDefault, int, const Goid* unk1, ePhysicsInfluenceType unk2, const Vector3& unk3, const Vector3& unk4);
	$Method(0x0095f92e, CreateControl, void, const Goid* unk1);
	$Method(0x0095f9ea, RemoveAllInfluence, void, const Goid* unk1);
	$Method(0x0095fc6f, RemoveControl, void, const Goid* unk1);
	$Method(0x0095f9bb, RemoveInfluence, void, const Goid* unk1, int unk2, int unk3);
	$Method(0x0095fa4a, SetProperty, void, const Goid* unk1, ePhysicsPropertiesType unk2, float unk3, int unk4);
	$Method(0x0095fa15, SetPropertyDefault, void, const Goid* unk1, ePhysicsPropertiesType unk2, float unk3);

    // 0x00
    $Padding(0x00, 0x0c);
};

STATIC_ASSERT(sizeof(IPhysicsControl) == 12);
