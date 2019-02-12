#pragma once

struct GopColl {
	/*GopColl*/ private: bool /*__thiscall*/ Empty() const; //0x005035a1
	/*GopColl*/ private: bool /*__thiscall*/ Has(Go* unk1); //0x007ed5f4
	/*GopColl*/ private: bool /*__thiscall*/ Remove(Go* unk1); //0x007ed5ca
	/*GopColl*/ private: Go* /*__thiscall*/ Back(); //0x005035d2
	/*GopColl*/ private: Go* /*__thiscall*/ Front(); //0x005035cd
	/*GopColl*/ private: Go* /*__thiscall*/ Get(int unk1) const; //0x005035ac
	/*GopColl*/ private: int /*__thiscall*/ Size() const; //0x00503598
	/*GopColl*/ private: void /*__thiscall*/ Add(Go* unk1); //0x00503c5b
	/*GopColl*/ private: void /*__thiscall*/ Clean(); //0x007ed616
	/*GopColl*/ private: void /*__thiscall*/ Clear(); //0x005038f3
	/*GopColl*/ private: void /*__thiscall*/ PopBack(); //0x005035d9
	/*GopColl*/ private: void /*__thiscall*/ Set(int unk1, Go* unk2); //0x005035bb
};
