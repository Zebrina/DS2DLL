#pragma once

class Formation {
public:
	/*Formation*/ public: bool /*__thiscall*/ Move(eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7); //0x0087faf8
	/*Formation*/ public: bool /*__thiscall*/ Rotate(float unk1); //0x00878752
	/*Formation*/ public: const SiegePos& /*__thiscall*/ GetPosition(); //0x0041261e
	/*Formation*/ public: const vector_3& /*__thiscall*/ GetDirection(); //0x00412622
	/*Formation*/ public: const vector_3& /*__thiscall*/ GetMemberDirection(); //0x00412626
	/*Formation*/ public: void /*__thiscall*/ SetDirection(const vector_3& unk1); //0x0087a70c
	/*Formation*/ public: void /*__thiscall*/ SetMemberDirection(const vector_3& unk1); //0x0087a787
	/*Formation*/ public: void /*__thiscall*/ SetPosition(const SiegePos& unk1); //0x008798bd
	/*Formation*/ public: void /*__thiscall*/ SetShape(const gpbstring<char>& unk1, bool unk2); //0x0087ed22
	/*Formation*/ public: void /*__thiscall*/ SetShape(const gpbstring<char>& unk1); //0x0041260d
};
