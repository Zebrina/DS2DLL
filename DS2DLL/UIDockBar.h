#pragma once

#include "UIWindow.h"

class UIDockBar : public UIWindow {
public:
	// - 0x9C
	// 0x170
	$Padding(0x170, 0x174);
	// 0x174
	eDockbarType dockbarType;
	// 0x178
	$Padding(0x178, 0x180);
	// 0x180
	GRect rect;
	// 0x190
	$Padding(0x190, 0x1d0);
	// 0x1d0
    hexcolorcode dragDockColor;
	// 0x1d4
	int dragDockMaxY;
};

STATIC_ASSERT_OFFSETOF(UIDockBar, dockbarType, 0x174);
STATIC_ASSERT_OFFSETOF(UIDockBar, rect, 0x180);
STATIC_ASSERT_OFFSETOF(UIDockBar, dragDockColor, 0x1d0);
