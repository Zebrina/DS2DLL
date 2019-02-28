#pragma once

class AuditorDb {
public:
	DefineMethod(IncrementDouble, 0x85fa5d, double, Params(const char* unk1, double unk2), Args(unk1, unk2));
	DefineMethod(IncrementFloat, 0x85fa00, float, Params(const char* unk1, float unk2), Args(unk1, unk2));
	DefineMethod(Increment, 0x85f9a2, int, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(ClearEntries, 0x85e1e0, void, Params(int unk1), Args(unk1));
	DefineMethod(RemoveEntry, 0x85f15d, void, Params(int unk1, const char* unk2), Args(unk1, unk2));
};
