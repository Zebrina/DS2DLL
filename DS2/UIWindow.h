#pragma once

#include "ClassMacros.h"

class UIButton;
class UIChatBox;
class UICheckbox;
class UIComboBox;
class UIEditBox;
class UIGridbox;
class UIInfoSlot;
class UIItemSlot;
class UIListbox;
class UIListReport;
class UIObjectView;
class UIPopupMenu;
class UIRadioButton;
class UISlider;
class UITab;
class UIText;
class UITextBox;

class UIWindow {
public:
	DefineMethod(AddEventToAction, 0x77ef10, bool, Params(eUIMessage unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(FUBI_RENAME_GetRollover, 0x503578, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_LoadTexture, 0x503cc0, bool, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineConstMethod(GetVisible, 0x4280d4, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(HasGridBackground, 0x5026f0, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsEnabled, 0x4d6620, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(ReceiveMessage, 0x77d910, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetParentWindow, 0x456ceb, UIWindow*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGroup, 0x485bb5, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetName, 0x456cf6, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetRolloverKey, 0x77a450, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetDrawOrder, 0x5026e9, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetHeight, 0x77a400, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPositionX, 0x472b3e, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetPositionY, 0x472b42, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTag, 0x472b60, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetWidth, 0x77a3f0, int, NO_PARAMS, NO_ARGS);
	DefineMethod(FUBI_RENAME_ResizeToCurrentResolution, 0x5026d0, void, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(FUBI_RENAME_SetRect, 0x5026c7, void, Params(int unk1, int unk2, int unk3, int unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(FUBI_RENAME_SetVisible, 0x5026d9, void, Params(bool unk1), Args(unk1));
	DefineMethod(Resize, 0x77a160, void, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SetAlpha, 0x472b67, void, Params(float unk1), Args(unk1));
	DefineMethod(SetAlphaEx, 0x77b260, void, Params(float unk1), Args(unk1));
	DefineMethod(SetEnabled, 0x77bda0, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetGroup, 0x503eeb, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetHasTexture, 0x46dc47, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetName, 0x47eb2f, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetPosition, 0x50269f, void, Params(int unk1, int unk2), Args(unk1, unk2));
	DefineMethod(SetRolloverKey, 0x77ce40, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetTag, 0x498435, void, Params(int unk1), Args(unk1));

	// WIP

	// 0x00
	FillStruct(0x00, 0x60);
	// 0x60
	int left;
	// 0x64
	int right;
	// 0x68
	int right;
	// 0x6c
	int bottom;
	FillStruct(0x6c, 0x84);
	// 0x84
	UIWindow* parentWindow;
	// 0x88
	FillStruct(0x88, 0x9c);
	gpbstring<char> name;
	// 0xb0
	bool visible;
	// 0xb1
	FillStruct(0xb1, 0xc4);
	// 0xc4
	int drawOrder;
	// 0xc8
	FillStruct(0xc8, 0xe1);
	// 0xe1
	bool enabled;
	// 0xe2
	FillStruct(0xe2, 0xf4);
	// 0xf4
	int tag;
};

DefineFunction(QueryDerivedButton, 0x7aded0, UIButton*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedChatBox, 0x7ae0b0, UIChatBox*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedCheckbox, 0x7adef0, UICheckbox*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedComboBox, 0x7adf10, UIComboBox*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedEditBox, 0x7adf30, UIEditBox*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedGridbox, 0x7adf50, UIGridbox*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedInfoSlot, 0x7ae050, UIInfoSlot*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedItemSlot, 0x7ae070, UIItemSlot*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedListbox, 0x7adf70, UIListbox*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedListReport, 0x7ae010, UIListReport*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedObjectView, 0x7adff0, UIObjectView*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedPopupMenu, 0x7ae030, UIPopupMenu*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedRadioButton, 0x7adf90, UIRadioButton*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedSlider, 0x7ae090, UISlider*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedTab, 0x7ae0d0, UITab*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedText, 0x7adfb0, UIText*, Params(UIWindow* unk1), Args(unk1));
DefineFunction(QueryDerivedTextBox, 0x7adfd0, UITextBox*, Params(UIWindow* unk1), Args(unk1));
