#pragma once

struct Vector3Coll {
	DefineConstMethod(Empty, 0x503481, bool, Params(), Args());
	/*Vector3Coll*/ private: const vector_3& /*__thiscall*/ Get(int unk1) const; //0x0050348c
	DefineConstMethod(Size, 0x503475, int, Params(), Args());
	/*Vector3Coll*/ private: vector_3& /*__thiscall*/ Get(int unk1); //0x0050349e
	DefineMethod(Append, 0x503c34, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
	DefineMethod(Set, 0x5034b0, void, Params(int unk1, const vector_3& unk2), Args(int unk1, const vector_3& unk2));
};