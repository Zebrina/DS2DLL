#pragma once

#include "Enums.h"
#include "GPFastVector.h"
#include "GPString.h"
#include "UIWindow.h"

class UIPopupMenu : public UIWindow {
public:
    struct Element {
        GPBString windowTemplate;
        int index;
    };

    $Method(0x007abda0, ShowAtCursor, void, eAlignment alignment);
	$Method(0x007ab070, GetSelectedElement, int);
	$Method(0x00503b61, AddElement, void, const GPBString& uwindowTemplatenk1, int index);
	$Method(0x007ac9a0, RemoveElement, void, int index);
	$Method(0x00503b84, RemoveElement, void, const GPBString& windowTemplate);
	$Method(0x007ac350, RemoveAllElements, void);

    // 0x170
    $Padding(0x170, 0x180);
    // 0x180
    GPFastVector<Element> elements;
};

STATIC_ASSERT(sizeof(UIPopupMenu::Element) == 8);
STATIC_ASSERT_OFFSETOF(UIPopupMenu, elements, 0x180);
