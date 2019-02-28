#pragma once

#include "GPBString.h"
#include "Vector3.h"

struct WorldLocation {
	DefineStaticMethod(FUBI_PodGetSize, 0x403ede, unsigned int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetId, 0x403ee2, int, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetMinor, 0x403ee5, bool, NO_PARAMS, NO_ARGS);
	void SetMinor(bool flag) {
		minor = flag;
	}
	DefineConstMethod(GetClothMapPos, 0x403ee9, const vector_3&, NO_PARAMS, NO_ARGS);
	void SetClothMapPos(const vector_3& newPos) {
		clothMapPos = newPos;
	}
	DefineConstMethod(GetClothMapHideGroup, 0x4060e0, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetClothMapRollover, 0x4060b4, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetClothMapShowGroup, 0x4060ca, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetClothMapWindow, 0x4060f6, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetName, 0x40609e, gpbstring<char>, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetScreenNameAnsi, 0x405341, gpbstring<char>, NO_PARAMS, NO_ARGS);

  // 0x00
  int id;
  // 0x04
  FillStruct(0x04, 0x08);
  // 0x08
  bool minor;
  // 0x09
  FillStruct(0x09, 0x20);
  // 0x20
  vector_3 clothMapPos;
};

STATIC_ASSERT_OFFSETOF(WorldLocation, clothMapPos, 0x20);
