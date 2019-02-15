#pragma once

class GoPhysics {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x47276e, GoPhysics*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x472765, unsigned long, Params(GoPhysics* unk1), Args(unk1));
	DefineMethod(AddBreakParticulates, 0x94fc4f, bool, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineConstMethod(GetDamageAll, 0x94f1dd, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExplodeIfHitGo, 0x472702, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExplodeIfHitTerrain, 0x47270b, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExplodeOnExpiration, 0x47271f, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExplodeWhenKilled, 0x472715, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetHasExploded, 0x472729, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIsBreakable, 0x4726e7, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPenetrate, 0x472747, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRandomizeVelocity, 0x94f4c0, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetAngularVelocity, 0x94f4f9, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetExplosionMagnitude, 0x94f132, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGibMinDamage, 0x94f16b, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGibThreshold, 0x94f1a4, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGravity, 0x94f530, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetVelocity, 0x94f487, float, NO_PARAMS, NO_ARGS);
	DefineMethod(ClearBreakParticulates, 0x94f653, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSetPassThrough, 0x94ea92, void, Params(bool unk1), Args(unk1));
	DefineMethod(RCSetPenetrate, 0x94eb77, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetIsBreakable, 0x4726f1, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetPassThrough, 0x472733, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetPenetrate, 0x472751, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetPassThrough, 0x94ee09, void, Params(bool unk1), Args(unk1));
	DefineMethod(SSetPenetrate, 0x94ee12, void, Params(bool unk1), Args(unk1));
};
