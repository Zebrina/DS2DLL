#pragma once

struct GoidColl {
	/*GoidColl*/ private: bool /*__thiscall*/ Empty() const; //0x005035e7
	/*GoidColl*/ private: bool /*__thiscall*/ Has(const Goid_* unk1); //0x007ed660
	/*GoidColl*/ private: bool /*__thiscall*/ Remove(const Goid_* unk1); //0x007ed636
	/*GoidColl*/ private: const Goid_* /*__thiscall*/ Back(); //0x00503618
	/*GoidColl*/ private: const Goid_* /*__thiscall*/ Front(); //0x00503613
	/*GoidColl*/ private: const Goid_* /*__thiscall*/ Get(int unk1) const; //0x005035f2
	/*GoidColl*/ private: int /*__thiscall*/ Size() const; //0x005035de
	/*GoidColl*/ private: void /*__thiscall*/ Add(const Goid_* unk1); //0x00503c6b
	/*GoidColl*/ private: void /*__thiscall*/ Clean(); //0x007ed682
	/*GoidColl*/ private: void /*__thiscall*/ Clear(); //0x005038f9
	/*GoidColl*/ private: void /*__thiscall*/ PopBack(); //0x0050361f
	/*GoidColl*/ private: void /*__thiscall*/ Set(int unk1, const Goid_* unk2); //0x00503601
};
