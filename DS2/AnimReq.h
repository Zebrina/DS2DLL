#pragma once

#include "Enums.h"

struct AnimReq {
	/*AnimReq*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x0047246a
	/*AnimReq*/ public: eAnimChore /*__thiscall*/ GetReqChore() const; //0x0047246e
	/*AnimReq*/ public: eAnimStance /*__thiscall*/ GetReqStance() const; //0x0047248e
	/*AnimReq*/ public: float /*__thiscall*/ GetReqSpeed() const; //0x004724c1
	/*AnimReq*/ public: int /*__thiscall*/ GetReqSubAnim() const; //0x0047249f
	/*AnimReq*/ public: unsigned long /*__thiscall*/ GetReqBlock() const; //0x0047247d
	/*AnimReq*/ public: unsigned long /*__thiscall*/ GetReqFlags() const; //0x004724b0
	/*AnimReq*/ public: void /*__thiscall*/ SetReqBlock(unsigned long unk1); //0x00472481
	/*AnimReq*/ public: void /*__thiscall*/ SetReqChore(eAnimChore unk1); //0x00472471
	/*AnimReq*/ public: void /*__thiscall*/ SetReqFlags(unsigned long unk1); //0x004724b4
	/*AnimReq*/ public: void /*__thiscall*/ SetReqSpeed(float unk1); //0x004724c5
	/*AnimReq*/ public: void /*__thiscall*/ SetReqStance(eAnimStance unk1); //0x00472492
	/*AnimReq*/ public: void /*__thiscall*/ SetReqSubAnim(int unk1); //0x004724a3
};
