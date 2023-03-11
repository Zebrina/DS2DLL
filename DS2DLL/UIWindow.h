#pragma once

#include "DS2DLL.h"
#include "Enums.h"
#include "GPString.h"
#include "GPMath.h"

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
	UIWindow(const UIWindow&) = delete;
	~UIWindow() = delete;

	UIWindow& operator=(const UIWindow&) = delete;

	$Method(0x0077ef10, AddEventToAction, bool, eUIMessage unk1, const GPBString& unk2);
	$Method(0x00503578, GetRollover, bool);
	$Method(0x00503cc0, LoadTexture, bool, const char* unk1, bool unk2);
	$ConstMethod(0x005026f0, HasGridBackground, bool);
	$ConstMethod(0x004d6620, IsEnabled, bool);
	$Method(0x0077d910, ReceiveMessage, bool, const GPBString& unk1);
	$ConstMethod(0x00456ceb, GetParentWindow, UIWindow*);
	$ConstMethod(0x00485bb5, GetGroup, const GPBString&);
	$ConstMethod(0x00456cf6, GetName, const GPBString&);
	$ConstMethod(0x0077a450, GetRolloverKey, const GPBString&);
	$ConstMethod(0x005026e9, GetDrawOrder, int);
    int GetPositionX() const;
    int GetPositionY() const;
    void SetPosition(int x, int y);
    int GetWidth() const;
    int GetHeight() const;
	$ConstMethod(0x00472b60, GetTag, int);
	//$Method(0x005026d0, ResizeToCurrentResolution, void, int width, int height);
	//$Method(0x005026c7, SetRect, void, int left, int top, int right, int bottom, bool unk5);
	//$Method(0x005026d9, SetVisible, void, bool visible);
	$Method(0x0077a160, Resize, void, int unk1, int unk2);
	$Method(0x00472b67, SetAlpha, void, float unk1);
	$Method(0x0077b260, SetAlphaEx, void, float unk1);
	$Method(0x0077bda0, SetEnabled, void, bool flag);
	$Method(0x00503eeb, SetGroup, void, const GPBString& unk1);
	$Method(0x0046dc47, SetHasTexture, void, bool unk1);
	$Method(0x0047eb2f, SetName, void, const GPBString& unk1);
	$Method(0x0077ce40, SetRolloverKey, void, const GPBString& unk1);
	$Method(0x00498435, SetTag, void, int unk1);
	$ConstMethod(0x004280d4, GetVisible, bool);

    // 0x00
    virtual void VF01();
	// 0x04
	virtual void VF02();
	// 0x08
	virtual void VF03();
	// 0x0c
	virtual bool VF04();
	// 0x10
	virtual int GetNumElements() const;
	// 0x14
	virtual int GetMaxActiveElements() const;
	// 0x18
	virtual int GetLeadElementIndex() const;
	// 0x1c
	virtual void SetLeadElementIndex(int index);
	// 0x20
	virtual int GetElementHeight() const;
	// 0x24
	virtual bool VF10_Get();
	// 0x28
	virtual void VF11_Set(bool flag);
	// 0x2c
	virtual void SetScrolling(bool flag);
	// 0x30
	virtual bool GetScrolling() const;
	// 0x34
	virtual void VF14();
	// 0x38
	virtual void VF15();
	// 0x3c
	virtual void VF16();
	// 0x40
	virtual void SetRect(int left, int right, int top, int bottom, bool);
	// 0x44
	virtual void VF18();
	// 0x48
	virtual void ResizeToCurrentResolution(int width, int height);
	// 0x4c
	virtual void VF20();
	// 0x50
	virtual void VF21();
	// 0x54
	// 0x0049befa
	// 0x0049bf2d
	virtual void SetVisible(bool visible);
	// 0x58
	virtual void VF23();
	// 0x5c
	virtual void VF24();
	// 0x60
	virtual void VF25();
	// 0x64
	virtual void VF26();
	// 0x68
	virtual void VF27();
	// 0x6c
	virtual void VF28();
	// 0x70
	virtual void VF29();

	// 0x000
	// vftbl
	// 0x004
	$Padding(0x004, 0x00c);
	// 0x00c
	bool bIsBottomAnchor;
	bool bIsRightAnchor;
	bool bIsLeftAnchor;
	bool bIsTopAnchor;
	// 0x010
	int bottomAnchor;
	// 0x014
	int rightAnchor;
	// 0x018
	int leftAnchor;
	// 0x01c
	int topAnchor;
	// 0x020
	$Padding(0x020, 0x060);
	// 0x060
	GRect rect;
	// 0x070
	$Padding(0x070, 0x084);
	// 0x084
	UIWindow* parentWindow;
	// 0x088
	GPBString layer;
	// 0x08c
	$Padding(0x08c, 0x09c);
	// 0x09c
	GPBString name;
	// 0x0a0
	GPBString group;
	// 0x0a4
	GPBString dockGroup;
	// 0x0a8
	$Padding(0x0a8, 0x0b0);
	// 0x0b0
	bool bVisible;
	bool b0B1;
	bool b0B2;
	bool b0B3;
	// 0x0b4
	$Padding(0x0b4, 0x0c4);
	// 0x0c4
	int drawOrder;
	// 0x0c8
	bool bHasTexture;
	bool b0C9;
	bool b0CA;
	bool b0CB;
	// 0x0cc
	$Padding(0x0cc, 0x0d0);
	// 0x0d0
	int index;
	// 0x0d4
	$Padding(0x0d4, 0x0dc);
	// 0x0dc
	bool b0DC;
	bool bRollover;
	bool b0DE;
	bool bHitDetect;
	// 0x0e0
	bool bConsumable;
	bool bEnabled;
	bool bWantsDraws;
	bool bHasBorder;
	// 0x0e4
    hexcolorcode borderColor;
	// 0x0e8
	int borderPadding;
	// 0x0ec
	$Padding(0x0ec, 0x0f0);
	// 0x0f0
	bool bBackgroundFill;
	bool bPassThrough;
	bool b0F2;
	bool b0F3;
	// 0x0f4
	int tag;
	// 0x0f8
	bool bStretchX;
	bool bStretchY;
	bool bCenterX;
	bool bCenterY;
	// 0x0fc
	bool b0FC;
	bool bTopMost;
	bool b0FE;
	bool b0FF;
	// 0x100
	$Padding(0x100, 0x108);
	// 0x108
	float rotatePointX;
	// 0x10c
	float rotatePointY;
	// 0x110
	$Padding(0x110, 0x114);
	// 0x114
	float rotateAngle;
	// 0x118
	bool bConsumeDoubleClick;
	bool bDraggable;
	bool b12A;
	bool b12B;
	// 0x11c
	$Padding(0x11c, 0x130);
	// 0x130
	int dragX;
	// 0x134
	int dragY;
	// 0x138
	$Padding(0x138, 0x13c);
	// 0x13c
    hexcolorcode dragMarqueeColor;
	// 0x140
	$Padding(0x140, 0x148);
	// 0x148
	bool b148;
	bool bRightFixed;
	bool bBottomFixed;
	bool bTopFixed;
	// 0x14c
	bool bLeftFixed;
	bool b14D;
	bool b14E;
	bool b14F;
	// 0x150
	$Padding(0x150, 0x160);
	// 0x160
	GPBString rolloverKey;
	// 0x164
	$Padding(0x164, 0x168);
	// 0x168
	bool bGridBackground;
	bool b169;
	bool b16A;
	bool b16B;
    // 0x16c
	bool bNormalizeResize;
	bool b16D;
	bool b16E;
	bool b16F;
};

