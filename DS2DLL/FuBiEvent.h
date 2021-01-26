#pragma once

#include "Enums.h"
#include "Job.h"
#include "Skrit.h"
#include "WorldMessage.h"

namespace FuBiEvent {
	$Function(0x007b276f, OnGoCommitCreation, bool, SkritObject* skrit, eSkritResult& unk2);
	$Function(0x007b27e3, OnGoCommitImport, bool, SkritObject* skrit, bool unk2);
	$Function(0x00573be0, OnAnimDone, void, SkritHObject skrit, int unk2);
	$Function(0x0093cf1a, OnCCWorldMessage, void, SkritObject* skrit, eWorldEvent unk2, const WorldMessage* unk3);
	$Function(0x009a2e25, OnConstruct, void, SkritObject* skrit);
	$Function(0x009a2f2b, OnDestroy, void, SkritObject* skrit);
	$Function(0x008c28b7, OnEffectWorldMessage, void, SkritHObject skrit, eWorldEvent unk2, const WorldMessage& unk3);
	$Function(0x009a2fae, OnEnterState, void, SkritObject* skrit);
	$Function(0x009a3031, OnExitState, void, SkritObject* skrit);
	$Function(0x007b1388, OnGoDraw, void, SkritObject* skrit);
	$Function(0x007b1742, OnGoDrawDebugHud, void, SkritObject* skrit);
	$Function(0x007b17ab, OnGoDump, void, SkritObject* skrit, bool unk2, ReportSys::Context* unk3);
	$Function(0x007b124d, OnGoHandleCcMessage, void, SkritObject* skrit, eWorldEvent unk2, const WorldMessage& unk3);
	$Function(0x007b11e4, OnGoHandleMessage, void, SkritObject* skrit, eWorldEvent unk2, const WorldMessage& unk3);
	$Function(0x007b152c, OnGoLinkChild, void, SkritObject* skrit, Go* unk2);
	$Function(0x007b14c3, OnGoLinkParent, void, SkritObject* skrit, Go* unk2);
	$Function(0x007b117b, OnGoPreload, void, SkritObject* skrit);
	$Function(0x007b145a, OnGoRecalcModifiers, void, SkritObject* skrit);
	$Function(0x007b13f1, OnGoResetModifiers, void, SkritObject* skrit);
	$Function(0x007b1112, OnGoShutdown, void, SkritObject* skrit);
	$Function(0x007b15fe, OnGoUnlinkChild, void, SkritObject* skrit, Go* unk2);
	$Function(0x007b1595, OnGoUnlinkParent, void, SkritObject* skrit, Go* unk2);
	$Function(0x007b12b6, OnGoUpdate, void, SkritObject* skrit, double unk2);
	$Function(0x007b131f, OnGoUpdateSpecial, void, SkritObject* skrit, double unk2);
	$Function(0x00573ae0, OnHandleMessage, void, SkritHObject skrit, eWorldEvent unk2, const WorldMessage& unk3);
	$Function(0x007acea0, OnInterfaceHandleMessage, void, SkritObject* skrit, eUIMessage unk2);
	$Function(0x0093d055, OnJobDrawDebugHud, void, SkritObject* skrit, Job* unk2);
	$Function(0x0093cf83, OnJobInit, void, SkritObject* skrit, Job* unk2);
	$Function(0x0093cfec, OnJobInitPointers, void, SkritObject* skrit, Job* unk2);
	$Function(0x009a2ea8, OnLoad, void, SkritObject* skrit);
	$Function(0x00573c60, OnObjectSpaceDeformation, void, SkritHObject skrit, Vector3& unk2, int unk3, int unk4);
	$Function(0x005739e0, OnResetChore, void, SkritHObject skrit);
	$Function(0x00573b60, OnStartChore, void, SkritHObject skrit, int unk2, int unk3);
	$Function(0x009a3137, OnTimer, void, SkritObject* skrit, int unk2, double unk3);
	$Function(0x009a30b4, OnTransitionPoll, void, SkritObject* skrit);
	$Function(0x00573a60, OnUpdate, void, SkritHObject skrit, double unk2);
	$Function(0x0093ceb1, OnWorldMessage, void, SkritObject* skrit, eWorldEvent unk2, const WorldMessage* unk3);
};
