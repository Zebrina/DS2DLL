#pragma once



class Debug {
public:
	DefineSingleton(Debug, 0x427ac8);

	DefineStaticMethod(Assert, 0x996068, void, Params(int unk1), Args(unk1));
	DefineStaticMethod(Assert, 0x99606d, void, Params(int unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticVarArgMethod(AssertF, 0x996072, void, Params(int unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticMethod(Breakpoint, 0x996077, void, NO_PARAMS, NO_ARGS);
	DefineVarArgMethod(Format, 0x996047, const char*, Params(const char* format), Args(format));
};
