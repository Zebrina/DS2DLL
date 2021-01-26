#pragma once

typedef struct SiegeId_ SiegeId;

struct SiegeId_ {
	$StaticMethod(0x004083c0, GetInvalidSiegeId, const SiegeId*);

	$ConstMethod(0x004083b5, IsValid, bool);
};

$Function(0x004083a5, MakeInt, uint, const SiegeId* siegeId);
$Function(0x004083ad, MakeSiegeId, const SiegeId*, uint value);
