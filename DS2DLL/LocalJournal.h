#pragma once

#include "FuBi.h"
#include "GPString.h"
#include "IJournal.h"

class LocalJournal : public IJournal {
public:
	$Singleton(LocalJournal, 0x0041043d);

	$ConstMethod(0x0040ff76, GetBool, bool, const char* key, bool defaultValue);
	$ConstMethod(0x0040ff7f, GetBool, bool, const char* key);
	$ConstMethod(0x0040ff64, GetInt, int, const char* key, int defaultValue);
	$ConstMethod(0x0040ff6d, GetInt, int, const char* key);
	$ConstMethod(0x0040ff88, GetString, const GPBString&, const char* key, const GPBString& defaultValue);
	$ConstMethod(0x0040ff91, GetString, const GPBString&, const char* key);
	$ConstMethod(0x0040ffc7, GetSessionBool, bool, const char* key, bool defaultValue);
	$ConstMethod(0x0040ffd0, GetSessionBool, bool, const char* key);
	$ConstMethod(0x0040ffb5, GetSessionInt, int, const char* key, int defaultValue);
	$ConstMethod(0x0040ffbe, GetSessionInt, int, const char* key);
	$ConstMethod(0x0040ffd9, GetSessionString, const GPBString&, const char* key, const GPBString& defaultValue);
	$ConstMethod(0x0040ffe2, GetSessionString, const GPBString&, const char* key);
	$Method(0x0084ff24, AddInt, void, const char* key, int value, bool unk3);
	$Method(0x0040ff26, AddInt, void, const char* key, int value);
	$Method(0x00850c6e, RCAddInt, FuBiCookie*, const char* key, int value, uint unk3);
	$Method(0x00851803, RSAddInt, FuBiCookie*, const char* key, int value, uint unk3);
	$Method(0x0085169d, RSAddTeamInt, FuBiCookie*, const char* key, int value, uint unk3);
	$Method(0x00851b13, RSAddTeamInt, FuBiCookie*, const char* key, int value);
	$Method(0x00850044, SetBool, void, const char* key, bool value, bool unk3);
	$Method(0x0040ff3a, SetBool, void, const char* key, bool value);
	$Method(0x0084ff1b, SetInt, void, const char* key, int value, bool unk3);
	$Method(0x0040ff12, SetInt, void, const char* key, int value);
	$Method(0x0084f7c1, SetString, void, const char* key, const GPBString& value, bool unk3);
	$Method(0x0040ff50, SetString, void, const char* key, const GPBString& value);
	$Method(0x0040ffa3, SetSessionBool, void, const char* key, bool value);
	$Method(0x0040ff9a, SetSessionInt, void, const char* key, int value);
	$Method(0x0040ffac, SetSessionString, void, const char* key, const GPBString& value);
	$Method(0x0084ff48, RCSetBool, FuBiCookie*, const char* key, bool value, uint unk3);
	$Method(0x0084fe1f, RCSetInt, FuBiCookie*, const char* key, int value, uint unk3);
	$Method(0x0084f6c5, RCSetString, FuBiCookie*, const char* key, const GPBString& value, uint unk3);
	$Method(0x00850ece, RSSetBool, FuBiCookie*, const char* key, bool value, uint unk3);
	$Method(0x00850b6e, RSSetInt, FuBiCookie*, const char* key, int value, uint unk3);
	$Method(0x008501b3, RSSetString, FuBiCookie*, const char* key, const GPBString& value, uint unk3);
	$Method(0x00850d68, RSSetTeamBool, FuBiCookie*, const char* key, bool value, uint unk3);
	$Method(0x00851903, RSSetTeamBool, FuBiCookie*, const char* key, bool value);
	$Method(0x00850a08, RSSetTeamInt, FuBiCookie*, const char* key, int value, uint unk3);
	$Method(0x00851679, RSSetTeamInt, FuBiCookie*, const char* key, int value);
	$Method(0x0085004d, RSSetTeamString, FuBiCookie*, const char* key, const GPBString& value, uint unk3);
	$Method(0x00850fce, RSSetTeamString, FuBiCookie*, const char* key, const GPBString& value);
	$Method(0x0040ff09, RemoveEntry, bool, const char* key);

	// Not exported.
	$ConstMethod(0x0084f224, $GetBool, bool, const char* key, int defaultValue);
	$ConstMethod(0x0084f24a, $GetBool, bool, const char* key);
	$ConstMethod(0x0084f1ed, $GetInt, int, const char* key, int defaultValue);
	$ConstMethod(0x0084f213, $GetInt, int, const char* key);
	$ConstMethod(0x0084f08e, $GetString, int, const char* key, int defaultValue);
	$ConstMethod(0x0084f1c5, $GetString, int, const char* key);
	$Method(0x0084f586, $SetString, int, const char* key, const GPBString& value, uint unk3);
};

STATIC_ASSERT(sizeof(LocalJournal) == 0x24);
