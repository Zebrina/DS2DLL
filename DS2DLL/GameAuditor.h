#pragma once

#include "AuditorDb.h"

class GameAuditor : public AuditorDb {
public:
	$Singleton(GameAuditor, 0x00414146);

	$Method(0x0085f599, AddDb, AuditorDb*, const char* unk1, bool unk2);
	$Method(0x0085e576, FindDb, AuditorDb*, const char* unk1);
	//$Method(0x00411718, GetDb, AuditorDb*); return this;
	$Method(0x0085ff4d, RCSet, void, const char* unk1, int unk2, uint unk3);
	$Method(0x0041171b, RCSet, void, const char* unk1, int unk2);
	$Method(0x00860039, RCSet, void, int unk1, const char* unk2, int unk3, uint unk4);
	$Method(0x0041172f, RCSet, void, int unk1, const char* unk2, int unk3);
	$Method(0x00860128, RCSetBool, void, const char* unk1, bool unk2, uint unk3);
	$Method(0x00411746, RCSetBool, void, const char* unk1, bool unk2);
	$Method(0x00860214, RCSetBool, void, int unk1, const char* unk2, bool unk3, uint unk4);
	$Method(0x0041175a, RCSetBool, void, int unk1, const char* unk2, bool unk3);

	// 0x00
	// AuditorDb;
};
