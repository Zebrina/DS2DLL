#pragma once

#include "ClassMacros.h"

class UIPartyManager {
public:
	DefineSingleton(UIPartyManager, 0x40a5f3);

	/*UIPartyManager*/ private: /*static*/ UIPartyManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5f3
	DefineMethod(SetFollowMode, 0x4a6c74, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(ActivateAllInventories, 0x4b7236, bool, Params(), Args());
	DefineMethod(ActivateInventory, 0x4b708c, bool, Params(), Args());
	DefineMethod(CharacterDisbandButton, 0x4ad66a, bool, Params(), Args());
	DefineMethod(CloseAllCharacterMenus, 0x4b3d67, bool, Params(), Args());
	DefineMethod(DoesSelectedPartyHaveNonPack, 0x4ac9a2, bool, Params(), Args());
	DefineMethod(GetFollowMode, 0x409350, bool, Params(), Args());
	DefineMethod(GetFormationMode, 0x40930e, bool, Params(), Args());
	DefineMethod(GetFormationsActive, 0x409349, bool, Params(), Args());
	DefineMethod(IsConstructingParty, 0x4092df, bool, Params(), Args());
	DefineMethod(IsPlayerPartyMember, 0x4a64cd, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(MoveMemberToInn, 0x4ad737, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	/*UIPartyManager*/ public: gpbstring<char> /*__thiscall*/ GetAggroListAnsi(Go* unk1) const; //0x004b39c6
	/*UIPartyManager*/ public: gpbstring<char> /*__thiscall*/ GetAggroTooltipAnsi(eAggroType unk1) const; //0x004aae68
	/*UIPartyManager*/ public: gpbstring<char> /*__thiscall*/ GetFormationIcon(bool unk1); //0x004adaa4
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ DoesActivePartyHaveTemplate(const char* unk1, const Goid_* unk2); //0x004ab6f8
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ GetCharacterFromIndex(int unk1); //0x004a4590
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ GetPartyMemberFromTemplate(const gpbstring<char>& unk1); //0x004a9a6e
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ GetSelectedCharacter(); //0x004a454c
	/*UIPartyManager*/ public: const Goid_* /*__thiscall*/ GetTalkingDisbandMember(); //0x004092f7
	DefineMethod(GetCharacterPartyIndex, 0x4a4568, int, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(GetMaxAllowedPartyMembers, 0x4b0079, int, Params(), Args());
	DefineMethod(RSReviveCharacter, 0x4a59ba, FuBi::Cookie__*, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(AutoLevel, 0x4ab4bb, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(CalculateAWPColumns, 0x4b14c7, void, Params(int unk1), Args(int unk1));
	DefineMethod(CloseCharacterInventory, 0x4b5fdb, void, Params(int unk1), Args(int unk1));
	DefineMethod(DisbandCancelAll, 0x4a7c42, void, Params(), Args());
	DefineMethod(DisbandCancelSelectedMember, 0x4a65f7, void, Params(), Args());
	DefineMethod(DisbandSelectedMember, 0x4b484a, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(EnchantmentUndo, 0x4aa029, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
	DefineMethod(GetPartyMembers, 0x4aacbb, void, Params(GopColl& unk1), Args(GopColl& unk1));
	DefineMethod(GetPartyMembersAndSummons, 0x4aacfd, void, Params(GoidColl& unk1, bool unk2), Args(GoidColl& unk1, bool unk2));
	DefineMethod(GetSelectedPartyMembers, 0x4aabb3, void, Params(GoidColl& unk1, bool unk2), Args(GoidColl& unk1, bool unk2));
	DefineMethod(GetSelectedPartyMembers, 0x4092e6, void, Params(GopColl& unk1), Args(GopColl& unk1));
	DefineMethod(GetSelectedPartyMembersAtPos, 0x4aaae4, void, Params(const SiegePos& unk1, float unk2, GoidColl& unk3, bool unk4, bool unk5), Args(const SiegePos& unk1, float unk2, GoidColl& unk3, bool unk4, bool unk5));
	DefineMethod(HandleSelectSkillsTab, 0x4abfac, void, Params(), Args());
	DefineMethod(HideAutoLevelDialog, 0x4ab42f, void, Params(), Args());
	DefineMethod(HideEquipment, 0x4a48bc, void, Params(), Args());
	DefineMethod(HideResistanceInfo, 0x4acd37, void, Params(), Args());
	DefineMethod(OpenCharacterInterface, 0x4092d6, void, Params(int unk1), Args(int unk1));
	DefineMethod(PowerBarRolloff, 0x409325, void, Params(int unk1), Args(int unk1));
	DefineMethod(PowerBarRollover, 0x409315, void, Params(int unk1), Args(int unk1));
	DefineMethod(RCAddCharacterAsGuarded, 0x4b68d8, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCAutoLevel, 0x4a6a52, void, Params(const gpbstring<char>& unk1, const Goid_* unk2), Args(const gpbstring<char>& unk1, const Goid_* unk2));
	DefineMethod(RCDisbandIfNonInterruptable, 0x4ad9af, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCEnchantmentUndo, 0x4a6860, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(RCMoveMemberToInn, 0x4a9dae, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RCRemoveCharacterAsGuarded, 0x4b085a, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RCSetMaxAllowedPartyMembers, 0x4b25c4, void, Params(int unk1, unsigned long unk2), Args(int unk1, unsigned long unk2));
	DefineMethod(RCSetPartyCorpseRetrievalCost, 0x4ad808, void, Params(int unk1, const Goid_* unk2, unsigned long unk3), Args(int unk1, const Goid_* unk2, unsigned long unk3));
	DefineMethod(RSActivatePartyAuditorBool, 0x4a695b, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RSAutoLevel, 0x4a8108, void, Params(const gpbstring<char>& unk1, const Goid_* unk2), Args(const gpbstring<char>& unk1, const Goid_* unk2));
	DefineMethod(RSDisbandIfNonInterruptable, 0x4b02b4, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(RSEnchantmentUndo, 0x4a7c6e, void, Params(const Goid_* unk1, int unk2), Args(const Goid_* unk1, int unk2));
	DefineMethod(RSEndRespawnParty, 0x4a9036, void, Params(const PlayerId_* unk1), Args(const PlayerId_* unk1));
	DefineMethod(RSMoveMemberToInn, 0x4aaeaa, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSReleaseIntoWild, 0x4a662d, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(RSRespawnParty, 0x4a8c98, void, Params(const PlayerId_* unk1, const gpbstring<char>& unk2), Args(const PlayerId_* unk1, const gpbstring<char>& unk2));
	DefineMethod(RSRetrieveCorpses, 0x4a91d2, void, Params(const Goid_* unk1, int unk2), Args(const Goid_* unk1, int unk2));
	DefineMethod(SAddCharacterAsGuarded, 0x4b6e3a, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(SetFormationMode, 0x4092fe, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetFormationsActive, 0x4a6776, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetPartyCorpseRetrievalCost, 0x4ac60e, void, Params(int unk1, const Goid_* unk2), Args(int unk1, const Goid_* unk2));
	DefineMethod(SetPartyOrders, 0x4aa12d, void, Params(eStandingOrders unk1), Args(eStandingOrders unk1));
	DefineMethod(SetSelectedCharacterIndex, 0x40933c, void, Params(int unk1), Args(int unk1));
	DefineMethod(ShowEquipment, 0x4a67f0, void, Params(), Args());
	DefineMethod(ShowPackRehireDialog, 0x4ab072, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(ShowResistanceInfo, 0x4ad96a, void, Params(), Args());
	DefineMethod(SRemoveCharacterAsGuarded, 0x4b2f25, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(SSetMaxAllowedPartyMembers, 0x4b38f0, void, Params(const Goid_* unk1, int unk2), Args(const Goid_* unk1, int unk2));
	DefineMethod(SSetPartyCorpseRetrievalCost, 0x4aeb23, void, Params(const Goid_* unk1, const Goid_* unk2, int unk3), Args(const Goid_* unk1, const Goid_* unk2, int unk3));
	DefineMethod(UpdateFormations, 0x4a67a8, void, Params(), Args());
};
