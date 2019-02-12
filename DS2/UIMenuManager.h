#pragma once

#include "ClassMacros.h"

class UIMenuManager {
public:
	DefineSingleton(UIMenuManager, 0x41430c);

	/*UIMenuManager*/ private: /*static*/ UIMenuManager* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0041430c
	/*UIMenuManager*/ public: bool /*__thiscall*/ CloseActiveFadeInterface(); //0x0049be80
	/*UIMenuManager*/ public: bool /*__thiscall*/ GetAllowClientSave(); //0x00412f0c
	/*UIMenuManager*/ public: void /*__thiscall*/ ActivateTip(const gpbstring<char>& unk1, bool unk2, bool unk3); //0x004a03f5
	/*UIMenuManager*/ public: void /*__thiscall*/ ActivateTip(const gpbstring<char>& unk1, bool unk2); //0x00412eeb
	/*UIMenuManager*/ public: void /*__thiscall*/ ClientSaveGame(); //0x0049eded
	/*UIMenuManager*/ public: void /*__thiscall*/ CloseClientSaveGame(); //0x0049e8a1
	/*UIMenuManager*/ public: void /*__thiscall*/ CloseHostSaveGame(); //0x0049ddd8
	/*UIMenuManager*/ public: void /*__thiscall*/ FadeInterface(const char* unk1, float unk2, float unk3, float unk4); //0x0049e7c2
	/*UIMenuManager*/ public: void /*__thiscall*/ FadeInterfaceWithText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4, float unk5, float unk6, float unk7); //0x0049f92d
	/*UIMenuManager*/ public: void /*__thiscall*/ HostSaveGame(); //0x004a00c9
	/*UIMenuManager*/ public: void /*__thiscall*/ HostSelectGame(); //0x004a029d
	/*UIMenuManager*/ public: void /*__thiscall*/ PopulateBookmarkList(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x004a1501
	/*UIMenuManager*/ public: void /*__thiscall*/ RCActivateTip(const gpbstring<char>& unk1, unsigned long unk2, bool unk3); //0x004a0bd6
	/*UIMenuManager*/ public: void /*__thiscall*/ RCCloseActiveFadeInterface(unsigned long unk1); //0x0049c2bf
	/*UIMenuManager*/ public: void /*__thiscall*/ RCFadeInterface(const char* unk1, float unk2, float unk3, float unk4, unsigned long unk5); //0x0049ecf1
	/*UIMenuManager*/ public: void /*__thiscall*/ RCFadeInterfaceWithText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4, float unk5, float unk6, float unk7, unsigned long unk8); //0x0049ff12
	/*UIMenuManager*/ public: void /*__thiscall*/ RCShowDialogBox(const gpbstring<char>& unk1); //0x0049d9aa
	/*UIMenuManager*/ public: void /*__thiscall*/ RCShowSaveDialogBox(const gpbstring<char>& unk1, unsigned long unk2); //0x0049db02
	/*UIMenuManager*/ public: void /*__thiscall*/ SActivateTip(const gpbstring<char>& unk1, const Goid_* unk2, bool unk3); //0x004a1386
	/*UIMenuManager*/ public: void /*__thiscall*/ SActivateTip(const gpbstring<char>& unk1, const Goid_* unk2); //0x00412ed7
	/*UIMenuManager*/ public: void /*__thiscall*/ SCloseActiveFadeInterface(const Goid_* unk1); //0x0049c9f1
	/*UIMenuManager*/ public: void /*__thiscall*/ SetAllowClientSave(bool unk1); //0x00412eff
	/*UIMenuManager*/ public: void /*__thiscall*/ SetWindowToSiegePos(const SiegePos& unk1, UIWindow* unk2); //0x0049baec
	/*UIMenuManager*/ public: void /*__thiscall*/ SFadeInterface(const char* unk1, float unk2, float unk3, float unk4, const Goid_* unk5); //0x0049fa17
	/*UIMenuManager*/ public: void /*__thiscall*/ SFadeInterface(const char* unk1, float unk2, float unk3, float unk4); //0x0049f9ef
	/*UIMenuManager*/ public: void /*__thiscall*/ SFadeInterfaceWithText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const gpbstring<char>& unk4, float unk5, float unk6, float unk7, const Goid_* unk8); //0x004a09d4
	/*UIMenuManager*/ public: void /*__thiscall*/ ShowBookmarkGames(); //0x004a1bd6
	/*UIMenuManager*/ public: void /*__thiscall*/ ShowSaveGames(); //0x004a1bce
	/*UIMenuManager*/ public: void /*__thiscall*/ SShowDialogBox(const gpbstring<char>& unk1); //0x0049e7b0
	/*UIMenuManager*/ public: void /*__thiscall*/ SShowSaveDialogBox(const gpbstring<char>& unk1, unsigned long unk2); //0x0049e7b9
};
