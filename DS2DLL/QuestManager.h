#pragma once

#include "Enums.h"
#include "GoidScid.h"
#include "GPString.h"

class QuestManager {
public:
	$Singleton(QuestManager, 0x00414300);

	$ConstMethod(0x008884c1, GetLastActivatedAct, const char*);
	$ConstMethod(0x008884d4, GetLastActivatedQuest, const char*);
	$Method(0x0088d393, ActivateQuestOrLoreItem, bool, const GPBString& unk1, Go* unk2);
	$Method(0x00412ba5, AreAllWorldTasksComplete, bool, const char* unk1);
	$ConstMethod(0x0088a5ef, AreAllWorldTasksInState, bool, const char* unk1, eQuestState unk2);
	$ConstMethod(0x00888c58, GetPartyMemberAccepted, bool, const Go* unk1);
	$ConstMethod(0x008892b4, GetPartyMemberAllowRejoin, bool, const Go* unk1);
	$ConstMethod(0x00888def, GetPartyMemberDeclined, bool, const Go* unk1);
	$ConstMethod(0x00888f86, GetPartyMemberDisband, bool, const Go* unk1);
	$ConstMethod(0x0088911d, GetPartyMemberWasDisbanded, bool, const Go* unk1);
	$ConstMethod(0x0088944b, GetWasPartyMember, bool, const Go* unk1);
	$Method(0x00412cc4, HasLocalActBeenActivated, bool, const char* unk1);
	$Method(0x00412d0f, HasLocalActBeenViewed, bool, const char* unk1);
	$Method(0x00412d41, HasLocalLoreBeenViewed, bool, const char* unk1);
	$Method(0x00412cdd, HasLocalQuestBeenActivated, bool, const char* unk1);
	$Method(0x00412d28, HasLocalQuestBeenViewed, bool, const char* unk1);
	$Method(0x00412cf6, HasLocalTaskBeenActivated, bool, const char* unk1);
	$Method(0x00412bb6, HasWorldActBeenActivated, bool, const char* unk1);
	$Method(0x00412bcf, HasWorldQuestBeenActivated, bool, const char* unk1);
	$Method(0x00412be8, HasWorldTaskBeenActivated, bool, const char* unk1);
	$Method(0x0088a705, IsKillCountPassed, bool, const GPBString& unk1);
	$Method(0x00412d5a, IsLocalActActive, bool, const char* unk1);
	$Method(0x00412da6, IsLocalActComplete, bool, const char* unk1);
	$Method(0x00412e1d, IsLocalLoreItemFound, bool, const char* unk1);
	$Method(0x00412e36, IsLocalLoreItemViewed, bool, const char* unk1);
	$Method(0x00412e88, IsLocalMapLocationFound, bool, int unk1);
	$Method(0x00412ea1, IsLocalMapLocationViewed, bool, int unk1);
	$Method(0x00412d70, IsLocalQuestActive, bool, const char* unk1);
	$Method(0x00412dbd, IsLocalQuestComplete, bool, const char* unk1);
	$Method(0x00412deb, IsLocalQuestItemFound, bool, const char* unk1);
	$Method(0x00412e04, IsLocalQuestItemViewed, bool, const char* unk1);
	$Method(0x00412d90, IsLocalTaskActive, bool, const char* unk1);
	$Method(0x00412dd4, IsLocalTaskComplete, bool, const char* unk1);
	$ConstMethod(0x0088a695, IsQuestOrLoreItem, bool, const GPBString& unk1);
	$Method(0x00412eba, IsTeleportLocationActivated, bool, const char* unk1);
	$Method(0x00412c01, IsWorldActActive, bool, const char* unk1);
	$Method(0x00412c4d, IsWorldActComplete, bool, const char* unk1);
	$Method(0x00412cab, IsWorldLoreItemFound, bool, const char* unk1);
	$Method(0x00412c17, IsWorldQuestActive, bool, const char* unk1);
	$Method(0x00412c64, IsWorldQuestComplete, bool, const char* unk1);
	$Method(0x00412c92, IsWorldQuestItemFound, bool, const char* unk1);
	$Method(0x00412c37, IsWorldTaskActive, bool, const char* unk1);
	$Method(0x00412c7b, IsWorldTaskComplete, bool, const char* unk1);
	$ConstMethod(0x0088a5ab, GetQuestNameByTaskName, const char*, const char* unk1);
	$ConstMethod(0x0088a66c, GetTemplateEntryType, eEntryType, const GPBString& path);
	$ConstMethod(0x00889a8b, GetLocalActState, eQuestState, const char* unk1);
	$ConstMethod(0x00889c30, GetLocalLoreState, eQuestState, const char* unk1);
	$ConstMethod(0x00889b40, GetLocalQuestState, eQuestState, const char* unk1);
	$ConstMethod(0x00889bb8, GetLocalTaskState, eQuestState, const char* unk1);
	$Method(0x00889d55, GetMapLocationState, eQuestState, uint unk1);
	$ConstMethod(0x00888abe, GetTeleportLocationState, eQuestState, const char* unk1);
	$ConstMethod(0x00889a4f, GetWorldActState, eQuestState, const char* unk1);
	$ConstMethod(0x00889bf4, GetWorldLoreState, eQuestState, const char* unk1);
	$ConstMethod(0x00889b04, GetWorldQuestState, eQuestState, const char* unk1);
	$ConstMethod(0x00889b7c, GetWorldTaskState, eQuestState, const char* unk1);
	$ConstMethod(0x004142f4, GetActCount, int); // LocalJournal->GetInt("h_curr", 0);
	$Method(0x00887c7b, GetHandbookChapter, int);
	$Method(0x0088a6aa, GetKillCount, int, const GPBString& unk1);
	$ConstMethod(0x0088a5c5, GetQuestIndexByQuestName, int, const char* unk1);
	$ConstMethod(0x0088a5de, GetQuestTaskCount, int, const char* unk1);
	$Method(0x00887c53, GetActDataByActIndex, ActData*, uint unk1);
	$Method(0x00889ac7, GetActDataByActName, ActData*, const char* unk1);
	$Method(0x0088d3ff, RCAddToKillCount, FuBiCookie*, const GPBString& unk1, uint unk2);
	$Method(0x0088a433, RCSetActState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3);
	$Method(0x00888987, RCSetHandbookChapter, FuBiCookie*, int unk1, uint unk2);
	$Method(0x0088be52, RCSetLoreState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3, bool unk4);
	$Method(0x0088cce5, RCSetQuestState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3);
	$Method(0x0088bd54, RCSetTaskState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3);
	$Method(0x00889704, RCSetTeleportLocationState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3);
	$Method(0x0088b441, RSSetActState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3);
	$Method(0x0088bca7, RSSetActState, FuBiCookie*, const char* unk1, eQuestState unk2);
	$Method(0x0088ce07, RSSetLoreState, FuBiCookie*, const char* unk1, eQuestState unk2, bool unk3);
	$Method(0x0088c536, RSSetLoreState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3, bool unk4);
	$Method(0x0088d22d, RSSetQuestState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3);
	$Method(0x0088d563, RSSetQuestState, FuBiCookie*, const char* unk1, eQuestState unk2);
	$Method(0x0088c3d0, RSSetTaskState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3);
	$Method(0x0088cde3, RSSetTaskState, FuBiCookie*, const char* unk1, eQuestState unk2);
	$Method(0x00889dca, RSSetTeleportLocationState, FuBiCookie*, const char* unk1, eQuestState unk2, uint unk3);
	$Method(0x0088a18e, RSSetTeleportLocationState, FuBiCookie*, const char* unk1, eQuestState unk2);
	$ConstMethod(0x0088a52f, GetQuestDataByQuestName, QuestData*, const char* unk1);
	$ConstMethod(0x0088a56d, GetQuestDataByTaskName, QuestData*, const char* unk1);
	$ConstMethod(0x0088a62e, GetTaskDataByTaskName, TaskData*, const char* unk1);
	$Method(0x00412aa9, RSActivateAct, void, const char* unk1);
	$Method(0x00412adc, RSActivateLore, void, const char* unk1);
	$Method(0x00412aba, RSActivateQuest, void, const char* unk1);
	$Method(0x00412acb, RSActivateTask, void, const char* unk1);
	$Method(0x00412aef, RSCompleteAct, void, const char* unk1);
	$Method(0x00412b00, RSCompleteQuest, void, const char* unk1);
	$Method(0x00412b11, RSCompleteTask, void, const char* unk1);
	$Method(0x00412b22, RSDeactivateAct, void, const char* unk1);
	$Method(0x00412b55, RSDeactivateLore, void, const char* unk1);
	$Method(0x00412b33, RSDeactivateQuest, void, const char* unk1);
	$Method(0x00412b44, RSDeactivateTask, void, const char* unk1);
	$Method(0x00889c6c, RSSetMapLocationState, void, uint unk1, eQuestState unk2, uint unk3);
	$Method(0x00412e63, RSSetMapLocationStateFound, void, int unk1, uint unk2);
	$Method(0x00412e4f, RSSetMapLocationStateMissing, void, int unk1, uint unk2);
	$Method(0x00888b10, RSSetPartyMemberAccepted, void, const Go* unk1, bool unk2, uint unk3);
	$Method(0x0088916c, RSSetPartyMemberAllowRejoin, void, const Go* unk1, bool unk2, uint unk3);
	$Method(0x00888ca7, RSSetPartyMemberDeclined, void, const Go* unk1, bool unk2, uint unk3);
	$Method(0x00888e3e, RSSetPartyMemberDisband, void, const Go* unk1, bool unk2, uint unk3);
	$Method(0x00888fd5, RSSetPartyMemberWasDisbanded, void, const Go* unk1, bool unk2, uint unk3);
	$Method(0x00889303, RSSetWasPartyMember, void, const Go* unk1, bool unk2, uint unk3);
	$Method(0x0088d60c, SAddToKillCount, void, const GPBString& unk1, uint unk2);
	$Method(0x0088d587, SAddToTeamKillCount, void, const GPBString& unk1, uint unk2);
	$Method(0x0088a161, SetAllActStates, void, eQuestState unk1, bool unk2);
	$Method(0x0088b891, SetAllLoreStates, void, eQuestState unk1, bool unk2);
	$Method(0x0088c394, SetAllQuestStates, void, eQuestState unk1, bool unk2);
	$Method(0x00888472, SetHandbookChapter, void, int unk1, bool unk2);
	$Method(0x00889ce1, SetMapLocationState, void, uint unk1, eQuestState unk2);
	$Method(0x00412e77, SetMapLocationStateViewed, void, int unk1);
	$Method(0x0088c283, SetQuestState, void, const char* unk1, eQuestState unk2, bool unk3, bool unk4);
	$Method(0x0088b5ec, SetTaskState, void, const char* unk1, eQuestState unk2, bool unk3, bool unk4);
	$Method(0x00888a80, SetTeleportLocationState, void, const char* unk1, eQuestState unk2);
	$Method(0x008896fb, SSetHandbookChapter, void, int unk1, uint unk2);
	$Method(0x00889691, SSetTeamHandbookChapter, void, int unk1, uint unk2);
	$Method(0x008897fe, StartFlashingJournalIcon, void);
	$Method(0x00887c8e, StopFlashingJournalIcon, void);
	$Method(0x0088985f, SyncFlashingJournalIcon, void);
	$Method(0x00412b68, ViewedAct, void, const char* unk1);
	$Method(0x00412b90, ViewedLore, void, const char* unk1);
	$Method(0x00412b7b, ViewedQuest, void, const char* unk1);

	// 0x00
	int i0x00;
	// 0x04
	int i0x04; // GetActCount -> (i0x04 - i0x00) / sizeof(ActData)
};
