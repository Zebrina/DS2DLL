#pragma once

#include "FuBi.h"
#include "GPString.h"

struct gpversion {

} typedef GPVersion;

$TemplateStaticMethod(0x009d56df, FuBi::Traits<gpversion>::ToString, void, GPBString& strOut, const gpversion& gpVersionIn, FuBi::eXfer unk3);
