#pragma once

#include "ClassMacros.h"

class UIGameConsole {
public:
	DefineSingleton(UIGameConsole, 0x40a5e7);

	/*UIGameConsole*/ private: /*static*/ UIGameConsole* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0040a5e7
	DefineMethod(CanUseIncantation, 0x440323, bool, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3));
	DefineMethod(IsActive, 0x43f125, bool, Params(), Args());
	/*UIGameConsole*/ public: const Goid_* /*__thiscall*/ GetActiveIncantationShrine(); //0x004092a4
	DefineMethod(Activate, 0x440d94, void, Params(), Args());
	DefineMethod(Deactivate, 0x43ff80, void, Params(), Args());
	DefineMethod(FUBI_RENAME_ReceiveConsoleText, 0x40b394, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RCApplyIncantationEnchantments, 0x43ea39, void, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3));
	DefineMethod(RCSetActiveIncantationShrine, 0x43d17c, void, Params(const Goid_* unk1, unsigned long unk2), Args(const Goid_* unk1, unsigned long unk2));
	DefineMethod(RSCallIncantationManager, 0x440199, void, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3));
	DefineMethod(RSSetActiveIncantationShrine, 0x43da09, void, Params(const Goid_* unk1, const Goid_* unk2), Args(const Goid_* unk1, const Goid_* unk2));
	DefineMethod(SApplyIncantationEnchantments, 0x43edd8, void, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3));
	DefineMethod(SetFocus, 0x43dcdd, void, Params(bool unk1), Args(bool unk1));
};
