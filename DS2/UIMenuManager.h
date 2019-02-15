#pragma once

#include "ClassMacros.h"

class UIMenuManager {
public:
	DefineSingleton(UIMenuManager, 0x41430c);

	DefineMethod(CloseActiveFadeInterface, 0x49be80, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetAllowClientSave, 0x412f0c, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ActivateTip, 0x4a03f5, void, Params(const gpbstring<char>& unk1, bool unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(ActivateTip, 0x412eeb, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(ClientSaveGame, 0x49eded, void, NO_PARAMS, NO_ARGS);
	DefineMethod(CloseClientSaveGame, 0x49e8a1, void, NO_PARAMS, NO_ARGS);
	DefineMethod(CloseHostSaveGame, 0x49ddd8, void, NO_PARAMS, NO_ARGS);
	DefineMethod(FadeInterface, 0x49e7c2, void, Params(const char* unk1, float unk2, float unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(FadeInterfaceWithText, 0x49f92d, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4, float unk5, float unk6, float unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineMethod(HostSaveGame, 0x4a00c9, void, NO_PARAMS, NO_ARGS);
	DefineMethod(HostSelectGame, 0x4a029d, void, NO_PARAMS, NO_ARGS);
	DefineMethod(PopulateBookmarkList, 0x4a1501, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(RCActivateTip, 0x4a0bd6, void, Params(const gpbstring<char>& unk1, unsigned long unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCCloseActiveFadeInterface, 0x49c2bf, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCFadeInterface, 0x49ecf1, void, Params(const char* unk1, float unk2, float unk3, float unk4, unsigned long unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(RCFadeInterfaceWithText, 0x49ff12, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4, float unk5, float unk6, float unk7, unsigned long unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
	DefineMethod(RCShowDialogBox, 0x49d9aa, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RCShowSaveDialogBox, 0x49db02, void, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(SActivateTip, 0x4a1386, void, Params(const gpbstring<char>& unk1, const Goid_* unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineMethod(SActivateTip, 0x412ed7, void, Params(const gpbstring<char>& unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(SCloseActiveFadeInterface, 0x49c9f1, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetAllowClientSave, 0x412eff, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetWindowToSiegePos, 0x49baec, void, Params(const SiegePos& unk1, UIWindow* unk2), Args(unk1, unk2));
	DefineMethod(SFadeInterface, 0x49fa17, void, Params(const char* unk1, float unk2, float unk3, float unk4, const Goid_* unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SFadeInterface, 0x49f9ef, void, Params(const char* unk1, float unk2, float unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(SFadeInterfaceWithText, 0x4a09d4, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4, float unk5, float unk6, float unk7, const Goid_* unk8), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8));
	DefineMethod(ShowBookmarkGames, 0x4a1bd6, void, NO_PARAMS, NO_ARGS);
	DefineMethod(ShowSaveGames, 0x4a1bce, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SShowDialogBox, 0x49e7b0, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SShowSaveDialogBox, 0x49e7b9, void, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(unk1, unk2));
};
