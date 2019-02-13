#pragma once

#include "Enums.h"

struct AnimReq {
	/*AnimReq*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x0047246a
	DefineConstMethod(GetReqChore, 0x47246e, eAnimChore, Params(), Args());
	DefineConstMethod(GetReqStance, 0x47248e, eAnimStance, Params(), Args());
	DefineConstMethod(GetReqSpeed, 0x4724c1, float, Params(), Args());
	DefineConstMethod(GetReqSubAnim, 0x47249f, int, Params(), Args());
	/*AnimReq*/ public: unsigned long /*__thiscall*/ GetReqBlock() const; //0x0047247d
	/*AnimReq*/ public: unsigned long /*__thiscall*/ GetReqFlags() const; //0x004724b0
	DefineMethod(SetReqBlock, 0x472481, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetReqChore, 0x472471, void, Params(eAnimChore unk1), Args(eAnimChore unk1));
	DefineMethod(SetReqFlags, 0x4724b4, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetReqSpeed, 0x4724c5, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetReqStance, 0x472492, void, Params(eAnimStance unk1), Args(eAnimStance unk1));
	DefineMethod(SetReqSubAnim, 0x4724a3, void, Params(int unk1), Args(int unk1));
};
