#pragma once

struct TTMessages {
	/*TTMessages*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00409556
	/*TTMessages*/ public: const Scid_* /*__thiscall*/ GetBeginSendTo() const; //0x00409569
	/*TTMessages*/ public: const Scid_* /*__thiscall*/ GetEndSendTo() const; //0x0040959c
	DefineConstMethod(GetBeginEvent, 0x40955a, eWorldEvent, Params(), Args());
	DefineConstMethod(GetEndEvent, 0x40958b, eWorldEvent, Params(), Args());
	DefineConstMethod(GetBeginDelay, 0x40957a, float, Params(), Args());
	DefineConstMethod(GetEndDelay, 0x4095ad, float, Params(), Args());
	DefineMethod(SetBeginDelay, 0x40957e, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetBeginEvent, 0x40955d, void, Params(eWorldEvent unk1), Args(eWorldEvent unk1));
	DefineMethod(SetBeginSendTo, 0x40956d, void, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineMethod(SetEndDelay, 0x4095b1, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetEndEvent, 0x40958f, void, Params(eWorldEvent unk1), Args(eWorldEvent unk1));
	DefineMethod(SetEndSendTo, 0x4095a0, void, Params(const Scid_* unk1), Args(const Scid_* unk1));
};
