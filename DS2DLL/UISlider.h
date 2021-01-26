#pragma once

#include "UIWindow.h"

class UISlider : public UIWindow {
public:
    $ConstMethod(0x005029ac, GetSliderButtonVisible, bool);
    $ConstMethod(0x005029b3, GetMin, int);
    $Method(0x00780ab0, SetMin, void, int value);
    $ConstMethod(0x00456d51, GetMax, int);
    $Method(0x00780af0, SetMax, void, int value);
    $Method(0x00781740, SetRange, void, int max, int min);
    $ConstMethod(0x00456d58, GetValue, int);
    $Method(0x00781390, SetValue, void, int value, bool unk2 = true);
    $ConstMethod(0x00780b40, GetValueRatio, float);
    $Method(0x00781470, SetValueRatio, void, float ratio, bool unk2 = true);

    // 0x170
    $Padding(0x170, 0x194);
    // 0x194
    bool b194;
    bool b195;
    bool bSliderButtonVisible;
    // 0x198
    $Padding(0x198, 0x1b8);
    // 0x1b8
    int min;
    // 0x1bc
    int max;
    // 0x1c0
    $Padding(0x1c0, 0x1c4);
    // 0x1c4
    int value;
    // 0x1c8
    $Padding(0x1c8, 0x1e8);
};

STATIC_ASSERT_OFFSETOF(UISlider, bSliderButtonVisible, 0x196);
STATIC_ASSERT_OFFSETOF(UISlider, min, 0x1b8);
STATIC_ASSERT_OFFSETOF(UISlider, value, 0x1c4);
