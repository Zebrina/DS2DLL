#pragma once

#include "Enums.h"
#include "GPBString.h"
#include "Vector3.h"

class Formation {
public:
	DefineMethod(GetPosition, 0x41261e, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineMethod(SetPosition, 0x8798bd, void, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(GetDirection, 0x412622, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineMethod(SetDirection, 0x87a70c, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(GetMemberDirection, 0x412626, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineMethod(SetMemberDirection, 0x87a787, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SetShape, 0x41260d, void, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetShape, 0x87ed22, void, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
  DefineMethod(Move, 0x87faf8, bool, Params(eQPlace unk1, eActionOrigin unk2, bool unk3, bool unk4, bool unk5, bool unk6, bool unk7), Args(unk1, unk2, unk3, unk4, unk5, unk6, unk7));
  DefineMethod(Rotate, 0x878752, bool, Params(float unk1), Args(unk1));

  // 0x40
  SiegePos* position;
	// 0x78
	vector_3* direction;
	// 0x84
	vector_3* memberDirection;
	// ??
	//gpbstring<char>* shape;
};
