#pragma once

#include "Enums.h"
#include "Skrit.h"
#include "WorldMessage.h"

#include "ClassMacros.h"

class Job;

namespace FuBiEvent {
	DefineFunction(OnGoCommitCreation, 0x7b276f, bool, Params(Skrit::Object* unk1, Skrit::eResult& unk2), Args(unk1, unk2));
	DefineFunction(OnGoCommitImport, 0x7b27e3, bool, Params(Skrit::Object* unk1, bool unk2), Args(unk1, unk2));
	DefineFunction(OnAnimDone, 0x573be0, void, Params(Skrit::HObject unk1, int unk2), Args(unk1, unk2));
	DefineFunction(OnCCWorldMessage, 0x93cf1a, void, Params(Skrit::Object* unk1, eWorldEvent unk2, const WorldMessage* unk3), Args(unk1, unk2, unk3));
	DefineFunction(OnConstruct, 0x9a2e25, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnDestroy, 0x9a2f2b, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnEffectWorldMessage, 0x8c28b7, void, Params(Skrit::HObject unk1, eWorldEvent unk2, const WorldMessage& unk3), Args(unk1, unk2, unk3));
	DefineFunction(OnEnterState, 0x9a2fae, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnExitState, 0x9a3031, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnGoDraw, 0x7b1388, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnGoDrawDebugHud, 0x7b1742, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnGoDump, 0x7b17ab, void, Params(Skrit::Object* unk1, bool unk2, ReportSys::Context* unk3), Args(unk1, unk2, unk3));
	DefineFunction(OnGoHandleCcMessage, 0x7b124d, void, Params(Skrit::Object* unk1, eWorldEvent unk2, const WorldMessage& unk3), Args(unk1, unk2, unk3));
	DefineFunction(OnGoHandleMessage, 0x7b11e4, void, Params(Skrit::Object* unk1, eWorldEvent unk2, const WorldMessage& unk3), Args(unk1, unk2, unk3));
	DefineFunction(OnGoLinkChild, 0x7b152c, void, Params(Skrit::Object* unk1, Go* unk2), Args(unk1, unk2));
	DefineFunction(OnGoLinkParent, 0x7b14c3, void, Params(Skrit::Object* unk1, Go* unk2), Args(unk1, unk2));
	DefineFunction(OnGoPreload, 0x7b117b, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnGoRecalcModifiers, 0x7b145a, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnGoResetModifiers, 0x7b13f1, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnGoShutdown, 0x7b1112, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnGoUnlinkChild, 0x7b15fe, void, Params(Skrit::Object* unk1, Go* unk2), Args(unk1, unk2));
	DefineFunction(OnGoUnlinkParent, 0x7b1595, void, Params(Skrit::Object* unk1, Go* unk2), Args(unk1, unk2));
	DefineFunction(OnGoUpdate, 0x7b12b6, void, Params(Skrit::Object* unk1, double unk2), Args(unk1, unk2));
	DefineFunction(OnGoUpdateSpecial, 0x7b131f, void, Params(Skrit::Object* unk1, double unk2), Args(unk1, unk2));
	DefineFunction(OnHandleMessage, 0x573ae0, void, Params(Skrit::HObject unk1, eWorldEvent unk2, const WorldMessage& unk3), Args(unk1, unk2, unk3));
	DefineFunction(OnInterfaceHandleMessage, 0x7acea0, void, Params(Skrit::Object* unk1, eUIMessage unk2), Args(unk1, unk2));
	DefineFunction(OnJobDrawDebugHud, 0x93d055, void, Params(Skrit::Object* unk1, Job* unk2), Args(unk1, unk2));
	DefineFunction(OnJobInit, 0x93cf83, void, Params(Skrit::Object* unk1, Job* unk2), Args(unk1, unk2));
	DefineFunction(OnJobInitPointers, 0x93cfec, void, Params(Skrit::Object* unk1, Job* unk2), Args(unk1, unk2));
	DefineFunction(OnLoad, 0x9a2ea8, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnObjectSpaceDeformation, 0x573c60, void, Params(Skrit::HObject unk1, vector_3& unk2, int unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(OnResetChore, 0x5739e0, void, Params(Skrit::HObject unk1), Args(unk1));
	DefineFunction(OnStartChore, 0x573b60, void, Params(Skrit::HObject unk1, int unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(OnTimer, 0x9a3137, void, Params(Skrit::Object* unk1, int unk2, double unk3), Args(unk1, unk2, unk3));
	DefineFunction(OnTransitionPoll, 0x9a30b4, void, Params(Skrit::Object* unk1), Args(unk1));
	DefineFunction(OnUpdate, 0x573a60, void, Params(Skrit::HObject unk1, double unk2), Args(unk1, unk2));
	DefineFunction(OnWorldMessage, 0x93ceb1, void, Params(Skrit::Object* unk1, eWorldEvent unk2, const WorldMessage* unk3), Args(unk1, unk2, unk3));
};
