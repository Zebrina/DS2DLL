#pragma once

#include "ClassMacros.h"

class UIGameConsole {
public:
	DefineSingleton(UIGameConsole, 0x40a5e7);

	/*UIGameConsole*/ private: /*static*/ UIGameConsole* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5e7
	/*UIGameConsole*/ public: bool /*__thiscall*/ CanUseIncantation(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3); //0x00440323
	/*UIGameConsole*/ public: bool /*__thiscall*/ IsActive(); //0x0043f125
	/*UIGameConsole*/ public: const Goid_* /*__thiscall*/ GetActiveIncantationShrine(); //0x004092a4
	/*UIGameConsole*/ public: void /*__thiscall*/ Activate(); //0x00440d94
	/*UIGameConsole*/ public: void /*__thiscall*/ Deactivate(); //0x0043ff80
	/*UIGameConsole*/ public: void /*__thiscall*/ FUBI_RENAME_ReceiveConsoleText(const gpbstring<char>& unk1); //0x0040b394
	/*UIGameConsole*/ public: void /*__thiscall*/ RCApplyIncantationEnchantments(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3); //0x0043ea39
	/*UIGameConsole*/ public: void /*__thiscall*/ RCSetActiveIncantationShrine(const Goid_* unk1, unsigned long unk2); //0x0043d17c
	/*UIGameConsole*/ public: void /*__thiscall*/ RSCallIncantationManager(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3); //0x00440199
	/*UIGameConsole*/ public: void /*__thiscall*/ RSSetActiveIncantationShrine(const Goid_* unk1, const Goid_* unk2); //0x0043da09
	/*UIGameConsole*/ public: void /*__thiscall*/ SApplyIncantationEnchantments(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3); //0x0043edd8
	/*UIGameConsole*/ public: void /*__thiscall*/ SetFocus(bool unk1); //0x0043dcdd
};
