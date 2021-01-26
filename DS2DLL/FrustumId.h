#pragma once

typedef struct FrustumId_ FrustumId;

struct FrustumId_ {
	// 0x00
	uint handle;
};

STATIC_ASSERT(sizeof(FrustumId) == sizeof(uint));

$Function(0x00435b4e, MakeInt, uint, const FrustumId* frustumId);
$Function(0x00502d4e, MakeIndex, int, const FrustumId* frustumId);
$Function(0x004c42ff, MakeFrustumId, const FrustumId*, uint value);
$Function(0x007ed79f, IsValid, bool, const FrustumId* frustumId, bool unk2);
