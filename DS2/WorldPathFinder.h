#pragma once

#include "ClassMacros.h"

class WorldPathFinder {
public:
	DefineSingleton(WorldPathFinder, 0x47400e);

	/*WorldPathFinder*/ private: /*static*/ WorldPathFinder* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x0047400e
	/*WorldPathFinder*/ public: bool /*__thiscall*/ FindLinePath(const Go* unk1, const SiegePos& unk2, SiegePos& unk3); //0x00951686
	/*WorldPathFinder*/ public: bool /*__thiscall*/ FindLinePath(const Go* unk1, const vector_3& unk2, float unk3, SiegePos& unk4); //0x00951571
	/*WorldPathFinder*/ public: bool /*__thiscall*/ FindLinePath(const Go* unk1, const vector_3& unk2, SiegePos& unk3); //0x00951525
	/*WorldPathFinder*/ public: bool /*__thiscall*/ FindLinePath(const SiegePos& unk1, const SiegePos& unk2, siege::eLogicalNodeFlags unk3, SiegePos& unk4); //0x009515a5
	/*WorldPathFinder*/ public: bool /*__thiscall*/ FindLinePath(const SiegePos& unk1, siege::eLogicalNodeFlags unk2, const vector_3& unk3, float unk4, SiegePos& unk5); //0x0095136a
	/*WorldPathFinder*/ public: bool /*__thiscall*/ FindLinePath(const SiegePos& unk1, siege::eLogicalNodeFlags unk2, const vector_3& unk3, SiegePos& unk4); //0x0095161c
	/*WorldPathFinder*/ public: bool /*__thiscall*/ HasLinePath(const Go* unk1, SiegePos& unk2, float unk3); //0x00951823
	/*WorldPathFinder*/ public: bool /*__thiscall*/ HasLinePath(const Go* unk1, SiegePos& unk2); //0x00472d0f
	/*WorldPathFinder*/ public: bool /*__thiscall*/ HasPath(const Go* unk1, const SiegePos& unk2, float unk3); //0x00951655
	/*WorldPathFinder*/ public: bool /*__thiscall*/ HasPath(const Go* unk1, const SiegePos& unk2); //0x00472d27
	/*WorldPathFinder*/ public: bool /*__thiscall*/ HasPath(const SiegePos& unk1, const SiegePos& unk2, siege::eLogicalNodeFlags unk3, float unk4); //0x0095145c
};
