#pragma once

class AuditorDb {
public:
	$Method(0x0085fa5d, IncrementDouble, double, const char* unk1, double unk2);
	$Method(0x0085fa00, IncrementFloat, float, const char* unk1, float unk2);
	$Method(0x0085f9a2, Increment, int, const char* unk1, int unk2);
	$Method(0x0085e1e0, ClearEntries, void, int unk1);
	$Method(0x0085f15d, RemoveEntry, void, int unk1, const char* unk2);
};
