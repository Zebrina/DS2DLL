#pragma once

#include "ClassMacros.h"

class AppModule {
	DefineSingleton(AppModule, 0x50358c);

	DefineConstMethod(GetAltKey, 0x467c40, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetControlKey, 0x472d50, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetLButton, 0x472d5c, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMButton, 0x472d69, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRButton, 0x472d76, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetShiftKey, 0x409adb, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetSpecialKey, 0x502ab4, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetXButton1, 0x472d83, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetXButton2, 0x472d90, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsMouseFixed, 0x502aaa, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(IsUserPaused, 0x424163, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(RequestQuit, 0x610ca8, bool, Params(bool unk1), Args(unk1));
	DefineConstMethod(GetFilteredFrameRate, 0x428325, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNormalizedCursorX, 0x4282ae, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNormalizedCursorY, 0x4282b5, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCursorX, 0x44a307, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCursorY, 0x44a30e, int, NO_PARAMS, NO_ARGS);
	DefineMethod(UserPause, 0x611516, void, Params(bool unk1), Args(unk1));
};
