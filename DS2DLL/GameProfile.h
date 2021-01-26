#pragma once

#include "GPString.h"

class GameProfile {
public:
	$Singleton(GameProfile, 0x0040a27d);

	$Method(0x0041137b, ProfileDialogOk, void);
	$Method(0x004108fb, ShowProfileDialog, void, const GPBString& unk1);
	$Method(0x00410922, ShowProfileEditDialog, void, const GPBString& unk1);
};
