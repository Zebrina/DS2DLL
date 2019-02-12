#pragma once

#include "ClassMacros.h"

class UIInventoryManager {
public:
	DefineSingleton(UIInventoryManager, 0x43d9b7);

	/*UIInventoryManager*/ private: /*static*/ UIInventoryManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0043d9b7
	/*UIInventoryManager*/ private: void /*__thiscall*/ RCCancelTrade(unsigned long unk1); //0x0049064b
	/*UIInventoryManager*/ public: bool /*__thiscall*/ HasEnteredUnlockCode(const Goid_* unk1); //0x0048786e
	/*UIInventoryManager*/ public: bool /*__thiscall*/ SHasTicketItem(const Goid_* unk1); //0x004878bc
	/*UIInventoryManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCombinePotions(const Goid_* unk1, const Goid_* unk2, Go* unk3, float unk4, float unk5); //0x004893ae
	/*UIInventoryManager*/ public: FuBi::Cookie__* /*__thiscall*/ RCCombinePotionsDest(const Goid_* unk1, Go* unk2, float unk3, float unk4); //0x00488883
	/*UIInventoryManager*/ public: FuBi::Cookie__* /*__thiscall*/ RSCombinePotions(Go* unk1, Go* unk2, Go* unk3, float unk4, float unk5); //0x0048a0ab
	/*UIInventoryManager*/ public: void /*__thiscall*/ ActivateEquipment(int unk1, bool unk2); //0x00486d03
	/*UIInventoryManager*/ public: void /*__thiscall*/ AttemptActiveSlotEquip(int unk1); //0x00495384
	/*UIInventoryManager*/ public: void /*__thiscall*/ AttemptItemUnlock(const gpbstring<char>& unk1); //0x0048aeac
	/*UIInventoryManager*/ public: void /*__thiscall*/ AttemptSpellEquip(int unk1); //0x004891ca
	/*UIInventoryManager*/ public: void /*__thiscall*/ AttemptSpellRemoval(int unk1); //0x00489175
	/*UIInventoryManager*/ public: void /*__thiscall*/ CalculateGridHighlights(UIGridbox* unk1); //0x0048ecb1
	/*UIInventoryManager*/ public: void /*__thiscall*/ CancelItemUnlock(); //0x00485f90
	/*UIInventoryManager*/ public: void /*__thiscall*/ CheckSetQuickSlot(int unk1, int unk2); //0x0049525b
	/*UIInventoryManager*/ public: void /*__thiscall*/ ClearGUIRolloverSkill(); //0x0043e1a0
	/*UIInventoryManager*/ public: void /*__thiscall*/ DeactivateItems(); //0x0048922e
	/*UIInventoryManager*/ public: void /*__thiscall*/ ListenerCharacterRolloff(); //0x0048fdd9
	/*UIInventoryManager*/ public: void /*__thiscall*/ ListenerCharacterRollover(); //0x0048fad0
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCAckInitiateTrade(Go* unk1, Go* unk2, Go* unk3, unsigned long unk4, unsigned long unk5); //0x00494827
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCActivateItemUnlockInterace(const Goid_* unk1, unsigned long unk2); //0x0048b380
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCActivateStash(const Goid_* unk1, const Goid_* unk2, unsigned long unk3); //0x004929d3
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCAddToDestGridbox(GridItem unk1, unsigned long unk2); //0x004911fb
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCAttemptTradeCompletion(Go* unk1, Go* unk2); //0x00490a17
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCCompleteTrade(Go* unk1, Go* unk2); //0x00490d54
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCGoldTransferComplete(Go* unk1); //0x00487462
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCPlayerBusyDialog(unsigned long unk1); //0x0048a9b0
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCPlayerNotInRangeDialog(unsigned long unk1); //0x0048ab29
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCPrepareForDeletion(const Goid_* unk1, unsigned long unk2); //0x00487e9c
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCRemoveFromDestGridbox(int unk1, Player* unk2); //0x00487fe7
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCRetrieveItemUnlockCode(unsigned long unk1); //0x0048b467
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCSetTradeDestAccept(bool unk1, unsigned long unk2); //0x0048aca2
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCSetTradeSourceAccept(bool unk1, unsigned long unk2); //0x00492fdf
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCTradeFailed(unsigned long unk1); //0x00485e34
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCTradeUpdateGoldDest(unsigned long unk1, int unk2); //0x0048d48e
	/*UIInventoryManager*/ public: void /*__thiscall*/ RCTradeUpdateGoldSource(unsigned long unk1, int unk2); //0x0048d357
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSActivateStash(const Goid_* unk1, const Goid_* unk2); //0x004933ec
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSAddToDestGridbox(GridItem unk1, const Goid_* unk2, const Goid_* unk3); //0x00493651
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSAttemptTradeCompletion(Go* unk1, Go* unk2); //0x00492526
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSCancelTrade(Go* unk1, Go* unk2); //0x00492386
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSCompleteTrade(Go* unk1, Go* unk2); //0x004926a7
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSGoldTransferComplete(Go* unk1, int unk2); //0x0048810b
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSPaperDollHandleItem(const Goid_* unk1, eEquipSlot unk2, const Goid_* unk3); //0x00486a5e
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSRemoveFromDestGridbox(int unk1, Player* unk2); //0x00493937
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSReqInitiateTrade(Go* unk1, Go* unk2, Go* unk3); //0x00494eb5
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSSetTradeInvalid(Go* unk1); //0x00487261
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSSetTradeValid(Go* unk1); //0x00487170
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSTradeAccept(bool unk1, Player* unk2, Player* unk3); //0x00493549
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSTradeFailed(Go* unk1, Go* unk2); //0x00487352
	/*UIInventoryManager*/ public: void /*__thiscall*/ RSTradeUpdateGold(Go* unk1, Go* unk2, int unk3); //0x0049319d
	/*UIInventoryManager*/ public: void /*__thiscall*/ SActivateItemUnlockInterface(const Goid_* unk1, const Goid_* unk2); //0x0048b9ab
	/*UIInventoryManager*/ public: void /*__thiscall*/ SPrepareForDeletion(const Goid_* unk1, const Goid_* unk2); //0x00488b54
	/*UIInventoryManager*/ public: void /*__thiscall*/ SRetrieveItemUnlockCode(const Goid_* unk1); //0x0048b9d8
};
