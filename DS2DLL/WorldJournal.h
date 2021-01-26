#pragma once

#include "GPString.h"
#include "IJournal.h"
#include "Memory.h"

class WorldJournal : public IJournal {
public:
	$Singleton(WorldJournal, 0x00410443);

	$ConstMethod(0x00410006, GetBool, bool, const char* key, bool defaultValue);
	$ConstMethod(0x0041000f, GetBool, bool, const char* key);
	$ConstMethod(0x0040fff4, GetInt, int, const char* key, int defaultValue);
	$ConstMethod(0x0040fffd, GetInt, int, const char* key);
	$ConstMethod(0x00410018, GetString, const GPBString&, const char* key, const GPBString& defaultValue);
	$ConstMethod(0x00410021, GetString, const GPBString&, const char* key);
	$ConstMethod(0x0041003c, GetSessionBool, bool, const char* key, bool defaultValue);
	$ConstMethod(0x00410045, GetSessionBool, bool, const char* key);
	$ConstMethod(0x0041002a, GetSessionInt, int, const char* key, int defaultValue);
	$ConstMethod(0x00410033, GetSessionInt, int, const char* key);
	$ConstMethod(0x0041004e, GetSessionString, const GPBString&, const char* key, const GPBString& defaultValue);
	$ConstMethod(0x00410057, GetSessionString, const GPBString&, const char* key);
	$Method(0x008503ad, RCSetBool, FuBiCookie*, const char* key, bool value);
	$Method(0x008502b3, RCSetInt, FuBiCookie*, const char* key, int value);
	$Method(0x0084f7ca, RCSetString, FuBiCookie*, const char* key, const GPBString& value);
	$Method(0x008506bc, RCSetSessionBool, FuBiCookie*, const char* key, bool value);
	$Method(0x008505c4, RCSetSessionInt, FuBiCookie*, const char* key, int value);
	$Method(0x0084f8c4, RCSetSessionString, FuBiCookie*, const char* key, const GPBString& value);
	$Method(0x00851108, RSSetBool, FuBiCookie*, const char* key, bool value);
	$Method(0x00850ff2, RSSetInt, FuBiCookie*, const char* key, int value);
	$Method(0x008504a7, RSSetString, FuBiCookie*, const char* key, const GPBString& value);
	$Method(0x0085133a, RSSetSessionBool, FuBiCookie*, const char* key, bool value);
	$Method(0x00851224, RSSetSessionInt, FuBiCookie*, const char* key, int value);
	$Method(0x008507b4, RSSetSessionString, FuBiCookie*, const char* key, const GPBString& value);
	$Method(0x0040ffeb, RemoveEntry, bool, const char* key);
	$Method(0x00852027, RCSyncOnMachine, FuBiCookie*, const_mem_ptr unk1, uint unk2);

	// Not exported.
	$Method(0x0084f17d, $RemoveEntry, bool, const char* key);
};

STATIC_ASSERT(sizeof(WorldJournal) == 0x24);
