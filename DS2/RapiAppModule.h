#pragma once

#include "ClassMacros.h"

class RapiAppModule {
public:
	DefineSingleton(RapiAppModule, 0x4029c6);

	/*RapiAppModule*/ private: /*static*/ RapiAppModule* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x004029c6
	/*RapiAppModule*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(AppModule* unk1); //0x00402692
	/*RapiAppModule*/ public: bool /*__thiscall*/ CopyScreenShotToClipboard(); //0x00529eb0
	/*RapiAppModule*/ public: bool /*__thiscall*/ IsCapturingMovie() const; //0x004029aa
	/*RapiAppModule*/ public: bool /*__thiscall*/ ScreenShot(const char* unk1); //0x00403351
	/*RapiAppModule*/ public: void /*__thiscall*/ StartCaptureMovie(const char* unk1, float unk2, float unk3, float unk4); //0x00529c50
	/*RapiAppModule*/ public: void /*__thiscall*/ StopCaptureMovie(); //0x004029a0
};
