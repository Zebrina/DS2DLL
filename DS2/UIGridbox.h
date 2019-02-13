#pragma once

class UIGridbox {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x502700, int, Params(UIWindow* unk1), Args(UIWindow* unk1));
	DefineConstMethod(GetAutoPlaceNotify, 0x502817, bool, Params(), Args());
	DefineConstMethod(GetAutoTransfer, 0x4cffc9, bool, Params(), Args());
	DefineConstMethod(GetConsumesItems, 0x5027e9, bool, Params(), Args());
	DefineConstMethod(GetContinuePickup, 0x5027bb, bool, Params(), Args());
	DefineConstMethod(GetDeactivateOverlapped, 0x5027f0, bool, Params(), Args());
	DefineMethod(GetIgnoreItem, 0x5027d2, bool, Params(), Args());
	DefineConstMethod(GetLocalPlace, 0x485c9e, bool, Params(), Args());
	DefineMethod(GetRequestPickup, 0x5027a4, bool, Params(), Args());
	DefineConstMethod(GetStore, 0x485c20, bool, Params(), Args());
	DefineMethod(SortForSpace, 0x7934d0, bool, Params(UIItem* unk1), Args(UIItem* unk1));
	DefineMethod(GetTextBox, 0x78c620, UITextBox*, Params(), Args());
	DefineMethod(GetTextBg, 0x78c650, UIWindow*, Params(), Args());
	/*UIGridbox*/ public: const gpbstring<char>& /*__thiscall*/ GetGridType() const; //0x00502787
	DefineMethod(GetFullRatio, 0x78da50, float, Params(), Args());
	DefineConstMethod(GetBoxHeight, 0x502751, int, Params(), Args());
	DefineConstMethod(GetBoxWidth, 0x50277c, int, Params(), Args());
	DefineConstMethod(GetColumns, 0x50272a, int, Params(), Args());
	DefineConstMethod(GetRows, 0x502713, int, Params(), Args());
	/*UIGridbox*/ public: unsigned long /*__thiscall*/ GetColor() const; //0x0050282e
	DefineMethod(AutoSort, 0x792c50, void, Params(), Args());
	DefineMethod(SetAutoPlaceNotify, 0x502807, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetAutoTransfer, 0x5027c2, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetBoxHeight, 0x502731, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetBoxWidth, 0x50276c, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetColor, 0x50281e, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetColumns, 0x50271a, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetConsumesItems, 0x5027d9, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetContinuePickup, 0x485c27, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetDeactivateOverlapped, 0x485c8e, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetGridType, 0x503f04, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
	DefineMethod(SetIgnoreItem, 0x485c5e, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetItemDetect, 0x485c37, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetLocalPlace, 0x5027f7, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetOriginalBoxHeight, 0x502741, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetOriginalBoxWidth, 0x50275c, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetRequestPickup, 0x5027ab, void, Params(bool unk1), Args(bool unk1));
	DefineMethod(SetRows, 0x502703, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetStore, 0x50278e, void, Params(bool unk1), Args(bool unk1));
};
