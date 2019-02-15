#pragma once

#include "ClassMacros.h"

class RapiAppModule {
public:
	DefineSingleton(RapiAppModule, 0x4029c6);

	DefineStaticMethod(FUBI_Inheritance, 0x402692, int, Params(AppModule* unk1), Args(unk1));
	DefineMethod(CopyScreenShotToClipboard, 0x529eb0, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsCapturingMovie, 0x4029aa, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ScreenShot, 0x403351, bool, Params(const char* unk1), Args(unk1));
	DefineMethod(StartCaptureMovie, 0x529c50, void, Params(const char* unk1, float unk2, float unk3, float unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(StopCaptureMovie, 0x4029a0, void, NO_PARAMS, NO_ARGS);
};
