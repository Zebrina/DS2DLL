#pragma once

#include "ClassMacros.h"

class WorldEffectsMgr {
public:
	DefineSingleton(WorldEffectsMgr, 0x424434);

	/*WorldEffectsMgr*/ private: /*static*/ WorldEffectsMgr* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00424434
	DefineMethod(AttachAnimatedModelToTarget, 0x8c8313, bool, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(AttachLightSourceToTarget, 0x8c7137, bool, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(AttachTerrainDeformerToTarget, 0x8c8415, bool, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(BindFlickFXPoint, 0x8ca36f, bool, Params(const FFXID_* unk1, const gpbstring<char>& unk2, const SiegePos& unk3), Args(const FFXID_* unk1, const gpbstring<char>& unk2, const SiegePos& unk3));
	DefineMethod(BindFlickFXProperty, 0x8c7bf8, bool, Params(const FFXID_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(const FFXID_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3));
	DefineMethod(BindFlickFXRole, 0x8c7ba9, bool, Params(const FFXID_* unk1, const gpbstring<char>& unk2, const Goid_* unk3), Args(const FFXID_* unk1, const gpbstring<char>& unk2, const Goid_* unk3));
	DefineMethod(DestroyAllTargetEffects, 0x8c4ce7, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DestroyAllTargets, 0x8c330c, bool, Params(), Args());
	DefineMethod(DestroyAllTargetSimulations, 0x8c8b2e, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DestroyAnimatedModel, 0x8cf1ea, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DestroyDecal, 0x8c7273, bool, Params(unsigned long unk1, bool unk2), Args(unsigned long unk1, bool unk2));
	DefineMethod(DestroyEffectScript, 0x8c792e, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DestroyFlickFX, 0x423e07, bool, Params(const FFXID_* unk1), Args(const FFXID_* unk1));
	DefineMethod(DestroyLightSource, 0x8c70fb, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DestroyTarget, 0x8ccca0, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DestroyTerrainDeformer, 0x8cf41d, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DetachTargetSimulation, 0x8c8ad6, bool, Params(unsigned long unk1, unsigned long unk2, float unk3), Args(unsigned long unk1, unsigned long unk2, float unk3));
	DefineMethod(DetachTargetSimulation, 0x423c9d, bool, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(FadeAnimatedModel, 0x8c8349, bool, Params(unsigned long unk1, float unk2, float unk3, float unk4, float unk5), Args(unsigned long unk1, float unk2, float unk3, float unk4, float unk5));
	DefineMethod(FadeAnimatedModel, 0x423b82, bool, Params(unsigned long unk1, float unk2, float unk3, float unk4), Args(unsigned long unk1, float unk2, float unk3, float unk4));
	DefineMethod(FadeOutLightSource, 0x8c7188, bool, Params(unsigned long unk1, float unk2), Args(unsigned long unk1, float unk2));
	DefineMethod(FadeOutLightSourcesOnTarget, 0x8c6331, bool, Params(unsigned long unk1, float unk2), Args(unsigned long unk1, float unk2));
	DefineMethod(FinishAllTargetEffects, 0x8c33a5, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(FinishFlickFX, 0x8c867e, bool, Params(const FFXID_* unk1), Args(const FFXID_* unk1));
	DefineMethod(GetEffectVisible, 0x8c363f, bool, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(IsFFXValid, 0x4249c3, bool, Params(const FFXID_* unk1), Args(const FFXID_* unk1));
	DefineConstMethod(IsShuttingDown, 0x423e4f, bool, Params(), Args());
	DefineMethod(QueueAnimatedModelAnimChore, 0x8cc700, bool, Params(unsigned long unk1, const gpbstring<char>& unk2, int unk3, float unk4), Args(unsigned long unk1, const gpbstring<char>& unk2, int unk3, float unk4));
	DefineMethod(QueueAnimatedModelAnimChore, 0x423bc8, bool, Params(unsigned long unk1, const gpbstring<char>& unk2, int unk3), Args(unsigned long unk1, const gpbstring<char>& unk2, int unk3));
	DefineMethod(QueueAnimatedModelAnimChore, 0x423bae, bool, Params(unsigned long unk1, const gpbstring<char>& unk2), Args(unsigned long unk1, const gpbstring<char>& unk2));
	DefineMethod(ScaleAnimatedModel, 0x8c8387, bool, Params(unsigned long unk1, float unk2, float unk3), Args(unsigned long unk1, float unk2, float unk3));
	DefineMethod(SDestroyFlickFX, 0x8d1853, bool, Params(const FFXID_* unk1), Args(const FFXID_* unk1));
	DefineMethod(SetAnimatedModelTexture, 0x8c83f1, bool, Params(unsigned long unk1, int unk2, const char* unk3), Args(unsigned long unk1, int unk2, const char* unk3));
	DefineMethod(SetDecalAlpha, 0x8c729d, bool, Params(unsigned long unk1, float unk2), Args(unsigned long unk1, float unk2));
	DefineMethod(SetLightSourceColor, 0x8c720a, bool, Params(unsigned long unk1, const vector_3& unk2), Args(unsigned long unk1, const vector_3& unk2));
	DefineMethod(SetLightSourcePosition, 0x8c71cb, bool, Params(unsigned long unk1, const SiegePos& unk2), Args(unsigned long unk1, const SiegePos& unk2));
	DefineMethod(SetTerrainDeformerPosition, 0x8c844f, bool, Params(unsigned long unk1, const SiegePos& unk2), Args(unsigned long unk1, const SiegePos& unk2));
	DefineMethod(SFinishFlickFX, 0x8ca347, bool, Params(const FFXID_* unk1), Args(const FFXID_* unk1));
	DefineMethod(ValidateMovingTarget, 0x8c3347, bool, Params(unsigned long unk1, unsigned long unk2, float unk3, float unk4), Args(unsigned long unk1, unsigned long unk2, float unk3, float unk4));
	/*WorldEffectsMgr*/ public: ResHandle<nema::Aspect, ResHandleFields<24> > /*__thiscall*/ GetAnimatedModelAspect(unsigned long unk1); //0x008c83d2
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ CreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, bool unk3, bool unk4); //0x008d20ac
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ CreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, bool unk4, bool unk5); //0x008d20df
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ CreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5, bool unk6); //0x008d2112
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ CreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4); //0x00423deb
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ CreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3); //0x00423dd2
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ CreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2); //0x00423dbc
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ GetCurrentFlickFX() const; //0x00423e18
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, bool unk3, bool unk4); //0x008d1cfd
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, bool unk3); //0x00423d39
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, bool unk4, bool unk5); //0x008d1e14
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, bool unk4); //0x00423d69
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5, bool unk6); //0x008d1f50
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4, bool unk5); //0x00423d9f
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3, const Goid_* unk4); //0x00423d83
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3); //0x00423d50
	/*WorldEffectsMgr*/ public: const FFXID_* /*__thiscall*/ SCreateFlickFX(const gpbstring<char>& unk1, const Goid_* unk2); //0x00423d23
	/*WorldEffectsMgr*/ public: const Goid_* /*__thiscall*/ GetCurrentFlickFXCatalyst() const; //0x00423e2d
	/*WorldEffectsMgr*/ public: const Goid_* /*__thiscall*/ GetCurrentFlickFXOwner() const; //0x00423e1c
	/*WorldEffectsMgr*/ public: const Goid_* /*__thiscall*/ GetCurrentFlickFXTarget() const; //0x00423e3e
	/*WorldEffectsMgr*/ public: const SiegePos& /*__thiscall*/ GetTargetPosition(unsigned long unk1); //0x008c340d
	/*WorldEffectsMgr*/ public: const vector_3& /*__thiscall*/ GetTargetVectorToTarget(unsigned long unk1, unsigned long unk2); //0x008c3500
	/*WorldEffectsMgr*/ public: const vector_3& /*__thiscall*/ GetTargetVelocity(unsigned long unk1); //0x008c3482
	DefineMethod(GetDistanceBetweenTargets, 0x8c4d07, float, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(GetTargetSpeed, 0x8c34d8, float, Params(unsigned long unk1), Args(unsigned long unk1));
	/*WorldEffectsMgr*/ public: unsigned int /*__thiscall*/ SetEffectTexture(unsigned long unk1, const gpbstring<char>& unk2, float unk3, float unk4); //0x008c3708
	/*WorldEffectsMgr*/ public: unsigned int /*__thiscall*/ SetEffectTexture(unsigned long unk1, const gpbstring<char>& unk2); //0x008c36e3
	/*WorldEffectsMgr*/ public: unsigned long /*__cdecl*/ AttachSimulationf(unsigned long unk1, float unk2, float unk3, const char* unk4, ... unk5); //0x008c8b4e
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ AttachGlobalSimulation(unsigned long unk1, const gpbstring<char>& unk2, float unk3); //0x008c3693
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ AttachSimulation(unsigned long unk1, const gpbstring<char>& unk2, float unk3); //0x008c364e
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ AttachTargetSimulation(unsigned long unk1, const gpbstring<char>& unk2, float unk3); //0x00423c4b
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ AttachTargetSimulation(unsigned long unk1, const gpbstring<char>& unk2); //0x00423c82
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ AttachTargetSimulation(unsigned long unk1, unsigned long unk2, const gpbstring<char>& unk3, float unk4); //0x008ccd17
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ AttachTargetSimulation(unsigned long unk1, unsigned long unk2, const gpbstring<char>& unk3); //0x00423c67
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateAnimatedModel(unsigned long unk1, const gpbstring<char>& unk2); //0x008cdd04
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateAnimatedModel(unsigned long unk1, const Goid_* unk2); //0x008cdd71
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateCylinderBetweenTargets(unsigned long unk1, unsigned long unk2, unsigned long unk3, float unk4, float unk5, unsigned long unk6, unsigned long unk7, float unk8, bool unk9, bool unk10); //0x008c7564
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateCylinderEffect(unsigned long unk1, unsigned long unk2, const vector_3& unk3, float unk4, float unk5, float unk6, float unk7, unsigned long unk8, unsigned long unk9, float unk10, bool unk11, bool unk12); //0x008c74e8
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateCylinderEffect(unsigned long unk1, unsigned long unk2, const vector_3& unk3, float unk4, float unk5, float unk6, float unk7, unsigned long unk8, unsigned long unk9); //0x00423ce0
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateDecalDiscEffect(unsigned long unk1, unsigned long unk2, unsigned long unk3, float unk4, unsigned long unk5, unsigned long unk6, float unk7, float unk8, bool unk9); //0x008c7437
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateDiscEffect(unsigned long unk1, unsigned long unk2, float unk3, const vector_3& unk4, float unk5, float unk6, unsigned long unk7, unsigned long unk8, float unk9, float unk10, float unk11, bool unk12); //0x008c73b8
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateEffectScript(const gpbstring<char>& unk1, unsigned long unk2); //0x008cdf35
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateLightSource(const SiegePos& unk1, const vector_3& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, bool unk8); //0x008cddde
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateLightSource(unsigned long unk1, const vector_3& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, bool unk8); //0x008cf268
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateModelEffect(unsigned long unk1, const gpbstring<char>& unk2, const vector_3& unk3, float unk4, unsigned long unk5, float unk6, bool unk7, bool unk8); //0x008c78ce
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateModelEffect(unsigned long unk1, const gpbstring<char>& unk2, const vector_3& unk3, float unk4, unsigned long unk5, float unk6, bool unk7); //0x008c786f
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateModelEffect(unsigned long unk1, const gpbstring<char>& unk2, const vector_3& unk3, unsigned long unk4, float unk5, bool unk6, bool unk7); //0x008c7810
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateModelEffect(unsigned long unk1, const gpbstring<char>& unk2, const vector_3& unk3, unsigned long unk4, float unk5, bool unk6); //0x008c77b2
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateModelEffect(unsigned long unk1, const gpbstring<char>& unk2, unsigned long unk3, float unk4, bool unk5); //0x008c7752
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateParticleEffect(unsigned long unk1); //0x008c7329
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateRibbonEffect(unsigned long unk1, unsigned long unk2, eRibbonAlign unk3, bool unk4); //0x008c736c
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateRibbonEffect(unsigned long unk1, unsigned long unk2, eRibbonAlign unk3); //0x008c85f9
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateSphereEffect(unsigned long unk1, unsigned long unk2, const vector_3& unk3, float unk4, float unk5, unsigned long unk6, float unk7, bool unk8, bool unk9, bool unk10); //0x008c76e7
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateSphereEffect(unsigned long unk1, unsigned long unk2, const vector_3& unk3, float unk4, float unk5, unsigned long unk6, float unk7, bool unk8, bool unk9); //0x008c767d
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateSphereEffect(unsigned long unk1, unsigned long unk2, float unk3, unsigned long unk4, float unk5, bool unk6, bool unk7); //0x008c7611
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTarget(); //0x00423c12
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTarget(unsigned long unk1); //0x008c8aad
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTerrainDecal(const SiegePos& unk1, const Quat& unk2, const gpbstring<char>& unk3, float unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10); //0x008cde6e
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTerrainDecal(const SiegePos& unk1, const Quat& unk2, const gpbstring<char>& unk3, float unk4, float unk5, float unk6, float unk7); //0x008cf382
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTerrainDecal(unsigned long unk1, const gpbstring<char>& unk2, float unk3, float unk4, float unk5, float unk6, float unk7, float unk8, float unk9); //0x008cf316
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTerrainDecal(unsigned long unk1, const gpbstring<char>& unk2, float unk3, float unk4, float unk5, float unk6); //0x008cfd74
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTimedTarget(float unk1, bool unk2, unsigned long unk3); //0x008c8a82
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTimedTarget(float unk1, bool unk2); //0x00423bfa
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateTimedTarget(float unk1); //0x00423be3
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateWaveTerrainDeformer(const SiegePos& unk1, float unk2, float unk3, float unk4); //0x008cfe19
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ CreateWaveTerrainDeformer(unsigned long unk1, float unk2, float unk3, float unk4); //0x008cfe6f
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ GetNumAnimatedModels() const; //0x0042493d
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ GetNumDecals() const; //0x0042495e
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ GetNumGlobalEffectScripts() const; //0x0042498a
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ GetNumLightSources() const; //0x0042494b
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ GetNumTargets() const; //0x0042440d
	/*WorldEffectsMgr*/ public: unsigned long /*__thiscall*/ GetNumTerrainDeformers() const; //0x00424974
	DefineMethod(AddBoneOffsetToTarget, 0x8c9df6, void, Params(unsigned long unk1, const vector_3& unk2), Args(unsigned long unk1, const vector_3& unk2));
	DefineMethod(AddGlobalOffsetToTarget, 0x8c9e38, void, Params(unsigned long unk1, const vector_3& unk2), Args(unsigned long unk1, const vector_3& unk2));
	DefineMethod(AddOffsetToTarget, 0x8c9db4, void, Params(unsigned long unk1, const vector_3& unk2), Args(unsigned long unk1, const vector_3& unk2));
	DefineMethod(AddTargetToEffect, 0x8c3816, void, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(AddTargetToScriptMsgLatch, 0x8cc732, void, Params(const FFXID_* unk1, unsigned long unk2, unsigned long unk3), Args(const FFXID_* unk1, unsigned long unk2, unsigned long unk3));
	DefineMethod(AddTargetToScriptMsgLatch, 0x42441f, void, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(AttachTargetToBone, 0x8c9ce2, void, Params(unsigned long unk1, const gpbstring<char>& unk2), Args(unsigned long unk1, const gpbstring<char>& unk2));
	DefineMethod(AttachTargetToBone, 0x8c9d1e, void, Params(unsigned long unk1, unsigned int unk2), Args(unsigned long unk1, unsigned int unk2));
	DefineMethod(AttachTargetToDefaultPos, 0x8c9d44, void, Params(unsigned long unk1, const Goid_* unk2), Args(unsigned long unk1, const Goid_* unk2));
	DefineMethod(AttachTargetToGo, 0x8c9c18, void, Params(unsigned long unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(unsigned long unk1, const Goid_* unk2, const gpbstring<char>& unk3));
	DefineMethod(AttachTargetToGo, 0x8c9c80, void, Params(unsigned long unk1, const Goid_* unk2, unsigned int unk3), Args(unsigned long unk1, const Goid_* unk2, unsigned int unk3));
	DefineMethod(AttachTargetToGo, 0x423c37, void, Params(unsigned long unk1, const Goid_* unk2), Args(unsigned long unk1, const Goid_* unk2));
	DefineMethod(AttachTargetToModel, 0x8c9b5a, void, Params(unsigned long unk1, unsigned long unk2, const gpbstring<char>& unk3), Args(unsigned long unk1, unsigned long unk2, const gpbstring<char>& unk3));
	DefineMethod(AttachTargetToModel, 0x8c9bbc, void, Params(unsigned long unk1, unsigned long unk2, unsigned int unk3), Args(unsigned long unk1, unsigned long unk2, unsigned int unk3));
	DefineMethod(AttachTargetToModel, 0x423c23, void, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(AttachTargetToTarget, 0x8c9b01, void, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(ClearEffectTextures, 0x8c372f, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DestroyEffect, 0x8c3613, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(DetachGlobalSimulation, 0x8c36b8, void, Params(unsigned long unk1, float unk2), Args(unsigned long unk1, float unk2));
	DefineMethod(DetachSimulation, 0x8c3674, void, Params(unsigned long unk1, unsigned long unk2, float unk3), Args(unsigned long unk1, unsigned long unk2, float unk3));
	DefineMethod(FinishEffect, 0x8c3630, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(PostFlickFXMessageToEffectScript, 0x8c7b7b, void, Params(const FFXID_* unk1, const WorldMessage& unk2, unsigned long unk3), Args(const FFXID_* unk1, const WorldMessage& unk2, unsigned long unk3));
	DefineMethod(PostFlickFXMessageToTarget, 0x8c7b4d, void, Params(const FFXID_* unk1, const WorldMessage& unk2, unsigned long unk3), Args(const FFXID_* unk1, const WorldMessage& unk2, unsigned long unk3));
	DefineMethod(RCCreateFlickFX, 0x8d1a73, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, eCreateFFXFlags unk6, const FFXID_* unk7), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, eCreateFFXFlags unk6, const FFXID_* unk7));
	DefineMethod(RCCreateFlickFX, 0x8d1978, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, const Goid_* unk4, eCreateFFXFlags unk5, const FFXID_* unk6), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, const Goid_* unk4, eCreateFFXFlags unk5, const FFXID_* unk6));
	DefineMethod(RCCreateFlickFX, 0x8d187d, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, eCreateFFXFlags unk4, const FFXID_* unk5), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, eCreateFFXFlags unk4, const FFXID_* unk5));
	DefineMethod(RCDestroyFlickFX, 0x8d10a4, void, Params(const FFXID_* unk1), Args(const FFXID_* unk1));
	DefineMethod(RCFinishFlickFX, 0x8c8bc9, void, Params(const FFXID_* unk1), Args(const FFXID_* unk1));
	DefineMethod(RemoveTargetFromEffect, 0x8c383a, void, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
	DefineMethod(SetAnimatedModelRenderOrientOnly, 0x8c83b6, void, Params(unsigned long unk1, bool unk2), Args(unsigned long unk1, bool unk2));
	DefineMethod(SetDistanceCoefficients, 0x8c37a5, void, Params(unsigned long unk1, float unk2, float unk3, float unk4), Args(unsigned long unk1, float unk2, float unk3, float unk4));
	DefineMethod(SetEffectAlphaOp, 0x8c374d, void, Params(unsigned long unk1, eTextureOp unk2), Args(unsigned long unk1, eTextureOp unk2));
	DefineMethod(SetEffectCameraOffset, 0x8c377a, void, Params(unsigned long unk1, const vector_3& unk2), Args(unsigned long unk1, const vector_3& unk2));
	DefineMethod(SetEffectColorOp, 0x8c373e, void, Params(unsigned long unk1, eTextureOp unk2), Args(unsigned long unk1, eTextureOp unk2));
	DefineMethod(SetEffectDestBlend, 0x8c376b, void, Params(unsigned long unk1, ePixelBlend unk2), Args(unsigned long unk1, ePixelBlend unk2));
	DefineMethod(SetEffectGlobalSimAllowed, 0x8c36d4, void, Params(unsigned long unk1, bool unk2), Args(unsigned long unk1, bool unk2));
	DefineMethod(SetEffectLighting, 0x8c3807, void, Params(unsigned long unk1, bool unk2, bool unk3), Args(unsigned long unk1, bool unk2, bool unk3));
	DefineMethod(SetEffectSortingOffset, 0x8c3789, void, Params(unsigned long unk1, float unk2), Args(unsigned long unk1, float unk2));
	DefineMethod(SetEffectSrcBlend, 0x8c375c, void, Params(unsigned long unk1, ePixelBlend unk2), Args(unsigned long unk1, ePixelBlend unk2));
	DefineMethod(SetLockOrientToTarget, 0x8c33de, void, Params(unsigned long unk1, unsigned long unk2, unsigned long unk3), Args(unsigned long unk1, unsigned long unk2, unsigned long unk3));
	DefineMethod(SetLockOrientToVelocity, 0x8ca321, void, Params(unsigned long unk1, bool unk2), Args(unsigned long unk1, bool unk2));
	DefineMethod(SetParticleTracers, 0x8c37e0, void, Params(unsigned long unk1, bool unk2, float unk3, float unk4), Args(unsigned long unk1, bool unk2, float unk3, float unk4));
	DefineMethod(SetQuadRendering, 0x8c37d1, void, Params(unsigned long unk1, bool unk2), Args(unsigned long unk1, bool unk2));
	DefineMethod(SetTargetBoneOffset, 0x8ca289, void, Params(unsigned long unk1, const vector_3& unk2), Args(unsigned long unk1, const vector_3& unk2));
	DefineMethod(SetTargetDependence, 0x8c387c, void, Params(unsigned long unk1, bool unk2, bool unk3), Args(unsigned long unk1, bool unk2, bool unk3));
	DefineMethod(SetTargetExternal, 0x8c33c5, void, Params(unsigned long unk1, bool unk2), Args(unsigned long unk1, bool unk2));
	DefineMethod(SetTargetGlobalOffset, 0x8ca2b6, void, Params(unsigned long unk1, const vector_3& unk2), Args(unsigned long unk1, const vector_3& unk2));
	DefineMethod(SetTargetOffset, 0x8ca25c, void, Params(unsigned long unk1, const vector_3& unk2), Args(unsigned long unk1, const vector_3& unk2));
	DefineMethod(SetTargetOffsetRingPerpToVector, 0x8ca2e3, void, Params(unsigned long unk1, const vector_3& unk2, float unk3, float unk4), Args(unsigned long unk1, const vector_3& unk2, float unk3, float unk4));
	DefineMethod(SetTargetOffsets, 0x8ca21d, void, Params(unsigned long unk1, const vector_3& unk2, const vector_3& unk3, const vector_3& unk4), Args(unsigned long unk1, const vector_3& unk2, const vector_3& unk3, const vector_3& unk4));
	DefineMethod(SetTargetOrientation, 0x8c9ed3, void, Params(unsigned long unk1, const Quat& unk2), Args(unsigned long unk1, const Quat& unk2));
	DefineMethod(SetTargetPlacement, 0x8c9f01, void, Params(unsigned long unk1, const SiegePos& unk2, const Quat& unk3), Args(unsigned long unk1, const SiegePos& unk2, const Quat& unk3));
	DefineMethod(SetTargetPosition, 0x8c9e7a, void, Params(unsigned long unk1, const SiegePos& unk2), Args(unsigned long unk1, const SiegePos& unk2));
	DefineMethod(SetTargetToBone, 0x8ca11a, void, Params(unsigned long unk1, const gpbstring<char>& unk2), Args(unsigned long unk1, const gpbstring<char>& unk2));
	DefineMethod(SetTargetToBone, 0x8ca15d, void, Params(unsigned long unk1, unsigned int unk2), Args(unsigned long unk1, unsigned int unk2));
	DefineMethod(SetTargetToDefaultPos, 0x8ca19a, void, Params(unsigned long unk1, const Goid_* unk2), Args(unsigned long unk1, const Goid_* unk2));
	DefineMethod(SetTargetToGo, 0x8ca022, void, Params(unsigned long unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(unsigned long unk1, const Goid_* unk2, const gpbstring<char>& unk3));
	DefineMethod(SetTargetToGo, 0x8ca0a1, void, Params(unsigned long unk1, const Goid_* unk2, unsigned int unk3), Args(unsigned long unk1, const Goid_* unk2, unsigned int unk3));
	DefineMethod(SetTargetToGo, 0x423ccc, void, Params(unsigned long unk1, const Goid_* unk2), Args(unsigned long unk1, const Goid_* unk2));
	DefineMethod(SetTargetToModel, 0x8c9f3e, void, Params(unsigned long unk1, unsigned long unk2, const gpbstring<char>& unk3), Args(unsigned long unk1, unsigned long unk2, const gpbstring<char>& unk3));
	DefineMethod(SetTargetToModel, 0x8c9fb3, void, Params(unsigned long unk1, unsigned long unk2, unsigned int unk3), Args(unsigned long unk1, unsigned long unk2, unsigned int unk3));
	DefineMethod(SetTargetToModel, 0x423cb5, void, Params(unsigned long unk1, unsigned long unk2), Args(unsigned long unk1, unsigned long unk2));
};
