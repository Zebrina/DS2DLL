#pragma once

#include "GPString.h"
#include "UIWindow.h"

namespace UIUtility {
    $Function(0x0074ebe0, CreateUIWindow, UIWindow*, const GPBString& windowName);
    $Function(0x0074e780, SetWindowEnabled, void, const GPBString& windowName, bool flag);
    $Function(0x0074e750, SetWindowEnabled, void, const GPBString& windowName, const GPBString& interfaceName, bool flag);
    $Function(0x0074e4a0, IsWindowVisible, bool, const GPBString& windowName, const GPBString& interfaceName);
    $Function(0x0074e470, SetWindowVisible, void, const GPBString& windowName, bool flag);
    $Function(0x0074e440, SetWindowVisible, void, const GPBString& windowName, const GPBString& interfaceName, bool flag);
    $Function(0x0074e560, GetWindowTag, int, const GPBString& windowName);
    $Function(0x0074e530, GetWindowTag, int, const GPBString& windowName, const GPBString& interfaceName);
    $Function(0x0074e500, SetWindowTag, void, const GPBString& windowName, int tag);
    $Function(0x0074e4d0, SetWindowTag, void, const GPBString& windowName, const GPBString& interfaceName, int tag);
    $Function(0x0074eea0, SetWindowTexture, void, const GPBString& windowName, const GPBString& interfaceName, const GPBString& texture);
    $Function(0x0074e690, SetWindowTextureFromId, void, const GPBString& windowName, const GPBString& interfaceName, uint textureId);
    $Function(0x0074e700, ClearWindowTexture, void, const GPBString& windowName, const GPBString& interfaceName);
    $Function(0x0074e600, SetWindowRectLeft, void, const GPBString& windowName, const GPBString& interfaceName, int value);
    $Function(0x0074e5d0, SetWindowRectTop, void, const GPBString& windowName, const GPBString& interfaceName, int value);
    $Function(0x0074e660, SetWindowRectRight, void, const GPBString& windowName, const GPBString& interfaceName, int value);
    $Function(0x0074e630, SetWindowRectBottom, void, const GPBString& windowName, const GPBString& interfaceName, int value);
    $Function(0x0074e590, SetWindowRect, void, const GPBString& windowName, const GPBString& interfaceName, int left, int top, int right, int bottom);

    $Function(0x0074fb60, GetUITextText, bool, const GPBString& textElementName, GPBString& textOut);
    $Function(0x0074fae0, GetUITextText, bool, const GPBString& textElementName, const GPBString& interfaceName, GPBString& textOut);
    $Function(0x0074ee30, SetUITextText, void, const GPBString& textElementName, const GPBString& text);
    $Function(0x0074edb0, SetUITextText, void, const GPBString& textElementName, const GPBString& interfaceName, const GPBString& text);

    $Function(0x0074ed20, SetTextBoxText, void, const GPBString& textBoxName, const GPBString& text);
    $Function(0x0074ec90, SetTextBoxText, void, const GPBString& textBoxName, const GPBString& interfaceName, const GPBString& text);

    $Function(0x0074fc60, GetEditBoxText, bool, const GPBString& editBoxName, GPBString& textOut);
    $Function(0x0074fbe0, GetEditBoxText, bool, const GPBString& editBoxName, const GPBString& interfaceName, GPBString& textOut);
    $Function(0x0074f1a0, SetEditBoxText, void, const GPBString& editBoxName, const GPBString& text);
    $Function(0x0074f110, SetEditBoxText, void, const GPBString& editBoxName, const GPBString& interfaceName, const GPBString& text);
    $Function(0x0074ea90, EditBoxSelectText, bool, const GPBString& editBoxName, const GPBString& interfaceName, uint unk3, uint unk4);
    $Function(0x0074eb20, GiveEditBoxFocus, void, const GPBString& editBoxName);
    $Function(0x0074eaf0, GiveEditBoxFocus, void, const GPBString& editBoxName, const GPBString& interfaceName);

	$Function(0x0074e8d0, GetCheckboxState, bool, const GPBString& checkboxName, const GPBString& interfaceName);
    $Function(0x0074e860, SetCheckboxState, void, const GPBString& checkboxName, bool flag);
    $Function(0x0074e830, SetCheckboxState, void, const GPBString& checkboxName, const GPBString& interfaceName, bool flag);
    $Function(0x0074e890, ToggleCheckboxState, void, const GPBString& checkboxName, const GPBString& interfaceName);

    $Function(0x0074e7f0, SetButtonEnabled, void, const GPBString& buttonName, bool flag);
    $Function(0x0074e7b0, SetButtonEnabled, void, const GPBString& buttonName, const GPBString& interfaceName, bool flag);

	$Function(0x0074e9f0, GetRadioButtonChecked, bool, const GPBString& radioButtonName);
    $Function(0x0074e9c0, GetRadioButtonChecked, bool, const GPBString& radioButtonName, const GPBString& interfaceName);
    $Function(0x0074e990, SetRadioButtonChecked, void, const GPBString& radioButtonName, bool flag);
    $Function(0x0074e960, SetRadioButtonChecked, void, const GPBString& radioButtonName, const GPBString& interfaceName, bool flag);

    $Function(0x0074fa20, GetComboBoxSelectedText, void, const GPBString& comboBoxName, const GPBString& interfaceName, GPBString& textOut);
    $Function(0x0074e900, GetComboBoxSelectedTag, int, const GPBString& comboBoxName, const GPBString& interfaceName);
    $Function(0x0074e930, SetComboBoxSelectedTag, void, const GPBString& comboBoxName, const GPBString& interfaceName, int tag);

    $Function(0x0074eb50, GetUISliderValue, int, const GPBString& sliderName, const GPBString& interfaceName, int value);
    $Function(0x0074eb80, GetUISliderRangeMin, int, const GPBString& sliderName, const GPBString& interfaceName, int minValue);
	$Function(0x0074ebb0, GetUISliderRangeMax, int, const GPBString& sliderName, const GPBString& interfaceName, int maxValue);
};
