#pragma once

#include "ClassMacros.h"

class Debug {
public:
	DefineSingleton(Debug, 0x427ac8);

	/*Debug*/ private: /*static*/ Debug* /*__cdecl*/ FUBI_GetClassSingleton$(); //0x00427ac8
	DefineStaticMethod(Assert, 0x99606d, void, Params(int unk1, const char* unk2), Args(int unk1, const char* unk2));
	DefineStaticMethod(Assert, 0x996068, void, Params(int unk1), Args(int unk1));
	DefineStaticMethod(AssertF, 0x996072, void, Params(int unk1, const char* unk2, ...), Args(int unk1, const char* unk2, ...));
	DefineStaticMethod(Breakpoint, 0x996077, void, Params(), Args());
	/*Debug*/ public: const char* /*__cdecl*/ Format(const char* unk1, ...); //0x00996047
};
