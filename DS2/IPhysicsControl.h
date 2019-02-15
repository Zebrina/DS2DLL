#pragma once

#include "Enums.h"

#include "ClassMacros.h"

// Only referenced by IPhysicsControl.
enum ePhysicsInfluenceType {

};

// Only referenced by IPhysicsControl.
enum ePhysicsPropertiesType {

};

class IPhysicsControl {
public:
	DefineSingleton(IPhysicsControl, 0x549bf0);

	DefineMethod(DoesControlExist, 0x95f5a3, bool, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(GetProperty, 0x95fab6, float, Params(const Goid_* unk1, ePhysicsPropertiesType unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetPropertyDefault, 0x95fa80, float, Params(const Goid_* unk1, ePhysicsPropertiesType unk2), Args(unk1, unk2));
	DefineMethod(AddInfluence, 0x95f970, int, Params(const Goid_* unk1, ePhysicsInfluenceType unk2, const vector_3& unk3, const vector_3& unk4, int unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(AddInfluenceDefault, 0x95fb3b, int, Params(const Goid_* unk1, ePhysicsInfluenceType unk2, const vector_3& unk3, const vector_3& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(CreateControl, 0x95f92e, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RemoveAllInfluence, 0x95f9ea, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RemoveControl, 0x95fc6f, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RemoveInfluence, 0x95f9bb, void, Params(const Goid_* unk1, int unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(SetProperty, 0x95fa4a, void, Params(const Goid_* unk1, ePhysicsPropertiesType unk2, float unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SetPropertyDefault, 0x95fa15, void, Params(const Goid_* unk1, ePhysicsPropertiesType unk2, float unk3), Args(unk1, unk2, unk3));
};
