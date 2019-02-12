#pragma once

class UIGridbox {
public:
	/*UIGridbox*/ private: /*static*/ int /*__cdecl*/ FUBI_Inheritance(UIWindow* unk1); //0x00502700
	/*UIGridbox*/ public: bool /*__thiscall*/ GetAutoPlaceNotify() const; //0x00502817
	/*UIGridbox*/ public: bool /*__thiscall*/ GetAutoTransfer() const; //0x004cffc9
	/*UIGridbox*/ public: bool /*__thiscall*/ GetConsumesItems() const; //0x005027e9
	/*UIGridbox*/ public: bool /*__thiscall*/ GetContinuePickup() const; //0x005027bb
	/*UIGridbox*/ public: bool /*__thiscall*/ GetDeactivateOverlapped() const; //0x005027f0
	/*UIGridbox*/ public: bool /*__thiscall*/ GetIgnoreItem(); //0x005027d2
	/*UIGridbox*/ public: bool /*__thiscall*/ GetLocalPlace() const; //0x00485c9e
	/*UIGridbox*/ public: bool /*__thiscall*/ GetRequestPickup(); //0x005027a4
	/*UIGridbox*/ public: bool /*__thiscall*/ GetStore() const; //0x00485c20
	/*UIGridbox*/ public: bool /*__thiscall*/ SortForSpace(UIItem* unk1); //0x007934d0
	/*UIGridbox*/ public: UITextBox* /*__thiscall*/ GetTextBox(); //0x0078c620
	/*UIGridbox*/ public: UIWindow* /*__thiscall*/ GetTextBg(); //0x0078c650
	/*UIGridbox*/ public: const gpbstring<char>& /*__thiscall*/ GetGridType() const; //0x00502787
	/*UIGridbox*/ public: float /*__thiscall*/ GetFullRatio(); //0x0078da50
	/*UIGridbox*/ public: int /*__thiscall*/ GetBoxHeight() const; //0x00502751
	/*UIGridbox*/ public: int /*__thiscall*/ GetBoxWidth() const; //0x0050277c
	/*UIGridbox*/ public: int /*__thiscall*/ GetColumns() const; //0x0050272a
	/*UIGridbox*/ public: int /*__thiscall*/ GetRows() const; //0x00502713
	/*UIGridbox*/ public: unsigned long /*__thiscall*/ GetColor() const; //0x0050282e
	/*UIGridbox*/ public: void /*__thiscall*/ AutoSort(); //0x00792c50
	/*UIGridbox*/ public: void /*__thiscall*/ SetAutoPlaceNotify(bool unk1); //0x00502807
	/*UIGridbox*/ public: void /*__thiscall*/ SetAutoTransfer(bool unk1); //0x005027c2
	/*UIGridbox*/ public: void /*__thiscall*/ SetBoxHeight(int unk1); //0x00502731
	/*UIGridbox*/ public: void /*__thiscall*/ SetBoxWidth(int unk1); //0x0050276c
	/*UIGridbox*/ public: void /*__thiscall*/ SetColor(unsigned long unk1); //0x0050281e
	/*UIGridbox*/ public: void /*__thiscall*/ SetColumns(int unk1); //0x0050271a
	/*UIGridbox*/ public: void /*__thiscall*/ SetConsumesItems(bool unk1); //0x005027d9
	/*UIGridbox*/ public: void /*__thiscall*/ SetContinuePickup(bool unk1); //0x00485c27
	/*UIGridbox*/ public: void /*__thiscall*/ SetDeactivateOverlapped(bool unk1); //0x00485c8e
	/*UIGridbox*/ public: void /*__thiscall*/ SetGridType(const gpbstring<char>& unk1); //0x00503f04
	/*UIGridbox*/ public: void /*__thiscall*/ SetIgnoreItem(bool unk1); //0x00485c5e
	/*UIGridbox*/ public: void /*__thiscall*/ SetItemDetect(bool unk1); //0x00485c37
	/*UIGridbox*/ public: void /*__thiscall*/ SetLocalPlace(bool unk1); //0x005027f7
	/*UIGridbox*/ public: void /*__thiscall*/ SetOriginalBoxHeight(int unk1); //0x00502741
	/*UIGridbox*/ public: void /*__thiscall*/ SetOriginalBoxWidth(int unk1); //0x0050275c
	/*UIGridbox*/ public: void /*__thiscall*/ SetRequestPickup(bool unk1); //0x005027ab
	/*UIGridbox*/ public: void /*__thiscall*/ SetRows(int unk1); //0x00502703
	/*UIGridbox*/ public: void /*__thiscall*/ SetStore(bool unk1); //0x0050278e
};
