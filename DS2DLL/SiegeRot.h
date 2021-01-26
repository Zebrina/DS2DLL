#pragma once

#include "FuBi.h"
#include "GPString.h"
#include "GPMath.h"
#include "SiegeRot.h"

struct SiegeRot {
	// 0x00
	Quat quat;
	// 0x10
	siege::database_guid node;
};

$TemplateStaticMethod(0x006d0d90, FuBi::Traits<SiegeRot>::FromString, bool, const char* unk1, SiegeRot& unk2);
$TemplateStaticMethod(0x006d1430, FuBi::Traits<SiegeRot>::ToString, void, GPBString& unk1, const SiegeRot& unk2, FuBi::eXfer unk3);
/*FuBi::Traits<SiegeRot>*/ siege::database_guid& /*__thiscall*/ GetNode(); //0x004082e1
$TemplateConstMethod(0x004082dd, FuBi::Traits<SiegeRot>::GetNode, const siege::database_guid&);
$TemplateConstMethod(0x004082d7, FuBi::Traits<SiegeRot>::GetRot, const Quat&);
/*FuBi::Traits<SiegeRot>*/ Quat & /*__thiscall*/ GetRot(); //0x004082da
$TemplateMethod(0x004082e5, FuBi::Traits<SiegeRot>::SetNode, void, const siege::database_guid& unk1);
$TemplateMethod(0x0040a1c1, FuBi::Traits<SiegeRot>::SetRot, void, const Quat& unk1);
