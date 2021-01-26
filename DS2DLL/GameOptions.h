#pragma once

#include "DS2DLL.h"
#include "GPString.h"

class CGameOptions {
public:
	$Singleton(CGameOptions, 0x00503592);

	$ConstMethod(0x00405fe9, IsPasswordProtectionEnabled, bool);
	$Method(0x00405d99, SetPasswordProtected, void, bool value);
	$ConstMethod(0x0040602a, GetPlayerLimit, int);
	$Method(0x00405dc7, SetPlayerLimit, void, int value);
	$ConstMethod(0x00405ff6, IsLocationSelectEnabled, bool);
	$Method(0x00405e21, AllowLocationSelect, void, bool value);
	$ConstMethod(0x00406003, IsNewCharactersOnlyEnabled, bool);
	$Method(0x00405e4f, NewCharacterOnly, void, bool value);
	$ConstMethod(0x00406010, IsPausingEnabled, bool);
	$Method(0x00405e7d, AllowPausing, void, bool value);
	$ConstMethod(0x0040601d, IsGoldSharingEnabled, bool);
	$Method(0x00405eab, AllowGoldSharing, void, bool value);
	$ConstMethod(0x00406037, GetMaxPartySize, int);
	$Method(0x00405ed9, SetMaxPartySize, void, int value);
	$ConstMethod(0x00406044, GetCharacterLimit, int);
	$Method(0x00405f25, SetCharacterLimit, void, int value);
	$ConstMethod(0x00406051, GetCharacterCount, int);
	$Method(0x00405fc1, SetCharacterUberLevel, void, int value);
	$Method(0x00405f99, SetPartyAverageUberLevel, void, int level);
	$Method(0x004079a7, SetMapName, void, const GPBString& name);
	$Method(0x004079ef, SetWorldName, void, const GPBString& name);

	//$Method(0x00403fc3, GetDifficulty, int); // Always returns 0.
	//$Method(0x00403fc0, SetDifficulty, void, int difficulty); // does nothing.
};

typedef CGameOptions GameOptions;
