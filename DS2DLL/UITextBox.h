#pragma once

#include "GPString.h"
#include "UIWindow.h"

class UITextBox : public UIWindow {
public:
	// 0x0075ed70 -> 0x0075ec40
	virtual ~UITextBox();

	$ConstMethod(0x004105e1, GetTextInAnsi, GPBString);
	$Method(0x0041066e, ReformatTooltip, int, const GPBString& unk1, int unk2, uint unk3);
	$Method(0x00410628, SetLineText, int, int unk1, const GPBString& unk2, uint unk3);
	$Method(0x00410608, SetText, void, const GPBString& unk1);
	$Method(0x0041064e, SetToolTipText, void, const GPBString& unk1);
	//$Method(0x00410158, GetScrolling, bool);
	$ConstMethod(0x004101e7, GetDisableUpdate, bool);
	$ConstMethod(0x004101a2, GetFixedLocation, bool);
	$ConstMethod(0x004101d0, GetScrollThrough, bool);
	$Method(0x0041021c, GetTypeMode, bool);
	$Method(0x0041015d, IsFinishedScrolling, bool);
	$ConstMethod(0x00410174, GetScrollRate, float);
	$Method(0x00410205, GetTypeRate, float);
	//$Method(0x0041014a, GetElementHeight, int);
	$Method(0x0041013c, GetLeadElement, int);
	$ConstMethod(0x004101b9, GetFontHeight, int);
	$ConstMethod(0x004101fe, GetLineSpacer, int);
	$ConstMethod(0x0041017b, GetJustification, eJustification);
	//$Method(0x00410137, GetMaxActiveElements, uint);
	//$Method(0x00410132, GetNumElements, uint);
	$ConstMethod(0x0041012b, GetTextColor, hexcolorcode);
	$Method(0x0075d910, CenterWindowToMousePos, void);
	$Method(0x00410141, SetLeadElement, void, int unk1);
	//$Method(0x0041014f, SetScrolling, void, bool unk1);
	$Method(0x004101d7, SetDisableUpdate, void, bool unk1);
	$Method(0x00410192, SetFixedLocation, void, bool unk1);
	$Method(0x004101a9, SetFontHeight, void, int unk1);
	$Method(0x00410182, SeteJustification, void, eJustification justification);
	$Method(0x004101ee, SetLineSpacer, void, int unk1);
	$Method(0x00410164, SetScrollRate, void, float unk1);
	$Method(0x004101c0, SetScrollThrough, void, bool unk1);
	$Method(0x0075fa90, SetTextColor, void, hexcolorcode color);
	$Method(0x00410223, SetTypeMode, void, bool unk1);
	$Method(0x0041020c, SetTypeRate, void, float unk1);

	// 0x170
	bool b_170;
	// 0x171
	bool fixedLocation;
	// 0x172
	bool b_172;
	// 0x173
	bool b_173;
	$Padding(0x174, 0x188);
	// 0x188
	int fontHeight;
	// 0x18c
	$Padding(0x18c, 0x190);
	// 0x190
    hexcolorcode textColor;
	// 0x194
	eJustification justification;
	// 0x198
	float scrollRate;
	// 0x19c
	$Padding(0x19c, 0x1bc);
	// 0x1b4
	bool isScrolling;
	// 0x1bc
	bool scrollThrough;
	// 0x1bd
	bool finishedScrolling;
	// 0x1c0
	bool disableUpdate;
	// 0x1c1
	bool b_1c1;
	// 0x1c2
	bool b_1c2;
	// 0x1c3
	bool b_1c3;
	// 0x1c4
	int lineSpacer;
	// 0x1c8
	bool typeMode;
	bool b_1c9;
	bool b_1ca;
	bool b_1cb;
	// 0x1cc
	$Padding(0x1cc, 0x1d8);
	// 0x1d8
	float typeRate;
};

STATIC_ASSERT_OFFSETOF(UITextBox, typeMode, 0x1c8);
STATIC_ASSERT_OFFSETOF(UITextBox, typeRate, 0x1d8);
