#pragma once

#include "GPBString.h"
#include "GRect.h"

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
	UIWindow() = delete;
	~UIWindow();

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

	// 0x04
	virtual void vFunc_0x04();
	// 0x08
	virtual void vFunc_0x08();
	// 0x0c
	virtual void vFunc_0x0c();
	// 0x10
	virtual void vFunc_0x10();
	// 0x14
	virtual void vFunc_0x14();
	// 0x18
	virtual void vFunc_0x18();
	// 0x1c
	virtual void vFunc_0x1c();
	// 0x20
	virtual void vFunc_0x20();
	// 0x24
	virtual void vFunc_0x24();
	// 0x28
	virtual void vFunc_0x28();
	// 0x2c
	virtual void vFunc_0x2c();
	// 0x30
	virtual void vFunc_0x30();
	// 0x34
	virtual void vFunc_0x34();
	// 0x38
	virtual void vFunc_0x38();
	// 0x3c
	virtual void vFunc_0x3c();
	// 0x40
	virtual void vFunc_0x40();
	// 0x44
	virtual void vFunc_0x44();
	// 0x48
	virtual void vFunc_0x48();
	// 0x4c
	virtual void vFunc_0x4c();
	// 0x50
	virtual void vFunc_0x50();

	// 0x004
	FillStruct(0x004, 0x060);
	// 0x060
	GRect rect;
	// 0x070
	FillStruct(0x070, 0x084);
	// 0x084
	UIWindow* parentWindow;
	// 0x088
	FillStruct(0x088, 0x09c);
	// 0x09c
	gpbstring<char> name;
	// 0x0a0
	gpbstring<char> group;
	// 0x0a4
	FillStruct(0x0a4, 0x0b0);
	// 0x0b0
	bool visible;
	// 0x0b1
	FillStruct(0x0b1, 0x0c4);
	// 0x0c4
	int drawOrder;
	// 0x0c8
	FillStruct(0x0c8, 0x0dc);
	// 0x0dc
	bool bool_0dc;
	// 0x0dd
	bool rollover;
	// 0x0de
	bool b_0de;
	// 0x0df
	bool b_0df;
	// 0x0e0
	bool b_0e0;
	// 0x0e1
	bool enabled;
	// 0x0e2
	FillStruct(0x0e2, 0x0f4);
	// 0x0f4
	int tag;
	// 0x0f8
	FillStruct(0x0f8, 0x160);
	// 0x160
	gpbstring<char> rolloverKey;
	// 0x164
	FillStruct(0x164, 0x168);
	// 0x168
	bool gridBackground;
};

STATIC_ASSERT_SIZEOF(UIWindow, 0x16c);
STATIC_ASSERT_OFFSETOF(UIWindow, rect, 0x060);
STATIC_ASSERT_OFFSETOF(UIWindow, parentWindow, 0x084);
STATIC_ASSERT_OFFSETOF(UIWindow, name, 0x09c);
STATIC_ASSERT_OFFSETOF(UIWindow, visible, 0x0b0);
STATIC_ASSERT_OFFSETOF(UIWindow, drawOrder, 0x0c4);
STATIC_ASSERT_OFFSETOF(UIWindow, tag, 0x0f4);
STATIC_ASSERT_OFFSETOF(UIWindow, rolloverKey, 0x160);
STATIC_ASSERT_OFFSETOF(UIWindow, gridBackground, 0x168);

DefineFunction(QueryDerivedButton, 0x7aded0, UIButton*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedChatBox, 0x7ae0b0, UIChatBox*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedCheckbox, 0x7adef0, UICheckbox*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedComboBox, 0x7adf10, UIComboBox*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedEditBox, 0x7adf30, UIEditBox*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedGridbox, 0x7adf50, UIGridbox*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedInfoSlot, 0x7ae050, UIInfoSlot*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedItemSlot, 0x7ae070, UIItemSlot*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedListbox, 0x7adf70, UIListbox*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedListReport, 0x7ae010, UIListReport*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedObjectView, 0x7adff0, UIObjectView*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedPopupMenu, 0x7ae030, UIPopupMenu*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedRadioButton, 0x7adf90, UIRadioButton*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedSlider, 0x7ae090, UISlider*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedTab, 0x7ae0d0, UITab*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedText, 0x7adfb0, UIText*, Params(UIWindow* uiWindow), Args(uiWindow));
DefineFunction(QueryDerivedTextBox, 0x7adfd0, UITextBox*, Params(UIWindow* uiWindow), Args(uiWindow));
