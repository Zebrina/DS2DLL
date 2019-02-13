#pragma once

class Formation {
public:
	DefineMethod(Move, 0x87faf8, bool, Params(eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7), Args(eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7));
	DefineMethod(Rotate, 0x878752, bool, Params(float unk1), Args(float unk1));
	/*Formation*/ public: const SiegePos& /*__thiscall*/ GetPosition(); //0x0041261e
	/*Formation*/ public: const vector_3& /*__thiscall*/ GetDirection(); //0x00412622
	/*Formation*/ public: const vector_3& /*__thiscall*/ GetMemberDirection(); //0x00412626
	DefineMethod(SetDirection, 0x87a70c, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(SetMemberDirection, 0x87a787, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(SetPosition, 0x8798bd, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(SetShape, 0x87ed22, void, Params(const gpbstring<char>& unk1, bool unk2), Args(const gpbstring<char>& unk1, bool unk2));
	DefineMethod(SetShape, 0x41260d, void, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
};
