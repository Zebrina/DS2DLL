#pragma once

#include "ClassMacros.h"

class UIShell {
public:
	DefineSingleton(UIShell, 0x503586);

	/*UIShell*/ private: /*static*/ UIShell* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00503586
	/*UIShell*/ private: void /*__thiscall*/ EnableGroup(const char* unk1, bool unk2, bool unk3, const char* unk4); //0x00742a10
	/*UIShell*/ private: void /*__thiscall*/ SendNotify(const char* unk1, const char* unk2, const char* unk3); //0x00742900
	/*UIShell*/ public: bool /*__thiscall*/ ActivateInterface(const gpbstring<char>& unk1, bool unk2, float unk3); //0x0074d860
	/*UIShell*/ public: bool /*__thiscall*/ ActivateInterface(const gpbstring<char>& unk1, bool unk2); //0x00456d5f
	/*UIShell*/ public: bool /*__thiscall*/ AddChildInterfaceToInterface(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074ce70
	/*UIShell*/ public: bool /*__thiscall*/ AddInterfaceLayer(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074d910
	/*UIShell*/ public: bool /*__thiscall*/ DeleteUIWindow(UIWindow* unk1); //0x00745490
	/*UIShell*/ public: bool /*__thiscall*/ DoWindowsOverlap(UIWindow* unk1, UIWindow* unk2); //0x0073d1e0
	/*UIShell*/ public: bool /*__thiscall*/ DoWindowsOverlap(const char* unk1, const char* unk2, const char* unk3, const char* unk4); //0x00742f10
	/*UIShell*/ public: bool /*__thiscall*/ GetGridPlace(); //0x00485de5
	/*UIShell*/ public: bool /*__thiscall*/ GetGuiDisabled() const; //0x00502a0f
	/*UIShell*/ public: bool /*__thiscall*/ GetItemActive(); //0x00467c12
	/*UIShell*/ public: bool /*__thiscall*/ GetLButtonDown() const; //0x00502a5c
	/*UIShell*/ public: bool /*__thiscall*/ GetRButtonDown() const; //0x00502a73
	/*UIShell*/ public: bool /*__thiscall*/ GetVisible() const; //0x004281b2
	/*UIShell*/ public: bool /*__thiscall*/ IsInterfaceActive(const gpbstring<char>& unk1); //0x0073f300
	/*UIShell*/ public: bool /*__thiscall*/ IsInterfaceHidden(const gpbstring<char>& unk1); //0x00740150
	/*UIShell*/ public: bool /*__thiscall*/ IsInterfaceMarkedForDeactivation(const gpbstring<char>& unk1); //0x007414d0
	/*UIShell*/ public: bool /*__thiscall*/ IsInterfaceVisible(const gpbstring<char>& unk1); //0x0073f910
	/*UIShell*/ public: bool /*__thiscall*/ PlaceInterfaceOnBottom(const char* unk1); //0x00502a31
	/*UIShell*/ public: bool /*__thiscall*/ PlaceInterfaceOnBottom(GUInterface* unk1); //0x00749bc0
	/*UIShell*/ public: bool /*__thiscall*/ PlaceInterfaceOnTop(const char* unk1); //0x00502a16
	/*UIShell*/ public: bool /*__thiscall*/ PlaceInterfaceOnTop(GUInterface* unk1); //0x00749b60
	/*UIShell*/ public: bool /*__thiscall*/ SendUIMessage(eUIMessage unk1, const char* unk2, const char* unk3); //0x00742b60
	/*UIShell*/ public: bool /*__thiscall*/ SendUIMessage(eUIMessage unk1, const char* unk2); //0x005029fb
	/*UIShell*/ public: bool /*__thiscall*/ SendUIMessageToInterface(eUIMessage unk1, const char* unk2); //0x00740340
	/*UIShell*/ public: bool /*__thiscall*/ SetInterfaceDrawOrder(GUInterface* unk1, int unk2); //0x00748300
	/*UIShell*/ public: bool /*__thiscall*/ UnMarkInterfaceForDeactivation(const gpbstring<char>& unk1); //0x00741500
	/*UIShell*/ public: bool /*__thiscall*/ UpdateWindowDrawOrder(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x00748d40
	/*UIShell*/ public: UICursor* /*__thiscall*/ GetActiveCursor(); //0x004281c5
	/*UIShell*/ public: UICursor* /*__thiscall*/ LoadUICursor(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x00742ef0
	/*UIShell*/ public: UIWindow* /*__thiscall*/ CreateUIWindow(const char* unk1, const char* unk2, const char* unk3); //0x0074cf20
	/*UIShell*/ public: UIWindow* /*__thiscall*/ FindUIWindow(const char* unk1, const char* unk2, eUIWindowExistanceState unk3); //0x00742200
	/*UIShell*/ public: UIWindow* /*__thiscall*/ FindUIWindow(const char* unk1, const char* unk2); //0x0041041c
	/*UIShell*/ public: UIWindow* /*__thiscall*/ FindUIWindow(const char* unk1, eUIWindowExistanceState unk2); //0x0044a2d7
	/*UIShell*/ public: UIWindow* /*__thiscall*/ FindUIWindow(const char* unk1); //0x00485dbb
	/*UIShell*/ public: const gpbstring<char>& /*__thiscall*/ GetRolloverName(); //0x004a45b5
	/*UIShell*/ public: int /*__thiscall*/ GetActiveItemId(); //0x0073f5f0
	/*UIShell*/ public: int /*__thiscall*/ GetMouseX() const; //0x00472c78
	/*UIShell*/ public: int /*__thiscall*/ GetMouseY() const; //0x00472c7f
	/*UIShell*/ public: int /*__thiscall*/ GetNumActiveItems(const gpbstring<char>& unk1); //0x0073d170
	/*UIShell*/ public: int /*__thiscall*/ GetScreenHeight() const; //0x0043d831
	/*UIShell*/ public: int /*__thiscall*/ GetScreenWidth() const; //0x0043d82d
	/*UIShell*/ public: GUInterface* /*__thiscall*/ FindInterface(const char* unk1); //0x00740320
	/*UIShell*/ public: unsigned long /*__thiscall*/ GetCommunicationGoid(const char* unk1); //0x007403b0
	/*UIShell*/ public: void /*__thiscall*/ AddActiveItem(UIWindow* unk1); //0x00746c10
	/*UIShell*/ public: void /*__thiscall*/ AddBlankInterface(const gpbstring<char>& unk1); //0x0074a8e0
	/*UIShell*/ public: void /*__thiscall*/ AddWindowToInterface(UIWindow* unk1, const gpbstring<char>& unk2, bool unk3); //0x0074b5a0
	/*UIShell*/ public: void /*__thiscall*/ ClearActiveItems(); //0x00477e0b
	/*UIShell*/ public: void /*__thiscall*/ DeactivateInterface(const gpbstring<char>& unk1); //0x0074d440
	/*UIShell*/ public: void /*__thiscall*/ DeactivateInterfaceWindows(const gpbstring<char>& unk1); //0x0074a2c0
	/*UIShell*/ public: void /*__thiscall*/ HideGroup(const char* unk1, bool unk2, const char* unk3); //0x00744c50
	/*UIShell*/ public: void /*__thiscall*/ HideInterface(const gpbstring<char>& unk1, float unk2); //0x00741f90
	/*UIShell*/ public: void /*__thiscall*/ HideInterface(const gpbstring<char>& unk1); //0x0040131a
	/*UIShell*/ public: void /*__thiscall*/ MarkInterfaceForActivation(const gpbstring<char>& unk1, bool unk2); //0x0074c850
	/*UIShell*/ public: void /*__thiscall*/ MarkInterfaceForDeactivation(const gpbstring<char>& unk1); //0x0074a3a0
	/*UIShell*/ public: void /*__thiscall*/ MoveWindowsFromLayerToLayer(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x00749c00
	/*UIShell*/ public: void /*__thiscall*/ PlayUISound(const gpbstring<char>& unk1); //0x0073d230
	/*UIShell*/ public: void /*__thiscall*/ RemoveActiveItem(UIWindow* unk1); //0x00744ca0
	/*UIShell*/ public: void /*__thiscall*/ RemoveInterfaceLayer(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074aa90
	/*UIShell*/ public: void /*__thiscall*/ SetActiveCursor(UICursor* unk1); //0x00502a4c
	/*UIShell*/ public: void /*__thiscall*/ SetCommunicationGoid(const char* unk1, unsigned long unk2); //0x007403e0
	/*UIShell*/ public: void /*__thiscall*/ SetGridPlace(bool unk1); //0x00472c86
	/*UIShell*/ public: void /*__thiscall*/ SetGuiDisabled(bool unk1, float unk2); //0x0073f2b0
	/*UIShell*/ public: void /*__thiscall*/ SetLButtonDown(bool unk1); //0x00502a63
	/*UIShell*/ public: void /*__thiscall*/ SetMouseX(int unk1); //0x00502a8a
	/*UIShell*/ public: void /*__thiscall*/ SetMouseY(int unk1); //0x00502a9a
	/*UIShell*/ public: void /*__thiscall*/ SetRButtonDown(bool unk1); //0x00502a7a
	/*UIShell*/ public: void /*__thiscall*/ SetRolloverName(const gpbstring<char>& unk1); //0x00470344
	/*UIShell*/ public: void /*__thiscall*/ SetVisible(bool unk1); //0x004281a2
	/*UIShell*/ public: void /*__thiscall*/ ShiftGroup(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3, int unk4); //0x00749ad0
	/*UIShell*/ public: void /*__thiscall*/ ShiftInterface(const gpbstring<char>& unk1, int unk2, int unk3); //0x00749950
	/*UIShell*/ public: void /*__thiscall*/ ShowGroup(const char* unk1, bool unk2, const char* unk3); //0x00744c30
	/*UIShell*/ public: void /*__thiscall*/ ShowInterface(const gpbstring<char>& unk1, float unk2); //0x00741e90
	/*UIShell*/ public: void /*__thiscall*/ ShowInterface(const gpbstring<char>& unk1); //0x00401305
	/*UIShell*/ public: void /*__thiscall*/ ShowInterfaceOnTop(const gpbstring<char>& unk1, float unk2); //0x0074d520
	/*UIShell*/ public: void /*__thiscall*/ ShowInterfaceOnTop(const gpbstring<char>& unk1); //0x0049b60c
};
