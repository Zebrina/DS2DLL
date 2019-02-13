#pragma once

class JobAttributeBits {
public:
	/*JobAttributeBits*/ private: /*static*/ JobAttributeBits& /*__cdecl*/ GetTemp1(); //0x0094115c
	/*JobAttributeBits*/ private: /*static*/ JobAttributeBits& /*__cdecl*/ GetTemp2(); //0x00941162
	DefineConstMethod(Get, 0x942014, bool, Params(eJobAttribute unk1), Args(eJobAttribute unk1));
	DefineConstMethod(HasAnyBitsSet, 0x941c89, bool, Params(), Args());
	DefineConstMethod(IsEqualTo, 0x9424c4, bool, Params(const JobAttributeBits& unk1), Args(const JobAttributeBits& unk1));
	DefineConstMethod(IsLargerSuperSetOf, 0x942e59, bool, Params(const JobAttributeBits& unk1), Args(const JobAttributeBits& unk1));
	DefineConstMethod(IsSmallerSubSetOf, 0x942e85, bool, Params(const JobAttributeBits& unk1), Args(const JobAttributeBits& unk1));
	DefineConstMethod(IsSubSetOf, 0x942e22, bool, Params(const JobAttributeBits& unk1), Args(const JobAttributeBits& unk1));
	DefineConstMethod(IsSuperSetOf, 0x942ded, bool, Params(const JobAttributeBits& unk1), Args(const JobAttributeBits& unk1));
	DefineMethod(Clear, 0x94204d, void, Params(eJobAttribute unk1), Args(eJobAttribute unk1));
	DefineMethod(ClearAll, 0x9420d0, void, Params(), Args());
	DefineMethod(CopyFrom, 0x942c88, void, Params(const JobAttributeBits& unk1), Args(const JobAttributeBits& unk1));
	DefineMethod(Set, 0x94201d, void, Params(eJobAttribute unk1, bool unk2), Args(eJobAttribute unk1, bool unk2));
	DefineMethod(Set, 0x94203c, void, Params(eJobAttribute unk1), Args(eJobAttribute unk1));
	DefineMethod(SetAll, 0x94205e, void, Params(bool unk1), Args(bool unk1));
};
