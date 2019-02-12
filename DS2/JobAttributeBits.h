#pragma once

class JobAttributeBits {
public:
	/*JobAttributeBits*/ private: /*static*/ JobAttributeBits& /*__cdecl*/ GetTemp1(); //0x0094115c
	/*JobAttributeBits*/ private: /*static*/ JobAttributeBits& /*__cdecl*/ GetTemp2(); //0x00941162
	/*JobAttributeBits*/ public: bool /*__thiscall*/ Get(eJobAttribute unk1) const; //0x00942014
	/*JobAttributeBits*/ public: bool /*__thiscall*/ HasAnyBitsSet() const; //0x00941c89
	/*JobAttributeBits*/ public: bool /*__thiscall*/ IsEqualTo(const JobAttributeBits& unk1) const; //0x009424c4
	/*JobAttributeBits*/ public: bool /*__thiscall*/ IsLargerSuperSetOf(const JobAttributeBits& unk1) const; //0x00942e59
	/*JobAttributeBits*/ public: bool /*__thiscall*/ IsSmallerSubSetOf(const JobAttributeBits& unk1) const; //0x00942e85
	/*JobAttributeBits*/ public: bool /*__thiscall*/ IsSubSetOf(const JobAttributeBits& unk1) const; //0x00942e22
	/*JobAttributeBits*/ public: bool /*__thiscall*/ IsSuperSetOf(const JobAttributeBits& unk1) const; //0x00942ded
	/*JobAttributeBits*/ public: void /*__thiscall*/ Clear(eJobAttribute unk1); //0x0094204d
	/*JobAttributeBits*/ public: void /*__thiscall*/ ClearAll(); //0x009420d0
	/*JobAttributeBits*/ public: void /*__thiscall*/ CopyFrom(const JobAttributeBits& unk1); //0x00942c88
	/*JobAttributeBits*/ public: void /*__thiscall*/ Set(eJobAttribute unk1, bool unk2); //0x0094201d
	/*JobAttributeBits*/ public: void /*__thiscall*/ Set(eJobAttribute unk1); //0x0094203c
	/*JobAttributeBits*/ public: void /*__thiscall*/ SetAll(bool unk1); //0x0094205e
};
