#pragma once

#include "GoidScid.h"
#include "GopColl.h"
#include "GPString.h"
#include "GPMath.h"
#include "SiegePos.h"

class Sim {
public:
	$Singleton(Sim, 0x00429e96);

	$Method(0x00914bd4, CheckForMultipleObjectCollision, bool, Go* unk1, Go* unk2, float unk3, float unk4, float unk5, GopColl& unk6);
	$Method(0x0091433a, CheckForMultipleObjectCollisionVector, bool, Go* unk1, const Vector3& unk2, float unk3, float unk4, float unk5, GopColl& unk6);
	$Method(0x00912d21, CheckForMultipleObjectCollisionVector, bool, SiegePos& unk1, const Vector3& unk2, float unk3, float unk4, float unk5, GopColl& unk6);
	$Method(0x0091781d, ExplodeGoWithDamage, bool, const Goid* unk1, const Goid* unk2, const Goid* unk3);
	$Method(0x00913888, GetAttached, bool, uint unk1);
	$Method(0x00913a1e, GetCollideWithGOs, bool, uint unk1);
	$Method(0x00913950, GetExplodeIfHitGo, bool, uint unk1);
	$Method(0x009139b7, GetExplodeIfHitTerrain, bool, uint unk1);
	$Method(0x00913a85, GetObjectAtRest, bool, uint unk1);
	$Method(0x009138e9, GetUseTrajectoryToOrient, bool, uint unk1);
	$Method(0x009138b6, SetAttached, bool, uint unk1, bool unk2);
	$Method(0x00913a4f, SetCollideWithGOs, bool, uint unk1, bool unk2);
	$Method(0x0091201e, SetDamageAll, bool, uint unk1, bool unk2);
	$Method(0x009126e5, SetDamageVolumeOrientation, bool, uint unk1, const Quat& unk2);
	$Method(0x00912719, SetDamageVolumeOrientation, bool, uint unk1, const Vector3& unk2);
	$Method(0x00913981, SetExplodeIfHitGo, bool, uint unk1, bool unk2);
	$Method(0x009139e8, SetExplodeIfHitTerrain, bool, uint unk1, bool unk2);
	$Method(0x00913aec, SetIgnorePartyMembers, bool, uint unk1);
	$Method(0x00913ab6, SetObjectAtRest, bool, uint unk1, bool unk2);
	$Method(0x0091391a, SetUseTrajectoryToOrient, bool, uint unk1, bool unk2);
	$Method(0x00917777, SExplodeGo, bool, const Goid* unk1, const Goid* unk2, float unk3, const Vector3& unk4);
	$Method(0x009154bb, CreateDamageVolume, uint, const Goid* unk1, const GPBString& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid* unk8, const Goid* unk9, float unk10);
	$Method(0x00428be3, CreateDamageVolume, uint, const Goid* unk1, const GPBString& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid* unk8, const Goid* unk9);
	$Method(0x0091542d, CreateDamageVolume, uint, const Goid* unk1, const Goid* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid* unk8, const Goid* unk9, float unk10);
	$Method(0x00428ba0, CreateDamageVolume, uint, const Goid* unk1, const Goid* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid* unk8, const Goid* unk9);
	$Method(0x00915335, CreateDamageVolume, uint, const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, float unk6, const Goid* unk7, const Goid* unk8, float unk9);
	$Method(0x00428b64, CreateDamageVolume, uint, const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, float unk6, const Goid* unk7, const Goid* unk8);
	$Method(0x00915272, CreateExplosion, uint, const SiegePos& unk1, float unk2, float unk3, float unk4, const Goid* unk5, const Goid* unk6);
	$Method(0x0091274d, GetSimID, uint, const Goid* unk1);
	$Method(0x00916f96, StartDropAnimation, void, const Goid* unk1, const SiegePos& unk2, const Quat& unk3);

    // 0x000
    $Padding(0x000, 0x100);
};

STATIC_ASSERT(sizeof(Sim) == 0x100);
