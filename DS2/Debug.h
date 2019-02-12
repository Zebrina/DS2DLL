#pragma once

#include "ClassMacros.h"

class Debug {
public:
	DefineSingleton(Debug, 0x427ac8);

	/*Debug*/ private: /*static*/ Debug* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00427ac8
	/*Debug*/ public: /*static*/ void /*__cdecl*/ Assert(int unk1, const char* unk2); //0x0099606d
	/*Debug*/ public: /*static*/ void /*__cdecl*/ Assert(int unk1); //0x00996068
	/*Debug*/ public: /*static*/ void /*__cdecl*/ AssertF(int unk1, const char* unk2, ...); //0x00996072
	/*Debug*/ public: /*static*/ void /*__cdecl*/ Breakpoint(); //0x00996077
	/*Debug*/ public: const char* /*__cdecl*/ Format(const char* unk1, ...); //0x00996047
};
