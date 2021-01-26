#pragma once

#include "GPString.h"

class UIChatBox {
public:
	$Method(0x0040b3e4, GetLastSubmittedTextInAnsi, GPBString);
	$Method(0x0040b3bd, GetTextInAnsi, GPBString);
	$Method(0x0040b40b, SubmitText, void, const GPBString& unk1, uint unk2, bool unk3);
	$Method(0x00754d60, Clear, void);
	$Method(0x00409357, SetTextVisible, void, bool unk1);
};
