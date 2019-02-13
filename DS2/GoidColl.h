#pragma once

struct GoidColl {
	DefineConstMethod(Empty, 0x5035e7, bool, Params(), Args());
	DefineMethod(Has, 0x7ed660, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(Remove, 0x7ed636, bool, Params(const Goid_* unk1), Args(const Goid_* unk1));
	/*GoidColl*/ private: const Goid_* /*__thiscall*/ Back(); //0x00503618
	/*GoidColl*/ private: const Goid_* /*__thiscall*/ Front(); //0x00503613
	/*GoidColl*/ private: const Goid_* /*__thiscall*/ Get(int unk1) const; //0x005035f2
	DefineConstMethod(Size, 0x5035de, int, Params(), Args());
	DefineMethod(Add, 0x503c6b, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(Clean, 0x7ed682, void, Params(), Args());
	DefineMethod(Clear, 0x5038f9, void, Params(), Args());
	DefineMethod(PopBack, 0x50361f, void, Params(), Args());
	DefineMethod(Set, 0x503601, void, Params(int unk1, const Goid_* unk2), Args(int unk1, const Goid_* unk2));
};
