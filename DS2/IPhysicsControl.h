#pragma once

#include "ClassMacros.h"

class IPhysicsControl {
public:
	DefineSingleton(IPhysicsControl, 0x549bf0);

	/*IPhysicsControl*/ private: /*static*/ IPhysicsControl* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00549bf0
	/*IPhysicsControl*/ public: bool /*__thiscall*/ DoesControlExist(const Goid_* unk1); //0x0095f5a3
	/*IPhysicsControl*/ public: float /*__thiscall*/ GetProperty(const Goid_* unk1, ePhysicsPropertiesType unk2, int unk3); //0x0095fab6
	/*IPhysicsControl*/ public: float /*__thiscall*/ GetPropertyDefault(const Goid_* unk1, ePhysicsPropertiesType unk2); //0x0095fa80
	/*IPhysicsControl*/ public: int /*__thiscall*/ AddInfluence(const Goid_* unk1, ePhysicsInfluenceType unk2, const vector_3& unk3, const vector_3& unk4, int unk5); //0x0095f970
	/*IPhysicsControl*/ public: int /*__thiscall*/ AddInfluenceDefault(const Goid_* unk1, ePhysicsInfluenceType unk2, const vector_3& unk3, const vector_3& unk4); //0x0095fb3b
	/*IPhysicsControl*/ public: void /*__thiscall*/ CreateControl(const Goid_* unk1); //0x0095f92e
	/*IPhysicsControl*/ public: void /*__thiscall*/ RemoveAllInfluence(const Goid_* unk1); //0x0095f9ea
	/*IPhysicsControl*/ public: void /*__thiscall*/ RemoveControl(const Goid_* unk1); //0x0095fc6f
	/*IPhysicsControl*/ public: void /*__thiscall*/ RemoveInfluence(const Goid_* unk1, int unk2, int unk3); //0x0095f9bb
	/*IPhysicsControl*/ public: void /*__thiscall*/ SetProperty(const Goid_* unk1, ePhysicsPropertiesType unk2, float unk3, int unk4); //0x0095fa4a
	/*IPhysicsControl*/ public: void /*__thiscall*/ SetPropertyDefault(const Goid_* unk1, ePhysicsPropertiesType unk2, float unk3); //0x0095fa15
};
