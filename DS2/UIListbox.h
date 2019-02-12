#pragma once

class UIListbox {
public:
	/*UIListbox*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x005028ef
	/*UIListbox*/ private: int /*__thiscall*/ AddElement(const gpbstring<char>& unk1, int unk2, unsigned long unk3); //0x00503aa6
	/*UIListbox*/ private: int /*__thiscall*/ AddElement(const gpbstring<char>& unk1, int unk2); //0x00503a83
	/*UIListbox*/ private: void /*__thiscall*/ GetSelectedText(gpbstring<char>& unk1); //0x00503f65
	/*UIListbox*/ private: void /*__thiscall*/ RemoveElement(const gpbstring<char>& unk1); //0x00503afe
	/*UIListbox*/ private: void /*__thiscall*/ SelectElement(const gpbstring<char>& unk1); //0x00503b1e
	/*UIListbox*/ private: void /*__thiscall*/ SetElementIcon(const gpbstring<char>& unk1, int unk2); //0x00503b3e
	/*UIListbox*/ private: void /*__thiscall*/ SetElementText(int unk1, int unk2, const gpbstring<char>& unk3, unsigned long unk4); //0x00503acc
	/*UIListbox*/ public: bool /*__thiscall*/ GetActive(); //0x005029a5
	/*UIListbox*/ public: bool /*__thiscall*/ GetButtonDown() const; //0x00502924
	/*UIListbox*/ public: bool /*__thiscall*/ GetDrawSelectionBox(); //0x0050299e
	/*UIListbox*/ public: bool /*__thiscall*/ GetHasFocus() const; //0x00502990
	/*UIListbox*/ public: bool /*__thiscall*/ GetHitSelect() const; //0x00502989
	/*UIListbox*/ public: bool /*__thiscall*/ GetPermanentFocus() const; //0x00502997
	/*UIListbox*/ public: bool /*__thiscall*/ HandleInputMessage(UIMessage& unk1); //0x00774dc0
	/*UIListbox*/ public: gpbstring<char> /*__thiscall*/ GetSelectedData(); //0x00775a00
	/*UIListbox*/ public: const gpbstring<char>& /*__thiscall*/ GetElementData(int unk1); //0x00774860
	/*UIListbox*/ public: int /*__thiscall*/ FUBI_RENAME_GetElementHeight(); //0x0050290a
	/*UIListbox*/ public: int /*__thiscall*/ FUBI_RENAME_GetElementWidth(); //0x0050290f
	/*UIListbox*/ public: int /*__thiscall*/ FUBI_RENAME_GetNumElements(); //0x00502905
	/*UIListbox*/ public: int /*__thiscall*/ GetElementId(unsigned int unk1); //0x00773c50
	/*UIListbox*/ public: int /*__thiscall*/ GetElementTag(unsigned int unk1); //0x00773ca0
	/*UIListbox*/ public: int /*__thiscall*/ GetHeight() const; //0x005028f7
	/*UIListbox*/ public: int /*__thiscall*/ GetLeadElementIndex(); //0x005028f2
	/*UIListbox*/ public: int /*__thiscall*/ GetSelectedIndex(); //0x00773ef0
	/*UIListbox*/ public: int /*__thiscall*/ GetSelectedTag(); //0x00773ec0
	/*UIListbox*/ public: int /*__thiscall*/ GetWidth() const; //0x005028fe
	/*UIListbox*/ public: unsigned int /*__thiscall*/ GetTextColor() const; //0x00485d76
	/*UIListbox*/ public: unsigned long /*__thiscall*/ GetActiveColor() const; //0x00502972
	/*UIListbox*/ public: unsigned long /*__thiscall*/ GetInactiveColor() const; //0x0050295b
	/*UIListbox*/ public: unsigned long /*__thiscall*/ GetInvalidColor() const; //0x00485d7d
	/*UIListbox*/ public: void /*__thiscall*/ AddIcon(const gpbstring<char>& unk1, int unk2); //0x00775cf0
	/*UIListbox*/ public: void /*__thiscall*/ AutoSize(UIWindow* unk1, int unk2); //0x00773f20
	/*UIListbox*/ public: void /*__thiscall*/ ClearSelection(); //0x00773d70
	/*UIListbox*/ public: void /*__thiscall*/ FlashElementIcon(int unk1, float unk2); //0x00773dd0
	/*UIListbox*/ public: void /*__thiscall*/ LoadSelectionTexture(const gpbstring<char>& unk1); //0x00772f50
	/*UIListbox*/ public: void /*__thiscall*/ RemoveAllElements(); //0x0044a237
	/*UIListbox*/ public: void /*__thiscall*/ RemoveAllElements(bool unk1); //0x00778880
	/*UIListbox*/ public: void /*__thiscall*/ RemoveElement(int unk1); //0x00778790
	/*UIListbox*/ public: void /*__thiscall*/ ResizeSlider(); //0x007748a0
	/*UIListbox*/ public: void /*__thiscall*/ SelectElement(int unk1); //0x00774be0
	/*UIListbox*/ public: void /*__thiscall*/ SelectElementData(const gpbstring<char>& unk1); //0x00774cc0
	/*UIListbox*/ public: void /*__thiscall*/ SelectElementId(int unk1); //0x00774c50
	/*UIListbox*/ public: void /*__thiscall*/ SelectElementIndex(int unk1); //0x00774d50
	/*UIListbox*/ public: void /*__thiscall*/ SelectFirstElement(); //0x00774510
	/*UIListbox*/ public: void /*__thiscall*/ SelectLastElement(); //0x007745a0
	/*UIListbox*/ public: void /*__thiscall*/ SelectNextElement(); //0x007741a0
	/*UIListbox*/ public: void /*__thiscall*/ SelectNextPage(); //0x00774400
	/*UIListbox*/ public: void /*__thiscall*/ SelectPreviousElement(); //0x007740d0
	/*UIListbox*/ public: void /*__thiscall*/ SelectPreviousPage(); //0x007742a0
	/*UIListbox*/ public: void /*__thiscall*/ SetActive(bool unk1); //0x0046dd36
	/*UIListbox*/ public: void /*__thiscall*/ SetActiveColor(unsigned long unk1); //0x00502962
	/*UIListbox*/ public: void /*__thiscall*/ SetButtonDown(bool unk1); //0x0050292b
	/*UIListbox*/ public: void /*__thiscall*/ SetDrawSelectionBox(bool unk1); //0x0046dd26
	/*UIListbox*/ public: void /*__thiscall*/ SetElementData(int unk1, const gpbstring<char>& unk2); //0x00775ca0
	/*UIListbox*/ public: void /*__thiscall*/ SetElementIcon(int unk1, int unk2); //0x00773da0
	/*UIListbox*/ public: void /*__thiscall*/ SetElementSelectable(int unk1, bool unk2); //0x00773cf0
	/*UIListbox*/ public: void /*__thiscall*/ SetHasFocus(bool unk1); //0x0046dd16
	/*UIListbox*/ public: void /*__thiscall*/ SetHeight(int unk1); //0x007735e0
	/*UIListbox*/ public: void /*__thiscall*/ SetHitSelect(bool unk1); //0x00502979
	/*UIListbox*/ public: void /*__thiscall*/ SetInactiveColor(unsigned long unk1); //0x0050294b
	/*UIListbox*/ public: void /*__thiscall*/ SetInvalidColor(unsigned long unk1); //0x0050293b
	/*UIListbox*/ public: void /*__thiscall*/ SetTextColor(unsigned int unk1); //0x00502914
};
