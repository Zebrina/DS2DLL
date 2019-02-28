#pragma once



class UIInventoryManager {
public:
	DefineSingleton(UIInventoryManager, 0x43d9b7);

	DefineMethod(RCCancelTrade, 0x49064b, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(HasEnteredUnlockCode, 0x48786e, bool, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SHasTicketItem, 0x4878bc, bool, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(RCCombinePotions, 0x4893ae, FuBi::Cookie__*, Params(const Goid_* unk1, const Goid_* unk2, Go* unk3, float unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RCCombinePotionsDest, 0x488883, FuBi::Cookie__*, Params(const Goid_* unk1, Go* unk2, float unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSCombinePotions, 0x48a0ab, FuBi::Cookie__*, Params(Go* unk1, Go* unk2, Go* unk3, float unk4, float unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(ActivateEquipment, 0x486d03, void, Params(int unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(AttemptActiveSlotEquip, 0x495384, void, Params(int unk1), Args(unk1));
	DefineMethod(AttemptItemUnlock, 0x48aeac, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(AttemptSpellEquip, 0x4891ca, void, Params(int unk1), Args(unk1));
	DefineMethod(AttemptSpellRemoval, 0x489175, void, Params(int unk1), Args(unk1));
	DefineMethod(CalculateGridHighlights, 0x48ecb1, void, Params(UIGridbox* unk1), Args(unk1));
	DefineMethod(CancelItemUnlock, 0x485f90, void, NO_PARAMS, NO_ARGS);
	DefineMethod(CheckSetQuickSlot, 0x49525b, void, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(ClearGUIRolloverSkill, 0x43e1a0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(DeactivateItems, 0x48922e, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ListenerCharacterRolloff, 0x48fdd9, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ListenerCharacterRollover, 0x48fad0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(RCAckInitiateTrade, 0x494827, void, Params(Go* unk1, Go* unk2, Go* unk3, unsigned long unk4, unsigned long unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RCActivateItemUnlockInterace, 0x48b380, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCActivateStash, 0x4929d3, void, Params(const Goid_* unk1, const Goid_* unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCAddToDestGridbox, 0x4911fb, void, Params(GridItem unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCAttemptTradeCompletion, 0x490a17, void, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineMethod(RCCompleteTrade, 0x490d54, void, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineMethod(RCGoldTransferComplete, 0x487462, void, Params(Go* unk1), Args(unk1));
	DefineMethod(RCPlayerBusyDialog, 0x48a9b0, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCPlayerNotInRangeDialog, 0x48ab29, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCPrepareForDeletion, 0x487e9c, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCRemoveFromDestGridbox, 0x487fe7, void, Params(int unk1, Player* unk2), Args(unk1, unk2));
	DefineMethod(RCRetrieveItemUnlockCode, 0x48b467, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCSetTradeDestAccept, 0x48aca2, void, Params(bool unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCSetTradeSourceAccept, 0x492fdf, void, Params(bool unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(RCTradeFailed, 0x485e34, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCTradeUpdateGoldDest, 0x48d48e, void, Params(unsigned long unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RCTradeUpdateGoldSource, 0x48d357, void, Params(unsigned long unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RSActivateStash, 0x4933ec, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RSAddToDestGridbox, 0x493651, void, Params(GridItem unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSAttemptTradeCompletion, 0x492526, void, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineMethod(RSCancelTrade, 0x492386, void, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineMethod(RSCompleteTrade, 0x4926a7, void, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineMethod(RSGoldTransferComplete, 0x48810b, void, Params(Go* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RSPaperDollHandleItem, 0x486a5e, void, Params(const Goid_* unk1, eEquipSlot unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSRemoveFromDestGridbox, 0x493937, void, Params(int unk1, Player* unk2), Args(unk1, unk2));
	DefineMethod(RSReqInitiateTrade, 0x494eb5, void, Params(Go* unk1, Go* unk2, Go* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSSetTradeInvalid, 0x487261, void, Params(Go* unk1), Args(unk1));
	DefineMethod(RSSetTradeValid, 0x487170, void, Params(Go* unk1), Args(unk1));
	DefineMethod(RSTradeAccept, 0x493549, void, Params(bool unk1, Player* unk2, Player* unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSTradeFailed, 0x487352, void, Params(Go* unk1, Go* unk2), Args(unk1, unk2));
	DefineMethod(RSTradeUpdateGold, 0x49319d, void, Params(Go* unk1, Go* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(SActivateItemUnlockInterface, 0x48b9ab, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(SPrepareForDeletion, 0x488b54, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(SRetrieveItemUnlockCode, 0x48b9d8, void, Params(const Goid_* unk1), Args(unk1));
};
