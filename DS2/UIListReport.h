#pragma once

class UIListReport {
public:
	/*UIListReport*/ private: gpbstring<char> /*__thiscall*/ FUBI_RENAME_GetSelectedElementText(int unk1); //0x004106c6
	/*UIListReport*/ private: int /*__thiscall*/ FUBI_RENAME_GetNumElements(); //0x00410246
	/*UIListReport*/ private: int /*__thiscall*/ FUBI_RENAME_GetSelectedElementID(); //0x00410449
	/*UIListReport*/ private: int /*__thiscall*/ FUBI_RENAME_GetSelectedElementTag(); //0x00410241
	/*UIListReport*/ private: void /*__thiscall*/ AddElement(const gpbstring<char>& unk1, int unk2); //0x004108bf
	/*UIListReport*/ private: void /*__thiscall*/ FUBI_RENAME_RemoveAllElements(); //0x00410233
	/*UIListReport*/ private: void /*__thiscall*/ FUBI_RENAME_RemoveElement(int unk1); //0x00410238
	/*UIListReport*/ private: void /*__thiscall*/ InsertColumn(const gpbstring<char>& unk1, int unk2); //0x004106a1
	/*UIListReport*/ public: void /*__thiscall*/ SetSelectedElement(int unk1); //0x00757b30
	/*UIListReport*/ public: void /*__thiscall*/ SetSelectedElementByRow(int unk1); //0x00757bb0
};
