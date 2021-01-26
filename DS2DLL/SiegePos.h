#pragma once

#include "FuBi.h"
#include "GPMath.h"
#include "Siege.h"

typedef struct vector_3 Vector3;

struct SiegePos {
	// 0x00
	Vector3 position;
	// 0x0c
	$Padding(0x0c, 0x10);
	// 0x10
	SiegeDbGuid node;

	$Method(0x006d2820, sub_6D2820, int);
};

STATIC_ASSERT_OFFSETOF(SiegePos, node, 0x10);

$TemplateStaticMethod(0x006d13c0, FuBi::Traits<SiegePos>::ToString, void, GPBString& strOut, const SiegePos& position, FuBi::eXfer unk3);
$TemplateStaticMethod(0x006d0d30, FuBi::Traits<SiegePos>::FromString, bool, const char* str, SiegePos& positionOut);
$TemplateConstMethod(0x00408275, FuBi::Traits<SiegePos>::GetPos, const Vector3&);
$TemplateMethod(0x00408283, FuBi::Traits<SiegePos>::SetPos, void, const Vector3& position);
$TemplateConstMethod(0x0040827b, FuBi::Traits<SiegePos>::GetNode, const siege::database_guid&);
$TemplateMethod(0x00408296, FuBi::Traits<SiegePos>::SetNode, void, const siege::database_guid& node);
