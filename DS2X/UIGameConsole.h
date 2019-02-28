#pragma once

#include "Goid.h"
#include "GPBString.h"

class UIGameConsole {
public:
	DefineSingleton(UIGameConsole, 0x40a5e7);

	DefineConstMethod(IsActive, 0x43f0f5, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(Activate, 0x440d94, void, NO_PARAMS, NO_ARGS);
	DefineMethod(Deactivate, 0x43ff80, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SetFocus, 0x43dcdd, void, Params(bool unk1), Args(unk1));
	DefineMethod(ReceiveConsoleText, 0x40b394, void, Params(const gpbstring<char>& command), Args(command)); // Exported as: FUBI_RENAME_ReceiveConsoleText
	DefineMethod(CanUseIncantation, 0x440323, bool, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(GetActiveIncantationShrine, 0x4092a4, const Goid_*, NO_PARAMS, NO_ARGS);
	
	DefineMethod(SApplyIncantationEnchantments, 0x43edd8, void, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));

	DefineMethod(RCApplyIncantationEnchantments, 0x43ea39, void, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetActiveIncantationShrine, 0x43d17c, void, Params(const Goid_* unk1, unsigned long unk2), Args(unk1, unk2));

	DefineMethod(RSCallIncantationManager, 0x440199, void, Params(const Goid_* unk1, const Goid_* unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineMethod(RSSetActiveIncantationShrine, 0x43da09, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));

	DefineMethod(sub_4403A8, 0x4403a8, int, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(sub_4405A8, 0x4405a8, int, NO_PARAMS, NO_ARGS);
	DefineMethod(sub_4415A3, 0x4415a3, int, Params(int unk1), Args(unk1));
};
