#pragma once

#include "GPBString.h"

class CGameOptions {
public:
	DefineSingleton(CGameOptions, 0x503592);

	DefineMethod(IsGoldSharingEnabled, 0x40601d, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsLocationSelectEnabled, 0x405ff6, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsNewCharactersOnlyEnabled, 0x406003, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsPasswordProtectionEnabled, 0x405fe9, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsPausingEnabled, 0x406010, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCharacterCount, 0x406051, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCharacterLimit, 0x406044, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMaxPartySize, 0x406037, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetPlayerLimit, 0x40602a, int, NO_PARAMS, NO_ARGS);
	DefineMethod(AllowGoldSharing, 0x405eab, void, Params(bool unk1), Args(unk1));
	DefineMethod(AllowLocationSelect, 0x405e21, void, Params(bool unk1), Args(unk1));
	DefineMethod(AllowPausing, 0x405e7d, void, Params(bool unk1), Args(unk1));
	DefineMethod(NewCharacterOnly, 0x405e4f, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetCharacterLimit, 0x405f25, void, Params(int unk1), Args(unk1));
	DefineMethod(SetCharacterUberLevel, 0x405fc1, void, Params(int unk1), Args(unk1));
	DefineMethod(SetMapName, 0x4079a7, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetMaxPartySize, 0x405ed9, void, Params(int unk1), Args(unk1));
	DefineMethod(SetPartyAverageUberLevel, 0x405f99, void, Params(int unk1), Args(unk1));
	DefineMethod(SetPasswordProtected, 0x405d99, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetPlayerLimit, 0x405dc7, void, Params(int unk1), Args(unk1));
	DefineMethod(SetWorldName, 0x4079ef, void, Params(const gpbstring<char>& unk1), Args(unk1));

	//DefineMethod(GetDifficulty, 0x403fc3, int, NO_PARAMS, NO_ARGS); // Always returns 0.
	//DefineMethod(SetDifficulty, 0x403fc0, void, Params(int unk1), Args(unk1)); // does nothing.

private:
	// ??
	//int characterCount;
	// ??
	//int characterLimit;
	// ??
	//int characterUberLevel;
	// ??
	gpbstring<char>* MapName;
	// ??
	int maxPartySize;
	// ??
	int partyAverageUberLevel;
	// ??
	bool passwordProtected;
	// ??
	int playerLimit;
	// ??
	gpbstring<char>* worldName;
};
