#pragma once

#include "GPString.h"
#include "UIItem.h"
#include "UIWindow.h"
#include "UITextBox.h"

class UIGridbox : public UIWindow {
public:
	DeclareVirtualNoConstructorDestructor(UIGridbox);

	$Method(0x0078c620, GetTextBox, UITextBox*);
	$Method(0x0078c650, GetTextBackground, UIWindow*); // Exported as GetTextBg
	$ConstMethod(0x005027d2, GetIgnoreItem, bool);
	$Method(0x00485c5e, SetIgnoreItem, void, bool value);
	$Method(0x0050275c, SetOriginalBoxWidth, void, int width);
	$Method(0x00502741, SetOriginalBoxHeight, void, int height);
	$ConstMethod(0x0050277c, GetBoxWidth, int);
	$Method(0x0050276c, SetBoxWidth, void, int width);
	$ConstMethod(0x00502751, GetBoxHeight, int);
	$Method(0x00502731, SetBoxHeight, void, int height);
	$ConstMethod(0x00502713, GetRows, int);
	$Method(0x00502703, SetRows, void, int rows);
	$ConstMethod(0x0050272a, GetColumns, int);
	$Method(0x0050271a, SetColumns, void, int columns);
	$ConstMethod(0x00485c20, GetStore, bool);
	$Method(0x0050278e, SetStore, void, bool value);
	$ConstMethod(0x005027bb, GetContinuePickup, bool);
	$Method(0x00485c27, SetContinuePickup, void, bool value);
	$ConstMethod(0x004cffc9, GetAutoTransfer, bool);
	$Method(0x005027c2, SetAutoTransfer, void, bool value);
	$ConstMethod(0x005027e9, GetConsumesItems, bool);
	$Method(0x005027d9, SetConsumesItems, void, bool value);
	$ConstMethod(0x005027f0, GetDeactivateOverlapped, bool);
	$Method(0x00485c8e, SetDeactivateOverlapped, void, bool value);
	$ConstMethod(0x00485c9e, GetLocalPlace, bool);
	$Method(0x005027f7, SetLocalPlace, void, bool value);
	$ConstMethod(0x00502817, GetAutoPlaceNotify, bool);
	$Method(0x00502807, SetAutoPlaceNotify, void, bool value);
	$Method(0x005027a4, GetRequestPickup, bool);
	$Method(0x005027ab, SetRequestPickup, void, bool value);
	$ConstMethod(0x0050282e, GetColor, hexcolorcode);
	$Method(0x0050281e, SetColor, void, hexcolorcode color);

	$Method(0x00485c37, SetItemDetect, void, bool value);

	$Method(0x0078da50, GetFullRatio, float);
	$Method(0x00792c50, AutoSort, void);
	$Method(0x007934d0, SortForSpace, bool, UIItem* item);

	// Very strange offsets.
	//$ConstMethod(0x00502787, GetGridType, const GPBString&);
	//$Method(0x00503f04, SetGridType, void, const GPBString& unk1);

	// 079630E
	// 0x170
	UITextBox* textBox;
	// 0x174
	UIWindow* textBackground;
	// 0x178
	$Padding(0x178, 0x17c);
	// 0x17c
	bool bIgnoreItem;
	bool b17D;
	bool b17E;
	bool b17F;
	// 0x180
	float originalBoxWidth;
	// 0x184
	float originalBoxHeight;
	// 0x188
	float boxWidth;
	// 0x18c
	float boxHeight;
	// 0x190
	int rows;
	// 0x194
	int columns;
	// 0x198
	$Padding(0x198, 0x1bc);
	// 0x1bc
	bool bStore;
	bool bContinuesPickup;
	bool bAutoTransfer;
	bool b1BF;
	// 0x1c0
	$Padding(0x1c0, 0x1d0);
	// 0x1d0
	bool bConsumesItems;
	bool b1D1;
	bool b1D2;
	bool b1D3;
	// 0x1d4
	$Padding(0x1d4, 0x1d8);
	// 0x1d8
	bool bDeactivateOverlapped;
	bool b1D9;
	bool b1DA;
	bool b1DB;
	// 0x1dc
	$Padding(0x1dc, 0x1e4);
	// 0x1e4
	bool bLocalPlace;
	bool bAutoPlaceNotify;
	bool b1E6;
	bool b1E7;
	// 0x1e8
	$Padding(0x1e8, 0x1ec);
	// 0x1ec
    hexcolorcode color;
	// 0x1f0
	bool bRequestPickup;
};

STATIC_ASSERT_OFFSETOF(UIGridbox, textBox, 0x170);
STATIC_ASSERT_OFFSETOF(UIGridbox, bIgnoreItem, 0x17c);
STATIC_ASSERT_OFFSETOF(UIGridbox, boxWidth, 0x188);
STATIC_ASSERT_OFFSETOF(UIGridbox, bStore, 0x1bc);
STATIC_ASSERT_OFFSETOF(UIGridbox, bDeactivateOverlapped, 0x1d8);
STATIC_ASSERT_OFFSETOF(UIGridbox, bLocalPlace, 0x1e4);
STATIC_ASSERT_OFFSETOF(UIGridbox, color, 0x1ec);
STATIC_ASSERT_OFFSETOF(UIGridbox, bRequestPickup, 0x1f0);
