#pragma once

struct TTMessages {
	/*TTMessages*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00409556
	/*TTMessages*/ public: const Scid_* /*__thiscall*/ GetBeginSendTo() const; //0x00409569
	/*TTMessages*/ public: const Scid_* /*__thiscall*/ GetEndSendTo() const; //0x0040959c
	/*TTMessages*/ public: eWorldEvent /*__thiscall*/ GetBeginEvent() const; //0x0040955a
	/*TTMessages*/ public: eWorldEvent /*__thiscall*/ GetEndEvent() const; //0x0040958b
	/*TTMessages*/ public: float /*__thiscall*/ GetBeginDelay() const; //0x0040957a
	/*TTMessages*/ public: float /*__thiscall*/ GetEndDelay() const; //0x004095ad
	/*TTMessages*/ public: void /*__thiscall*/ SetBeginDelay(float unk1); //0x0040957e
	/*TTMessages*/ public: void /*__thiscall*/ SetBeginEvent(eWorldEvent unk1); //0x0040955d
	/*TTMessages*/ public: void /*__thiscall*/ SetBeginSendTo(const Scid_* unk1); //0x0040956d
	/*TTMessages*/ public: void /*__thiscall*/ SetEndDelay(float unk1); //0x004095b1
	/*TTMessages*/ public: void /*__thiscall*/ SetEndEvent(eWorldEvent unk1); //0x0040958f
	/*TTMessages*/ public: void /*__thiscall*/ SetEndSendTo(const Scid_* unk1); //0x004095a0
};
