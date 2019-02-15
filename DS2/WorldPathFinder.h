#pragma once

#include "ClassMacros.h"

class WorldPathFinder {
public:
	DefineSingleton(WorldPathFinder, 0x47400e);

	DefineMethod(FindLinePath, 0x951686, bool, Params(const Go* unk1, const SiegePos& unk2, SiegePos& unk3), Args(unk1, unk2, unk3));
	DefineMethod(FindLinePath, 0x951571, bool, Params(const Go* unk1, const vector_3& unk2, float unk3, SiegePos& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(FindLinePath, 0x951525, bool, Params(const Go* unk1, const vector_3& unk2, SiegePos& unk3), Args(unk1, unk2, unk3));
	DefineMethod(FindLinePath, 0x9515a5, bool, Params(const SiegePos& unk1, const SiegePos& unk2, siege::eLogicalNodeFlags unk3, SiegePos& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(FindLinePath, 0x95136a, bool, Params(const SiegePos& unk1, siege::eLogicalNodeFlags unk2, const vector_3& unk3, float unk4, SiegePos& unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(FindLinePath, 0x95161c, bool, Params(const SiegePos& unk1, siege::eLogicalNodeFlags unk2, const vector_3& unk3, SiegePos& unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(HasLinePath, 0x951823, bool, Params(const Go* unk1, SiegePos& unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(HasLinePath, 0x472d0f, bool, Params(const Go* unk1, SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(HasPath, 0x951655, bool, Params(const Go* unk1, const SiegePos& unk2, float unk3), Args(unk1, unk2, unk3));
	DefineMethod(HasPath, 0x472d27, bool, Params(const Go* unk1, const SiegePos& unk2), Args(unk1, unk2));
	DefineMethod(HasPath, 0x95145c, bool, Params(const SiegePos& unk1, const SiegePos& unk2, siege::eLogicalNodeFlags unk3, float unk4), Args(unk1, unk2, unk3, unk4));
};
