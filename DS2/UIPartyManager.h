#pragma once

#include "ClassMacros.h"

class UIPartyManager {
public:
	DefineSingleton(UIPartyManager, 0x40a5f3);

	/*UIPartyManager*/ private: /*static*/ UIPartyManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5f3
	/*UIPartyManager*/ private: void /*__thiscall*/ SetFollowMode(bool unk1); //0x004a6c74
	/*UIPartyManager*/ public: bool /*__thiscall*/ ActivateAllInventories(); //0x004b7236
	/*UIPartyManager*/ public: bool /*__thiscall*/ ActivateInventory(); //0x004b708c
	/*UIPartyManager*/ public: bool /*__thiscall*/ CharacterDisbandButton(); //0x004ad66a
	/*UIPartyManager*/ public: bool /*__thiscall*/ CloseAllCharacterMenus(); //0x004b3d67
	/*UIPartyManager*/ public: bool /*__thiscall*/ DoesSelectedPartyHaveNonPack(); //0x004ac9a2
	/*UIPartyManager*/ public: bool /*__thiscall*/ GetFollowMode(); //0x00409350
	/*UIPartyManager*/ public: bool /*__thiscall*/ GetFormationMode(); //0x0040930e
	/*UIPartyManager*/ public: bool /*__thiscall*/ GetFormationsActive(); //0x00409349
	/*UIPartyManager*/ public: bool /*__thiscall*/ IsConstructingParty(); //0x004092df
	/*UIPartyManager*/ public: bool /*__thiscall*/ IsPlayerPartyMember(const Goid_* unk1); //0x004a64cd
	/*UIPartyManager*/ public: bool /*__thiscall*/ MoveMemberToInn(const Goid_* unk1); //0x004ad737
	/*UIPartyManager*/ public: gpbstring<char> /*__thiscall*/ GetAggroListAnsi(Go* unk1) const; //0x004b39c6
	/*UIPartyManager*/ public: gpbstring<char> /*__thiscall*/ GetAggroTooltipAnsi(eAggroType unk1) const; //0x004aae68
	/*UIPartyManager*/ public: gpbstring<char> /*__thiscall*/ GetFormationIcon(bool unk1); //0x004adaa4
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ DoesActivePartyHaveTemplate(const char* unk1, const Goid_* unk2); //0x004ab6f8
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ GetCharacterFromIndex(int unk1); //0x004a4590
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ GetPartyMemberFromTemplate(const gpbstring<char>& unk1); //0x004a9a6e
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ GetSelectedCharacter(); //0x004a454c
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ GetTalkingDisbandMember(); //0x004092f7
	/*UIPartyManager*/ public: int /*__thiscall*/ GetCharacterPartyIndex(const Goid_* unk1); //0x004a4568
	/*UIPartyManager*/ public: int /*__thiscall*/ GetMaxAllowedPartyMembers(); //0x004b0079
	/*UIPartyManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSReviveCharacter(const Goid_* unk1); //0x004a59ba
	/*UIPartyManager*/ public: void /*__thiscall*/ AutoLevel(const gpbstring<char>& unk1); //0x004ab4bb
	/*UIPartyManager*/ public: void /*__thiscall*/ CalculateAWPColumns(int unk1); //0x004b14c7
	/*UIPartyManager*/ public: void /*__thiscall*/ CloseCharacterInventory(int unk1); //0x004b5fdb
	/*UIPartyManager*/ public: void /*__thiscall*/ DisbandCancelAll(); //0x004a7c42
	/*UIPartyManager*/ public: void /*__thiscall*/ DisbandCancelSelectedMember(); //0x004a65f7
	/*UIPartyManager*/ public: void /*__thiscall*/ DisbandSelectedMember(bool unk1); //0x004b484a
	/*UIPartyManager*/ public: void /*__thiscall*/ EnchantmentUndo(int unk1, int unk2); //0x004aa029
	/*UIPartyManager*/ public: void /*__thiscall*/ GetPartyMembers(GopColl& unk1); //0x004aacbb
	/*UIPartyManager*/ public: void /*__thiscall*/ GetPartyMembersAndSummons(GoidColl& unk1, bool unk2); //0x004aacfd
	/*UIPartyManager*/ public: void /*__thiscall*/ GetSelectedPartyMembers(GoidColl& unk1, bool unk2); //0x004aabb3
	/*UIPartyManager*/ public: void /*__thiscall*/ GetSelectedPartyMembers(GopColl& unk1); //0x004092e6
	/*UIPartyManager*/ public: void /*__thiscall*/ GetSelectedPartyMembersAtPos(const SiegePos& unk1, float unk2, GoidColl& unk3, bool unk4, bool unk5); //0x004aaae4
	/*UIPartyManager*/ public: void /*__thiscall*/ HandleSelectSkillsTab(); //0x004abfac
	/*UIPartyManager*/ public: void /*__thiscall*/ HideAutoLevelDialog(); //0x004ab42f
	/*UIPartyManager*/ public: void /*__thiscall*/ HideEquipment(); //0x004a48bc
	/*UIPartyManager*/ public: void /*__thiscall*/ HideResistanceInfo(); //0x004acd37
	/*UIPartyManager*/ public: void /*__thiscall*/ OpenCharacterInterface(int unk1); //0x004092d6
	/*UIPartyManager*/ public: void /*__thiscall*/ PowerBarRolloff(int unk1); //0x00409325
	/*UIPartyManager*/ public: void /*__thiscall*/ PowerBarRollover(int unk1); //0x00409315
	/*UIPartyManager*/ public: void /*__thiscall*/ RCAddCharacterAsGuarded(const Goid_* unk1, unsigned long unk2); //0x004b68d8
	/*UIPartyManager*/ public: void /*__thiscall*/ RCAutoLevel(const gpbstring<char>& unk1, const Goid_* unk2); //0x004a6a52
	/*UIPartyManager*/ public: void /*__thiscall*/ RCDisbandIfNonInterruptable(const Goid_* unk1, unsigned long unk2); //0x004ad9af
	/*UIPartyManager*/ public: void /*__thiscall*/ RCEnchantmentUndo(unsigned long unk1); //0x004a6860
	/*UIPartyManager*/ public: void /*__thiscall*/ RCMoveMemberToInn(const Goid_* unk1); //0x004a9dae
	/*UIPartyManager*/ public: void /*__thiscall*/ RCRemoveCharacterAsGuarded(const Goid_* unk1, unsigned long unk2); //0x004b085a
	/*UIPartyManager*/ public: void /*__thiscall*/ RCSetMaxAllowedPartyMembers(int unk1, unsigned long unk2); //0x004b25c4
	/*UIPartyManager*/ public: void /*__thiscall*/ RCSetPartyCorpseRetrievalCost(int unk1, const Goid_* unk2, unsigned long unk3); //0x004ad808
	/*UIPartyManager*/ public: void /*__thiscall*/ RSActivatePartyAuditorBool(const gpbstring<char>& unk1); //0x004a695b
	/*UIPartyManager*/ public: void /*__thiscall*/ RSAutoLevel(const gpbstring<char>& unk1, const Goid_* unk2); //0x004a8108
	/*UIPartyManager*/ public: void /*__thiscall*/ RSDisbandIfNonInterruptable(const Goid_* unk1, const Goid_* unk2); //0x004b02b4
	/*UIPartyManager*/ public: void /*__thiscall*/ RSEnchantmentUndo(const Goid_* unk1, int unk2); //0x004a7c6e
	/*UIPartyManager*/ public: void /*__thiscall*/ RSEndRespawnParty(const PlayerId_* unk1); //0x004a9036
	/*UIPartyManager*/ public: void /*__thiscall*/ RSMoveMemberToInn(const Goid_* unk1); //0x004aaeaa
	/*UIPartyManager*/ public: void /*__thiscall*/ RSReleaseIntoWild(const Goid_* unk1); //0x004a662d
	/*UIPartyManager*/ public: void /*__thiscall*/ RSRespawnParty(const PlayerId_* unk1, const gpbstring<char>& unk2); //0x004a8c98
	/*UIPartyManager*/ public: void /*__thiscall*/ RSRetrieveCorpses(const Goid_* unk1, int unk2); //0x004a91d2
	/*UIPartyManager*/ public: void /*__thiscall*/ SAddCharacterAsGuarded(const Goid_* unk1, const Goid_* unk2); //0x004b6e3a
	/*UIPartyManager*/ public: void /*__thiscall*/ SetFormationMode(bool unk1); //0x004092fe
	/*UIPartyManager*/ public: void /*__thiscall*/ SetFormationsActive(bool unk1); //0x004a6776
	/*UIPartyManager*/ public: void /*__thiscall*/ SetPartyCorpseRetrievalCost(int unk1, const Goid_* unk2); //0x004ac60e
	/*UIPartyManager*/ public: void /*__thiscall*/ SetPartyOrders(eStandingOrders unk1); //0x004aa12d
	/*UIPartyManager*/ public: void /*__thiscall*/ SetSelectedCharacterIndex(int unk1); //0x0040933c
	/*UIPartyManager*/ public: void /*__thiscall*/ ShowEquipment(); //0x004a67f0
	/*UIPartyManager*/ public: void /*__thiscall*/ ShowPackRehireDialog(const Goid_* unk1); //0x004ab072
	/*UIPartyManager*/ public: void /*__thiscall*/ ShowResistanceInfo(); //0x004ad96a
	/*UIPartyManager*/ public: void /*__thiscall*/ SRemoveCharacterAsGuarded(const Goid_* unk1, const Goid_* unk2); //0x004b2f25
	/*UIPartyManager*/ public: void /*__thiscall*/ SSetMaxAllowedPartyMembers(const Goid_* unk1, int unk2); //0x004b38f0
	/*UIPartyManager*/ public: void /*__thiscall*/ SSetPartyCorpseRetrievalCost(const Goid_* unk1, const Goid_* unk2, int unk3); //0x004aeb23
	/*UIPartyManager*/ public: void /*__thiscall*/ UpdateFormations(); //0x004a67a8
};
