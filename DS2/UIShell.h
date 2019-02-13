#pragma once

#include "ClassMacros.h"

class UIShell {
public:
	DefineSingleton(UIShell, 0x503586);

	/*UIShell*/ private: /*static*/ UIShell* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00503586
	DefineMethod(EnableGroup, 0x742a10, void, Params(const char* unk1, bool unk2, bool unk3, const char* unk4), Args(const char* unk1, bool unk2, bool unk3, const char* unk4));
	DefineMethod(SendNotify, 0x742900, void, Params(const char* unk1, const char* unk2, const char* unk3), Args(const char* unk1, const char* unk2, const char* unk3));
	DefineMethod(ActivateInterface, 0x74d860, bool, Params(const gpbstring<char>& unk1, bool unk2, float unk3), Args(const gpbstring<char>& unk1, bool unk2, float unk3));
	DefineMethod(ActivateInterface, 0x456d5f, bool, Params(const gpbstring<char>& unk1, bool unk2), Args(const gpbstring<char>& unk1, bool unk2));
	DefineMethod(AddChildInterfaceToInterface, 0x74ce70, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(AddInterfaceLayer, 0x74d910, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(DeleteUIWindow, 0x745490, bool, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineMethod(DoWindowsOverlap, 0x73d1e0, bool, Params(UIWindow* unk1, UIWindow* unk2), Args(UIWindow* unk1, UIWindow* unk2));
	DefineMethod(DoWindowsOverlap, 0x742f10, bool, Params(const char* unk1, const char* unk2, const char* unk3, const char* unk4), Args(const char* unk1, const char* unk2, const char* unk3, const char* unk4));
	DefineMethod(GetGridPlace, 0x485de5, bool, Params(), Args());
	DefineConstMethod(GetGuiDisabled, 0x502a0f, bool, Params(), Args());
	DefineMethod(GetItemActive, 0x467c12, bool, Params(), Args());
	DefineConstMethod(GetLButtonDown, 0x502a5c, bool, Params(), Args());
	DefineConstMethod(GetRButtonDown, 0x502a73, bool, Params(), Args());
	DefineConstMethod(GetVisible, 0x4281b2, bool, Params(), Args());
	DefineMethod(IsInterfaceActive, 0x73f300, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(IsInterfaceHidden, 0x740150, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(IsInterfaceMarkedForDeactivation, 0x7414d0, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(IsInterfaceVisible, 0x73f910, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(PlaceInterfaceOnBottom, 0x502a31, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(PlaceInterfaceOnBottom, 0x749bc0, bool, Params(GUInterface* unk1), Args(GUInterface* unk1));
	DefineMethod(PlaceInterfaceOnTop, 0x502a16, bool, Params(const char* unk1), Args(const char* unk1));
	DefineMethod(PlaceInterfaceOnTop, 0x749b60, bool, Params(GUInterface* unk1), Args(GUInterface* unk1));
	DefineMethod(SendUIMessage, 0x742b60, bool, Params(eUIMessage unk1, const char* unk2, const char* unk3), Args(eUIMessage unk1, const char* unk2, const char* unk3));
	DefineMethod(SendUIMessage, 0x5029fb, bool, Params(eUIMessage unk1, const char* unk2), Args(eUIMessage unk1, const char* unk2));
	DefineMethod(SendUIMessageToInterface, 0x740340, bool, Params(eUIMessage unk1, const char* unk2), Args(eUIMessage unk1, const char* unk2));
	DefineMethod(SetInterfaceDrawOrder, 0x748300, bool, Params(GUInterface* unk1, int unk2), Args(GUInterface* unk1, int unk2));
	DefineMethod(UnMarkInterfaceForDeactivation, 0x741500, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(UpdateWindowDrawOrder, 0x748d40, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3));
	DefineMethod(GetActiveCursor, 0x4281c5, UICursor*, Params(), Args());
	DefineMethod(LoadUICursor, 0x742ef0, UICursor*, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(CreateUIWindow, 0x74cf20, UIWindow*, Params(const char* unk1, const char* unk2, const char* unk3), Args(const char* unk1, const char* unk2, const char* unk3));
	DefineMethod(FindUIWindow, 0x742200, UIWindow*, Params(const char* unk1, const char* unk2, eUIWindowExistanceState unk3), Args(const char* unk1, const char* unk2, eUIWindowExistanceState unk3));
	DefineMethod(FindUIWindow, 0x41041c, UIWindow*, Params(const char* unk1, const char* unk2), Args(const char* unk1, const char* unk2));
	DefineMethod(FindUIWindow, 0x44a2d7, UIWindow*, Params(const char* unk1, eUIWindowExistanceState unk2), Args(const char* unk1, eUIWindowExistanceState unk2));
	DefineMethod(FindUIWindow, 0x485dbb, UIWindow*, Params(const char* unk1), Args(const char* unk1));
	/*UIShell*/ public: const gpbstring<char>& /*__thiscall*/ GetRolloverName(); //0x004a45b5
	DefineMethod(GetActiveItemId, 0x73f5f0, int, Params(), Args());
	DefineConstMethod(GetMouseX, 0x472c78, int, Params(), Args());
	DefineConstMethod(GetMouseY, 0x472c7f, int, Params(), Args());
	DefineMethod(GetNumActiveItems, 0x73d170, int, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineConstMethod(GetScreenHeight, 0x43d831, int, Params(), Args());
	DefineConstMethod(GetScreenWidth, 0x43d82d, int, Params(), Args());
	DefineMethod(FindInterface, 0x740320, GUInterface*, Params(const char* unk1), Args(const char* unk1));
	/*UIShell*/ public: unsigned long /*__thiscall*/ GetCommunicationGoid(const char* unk1); //0x007403b0
	DefineMethod(AddActiveItem, 0x746c10, void, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineMethod(AddBlankInterface, 0x74a8e0, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(AddWindowToInterface, 0x74b5a0, void, Params(UIWindow* unk1, const gpbstring<char>& unk2, bool unk3), Args(UIWindow* unk1, const gpbstring<char>& unk2, bool unk3));
	DefineMethod(ClearActiveItems, 0x477e0b, void, Params(), Args());
	DefineMethod(DeactivateInterface, 0x74d440, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(DeactivateInterfaceWindows, 0x74a2c0, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(HideGroup, 0x744c50, void, Params(const char* unk1, bool unk2, const char* unk3), Args(const char* unk1, bool unk2, const char* unk3));
	DefineMethod(HideInterface, 0x741f90, void, Params(const gpbstring<char>& unk1, float unk2), Args(const gpbstring<char>& unk1, float unk2));
	DefineMethod(HideInterface, 0x40131a, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(MarkInterfaceForActivation, 0x74c850, void, Params(const gpbstring<char>& unk1, bool unk2), Args(const gpbstring<char>& unk1, bool unk2));
	DefineMethod(MarkInterfaceForDeactivation, 0x74a3a0, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(MoveWindowsFromLayerToLayer, 0x749c00, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3));
	DefineMethod(PlayUISound, 0x73d230, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(RemoveActiveItem, 0x744ca0, void, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineMethod(RemoveInterfaceLayer, 0x74aa90, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2));
	DefineMethod(SetActiveCursor, 0x502a4c, void, Params(UICursor* unk1), Args(UICursor* unk1));
	DefineMethod(SetCommunicationGoid, 0x7403e0, void, Params(const char* unk1, unsigned long unk2), Args(const char* unk1, unsigned long unk2));
	DefineMethod(SetGridPlace, 0x472c86, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetGuiDisabled, 0x73f2b0, void, Params(bool unk1, float unk2), Args(bool unk1, float unk2));
	DefineMethod(SetLButtonDown, 0x502a63, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetMouseX, 0x502a8a, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetMouseY, 0x502a9a, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetRButtonDown, 0x502a7a, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetRolloverName, 0x470344, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetVisible, 0x4281a2, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(ShiftGroup, 0x749ad0, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3, int unk4), Args(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3, int unk4));
	DefineMethod(ShiftInterface, 0x749950, void, Params(const gpbstring<char>& unk1, int unk2, int unk3), Args(const gpbstring<char>& unk1, int unk2, int unk3));
	DefineMethod(ShowGroup, 0x744c30, void, Params(const char* unk1, bool unk2, const char* unk3), Args(const char* unk1, bool unk2, const char* unk3));
	DefineMethod(ShowInterface, 0x741e90, void, Params(const gpbstring<char>& unk1, float unk2), Args(const gpbstring<char>& unk1, float unk2));
	DefineMethod(ShowInterface, 0x401305, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(ShowInterfaceOnTop, 0x74d520, void, Params(const gpbstring<char>& unk1, float unk2), Args(const gpbstring<char>& unk1, float unk2));
	DefineMethod(ShowInterfaceOnTop, 0x49b60c, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
};
