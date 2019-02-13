#pragma once

#include "ClassMacros.h"

class CGameOptions {
public:
	DefineSingleton(CGameOptions, 0x503592);

	/*CGameOptions*/ private: /*static*/ CGameOptions* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00503592
	DefineMethod(IsGoldSharingEnabled, 0x40601d, bool, Params(), Args());
	DefineMethod(IsLocationSelectEnabled, 0x405ff6, bool, Params(), Args());
	DefineMethod(IsNewCharactersOnlyEnabled, 0x406003, bool, Params(), Args());
	DefineMethod(IsPasswordProtectionEnabled, 0x405fe9, bool, Params(), Args());
	DefineMethod(IsPausingEnabled, 0x406010, bool, Params(), Args());
	DefineMethod(GetCharacterCount, 0x406051, int, Params(), Args());
	DefineMethod(GetCharacterLimit, 0x406044, int, Params(), Args());
	DefineMethod(GetDifficulty, 0x403fc3, int, Params(), Args());
	DefineMethod(GetMaxPartySize, 0x406037, int, Params(), Args());
	DefineMethod(GetPlayerLimit, 0x40602a, int, Params(), Args());
	DefineMethod(AllowGoldSharing, 0x405eab, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(AllowLocationSelect, 0x405e21, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(AllowPausing, 0x405e7d, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(NewCharacterOnly, 0x405e4f, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetCharacterLimit, 0x405f25, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetCharacterUberLevel, 0x405fc1, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetDifficulty, 0x403fc0, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetMapName, 0x4079a7, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetMaxPartySize, 0x405ed9, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetPartyAverageUberLevel, 0x405f99, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetPasswordProtected, 0x405d99, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetPlayerLimit, 0x405dc7, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetWorldName, 0x4079ef, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
};
