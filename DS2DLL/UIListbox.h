#pragma once

#include "GPFastVector.h"
#include "GPString.h"
#include "UIMessage.h"
#include "UIWindow.h"

class UIListbox : public UIWindow {
public:
	$Method(0x00503aa6, AddElement, int, const GPBString& unk1, int unk2, uint unk3);
	$Method(0x00503a83, AddElement, int, const GPBString& unk1, int unk2);
	$Method(0x00503f65, GetSelectedText, void, GPBString& unk1);
	$Method(0x00503afe, RemoveElement, void, const GPBString& unk1);
	$Method(0x00503b1e, SelectElement, void, const GPBString& unk1);
	$Method(0x00503b3e, SetElementIcon, void, const GPBString& unk1, int unk2);
	$Method(0x00503acc, SetElementText, void, int unk1, int unk2, const GPBString& unk3, uint unk4);
	$Method(0x005029a5, GetActive, bool);
	$ConstMethod(0x00502924, GetButtonDown, bool);
	$Method(0x0050299e, GetDrawSelectionBox, bool);
	$ConstMethod(0x00502990, GetHasFocus, bool);
	$ConstMethod(0x00502989, GetHitSelect, bool);
	$ConstMethod(0x00502997, GetPermanentFocus, bool);
	$Method(0x00774dc0, HandleInputMessage, bool, UIMessage& unk1);
	$Method(0x00775a00, GetSelectedData, GPBString);
	$Method(0x00774860, GetElementData, const GPBString&, int unk1);
	//$Method(0x0050290a, GetElementHeight, int);
	//$Method(0x0050290f, GetElementWidth, int);
	//$Method(0x00502905, GetNumElements, int);
	$Method(0x00773c50, GetElementId, int, uint unk1);
	$Method(0x00773ca0, GetElementTag, int, uint unk1);
	$ConstMethod(0x005028f7, GetHeight, int);
	//$Method(0x005028f2, GetLeadElementIndex, int);
	$Method(0x00773ef0, GetSelectedIndex, int);
	$Method(0x00773ec0, GetSelectedTag, int);
	$ConstMethod(0x005028fe, GetWidth, int);
	$ConstMethod(0x00485d76, GetTextColor, hexcolorcode);
	$ConstMethod(0x00502972, GetActiveColor, hexcolorcode);
	$ConstMethod(0x0050295b, GetInactiveColor, hexcolorcode);
	$ConstMethod(0x00485d7d, GetInvalidColor, hexcolorcode);
	$Method(0x00775cf0, AddIcon, void, const GPBString& unk1, int unk2);
	$Method(0x00773f20, AutoSize, void, UIWindow* unk1, int unk2);
	$Method(0x00773d70, ClearSelection, void);
	$Method(0x00773dd0, FlashElementIcon, void, int unk1, float unk2);
	$Method(0x00772f50, LoadSelectionTexture, void, const GPBString& unk1);
	$Method(0x0044a237, RemoveAllElements, void);
	$Method(0x00778880, RemoveAllElements, void, bool unk1);
	$Method(0x00778790, RemoveElement, void, int unk1);
	$Method(0x007748a0, ResizeSlider, void);
	$Method(0x00774be0, SelectElement, void, int unk1);
	$Method(0x00774cc0, SelectElementData, void, const GPBString& unk1);
	$Method(0x00774c50, SelectElementId, void, int unk1);
	$Method(0x00774d50, SelectElementIndex, void, int unk1);
	$Method(0x00774510, SelectFirstElement, void);
	$Method(0x007745a0, SelectLastElement, void);
	$Method(0x007741a0, SelectNextElement, void);
	$Method(0x00774400, SelectNextPage, void);
	$Method(0x007740d0, SelectPreviousElement, void);
	$Method(0x007742a0, SelectPreviousPage, void);
	$Method(0x0046dd36, SetActive, void, bool unk1);
	$Method(0x00502962, SetActiveColor, void, hexcolorcode color);
	$Method(0x0050292b, SetButtonDown, void, bool unk1);
	$Method(0x0046dd26, SetDrawSelectionBox, void, bool unk1);
	$Method(0x00775ca0, SetElementData, void, int unk1, const GPBString& unk2);
	$Method(0x00773da0, SetElementIcon, void, int unk1, int unk2);
	$Method(0x00773cf0, SetElementSelectable, void, int unk1, bool unk2);
	$Method(0x0046dd16, SetHasFocus, void, bool unk1);
	$Method(0x007735e0, SetHeight, void, int unk1);
	$Method(0x00502979, SetHitSelect, void, bool unk1);
	$Method(0x0050294b, SetInactiveColor, void, hexcolorcode color);
	$Method(0x0050293b, SetInvalidColor, void, hexcolorcode color);
	$Method(0x00502914, SetTextColor, void, hexcolorcode unk1);