STATIC_ASSERT(sizeof(UIWindow) == 0x170);
STATIC_ASSERT_OFFSETOF(UIWindow, bIsBottomAnchor, 0x00c);
STATIC_ASSERT_OFFSETOF(UIWindow, rect, 0x060);
STATIC_ASSERT_OFFSETOF(UIWindow, parentWindow, 0x084);
STATIC_ASSERT_OFFSETOF(UIWindow, name, 0x09c);
STATIC_ASSERT_OFFSETOF(UIWindow, bVisible, 0x0b0);
STATIC_ASSERT_OFFSETOF(UIWindow, drawOrder, 0x0c4);
STATIC_ASSERT_OFFSETOF(UIWindow, tag, 0x0f4);
STATIC_ASSERT_OFFSETOF(UIWindow, bTopMost, 0x0fd);
STATIC_ASSERT_OFFSETOF(UIWindow, rotatePointX, 0x108);
STATIC_ASSERT_OFFSETOF(UIWindow, dragX, 0x130);
STATIC_ASSERT_OFFSETOF(UIWindow, dragMarqueeColor, 0x13c);
STATIC_ASSERT_OFFSETOF(UIWindow, rolloverKey, 0x160);
STATIC_ASSERT_OFFSETOF(UIWindow, bGridBackground, 0x168);

$Function(0x007aded0, QueryDerivedButton, UIButton*, UIWindow* uiWindow);
$Function(0x007ae0b0, QueryDerivedChatBox, UIChatBox*, UIWindow* uiWindow);
$Function(0x007adef0, QueryDerivedCheckbox, UICheckbox*, UIWindow* uiWindow);
$Function(0x007adf10, QueryDerivedComboBox, UIComboBox*, UIWindow* uiWindow);
$Function(0x007adf30, QueryDerivedEditBox, UIEditBox*, UIWindow* uiWindow);
$Function(0x007adf50, QueryDerivedGridbox, UIGridbox*, UIWindow* uiWindow);
$Function(0x007ae050, QueryDerivedInfoSlot, UIInfoSlot*, UIWindow* uiWindow);
$Function(0x007ae070, QueryDerivedItemSlot, UIItemSlot*, UIWindow* uiWindow);
$Function(0x007adf70, QueryDerivedListbox, UIListbox*, UIWindow* uiWindow);
$Function(0x007ae010, QueryDerivedListReport, UIListReport*, UIWindow* uiWindow);
$Function(0x007adff0, QueryDerivedObjectView, UIObjectView*, UIWindow* uiWindow);
$Function(0x007ae030, QueryDerivedPopupMenu, UIPopupMenu*, UIWindow* uiWindow);
$Function(0x007adf90, QueryDerivedRadioButton, UIRadioButton*, UIWindow* uiWindow);
$Function(0x007ae090, QueryDerivedSlider, UISlider*, UIWindow* uiWindow);
$Function(0x007ae0d0, QueryDerivedTab, UITab*, UIWindow* uiWindow);
$Function(0x007adfb0, QueryDerivedText, UIText*, UIWindow* uiWindow);
$Function(0x007adfd0, QueryDerivedTextBox, UITextBox*, UIWindow* uiWindow);
