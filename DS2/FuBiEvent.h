#pragma once

class FuBiEvent {
public:
	/*FuBiEvent*/ bool /*__cdecl*/ OnGoCommitCreation(Skrit::Object* unk1, Skrit::eResult& unk2); //0x007b276f
	/*FuBiEvent*/ bool /*__cdecl*/ OnGoCommitImport(Skrit::Object* unk1, bool unk2); //0x007b27e3
	/*FuBiEvent*/ void /*__cdecl*/ OnAnimDone(Skrit::HObject unk1, int unk2); //0x00573be0
	/*FuBiEvent*/ void /*__cdecl*/ OnCCWorldMessage(Skrit::Object* unk1, eWorldEvent unk2, const WorldMessage* unk3); //0x0093cf1a
	/*FuBiEvent*/ void /*__cdecl*/ OnConstruct(Skrit::Object* unk1); //0x009a2e25
	/*FuBiEvent*/ void /*__cdecl*/ OnDestroy(Skrit::Object* unk1); //0x009a2f2b
	/*FuBiEvent*/ void /*__cdecl*/ OnEffectWorldMessage(Skrit::HObject unk1, eWorldEvent unk2, const WorldMessage& unk3); //0x008c28b7
	/*FuBiEvent*/ void /*__cdecl*/ OnEnterState(Skrit::Object* unk1); //0x009a2fae
	/*FuBiEvent*/ void /*__cdecl*/ OnExitState(Skrit::Object* unk1); //0x009a3031
	/*FuBiEvent*/ void /*__cdecl*/ OnGoDraw(Skrit::Object* unk1); //0x007b1388
	/*FuBiEvent*/ void /*__cdecl*/ OnGoDrawDebugHud(Skrit::Object* unk1); //0x007b1742
	/*FuBiEvent*/ void /*__cdecl*/ OnGoDump(Skrit::Object* unk1, bool unk2, ReportSys::Context* unk3); //0x007b17ab
	/*FuBiEvent*/ void /*__cdecl*/ OnGoHandleCcMessage(Skrit::Object* unk1, eWorldEvent unk2, const WorldMessage& unk3); //0x007b124d
	/*FuBiEvent*/ void /*__cdecl*/ OnGoHandleMessage(Skrit::Object* unk1, eWorldEvent unk2, const WorldMessage& unk3); //0x007b11e4
	/*FuBiEvent*/ void /*__cdecl*/ OnGoLinkChild(Skrit::Object* unk1, Go* unk2); //0x007b152c
	/*FuBiEvent*/ void /*__cdecl*/ OnGoLinkParent(Skrit::Object* unk1, Go* unk2); //0x007b14c3
	/*FuBiEvent*/ void /*__cdecl*/ OnGoPreload(Skrit::Object* unk1); //0x007b117b
	/*FuBiEvent*/ void /*__cdecl*/ OnGoRecalcModifiers(Skrit::Object* unk1); //0x007b145a
	/*FuBiEvent*/ void /*__cdecl*/ OnGoResetModifiers(Skrit::Object* unk1); //0x007b13f1
	/*FuBiEvent*/ void /*__cdecl*/ OnGoShutdown(Skrit::Object* unk1); //0x007b1112
	/*FuBiEvent*/ void /*__cdecl*/ OnGoUnlinkChild(Skrit::Object* unk1, Go* unk2); //0x007b15fe
	/*FuBiEvent*/ void /*__cdecl*/ OnGoUnlinkParent(Skrit::Object* unk1, Go* unk2); //0x007b1595
	/*FuBiEvent*/ void /*__cdecl*/ OnGoUpdate(Skrit::Object* unk1, double unk2); //0x007b12b6
	/*FuBiEvent*/ void /*__cdecl*/ OnGoUpdateSpecial(Skrit::Object* unk1, double unk2); //0x007b131f
	/*FuBiEvent*/ void /*__cdecl*/ OnHandleMessage(Skrit::HObject unk1, eWorldEvent unk2, const WorldMessage& unk3); //0x00573ae0
	/*FuBiEvent*/ void /*__cdecl*/ OnInterfaceHandleMessage(Skrit::Object* unk1, eUIMessage unk2); //0x007acea0
	/*FuBiEvent*/ void /*__cdecl*/ OnJobDrawDebugHud(Skrit::Object* unk1, Job* unk2); //0x0093d055
	/*FuBiEvent*/ void /*__cdecl*/ OnJobInit(Skrit::Object* unk1, Job* unk2); //0x0093cf83
	/*FuBiEvent*/ void /*__cdecl*/ OnJobInitPointers(Skrit::Object* unk1, Job* unk2); //0x0093cfec
	/*FuBiEvent*/ void /*__cdecl*/ OnLoad(Skrit::Object* unk1); //0x009a2ea8
	/*FuBiEvent*/ void /*__cdecl*/ OnObjectSpaceDeformation(Skrit::HObject unk1, vector_3& unk2, int unk3, int unk4); //0x00573c60
	/*FuBiEvent*/ void /*__cdecl*/ OnResetChore(Skrit::HObject unk1); //0x005739e0
	/*FuBiEvent*/ void /*__cdecl*/ OnStartChore(Skrit::HObject unk1, int unk2, int unk3); //0x00573b60
	/*FuBiEvent*/ void /*__cdecl*/ OnTimer(Skrit::Object* unk1, int unk2, double unk3); //0x009a3137
	/*FuBiEvent*/ void /*__cdecl*/ OnTransitionPoll(Skrit::Object* unk1); //0x009a30b4
	/*FuBiEvent*/ void /*__cdecl*/ OnUpdate(Skrit::HObject unk1, double unk2); //0x00573a60
	/*FuBiEvent*/ void /*__cdecl*/ OnWorldMessage(Skrit::Object* unk1, eWorldEvent unk2, const WorldMessage* unk3); //0x0093ceb1
};
