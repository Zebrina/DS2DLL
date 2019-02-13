#pragma once

#include "ClassMacros.h"

class RapiAppModule {
public:
	DefineSingleton(RapiAppModule, 0x4029c6);

	/*RapiAppModule*/ private: /*static*/ RapiAppModule* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004029c6
	DefineStaticMethod(FUBI_Inheritance, 0x402692, int, Params(AppModule* unk1), Args(AppModule* unk1));
	DefineMethod(CopyScreenShotToClipboard, 0x529eb0, bool, Params(), Args());
	DefineConstMethod(IsCapturingMovie, 0x4029aa, bool, Params(), Args());
	DefineMethod(ScreenShot, 0x403351, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(StartCaptureMovie, 0x529c50, void, Params(const char* unk1, float unk2, float unk3, float unk4), Args(const char* unk1, float unk2, float unk3, float unk4));
	DefineMethod(StopCaptureMovie, 0x4029a0, void, Params(), Args());
};
