#pragma once

#include "ClassMacros.h"

enum eEntryType;
enum eQuestState;

class QuestManager {
public:
	DefineSingleton(QuestManager, 0x414300);

	/*QuestManager*/ private: /*static*/ QuestManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00414300
	/*QuestManager*/ private: const char* /*__thiscall*/ GetLastActivatedAct() const; //0x008884c1
	/*QuestManager*/ private: const char* /*__thiscall*/ GetLastActivatedQuest() const; //0x008884d4
	/*QuestManager*/ public: bool /*__thiscall*/ ActivateQuestOrLoreItem(const gpbstring<char>& unk1, Go* unk2); //0x0088d393
	/*QuestManager*/ public: bool /*__thiscall*/ AreAllWorldTasksComplete(const char* unk1); //0x00412ba5
	/*QuestManager*/ public: bool /*__thiscall*/ AreAllWorldTasksInState(const char* unk1, eQuestState unk2) const; //0x0088a5ef
	/*QuestManager*/ public: bool /*__thiscall*/ GetPartyMemberAccepted(const Go* unk1) const; //0x00888c58
	/*QuestManager*/ public: bool /*__thiscall*/ GetPartyMemberAllowRejoin(const Go* unk1) const; //0x008892b4
	/*QuestManager*/ public: bool /*__thiscall*/ GetPartyMemberDeclined(const Go* unk1) const; //0x00888def
	/*QuestManager*/ public: bool /*__thiscall*/ GetPartyMemberDisband(const Go* unk1) const; //0x00888f86
	/*QuestManager*/ public: bool /*__thiscall*/ GetPartyMemberWasDisbanded(const Go* unk1) const; //0x0088911d
	/*QuestManager*/ public: bool /*__thiscall*/ GetWasPartyMember(const Go* unk1) const; //0x0088944b
	/*QuestManager*/ public: bool /*__thiscall*/ HasLocalActBeenActivated(const char* unk1); //0x00412cc4
	/*QuestManager*/ public: bool /*__thiscall*/ HasLocalActBeenViewed(const char* unk1); //0x00412d0f
	/*QuestManager*/ public: bool /*__thiscall*/ HasLocalLoreBeenViewed(const char* unk1); //0x00412d41
	/*QuestManager*/ public: bool /*__thiscall*/ HasLocalQuestBeenActivated(const char* unk1); //0x00412cdd
	/*QuestManager*/ public: bool /*__thiscall*/ HasLocalQuestBeenViewed(const char* unk1); //0x00412d28
	/*QuestManager*/ public: bool /*__thiscall*/ HasLocalTaskBeenActivated(const char* unk1); //0x00412cf6
	/*QuestManager*/ public: bool /*__thiscall*/ HasWorldActBeenActivated(const char* unk1); //0x00412bb6
	/*QuestManager*/ public: bool /*__thiscall*/ HasWorldQuestBeenActivated(const char* unk1); //0x00412bcf
	/*QuestManager*/ public: bool /*__thiscall*/ HasWorldTaskBeenActivated(const char* unk1); //0x00412be8
	/*QuestManager*/ public: bool /*__thiscall*/ IsKillCountPassed(const gpbstring<char>& unk1); //0x0088a705
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalActActive(const char* unk1); //0x00412d5a
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalActComplete(const char* unk1); //0x00412da6
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalLoreItemFound(const char* unk1); //0x00412e1d
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalLoreItemViewed(const char* unk1); //0x00412e36
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalMapLocationFound(int unk1); //0x00412e88
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalMapLocationViewed(int unk1); //0x00412ea1
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalQuestActive(const char* unk1); //0x00412d70
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalQuestComplete(const char* unk1); //0x00412dbd
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalQuestItemFound(const char* unk1); //0x00412deb
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalQuestItemViewed(const char* unk1); //0x00412e04
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalTaskActive(const char* unk1); //0x00412d90
	/*QuestManager*/ public: bool /*__thiscall*/ IsLocalTaskComplete(const char* unk1); //0x00412dd4
	/*QuestManager*/ public: bool /*__thiscall*/ IsQuestOrLoreItem(const gpbstring<char>& unk1) const; //0x0088a695
	/*QuestManager*/ public: bool /*__thiscall*/ IsTeleportLocationActivated(const char* unk1); //0x00412eba
	/*QuestManager*/ public: bool /*__thiscall*/ IsWorldActActive(const char* unk1); //0x00412c01
	/*QuestManager*/ public: bool /*__thiscall*/ IsWorldActComplete(const char* unk1); //0x00412c4d
	/*QuestManager*/ public: bool /*__thiscall*/ IsWorldLoreItemFound(const char* unk1); //0x00412cab
	/*QuestManager*/ public: bool /*__thiscall*/ IsWorldQuestActive(const char* unk1); //0x00412c17
	/*QuestManager*/ public: bool /*__thiscall*/ IsWorldQuestComplete(const char* unk1); //0x00412c64
	/*QuestManager*/ public: bool /*__thiscall*/ IsWorldQuestItemFound(const char* unk1); //0x00412c92
	/*QuestManager*/ public: bool /*__thiscall*/ IsWorldTaskActive(const char* unk1); //0x00412c37
	/*QuestManager*/ public: bool /*__thiscall*/ IsWorldTaskComplete(const char* unk1); //0x00412c7b
	/*QuestManager*/ public: const char* /*__thiscall*/ GetQuestNameByTaskName(const char* unk1) const; //0x0088a5ab
	/*QuestManager*/ public: eEntryType /*__thiscall*/ GetTemplateEntryType(const gpbstring<char>& unk1) const; //0x0088a66c
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetLocalActState(const char* unk1) const; //0x00889a8b
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetLocalLoreState(const char* unk1) const; //0x00889c30
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetLocalQuestState(const char* unk1) const; //0x00889b40
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetLocalTaskState(const char* unk1) const; //0x00889bb8
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetMapLocationState(unsigned long unk1); //0x00889d55
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetTeleportLocationState(const char* unk1) const; //0x00888abe
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetWorldActState(const char* unk1) const; //0x00889a4f
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetWorldLoreState(const char* unk1) const; //0x00889bf4
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetWorldQuestState(const char* unk1) const; //0x00889b04
	/*QuestManager*/ public: eQuestState /*__thiscall*/ GetWorldTaskState(const char* unk1) const; //0x00889b7c
	/*QuestManager*/ public: int /*__thiscall*/ GetActCount() const; //0x004142f4
	/*QuestManager*/ public: int /*__thiscall*/ GetHandbookChapter(); //0x00887c7b
	/*QuestManager*/ public: int /*__thiscall*/ GetKillCount(const gpbstring<char>& unk1); //0x0088a6aa
	/*QuestManager*/ public: int /*__thiscall*/ GetQuestIndexByQuestName(const char* unk1) const; //0x0088a5c5
	/*QuestManager*/ public: int /*__thiscall*/ GetQuestTaskCount(const char* unk1) const; //0x0088a5de
	/*QuestManager*/ public: ActData* /*__thiscall*/ GetActDataByActIndex(unsigned int unk1); //0x00887c53
	/*QuestManager*/ public: ActData* /*__thiscall*/ GetActDataByActName(const char* unk1); //0x00889ac7
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCAddToKillCount(const gpbstring<char>& unk1, unsigned long unk2); //0x0088d3ff
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetActState(const char* unk1, eQuestState unk2, unsigned long unk3); //0x0088a433
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetHandbookChapter(int unk1, unsigned long unk2); //0x00888987
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetLoreState(const char* unk1, eQuestState unk2, unsigned long unk3, bool unk4); //0x0088be52
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetQuestState(const char* unk1, eQuestState unk2, unsigned long unk3); //0x0088cce5
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetTaskState(const char* unk1, eQuestState unk2, unsigned long unk3); //0x0088bd54
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCSetTeleportLocationState(const char* unk1, eQuestState unk2, unsigned long unk3); //0x00889704
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetActState(const char* unk1, eQuestState unk2, unsigned long unk3); //0x0088b441
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetActState(const char* unk1, eQuestState unk2); //0x0088bca7
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetLoreState(const char* unk1, eQuestState unk2, bool unk3); //0x0088ce07
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetLoreState(const char* unk1, eQuestState unk2, unsigned long unk3, bool unk4); //0x0088c536
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetQuestState(const char* unk1, eQuestState unk2, unsigned long unk3); //0x0088d22d
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetQuestState(const char* unk1, eQuestState unk2); //0x0088d563
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTaskState(const char* unk1, eQuestState unk2, unsigned long unk3); //0x0088c3d0
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTaskState(const char* unk1, eQuestState unk2); //0x0088cde3
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeleportLocationState(const char* unk1, eQuestState unk2, unsigned long unk3); //0x00889dca
	/*QuestManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSSetTeleportLocationState(const char* unk1, eQuestState unk2); //0x0088a18e
	/*QuestManager*/ public: QuestData* /*__thiscall*/ GetQuestDataByQuestName(const char* unk1) const; //0x0088a52f
	/*QuestManager*/ public: QuestData* /*__thiscall*/ GetQuestDataByTaskName(const char* unk1) const; //0x0088a56d
	/*QuestManager*/ public: TaskData* /*__thiscall*/ GetTaskDataByTaskName(const char* unk1) const; //0x0088a62e
	/*QuestManager*/ public: void /*__thiscall*/ RSActivateAct(const char* unk1); //0x00412aa9
	/*QuestManager*/ public: void /*__thiscall*/ RSActivateLore(const char* unk1); //0x00412adc
	/*QuestManager*/ public: void /*__thiscall*/ RSActivateQuest(const char* unk1); //0x00412aba
	/*QuestManager*/ public: void /*__thiscall*/ RSActivateTask(const char* unk1); //0x00412acb
	/*QuestManager*/ public: void /*__thiscall*/ RSCompleteAct(const char* unk1); //0x00412aef
	/*QuestManager*/ public: void /*__thiscall*/ RSCompleteQuest(const char* unk1); //0x00412b00
	/*QuestManager*/ public: void /*__thiscall*/ RSCompleteTask(const char* unk1); //0x00412b11
	/*QuestManager*/ public: void /*__thiscall*/ RSDeactivateAct(const char* unk1); //0x00412b22
	/*QuestManager*/ public: void /*__thiscall*/ RSDeactivateLore(const char* unk1); //0x00412b55
	/*QuestManager*/ public: void /*__thiscall*/ RSDeactivateQuest(const char* unk1); //0x00412b33
	/*QuestManager*/ public: void /*__thiscall*/ RSDeactivateTask(const char* unk1); //0x00412b44
	/*QuestManager*/ public: void /*__thiscall*/ RSSetMapLocationState(unsigned long unk1, eQuestState unk2, unsigned long unk3); //0x00889c6c
	/*QuestManager*/ public: void /*__thiscall*/ RSSetMapLocationStateFound(int unk1, unsigned long unk2); //0x00412e63
	/*QuestManager*/ public: void /*__thiscall*/ RSSetMapLocationStateMissing(int unk1, unsigned long unk2); //0x00412e4f
	/*QuestManager*/ public: void /*__thiscall*/ RSSetPartyMemberAccepted(const Go* unk1, bool unk2, unsigned long unk3); //0x00888b10
	/*QuestManager*/ public: void /*__thiscall*/ RSSetPartyMemberAllowRejoin(const Go* unk1, bool unk2, unsigned long unk3); //0x0088916c
	/*QuestManager*/ public: void /*__thiscall*/ RSSetPartyMemberDeclined(const Go* unk1, bool unk2, unsigned long unk3); //0x00888ca7
	/*QuestManager*/ public: void /*__thiscall*/ RSSetPartyMemberDisband(const Go* unk1, bool unk2, unsigned long unk3); //0x00888e3e
	/*QuestManager*/ public: void /*__thiscall*/ RSSetPartyMemberWasDisbanded(const Go* unk1, bool unk2, unsigned long unk3); //0x00888fd5
	/*QuestManager*/ public: void /*__thiscall*/ RSSetWasPartyMember(const Go* unk1, bool unk2, unsigned long unk3); //0x00889303
	/*QuestManager*/ public: void /*__thiscall*/ SAddToKillCount(const gpbstring<char>& unk1, unsigned long unk2); //0x0088d60c
	/*QuestManager*/ public: void /*__thiscall*/ SAddToTeamKillCount(const gpbstring<char>& unk1, unsigned long unk2); //0x0088d587
	/*QuestManager*/ public: void /*__thiscall*/ SetAllActStates(eQuestState unk1, bool unk2); //0x0088a161
	/*QuestManager*/ public: void /*__thiscall*/ SetAllLoreStates(eQuestState unk1, bool unk2); //0x0088b891
	/*QuestManager*/ public: void /*__thiscall*/ SetAllQuestStates(eQuestState unk1, bool unk2); //0x0088c394
	/*QuestManager*/ public: void /*__thiscall*/ SetHandbookChapter(int unk1, bool unk2); //0x00888472
	/*QuestManager*/ public: void /*__thiscall*/ SetMapLocationState(unsigned long unk1, eQuestState unk2); //0x00889ce1
	/*QuestManager*/ public: void /*__thiscall*/ SetMapLocationStateViewed(int unk1); //0x00412e77
	/*QuestManager*/ public: void /*__thiscall*/ SetQuestState(const char* unk1, eQuestState unk2, bool unk3, bool unk4); //0x0088c283
	/*QuestManager*/ public: void /*__thiscall*/ SetTaskState(const char* unk1, eQuestState unk2, bool unk3, bool unk4); //0x0088b5ec
	/*QuestManager*/ public: void /*__thiscall*/ SetTeleportLocationState(const char* unk1, eQuestState unk2); //0x00888a80
	/*QuestManager*/ public: void /*__thiscall*/ SSetHandbookChapter(int unk1, unsigned long unk2); //0x008896fb
	/*QuestManager*/ public: void /*__thiscall*/ SSetTeamHandbookChapter(int unk1, unsigned long unk2); //0x00889691
	/*QuestManager*/ public: void /*__thiscall*/ StartFlashingJournalIcon(); //0x008897fe
	/*QuestManager*/ public: void /*__thiscall*/ StopFlashingJournalIcon(); //0x00887c8e
	/*QuestManager*/ public: void /*__thiscall*/ SyncFlashingJournalIcon(); //0x0088985f
	/*QuestManager*/ public: void /*__thiscall*/ ViewedAct(const char* unk1); //0x00412b68
	/*QuestManager*/ public: void /*__thiscall*/ ViewedLore(const char* unk1); //0x00412b90
	/*QuestManager*/ public: void /*__thiscall*/ ViewedQuest(const char* unk1); //0x00412b7b
};
