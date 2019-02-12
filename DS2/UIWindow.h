#pragma once

class UIWindow {
public:
	/*UIWindow*/ public: bool /*__thiscall*/ AddEventToAction(eUIMessage unk1, const gpbstring<char>& unk2); //0x0077ef10
	/*UIWindow*/ public: bool /*__thiscall*/ FUBI_RENAME_GetRollover(); //0x00503578
	/*UIWindow*/ public: bool /*__thiscall*/ FUBI_RENAME_LoadTexture(const char* unk1, bool unk2); //0x00503cc0
	/*UIWindow*/ public: bool /*__thiscall*/ GetVisible() const; //0x004280d4
	/*UIWindow*/ public: bool /*__thiscall*/ HasGridBackground() const; //0x005026f0
	/*UIWindow*/ public: bool /*__thiscall*/ IsEnabled() const; //0x004d6620
	/*UIWindow*/ public: bool /*__thiscall*/ ReceiveMessage(const gpbstring<char>& unk1); //0x0077d910
	/*UIWindow*/ public: UIWindow* /*__thiscall*/ GetParentWindow() const; //0x00456ceb
	/*UIWindow*/ public: const gpbstring<char>& /*__thiscall*/ GetGroup() const; //0x00485bb5
	/*UIWindow*/ public: const gpbstring<char>& /*__thiscall*/ GetName() const; //0x00456cf6
	/*UIWindow*/ public: const gpbstring<char>& /*__thiscall*/ GetRolloverKey() const; //0x0077a450
	/*UIWindow*/ public: int /*__thiscall*/ GetDrawOrder() const; //0x005026e9
	/*UIWindow*/ public: int /*__thiscall*/ GetHeight() const; //0x0077a400
	/*UIWindow*/ public: int /*__thiscall*/ GetPositionX() const; //0x00472b3e
	/*UIWindow*/ public: int /*__thiscall*/ GetPositionY() const; //0x00472b42
	/*UIWindow*/ public: int /*__thiscall*/ GetTag() const; //0x00472b60
	/*UIWindow*/ public: int /*__thiscall*/ GetWidth() const; //0x0077a3f0
	/*UIWindow*/ public: void /*__thiscall*/ FUBI_RENAME_ResizeToCurrentResolution(int unk1, int unk2); //0x005026d0
	/*UIWindow*/ public: void /*__thiscall*/ FUBI_RENAME_SetRect(int unk1, int unk2, int unk3, int unk4, bool unk5); //0x005026c7
	/*UIWindow*/ public: void /*__thiscall*/ FUBI_RENAME_SetVisible(bool unk1); //0x005026d9
	/*UIWindow*/ public: void /*__thiscall*/ Resize(int unk1, int unk2); //0x0077a160
	/*UIWindow*/ public: void /*__thiscall*/ SetAlpha(float unk1); //0x00472b67
	/*UIWindow*/ public: void /*__thiscall*/ SetAlphaEx(float unk1); //0x0077b260
	/*UIWindow*/ public: void /*__thiscall*/ SetEnabled(bool unk1); //0x0077bda0
	/*UIWindow*/ public: void /*__thiscall*/ SetGroup(const gpbstring<char>& unk1); //0x00503eeb
	/*UIWindow*/ public: void /*__thiscall*/ SetHasTexture(bool unk1); //0x0046dc47
	/*UIWindow*/ public: void /*__thiscall*/ SetName(const gpbstring<char>& unk1); //0x0047eb2f
	/*UIWindow*/ public: void /*__thiscall*/ SetPosition(int unk1, int unk2); //0x0050269f
	/*UIWindow*/ public: void /*__thiscall*/ SetRolloverKey(const gpbstring<char>& unk1); //0x0077ce40
	/*UIWindow*/ public: void /*__thiscall*/ SetTag(int unk1); //0x00498435
};
