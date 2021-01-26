#pragma once

#include "FuBi.h"
#include "GPString.h"

struct _GUID {
	// 0x00
	$Padding(0x00, 0x04);
} typedef Guid;

$TemplateStaticMethod(0x009d5384, FuBi::Traits<Guid>::ToString, void, GPBString& strOut, const Guid& guid, FuBi::eXfer unk3);
$TemplateStaticMethod(0x009d5396, FuBi::Traits<Guid>::FromString, bool, const char* str, Guid& guidOut);
