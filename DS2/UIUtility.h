#pragma once

class UIUtility {
public:
	/*UIUtility*/ bool /*__cdecl*/ EditBoxSelectText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, unsigned int unk3, unsigned int unk4); //0x0074ea90
	/*UIUtility*/ bool /*__cdecl*/ GetCheckboxState(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074e8d0
	/*UIUtility*/ bool /*__cdecl*/ GetEditBoxText(const gpbstring<char>& unk1, gpbstring<char>& unk2); //0x0074fc60
	/*UIUtility*/ bool /*__cdecl*/ GetEditBoxText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, gpbstring<char>& unk3); //0x0074fbe0
	/*UIUtility*/ bool /*__cdecl*/ GetRadioButtonChecked(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074e9c0
	/*UIUtility*/ bool /*__cdecl*/ GetRadioButtonChecked(const gpbstring<char>& unk1); //0x0074e9f0
	/*UIUtility*/ bool /*__cdecl*/ GetUITextText(const gpbstring<char>& unk1, gpbstring<char>& unk2); //0x0074fb60
	/*UIUtility*/ bool /*__cdecl*/ GetUITextText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, gpbstring<char>& unk3); //0x0074fae0
	/*UIUtility*/ bool /*__cdecl*/ IsWindowVisible(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074e4a0
	/*UIUtility*/ UIWindow* /*__cdecl*/ CreateUIWindow(const gpbstring<char>& unk1); //0x0074ebe0
	/*UIUtility*/ int /*__cdecl*/ GetComboBoxSelectedTag(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074e900
	/*UIUtility*/ int /*__cdecl*/ GetUISliderRangeMax(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074ebb0
	/*UIUtility*/ int /*__cdecl*/ GetUISliderRangeMin(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074eb80
	/*UIUtility*/ int /*__cdecl*/ GetUISliderValue(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074eb50
	/*UIUtility*/ int /*__cdecl*/ GetWindowTag(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074e530
	/*UIUtility*/ int /*__cdecl*/ GetWindowTag(const gpbstring<char>& unk1); //0x0074e560
	/*UIUtility*/ void /*__cdecl*/ ClearWindowTexture(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074e700
	/*UIUtility*/ void /*__cdecl*/ GetComboBoxSelectedText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, gpbstring<char>& unk3); //0x0074fa20
	/*UIUtility*/ void /*__cdecl*/ GiveEditBoxFocus(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074eaf0
	/*UIUtility*/ void /*__cdecl*/ GiveEditBoxFocus(const gpbstring<char>& unk1); //0x0074eb20
	/*UIUtility*/ void /*__cdecl*/ SetButtonEnabled(const gpbstring<char>& unk1, bool unk2); //0x0074e7f0
	/*UIUtility*/ void /*__cdecl*/ SetButtonEnabled(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3); //0x0074e7b0
	/*UIUtility*/ void /*__cdecl*/ SetCheckboxState(const gpbstring<char>& unk1, bool unk2); //0x0074e860
	/*UIUtility*/ void /*__cdecl*/ SetCheckboxState(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3); //0x0074e830
	/*UIUtility*/ void /*__cdecl*/ SetComboBoxSelectedTag(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074e930
	/*UIUtility*/ void /*__cdecl*/ SetEditBoxText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x0074f110
	/*UIUtility*/ void /*__cdecl*/ SetEditBoxText(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074f1a0
	/*UIUtility*/ void /*__cdecl*/ SetRadioButtonChecked(const gpbstring<char>& unk1, bool unk2); //0x0074e990
	/*UIUtility*/ void /*__cdecl*/ SetRadioButtonChecked(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3); //0x0074e960
	/*UIUtility*/ void /*__cdecl*/ SetTextBoxText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x0074ec90
	/*UIUtility*/ void /*__cdecl*/ SetTextBoxText(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074ed20
	/*UIUtility*/ void /*__cdecl*/ SetUITextText(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x0074edb0
	/*UIUtility*/ void /*__cdecl*/ SetUITextText(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074ee30
	/*UIUtility*/ void /*__cdecl*/ SetWindowEnabled(const gpbstring<char>& unk1, bool unk2); //0x0074e780
	/*UIUtility*/ void /*__cdecl*/ SetWindowEnabled(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3); //0x0074e750
	/*UIUtility*/ void /*__cdecl*/ SetWindowRect(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3, int unk4, int unk5, int unk6); //0x0074e590
	/*UIUtility*/ void /*__cdecl*/ SetWindowRectBottom(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074e630
	/*UIUtility*/ void /*__cdecl*/ SetWindowRectLeft(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074e600
	/*UIUtility*/ void /*__cdecl*/ SetWindowRectRight(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074e660
	/*UIUtility*/ void /*__cdecl*/ SetWindowRectTop(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074e5d0
	/*UIUtility*/ void /*__cdecl*/ SetWindowTag(const gpbstring<char>& unk1, const gpbstring<char>& unk2, int unk3); //0x0074e4d0
	/*UIUtility*/ void /*__cdecl*/ SetWindowTag(const gpbstring<char>& unk1, int unk2); //0x0074e500
	/*UIUtility*/ void /*__cdecl*/ SetWindowTexture(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3); //0x0074eea0
	/*UIUtility*/ void /*__cdecl*/ SetWindowTextureFromId(const gpbstring<char>& unk1, const gpbstring<char>& unk2, unsigned int unk3); //0x0074e690
	/*UIUtility*/ void /*__cdecl*/ SetWindowVisible(const gpbstring<char>& unk1, bool unk2); //0x0074e470
	/*UIUtility*/ void /*__cdecl*/ SetWindowVisible(const gpbstring<char>& unk1, const gpbstring<char>& unk2, bool unk3); //0x0074e440
	/*UIUtility*/ void /*__cdecl*/ ToggleCheckboxState(const gpbstring<char>& unk1, const gpbstring<char>& unk2); //0x0074e890
};