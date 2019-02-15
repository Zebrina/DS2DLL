#pragma once

class Formation {
public:
	DefineMethod(Move, 0x87faf8, bool, Params(eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
	DefineMethod(Rotate, 0x878752, bool, Params(float unk1), Args(unk1));
	DefineMethod(GetPosition, 0x41261e, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetDirection, 0x412622, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetMemberDirection, 0x412626, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineMethod(SetDirection, 0x87a70c, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SetMemberDirection, 0x87a787, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SetPosition, 0x8798bd, void, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(SetShape, 0x87ed22, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetShape, 0x41260d, void, Params(const gpbstring<char>& unk1), Args(unk1));
};
