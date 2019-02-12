#pragma once

#include "ClassMacros.h"

class WorldEffectsMgr {
public:
	DefineSingleton(WorldEffectsMgr, 0x424434);

	/*WorldEffectsMgr*/ private: /*static*/ WorldEffectsMgr* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00424434
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ AttachAnimatedModelToTarget(unsigned long unk1, unsigned long unk2); //0x008c8313
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ AttachLightSourceToTarget(unsigned long unk1, unsigned long unk2); //0x008c7137
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ AttachTerrainDeformerToTarget(unsigned long unk1, unsigned long unk2); //0x008c8415
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ BindFlickFXPoint(const FFXID_* unk1, const gpbstring<char>& unk2, const SiegePos& unk3); //0x008ca36f
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ BindFlickFXProperty(const FFXID_* unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x008c7bf8
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ BindFlickFXRole(const FFXID_* unk1, const gpbstring<char>& unk2, const Goid_* unk3); //0x008c7ba9
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyAllTargetEffects(unsigned long unk1); //0x008c4ce7
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyAllTargets(); //0x008c330c
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyAllTargetSimulations(unsigned long unk1); //0x008c8b2e
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyAnimatedModel(unsigned long unk1); //0x008cf1ea
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyDecal(unsigned long unk1, bool unk2); //0x008c7273
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyEffectScript(unsigned long unk1); //0x008c792e
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyFlickFX(const FFXID_* unk1); //0x00423e07
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyLightSource(unsigned long unk1); //0x008c70fb
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyTarget(unsigned long unk1); //0x008ccca0
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DestroyTerrainDeformer(unsigned long unk1); //0x008cf41d
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DetachTargetSimulation(unsigned long unk1, unsigned long unk2, float unk3); //0x008c8ad6
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ DetachTargetSimulation(unsigned long unk1, unsigned long unk2); //0x00423c9d
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ FadeAnimatedModel(unsigned long unk1, float unk2, float unk3, float unk4, float unk5); //0x008c8349
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ FadeAnimatedModel(unsigned long unk1, float unk2, float unk3, float unk4); //0x00423b82
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ FadeOutLightSource(unsigned long unk1, float unk2); //0x008c7188
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ FadeOutLightSourcesOnTarget(unsigned long unk1, float unk2); //0x008c6331
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ FinishAllTargetEffects(unsigned long unk1); //0x008c33a5
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ FinishFlickFX(const FFXID_* unk1); //0x008c867e
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ GetEffectVisible(unsigned long unk1); //0x008c363f
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ IsFFXValid(const FFXID_* unk1); //0x004249c3
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ IsShuttingDown() const; //0x00423e4f
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ QueueAnimatedModelAnimChore(unsigned long unk1, const gpbstring<char>& unk2, int unk3, float unk4); //0x008cc700
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ QueueAnimatedModelAnimChore(unsigned long unk1, const gpbstring<char>& unk2, int unk3); //0x00423bc8
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ QueueAnimatedModelAnimChore(unsigned long unk1, const gpbstring<char>& unk2); //0x00423bae
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ ScaleAnimatedModel(unsigned long unk1, float unk2, float unk3); //0x008c8387
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ SDestroyFlickFX(const FFXID_* unk1); //0x008d1853
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ SetAnimatedModelTexture(unsigned long unk1, int unk2, const char* unk3); //0x008c83f1
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ SetDecalAlpha(unsigned long unk1, float unk2); //0x008c729d
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ SetLightSourceColor(unsigned long unk1, const vector_3& unk2); //0x008c720a
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ SetLightSourcePosition(unsigned long unk1, const SiegePos& unk2); //0x008c71cb
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ SetTerrainDeformerPosition(unsigned long unk1, const SiegePos& unk2); //0x008c844f
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ SFinishFlickFX(const FFXID_* unk1); //0x008ca347
	/*WorldEffectsMgr*/ public: bool /*__thiscall*/ ValidateMovingTarget(unsigned long unk1, unsigned long unk2, float unk3, float unk4); //0x008c3347
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
	/*WorldEffectsMgr*/ public: float /*__thiscall*/ GetDistanceBetweenTargets(unsigned long unk1, unsigned long unk2); //0x008c4d07
	/*WorldEffectsMgr*/ public: float /*__thiscall*/ GetTargetSpeed(unsigned long unk1); //0x008c34d8
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
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AddBoneOffsetToTarget(unsigned long unk1, const vector_3& unk2); //0x008c9df6
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AddGlobalOffsetToTarget(unsigned long unk1, const vector_3& unk2); //0x008c9e38
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AddOffsetToTarget(unsigned long unk1, const vector_3& unk2); //0x008c9db4
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AddTargetToEffect(unsigned long unk1, unsigned long unk2); //0x008c3816
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AddTargetToScriptMsgLatch(const FFXID_* unk1, unsigned long unk2, unsigned long unk3); //0x008cc732
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AddTargetToScriptMsgLatch(unsigned long unk1, unsigned long unk2); //0x0042441f
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToBone(unsigned long unk1, const gpbstring<char>& unk2); //0x008c9ce2
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToBone(unsigned long unk1, unsigned int unk2); //0x008c9d1e
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToDefaultPos(unsigned long unk1, const Goid_* unk2); //0x008c9d44
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToGo(unsigned long unk1, const Goid_* unk2, const gpbstring<char>& unk3); //0x008c9c18
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToGo(unsigned long unk1, const Goid_* unk2, unsigned int unk3); //0x008c9c80
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToGo(unsigned long unk1, const Goid_* unk2); //0x00423c37
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToModel(unsigned long unk1, unsigned long unk2, const gpbstring<char>& unk3); //0x008c9b5a
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToModel(unsigned long unk1, unsigned long unk2, unsigned int unk3); //0x008c9bbc
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToModel(unsigned long unk1, unsigned long unk2); //0x00423c23
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ AttachTargetToTarget(unsigned long unk1, unsigned long unk2); //0x008c9b01
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ ClearEffectTextures(unsigned long unk1); //0x008c372f
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ DestroyEffect(unsigned long unk1); //0x008c3613
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ DetachGlobalSimulation(unsigned long unk1, float unk2); //0x008c36b8
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ DetachSimulation(unsigned long unk1, unsigned long unk2, float unk3); //0x008c3674
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ FinishEffect(unsigned long unk1); //0x008c3630
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ PostFlickFXMessageToEffectScript(const FFXID_* unk1, const WorldMessage& unk2, unsigned long unk3); //0x008c7b7b
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ PostFlickFXMessageToTarget(const FFXID_* unk1, const WorldMessage& unk2, unsigned long unk3); //0x008c7b4d
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ RCCreateFlickFX(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, const Goid_* unk4, const Goid_* unk5, eCreateFFXFlags unk6, const FFXID_* unk7); //0x008d1a73
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ RCCreateFlickFX(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, const Goid_* unk4, eCreateFFXFlags unk5, const FFXID_* unk6); //0x008d1978
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ RCCreateFlickFX(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const Goid_* unk3, eCreateFFXFlags unk4, const FFXID_* unk5); //0x008d187d
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ RCDestroyFlickFX(const FFXID_* unk1); //0x008d10a4
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ RCFinishFlickFX(const FFXID_* unk1); //0x008c8bc9
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ RemoveTargetFromEffect(unsigned long unk1, unsigned long unk2); //0x008c383a
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetAnimatedModelRenderOrientOnly(unsigned long unk1, bool unk2); //0x008c83b6
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetDistanceCoefficients(unsigned long unk1, float unk2, float unk3, float unk4); //0x008c37a5
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetEffectAlphaOp(unsigned long unk1, eTextureOp unk2); //0x008c374d
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetEffectCameraOffset(unsigned long unk1, const vector_3& unk2); //0x008c377a
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetEffectColorOp(unsigned long unk1, eTextureOp unk2); //0x008c373e
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetEffectDestBlend(unsigned long unk1, ePixelBlend unk2); //0x008c376b
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetEffectGlobalSimAllowed(unsigned long unk1, bool unk2); //0x008c36d4
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetEffectLighting(unsigned long unk1, bool unk2, bool unk3); //0x008c3807
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetEffectSortingOffset(unsigned long unk1, float unk2); //0x008c3789
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetEffectSrcBlend(unsigned long unk1, ePixelBlend unk2); //0x008c375c
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetLockOrientToTarget(unsigned long unk1, unsigned long unk2, unsigned long unk3); //0x008c33de
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetLockOrientToVelocity(unsigned long unk1, bool unk2); //0x008ca321
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetParticleTracers(unsigned long unk1, bool unk2, float unk3, float unk4); //0x008c37e0
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetQuadRendering(unsigned long unk1, bool unk2); //0x008c37d1
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetBoneOffset(unsigned long unk1, const vector_3& unk2); //0x008ca289
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetDependence(unsigned long unk1, bool unk2, bool unk3); //0x008c387c
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetExternal(unsigned long unk1, bool unk2); //0x008c33c5
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetGlobalOffset(unsigned long unk1, const vector_3& unk2); //0x008ca2b6
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetOffset(unsigned long unk1, const vector_3& unk2); //0x008ca25c
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetOffsetRingPerpToVector(unsigned long unk1, const vector_3& unk2, float unk3, float unk4); //0x008ca2e3
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetOffsets(unsigned long unk1, const vector_3& unk2, const vector_3& unk3, const vector_3& unk4); //0x008ca21d
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetOrientation(unsigned long unk1, const Quat& unk2); //0x008c9ed3
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetPlacement(unsigned long unk1, const SiegePos& unk2, const Quat& unk3); //0x008c9f01
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetPosition(unsigned long unk1, const SiegePos& unk2); //0x008c9e7a
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToBone(unsigned long unk1, const gpbstring<char>& unk2); //0x008ca11a
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToBone(unsigned long unk1, unsigned int unk2); //0x008ca15d
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToDefaultPos(unsigned long unk1, const Goid_* unk2); //0x008ca19a
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToGo(unsigned long unk1, const Goid_* unk2, const gpbstring<char>& unk3); //0x008ca022
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToGo(unsigned long unk1, const Goid_* unk2, unsigned int unk3); //0x008ca0a1
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToGo(unsigned long unk1, const Goid_* unk2); //0x00423ccc
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToModel(unsigned long unk1, unsigned long unk2, const gpbstring<char>& unk3); //0x008c9f3e
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToModel(unsigned long unk1, unsigned long unk2, unsigned int unk3); //0x008c9fb3
	/*WorldEffectsMgr*/ public: void /*__thiscall*/ SetTargetToModel(unsigned long unk1, unsigned long unk2); //0x00423cb5
};