    // 0x74
    virtual int GetElementWidth() const;

	// 0x170
    $Padding(0x170, 0x178);
    // 0x178
    int elementHeight;
    // 0x17c
    int elementWidth;
    // 0x180
    $Padding(0x180, 0x18c);
    // 0x18c
    GPFastVector<UIWindow*> elements;
    // 0x194
    $Padding(0x194, 0x1b4);
    // 0x1b4
    bool bLeftIndent;
    // 0x1b8
    $Padding(0x1b8, 0x1c0);
    // 0x1c0
    float alpha;
    // 0x1c4
    hexcolorcode textColor;
    // 0x1c8
    $Padding(0x1c8, 0x1e0);
    // 0x1e0
    bool bRolloverSelect;
    // 0x1e4
    hexcolorcode invalidColor;
    // 0x1e8
    hexcolorcode inactiveColor;
    // 0x1ec
    hexcolorcode activeColor;
    // 0x1f0
    hexcolorcode rolloverColor;
    // 0x1f4
    $Padding(0x1f4, 0x1f8);
    // 0x1f8
    bool b1F8;
    bool b1F9;
    bool bPermanentFocus;
    // 0x1fc
    hexcolorcode selectionColor;
    // 0x200
    int selectedIndex;
    // 0x204
    bool bToolTipOnSelect;
    // 0x208
    $Padding(0x208, 0x218);
    // 0x218
    int itemRectDeflateX;
    // 0x21c
    int itemRectDeflateY;
    // 0x220
    int maxWidth;
    // 0x224
    int maxHeight;
    // 0x228
    bool bMultiline;
    // 0x22c
    int multilinePixelIndent;
    // 0x230
    bool b230;
    bool bRolloffDeselect;
    bool b232;
    bool bEnableKeySelection;
    // 0x234
    bool bAutoEdgeScroll;
    // 0x238
    float edgeScrollPercent;
    // 0x23c
    float edgeScrollAmount;
    // 0x240
    float edgeScrollRate;
};

STATIC_ASSERT_OFFSETOF(UIListbox, elementHeight, 0x178);
STATIC_ASSERT_OFFSETOF(UIListbox, bLeftIndent, 0x1b4);
STATIC_ASSERT_OFFSETOF(UIListbox, alpha, 0x1c0);
STATIC_ASSERT_OFFSETOF(UIListbox, bRolloverSelect, 0x1e0);
STATIC_ASSERT_OFFSETOF(UIListbox, invalidColor, 0x1e4);
STATIC_ASSERT_OFFSETOF(UIListbox, bPermanentFocus, 0x1fa);
STATIC_ASSERT_OFFSETOF(UIListbox, selectedIndex, 0x200);
STATIC_ASSERT_OFFSETOF(UIListbox, bRolloffDeselect, 0x231);
STATIC_ASSERT_OFFSETOF(UIListbox, bEnableKeySelection, 0x233);
STATIC_ASSERT_OFFSETOF(UIListbox, edgeScrollRate, 0x240);
