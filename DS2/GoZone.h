#pragma once

class GoZone {
public:
	/*GoZone*/ public: bool /*__thiscall*/ IsPosInZone(const SiegePos& unk1) const; //0x0090cf52
	/*GoZone*/ public: bool /*__thiscall*/ IsPosOnBackSide(const SiegePos& unk1) const; //0x0090cf7e
	/*GoZone*/ public: bool /*__thiscall*/ IsPosOnFrontSide(const SiegePos& unk1) const; //0x0090cf68
	/*GoZone*/ public: bool /*__thiscall*/ IsPosOnLeftSide(const SiegePos& unk1) const; //0x0090cf94
	/*GoZone*/ public: bool /*__thiscall*/ IsPosOnRightSide(const SiegePos& unk1) const; //0x0090cfaa
	/*GoZone*/ public: bool /*__thiscall*/ IsValid() const; //0x004283e0
	/*GoZone*/ public: const SiegePos& /*__thiscall*/ GetPosition(); //0x0090cfc0
	/*GoZone*/ public: void /*__thiscall*/ GetBackDirection(vector_3& unk1); //0x0090cfed
	/*GoZone*/ public: void /*__thiscall*/ GetFrontDirection(vector_3& unk1); //0x0090cfd2
	/*GoZone*/ public: void /*__thiscall*/ GetLeftDirection(vector_3& unk1); //0x0090d03e
	/*GoZone*/ public: void /*__thiscall*/ GetRightDirection(vector_3& unk1); //0x0090d023
};
