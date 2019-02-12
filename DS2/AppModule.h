#pragma once

#include "ClassMacros.h"

class AppModule {
	DefineSingleton(AppModule, 0x50358c);

	/*AppModule*/ private: /*static*/ AppModule* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0050358c
	/*AppModule*/ public: bool /*__thiscall*/ GetAltKey() const; //0x00467c40
	/*AppModule*/ public: bool /*__thiscall*/ GetControlKey() const; //0x00472d50
	/*AppModule*/ public: bool /*__thiscall*/ GetLButton() const; //0x00472d5c
	/*AppModule*/ public: bool /*__thiscall*/ GetMButton() const; //0x00472d69
	/*AppModule*/ public: bool /*__thiscall*/ GetRButton() const; //0x00472d76
	/*AppModule*/ public: bool /*__thiscall*/ GetShiftKey() const; //0x00409adb
	/*AppModule*/ public: bool /*__thiscall*/ GetSpecialKey() const; //0x00502ab4
	/*AppModule*/ public: bool /*__thiscall*/ GetXButton1() const; //0x00472d83
	/*AppModule*/ public: bool /*__thiscall*/ GetXButton2() const; //0x00472d90
	/*AppModule*/ public: bool /*__thiscall*/ IsMouseFixed() const; //0x00502aaa
	/*AppModule*/ public: bool /*__thiscall*/ IsUserPaused(); //0x00424163
	/*AppModule*/ public: bool /*__thiscall*/ RequestQuit(bool unk1); //0x00610ca8
	/*AppModule*/ public: float /*__thiscall*/ GetFilteredFrameRate() const; //0x00428325
	/*AppModule*/ public: float /*__thiscall*/ GetNormalizedCursorX() const; //0x004282ae
	/*AppModule*/ public: float /*__thiscall*/ GetNormalizedCursorY() const; //0x004282b5
	/*AppModule*/ public: int /*__thiscall*/ GetCursorX() const; //0x0044a307
	/*AppModule*/ public: int /*__thiscall*/ GetCursorY() const; //0x0044a30e
	/*AppModule*/ public: void /*__thiscall*/ UserPause(bool unk1); //0x00611516
};
