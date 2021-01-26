#pragma once

#include "AppModule.h"
#include "GPString.h"
#include "RapiOwner.h"

class RapiAppModule : public AppModule {
public:
	$Singleton(RapiAppModule, 0x004029c6);

	$Method(0x00403351, ScreenShot, bool, const char* unk1);
	$Method(0x00529eb0, CopyScreenShotToClipboard, bool);
	$ConstMethod(0x004029aa, IsCapturingMovie, bool);
	$Method(0x00529c50, StartCaptureMovie, void, const char* unk1, float unk2, float unk3, float unk4);
	$Method(0x004029a0, StopCaptureMovie, void);

    // 0x14c
    $Padding(0x14c, 0x1d4);
    // 0x1d4
    RapiOwner* owner;
};
