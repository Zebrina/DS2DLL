#pragma once

class WorldPathFinder {
public:
	$Singleton(WorldPathFinder, 0x0047400e);

	$Method(0x00951686, FindLinePath, bool, const Go* unk1, const SiegePos& unk2, SiegePos& unk3);
	$Method(0x00951571, FindLinePath, bool, const Go* unk1, const Vector3& unk2, float unk3, SiegePos& unk4);
	$Method(0x00951525, FindLinePath, bool, const Go* unk1, const Vector3& unk2, SiegePos& unk3);
	$Method(0x009515a5, FindLinePath, bool, const SiegePos& unk1, const SiegePos& unk2, siege::eLogicalNodeFlags unk3, SiegePos& unk4);
	$Method(0x0095136a, FindLinePath, bool, const SiegePos& unk1, siege::eLogicalNodeFlags unk2, const Vector3& unk3, float unk4, SiegePos& unk5);
	$Method(0x0095161c, FindLinePath, bool, const SiegePos& unk1, siege::eLogicalNodeFlags unk2, const Vector3& unk3, SiegePos& unk4);
	$Method(0x00951823, HasLinePath, bool, const Go* unk1, SiegePos& unk2, float unk3);
	$Method(0x00472d0f, HasLinePath, bool, const Go* unk1, SiegePos& unk2);
	$Method(0x00951655, HasPath, bool, const Go* unk1, const SiegePos& unk2, float unk3);
	$Method(0x00472d27, HasPath, bool, const Go* unk1, const SiegePos& unk2);
	$Method(0x0095145c, HasPath, bool, const SiegePos& unk1, const SiegePos& unk2, siege::eLogicalNodeFlags unk3, float unk4);
};
