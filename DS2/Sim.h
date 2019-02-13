#pragma once

#include "ClassMacros.h"

class Sim {
public:
	DefineSingleton(Sim, 0x429e96);

	/*Sim*/ private: /*static*/ Sim* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00429e96
	DefineMethod(CheckForMultipleObjectCollision, 0x914bd4, bool, Params(Go* unk1, Go* unk2, float unk3, float unk4, float unk5, GopColl& unk6), Args(Go* unk1, Go* unk2, float unk3, float unk4, float unk5, GopColl& unk6));
	DefineMethod(CheckForMultipleObjectCollisionVector, 0x91433a, bool, Params(Go* unk1, const vector_3& unk2, float unk3, float unk4, float unk5, GopColl& unk6), Args(Go* unk1, const vector_3& unk2, float unk3, float unk4, float unk5, GopColl& unk6));
	DefineMethod(CheckForMultipleObjectCollisionVector, 0x912d21, bool, Params(SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, float unk5, GopColl& unk6), Args(SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, float unk5, GopColl& unk6));
	DefineMethod(ExplodeGoWithDamage, 0x91781d, bool, Params(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3), Args(const Goid_* unk1, const Goid_* unk2, const Goid_* unk3));
	DefineMethod(GetAttached, 0x913888, bool, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(GetCollideWithGOs, 0x913a1e, bool, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(GetExplodeIfHitGo, 0x913950, bool, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(GetExplodeIfHitTerrain, 0x9139b7, bool, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(GetObjectAtRest, 0x913a85, bool, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(GetUseTrajectoryToOrient, 0x9138e9, bool, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(SetAttached, 0x9138b6, bool, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(SetCollideWithGOs, 0x913a4f, bool, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(SetDamageAll, 0x91201e, bool, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(SetDamageVolumeOrientation, 0x9126e5, bool, Params(unsigned int unk1, const Quat& unk2), Args(unsigned int unk1, const Quat& unk2));
	DefineMethod(SetDamageVolumeOrientation, 0x912719, bool, Params(unsigned int unk1, const vector_3& unk2), Args(unsigned int unk1, const vector_3& unk2));
	DefineMethod(SetExplodeIfHitGo, 0x913981, bool, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(SetExplodeIfHitTerrain, 0x9139e8, bool, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(SetIgnorePartyMembers, 0x913aec, bool, Params(unsigned int unk1), Args(unsigned int unk1));
	DefineMethod(SetObjectAtRest, 0x913ab6, bool, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(SetUseTrajectoryToOrient, 0x91391a, bool, Params(unsigned int unk1, bool unk2), Args(unsigned int unk1, bool unk2));
	DefineMethod(SExplodeGo, 0x917777, bool, Params(const Goid_* unk1, const Goid_* unk2, float unk3, const vector_3& unk4), Args(const Goid_* unk1, const Goid_* unk2, float unk3, const vector_3& unk4));
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const Goid_* unk1, const gpbstring<char>& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid_* unk8, const Goid_* unk9, float unk10); //0x009154bb
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const Goid_* unk1, const gpbstring<char>& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid_* unk8, const Goid_* unk9); //0x00428be3
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const Goid_* unk1, const Goid_* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid_* unk8, const Goid_* unk9, float unk10); //0x0091542d
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const Goid_* unk1, const Goid_* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, const Goid_* unk8, const Goid_* unk9); //0x00428ba0
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, float unk6, const Goid_* unk7, const Goid_* unk8, float unk9); //0x00915335
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateDamageVolume(const SiegePos& unk1, const SiegePos& unk2, float unk3, float unk4, float unk5, float unk6, const Goid_* unk7, const Goid_* unk8); //0x00428b64
	/*Sim*/ public: unsigned int /*__thiscall*/ CreateExplosion(const SiegePos& unk1, float unk2, float unk3, float unk4, const Goid_* unk5, const Goid_* unk6); //0x00915272
	/*Sim*/ public: unsigned int /*__thiscall*/ GetSimID(const Goid_* unk1); //0x0091274d
	DefineMethod(StartDropAnimation, 0x916f96, void, Params(const Goid_* unk1, const SiegePos& unk2, const Quat& unk3), Args(const Goid_* unk1, const SiegePos& unk2, const Quat& unk3));
};
