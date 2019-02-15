#pragma once

#include "ClassMacros.h"

namespace UIUtility {
	DefineFunction(EditBoxSelectText, 0x74ea90, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, unsigned int unk3, unsigned int unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(GetCheckboxState, 0x74e8d0, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(GetEditBoxText, 0x74fc60, bool, Params(const gpbstring<char>& unk1, gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(GetEditBoxText, 0x74fbe0, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetRadioButtonChecked, 0x74e9c0, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(GetRadioButtonChecked, 0x74e9f0, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineFunction(GetUITextText, 0x74fb60, bool, Params(const gpbstring<char>& unk1, gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(GetUITextText, 0x74fae0, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineFunction(IsWindowVisible, 0x74e4a0, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(CreateUIWindow, 0x74ebe0, UIWindow*, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineFunction(GetComboBoxSelectedTag, 0x74e900, int, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(GetUISliderRangeMax, 0x74ebb0, int, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetUISliderRangeMin, 0x74eb80, int, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetUISliderValue, 0x74eb50, int, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(GetWindowTag, 0x74e530, int, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(GetWindowTag, 0x74e560, int, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineFunction(ClearWindowTexture, 0x74e700, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(GetComboBoxSelectedText, 0x74fa20, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineFunction(GiveEditBoxFocus, 0x74eaf0, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(GiveEditBoxFocus, 0x74eb20, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineFunction(SetButtonEnabled, 0x74e7f0, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineFunction(SetButtonEnabled, 0x74e7b0, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetCheckboxState, 0x74e860, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineFunction(SetCheckboxState, 0x74e830, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetComboBoxSelectedTag, 0x74e930, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetEditBoxText, 0x74f110, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetEditBoxText, 0x74f1a0, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(SetRadioButtonChecked, 0x74e990, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineFunction(SetRadioButtonChecked, 0x74e960, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetTextBoxText, 0x74ec90, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetTextBoxText, 0x74ed20, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(SetUITextText, 0x74edb0, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetUITextText, 0x74ee30, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineFunction(SetWindowEnabled, 0x74e780, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineFunction(SetWindowEnabled, 0x74e750, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetWindowRect, 0x74e590, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3, int unk4, int unk5, int unk6), Args(unk1, unk2, unk3, unk4, unk5, unk6));
	DefineFunction(SetWindowRectBottom, 0x74e630, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetWindowRectLeft, 0x74e600, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetWindowRectRight, 0x74e660, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetWindowRectTop, 0x74e5d0, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetWindowTag, 0x74e4d0, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetWindowTag, 0x74e500, void, Params(const gpbstring<char>& unk1, int unk2), Args(unk1, unk2));
	DefineFunction(SetWindowTexture, 0x74eea0, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetWindowTextureFromId, 0x74e690, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, unsigned int unk3), Args(unk1, unk2, unk3));
	DefineFunction(SetWindowVisible, 0x74e470, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineFunction(SetWindowVisible, 0x74e440, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3), Args(unk1, unk2, unk3));
	DefineFunction(ToggleCheckboxState, 0x74e890, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
};
