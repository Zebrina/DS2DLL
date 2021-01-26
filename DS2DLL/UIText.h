#pragma once

#include "Enums.h"
#include "StringTool.h"
#include "UIWindow.h"

class UIText : public UIWindow {
public:
	// 0x00761de0 -> 0x00761ba0
	virtual ~UIText();

	$ConstMethod(0x00503f1d, GetText, void, GPBString& textOut);
	$Method(0x00503a55, SetText, void, const GPBString& newText, bool unk2);
    void SetText(const char* value) {
        StringTool::AssignF(text, value);
    }
    // Returns window as UIText without any type-checking. Not used anywhere.
	//$StaticMethod(0x005028af, GetUIText, UIText*, UIWindow* window);
	$ConstMethod(0x005028a8, GetJustification, eJustification); // Exported as: GeteJustification
	$ConstMethod(0x00498485, GetColor, hexcolorcode);
	$Method(0x00472beb, SetAutoSize, void, bool bAutoSize);
	$Method(0x00472bdb, SetColor, void, hexcolorcode color);
	$Method(0x00760ac0, SetFont, void, const GPBString& fontTexture);
	$Method(0x00456d41, SetJustification, void, eJustification unk1); // Exported as: SeteJustification

	// 0x170
    GPWString text;
    // 0x174
	$Padding(0x174, 0x17c);
	// 0x17c
    hexcolorcode color;
	// 0x180
	$Padding(0x180, 0x184);
    // 0x184
    eJustification justification;
    // 0x188
    bool autoSize;
};
