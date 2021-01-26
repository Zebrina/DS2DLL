#pragma once

#include "DS2DLL.h"

#define APPMODULE_SINGLETON 0x00d01644

class AppModule {
public:
    static HANDLE GPGMutex;

	$Singleton(AppModule, 0x0050358c);

	$ConstMethod(0x00409adb, GetShiftKey, bool);
	$ConstMethod(0x00472d50, GetControlKey, bool);
	$ConstMethod(0x00467c40, GetAltKey, bool);
	$ConstMethod(0x00502ab4, GetSpecialKey, bool);
	FEX bool GetCapsLock() const;
	FUBI_DOC(GetCapsLock, "", "Returns true if caps lock is toggled, false otherwise.");
	FEX bool GetScrollLock() const;
	FUBI_DOC(GetScrollLock, "", "Returns true if scroll lock is toggled, false otherwise.");
	FEX bool GetNumLock() const;
	FUBI_DOC(GetNumLock, "", "Returns true if num lock is toggled, false otherwise.");
	FEX bool GetKey(int virtualKeyCode) const;
	FUBI_DOC(GetKey, "virtualKeyCode", "Returns true if the passed virtual key is down, false otherwise");
	$ConstMethod(0x00472d5c, GetLButton, bool);
	$ConstMethod(0x00472d69, GetMButton, bool);
	$ConstMethod(0x00472d76, GetRButton, bool);
	$ConstMethod(0x00472d83, GetXButton1, bool);
	$ConstMethod(0x00472d90, GetXButton2, bool);
	$ConstMethod(0x00502aaa, IsMouseFixed, bool);
	FEX float GetFrameRate() const;
	$ConstMethod(0x00428325, GetFilteredFrameRate, float);
	$ConstMethod(0x004282ae, GetNormalizedCursorX, float);
	$ConstMethod(0x004282b5, GetNormalizedCursorY, float);
	$ConstMethod(0x0044a307, GetCursorX, int);
	$ConstMethod(0x0044a30e, GetCursorY, int);
	FEX void RegisterForKeyEvent(int virtualKeyCode);
	FEX void UnregisterForKeyEvent(int virtualKeyCode);
	$Method(0x00424163, IsUserPaused, bool);
	$Method(0x00611516, UserPause, void, bool bShouldPause);
	$Method(0x00610ca8, RequestQuit, bool, bool bShouldQuit);

	enum Flags {
		MOUSE_FIXED = EnumFlag(29),
	};
	enum Flags2 {

	};
	enum KeyFlags {
		NONE		= CLEARED_FLAGS,
		SHIFT		= EnumFlag(1),
		CONTROL		= EnumFlag(2),
		ALT			= EnumFlag(3),
		SPECIAL		= EnumFlag(4),
		LBUTTON		= EnumFlag(8),
		MBUTTON		= EnumFlag(9),
		RBUTTON		= EnumFlag(10),
		XBUTTON_1	= EnumFlag(11),
		XBUTTON_2	= EnumFlag(12),
	};

protected:
    $Method(0x00610b45, SetInactive, void, bool flag);

public:
	// 0x000
	$Padding(0x000, 0x030);
	// 0x030
	int lowResolutionWidth;
	// 0x034
	int lowResolutionHeight;
	// 0x038
	Flags flags;
	// 0x03c
	Flags2 flags2;
	// 0x040
	$Padding(0x040, 0x064);
	// 0x064
	bool bIsActive;
    bool b065;
    bool b066;
    bool b067;
	// 0x068
	bool b068;
	bool userPaused;
	bool b06A;
	bool b06B;
	// 0x06c
	$Padding(0x06c, 0x074);
    // 0x074
    float gameSpeed;
    // 0x078
    $Padding(0x078, 0x08c);
	// 0x08c
	tagRECT screenRect1;
	// 0x09c
	tagRECT screenRect2;
	// 0x0ac
	tagRECT screenRect3;
	// 0x0bc
	$Padding(0x0bc, 0x0cc);
	// 0x0cc
	float frameRate;
	// 0x0d0
	float filteredFrameRate;
	// 0x0d4
	$Padding(0x0d4, 0x0fc);
	// 0x0fc
	KeyFlags keyFlags;
	// 0x100
	$Padding(0x100, 0x11c);
	// 0x11c
	int cursorX;
	// 0x120
	int cursorY;
	// 0x124
	$Padding(0x124, 0x144);
	// 0x144
	float normalizedCursorX;
	// 0x148
	float normalizedCursorY;

private:
    FEX bool GetAlwaysActive() const;
    FEX void SetAlwaysActive(bool value);
    FEX void ToggleAlwaysActive();
};

STATIC_ASSERT_OFFSETOF(AppModule, screenRect1, 0x08c);
STATIC_ASSERT_OFFSETOF(AppModule, keyFlags, 0x0fc);
STATIC_ASSERT_OFFSETOF(AppModule, normalizedCursorX, 0x144);
