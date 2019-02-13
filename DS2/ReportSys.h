#pragma once

#include "GPBString.h"

class ReportSys {
public:
	class Context {
	public:
		/*ReportSys::Context*/ public: bool /*__cdecl*/ OutputF(const char* unk1, ...); //0x00428a6e
		DefineConstMethod(IsEnabled, 0x4289f0, bool, Params(), Args());
		DefineConstMethod(IsInReport, 0x428a2d, bool, Params(), Args());
		DefineMethod(Output, 0x6727da, bool, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
		DefineMethod(Output, 0x428a5d, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(Output, 0x429e81, bool, Params(const gpbstring<char>& unk1), Args(const gpbstring<char>& unk1));
		DefineMethod(OutputEol, 0x428a82, bool, Params(), Args());
		DefineMethod(OutputRaw, 0x6726f3, bool, Params(const char* unk1, int unk2), Args(const char* unk1, int unk2));
		DefineMethod(OutputRaw, 0x428a4c, bool, Params(const char* unk1), Args(const char* unk1));
		DefineMethod(BeginReport, 0x672237, void, Params(), Args());
		DefineMethod(Disable, 0x4289eb, void, Params(), Args());
		DefineMethod(Enable, 0x4289de, void, Params(bool unk1), Args(bool unk1));
		DefineMethod(EndReport, 0x6722f7, void, Params(), Args());
		DefineMethod(Indent, 0x428a36, void, Params(), Args());
		DefineMethod(Outdent, 0x428a41, void, Params(), Args());
		DefineMethod(Toggle, 0x429e6e, void, Params(), Args());
	};
};
