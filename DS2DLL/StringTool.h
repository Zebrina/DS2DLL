#pragma once

#include "GPString.h"

namespace StringTool {
    $Function(0x0099732f, IsEmpty, bool, const char* str);
    $Function(0x0099735d, GetLength, int, const GPBString& str);

    $Function(0x0099745f, Assign, GPBString&, GPBString& str, const char* value);
    $Function(0x0099749c, AssignF, GPBString&, GPBString& str, const char* format, ...);
    $Function(0x00997371, Append, GPBString&, GPBString& str, const char* value);
    $Function(0x009973ae, AppendF, GPBString&, GPBString& str, const char* format, ...);

    // Not exported.
    $Function(0x00606448, Assign, GPWString&, GPWString& wstr, const char* value);
    $Function(0x006064d9, AssignF, GPWString&, GPWString& wstr, const char* format, ...);

    $Function(0x0099789b, GetDelimitedBool, bool, const char* str, int unk2, char delimiter = ',', bool defaultValue = false);
    $Function(0x009978bf, GetDelimitedInt, int, const char* str, int unk2, char delimiter = ',', int defaultValue = 0);
    $Function(0x009978e3, GetDelimitedFloat, float, const char* str, int unk2, char delimiter = ',', float defaultValue = 0.0f);
    $Function(0x00427aef, GetDelimitedString, GPBString, const char* str, int unk2, char delimiter = ',');
    $Function(0x00427ace, GetDelimitedString, GPBString, const char* str, int unk2, char delimiter, const char* unk4);
    $Function(0x009977fb, GetDelimitedString, GPBString, const char* str, int unk2, char delimiter, const char* unk4, bool unk5);

    $Function(0x009977e9, GetNumDelimitedValues, int, const char* str, char delimiter = ',');

	$Function(0x009975eb, SameNoCase, bool, const char* str1, const char* str2);
	$Function(0x00997635, SameNoCase, bool, const char* str1, const char* str2, int length);
	$Function(0x0099767e, SameWithCase, bool, const char* str1, const char* str2);
	$Function(0x00997756, SameWithCase, bool, const char* str1, const char* str2, int length);
	$Function(0x00997712, StringInString, bool, const char* str, const char* sub);
	$Function(0x0099733f, GetFileNameOnly, GPBString, const GPBString& str);
	$Function(0x0099754d, Left, GPBString, const GPBString& str, int unk2);
	$Function(0x009975af, Right, GPBString, const GPBString& str, int unk2);
	$Function(0x00997584, Mid, GPBString, const GPBString& str, int unk2);
	$Function(0x00997568, Mid, GPBString, const GPBString& str, int unk2, int unk3);
	$Function(0x0099772a, PadFrontToLength, void, GPBString& str, char unk2, uint unk3);
	$Function(0x00997740, PadBackToLength, void, GPBString& str, char unk2, uint unk3);
}
