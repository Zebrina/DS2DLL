#pragma once

#include "ClassMacros.h"

class AppModule {
	DefineSingleton(AppModule, 0x50358c);

	/*AppModule*/ private: /*static*/ AppModule* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0050358c
	DefineConstMethod(GetAltKey, 0x467c40, bool, Params(), Args());
	DefineConstMethod(GetControlKey, 0x472d50, bool, Params(), Args());
	DefineConstMethod(GetLButton, 0x472d5c, bool, Params(), Args());
	DefineConstMethod(GetMButton, 0x472d69, bool, Params(), Args());
	DefineConstMethod(GetRButton, 0x472d76, bool, Params(), Args());
	DefineConstMethod(GetShiftKey, 0x409adb, bool, Params(), Args());
	DefineConstMethod(GetSpecialKey, 0x502ab4, bool, Params(), Args());
	DefineConstMethod(GetXButton1, 0x472d83, bool, Params(), Args());
	DefineConstMethod(GetXButton2, 0x472d90, bool, Params(), Args());
	DefineConstMethod(IsMouseFixed, 0x502aaa, bool, Params(), Args());
	DefineMethod(IsUserPaused, 0x424163, bool, Params(), Args());
	DefineMethod(RequestQuit, 0x610ca8, bool, Params(bool unk1), Args(bool unk1));
	DefineConstMethod(GetFilteredFrameRate, 0x428325, float, Params(), Args());
	DefineConstMethod(GetNormalizedCursorX, 0x4282ae, float, Params(), Args());
	DefineConstMethod(GetNormalizedCursorY, 0x4282b5, float, Params(), Args());
	DefineConstMethod(GetCursorX, 0x44a307, int, Params(), Args());
	DefineConstMethod(GetCursorY, 0x44a30e, int, Params(), Args());
	DefineMethod(UserPause, 0x611516, void, Params(bool unk1), Args(bool unk1));
};
