#pragma once



class AppModule {
public:
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
	DefineConstMethod(GetFilteredFrameRate, 0x428325, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNormalizedCursorX, 0x4282ae, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNormalizedCursorY, 0x4282b5, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCursorX, 0x44a307, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCursorY, 0x44a30e, int, NO_PARAMS, NO_ARGS);
	/**
	* Returns true if the player has paused the game.
	*/
	DefineMethod(IsUserPaused, 0x424163, bool, NO_PARAMS, NO_ARGS);
	/**
	* Pauses the game. Same effect as the player pressing the spacebar.
	* @param bShouldPause True to pause the game, false to unpause it.
	*/
	DefineMethod(UserPause, 0x611516, void, Params(bool bShouldPause), Args(bShouldPause));
	/**
	* Requests a quit to desktop without user prompt.
	* @param bShouldQuit True to quit the game.
	*/
	DefineMethod(RequestQuit, 0x610ca8, bool, Params(bool bShouldQuit), Args(bShouldQuit));

private:
	// ??
	bool altKey;
	// ??
	bool controlKey;
	// ??
	int cursorX;
	// ??
	int cursorY;
	// ??
	float filteredFrameRate;
	// ??
	bool lButton;
	// ??
	bool mButton;
	// ??
	float normalizedCursorX;
	// ??
	float normalizedCursorY;
	// ??
	bool rButton;
	// ??
	bool shiftKey;
	// ??
	bool specialKey;
	// ??
	bool xButton1;
	// ??
	bool xButton2;
};
