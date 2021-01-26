#pragma once

#include "GPString.h"

class UIListReport : public UIWindow {
public:
	$Method(0x004106c6, GetSelectedElementText, GPBString, int unk1);
	//$Method(0x00410246, GetNumElements, int);
	$Method(0x00410449, GetSelectedElementID, int);
	$Method(0x00410241, GetSelectedElementTag, int);
	$Method(0x004108bf, AddElement, void, const GPBString& unk1, int unk2);
	$Method(0x00410233, RemoveAllElements, void);
	$Method(0x00410238, RemoveElement, void, int unk1);
	$Method(0x004106a1, InsertColumn, void, const GPBString& unk1, int unk2);
	$Method(0x00757b30, SetSelectedElement, void, int unk1);
	$Method(0x00757bb0, SetSelectedElementByRow, void, int unk1);

    // 0x170
    $Padding(0x170, 0x190);
    // 0x190
    int elementHeight;
};
