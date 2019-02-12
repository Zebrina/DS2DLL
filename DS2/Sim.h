#pragma once

#include "ClassMacros.h"

class Sim {
public:
	DefineSingleton(Sim, 0x429e96);

	/*Sim*/ private: /*static*/ Sim* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429e96
	/*Sim*/ public: bool /*__thiscall*/ CheckForMultipleObjectCollision(Go* unk1, Go* unk2, float unk3, float unk4, float unk5, GopColl& unk6); //0x00914bd4
	/*Sim*/ public: bool /*__thiscall*/ CheckForMultipleObjectCollisionVector(Go* unk1, const vector_3& unk2, float unk3, float unk4, float unk5, GopColl& unk6); //0x0091433a
	/*Sim*/ public: bool /*__thiscall*/ CheckForMultipleObjectCollisionVector(SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, float unk5, GopColl& unk6); //0x00912d21
	/*Sim*/ public: bool /*__thiscall*/ ExplodeGoWithDamage(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3); //0x0091781d
	/*Sim*/ public: bool /*__thiscall*/ GetAttached(unsigned int unk1); //0x00913888
	/*Sim*/ public: bool /*__thiscall*/ GetCollideWithGOs(unsigned int unk1); //0x00913a1e
	/*Sim*/ public: bool /*__thiscall*/ GetExplodeIfHitGo(unsigned int unk1); //0x00913950
	/*Sim*/ public: bool /*__thiscall*/ GetExplodeIfHitTerrain(unsigned int unk1); //0x009139b7
	/*Sim*/ public: bool /*__thiscall*/ GetObjectAtRest(unsigned int unk1); //0x00913a85
	/*Sim*/ public: bool /*__thiscall*/ GetUseTrajectoryToOrient(unsigned int unk1); //0x009138e9
	/*Sim*/ public: bool /*__thiscall*/ SetAttached(unsigned int unk1, bool unk2); //0x009138b6
	/*Sim*/ public: bool /*__thiscall*/ SetCollideWithGOs(unsigned int unk1, bool unk2); //0x00913a4f
	/*Sim*/ public: bool /*__thiscall*/ SetDamageAll(unsigned int unk1, bool unk2); //0x0091201e
	/*Sim*/ public: bool /*__thiscall*/ SetDamageVolumeOrientation(unsigned int unk1, const Quat& unk2); //0x009126e5
	/*Sim*/ public: bool /*__thiscall*/ SetDamageVolumeOrientation(unsigned int unk1, const vector_3& unk2); //0x00912719
	/*Sim*/ public: bool /*__thiscall*/ SetExplodeIfHitGo(unsigned int unk1, bool unk2); //0x00913981
	/*Sim*/ public: bool /*__thiscall*/ SetExplodeIfHitTerrain(unsigned int unk1, bool unk2); //0x009139e8
	/*Sim*/ public: bool /*__thiscall*/ SetIgnorePartyMembers(unsigned int unk1); //0x00913aec
	/*Sim*/ public: bool /*__thiscall*/ SetObjectAtRest(unsigned int unk1, bool unk2); //0x00913ab6
	/*Sim*/ public: bool /*__thiscall*/ SetUseTrajectoryToOrient(unsigned int unk1, bool unk2); //0x0091391a
	/*Sim*/ public: bool /*__thiscall*/ SExplodeGo(const Goid_* unk1, const Goid_* unk2, float unk3, const vector_3& unk4); //0x00917777
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const Goid_* unk1, const gpbstring<char>& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid_* unk8, const Goid_* unk9, float unk10); //0x009154bb
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const Goid_* unk1, const gpbstring<char>& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid_* unk8, const Goid_* unk9); //0x00428be3
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const Goid_* unk1, const Goid_* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid_* unk8, const Goid_* unk9, float unk10); //0x0091542d
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const Goid_* unk1, const Goid_* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid_* unk8, const Goid_* unk9); //0x00428ba0
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, float unk6, const Goid_* unk7, const Goid_* unk8, float unk9); //0x00915335
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, float unk6, const Goid_* unk7, const Goid_* unk8); //0x00428b64
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateExplosion(const SiegePos& unk1, float unk2, float unk3, float unk4, const Goid_* unk5, const Goid_* unk6); //0x00915272
	/*Sim*/ public: unsigned int /*__thiscall*/ GetSimID(const Goid_* unk1); //0x0091274d
	/*Sim*/ public: void /*__thiscall*/ StartDropAnimation(const Goid_* unk1, const SiegePos& unk2, const Quat& unk3); //0x00916f96
};
