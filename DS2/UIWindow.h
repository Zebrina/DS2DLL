#pragma once

class UIWindow {
public:
	DefineMethod(AddEventToAction, 0x77ef10, bool, Params(eUIMessage unk1, const gpbstring<char>& unk2), Args(eUIMessage unk1, const gpbstring<char>& unk2));
	DefineMethod(FUBI_RENAME_GetRollover, 0x503578, bool, Params(), Args());
	DefineMethod(FUBI_RENAME_LoadTexture, 0x503cc0, bool, Params(const char* unk1, bool unk2), Args(const char* unk1, bool unk2));
	DefineConstMethod(GetVisible, 0x4280d4, bool, Params(), Args());
	DefineConstMethod(HasGridBackground, 0x5026f0, bool, Params(), Args());
	DefineConstMethod(IsEnabled, 0x4d6620, bool, Params(), Args());
	DefineMethod(ReceiveMessage, 0x77d910, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineConstMethod(GetParentWindow, 0x456ceb, UIWindow*, Params(), Args());
	/*UIWindow*/ public: const gpbstring<char>& /*__thiscall*/ GetGroup() const; //0x00485bb5
	/*UIWindow*/ public: const gpbstring<char>& /*__thiscall*/ GetName() const; //0x00456cf6
	/*UIWindow*/ public: const gpbstring<char>& /*__thiscall*/ GetRolloverKey() const; //0x0077a450
	DefineConstMethod(GetDrawOrder, 0x5026e9, int, Params(), Args());
	DefineConstMethod(GetHeight, 0x77a400, int, Params(), Args());
	DefineConstMethod(GetPositionX, 0x472b3e, int, Params(), Args());
	DefineConstMethod(GetPositionY, 0x472b42, int, Params(), Args());
	DefineConstMethod(GetTag, 0x472b60, int, Params(), Args());
	DefineConstMethod(GetWidth, 0x77a3f0, int, Params(), Args());
	DefineMethod(FUBI_RENAME_ResizeToCurrentResolution, 0x5026d0, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
	DefineMethod(FUBI_RENAME_SetRect, 0x5026c7, void, Params(int unk1, int unk2, int unk3, int unk4, bool unk5), Args(int unk1, int unk2, int unk3, int unk4, bool unk5));
	DefineMethod(FUBI_RENAME_SetVisible, 0x5026d9, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(Resize, 0x77a160, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
	DefineMethod(SetAlpha, 0x472b67, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetAlphaEx, 0x77b260, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetEnabled, 0x77bda0, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetGroup, 0x503eeb, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetHasTexture, 0x46dc47, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetName, 0x47eb2f, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetPosition, 0x50269f, void, Params(int unk1, int unk2), Args(int unk1, int unk2));
	DefineMethod(SetRolloverKey, 0x77ce40, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetTag, 0x498435, void, Params(int unk1), Args(int unk1));
};
