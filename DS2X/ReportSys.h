#pragma once

#include "GPBString.h"

class ReportSys {
public:
	class Context {
	public:
		DefineConstMethod(IsEnabled, 0x4289f0, bool, NO_PARAMS, NO_ARGS);
		DefineConstMethod(IsInReport, 0x428a2d, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(Enable, 0x4289de, void, Params(bool unk1), Args(unk1));
		DefineMethod(Disable, 0x4289eb, void, NO_PARAMS, NO_ARGS);
		DefineMethod(Toggle, 0x429e6e, void, NO_PARAMS, NO_ARGS);
		DefineMethod(Output, 0x6727da, bool, Params(const char* unk1, int unk2), Args(unk1, unk2));
		DefineMethod(Output, 0x428a5d, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(Output, 0x429e81, bool, Params(const gpbstring<char>& unk1), Args(unk1));
		DefineVarArgMethod(OutputF, 0x428a6e, bool, Params(const char* format), Args(format));
		DefineMethod(OutputEol, 0x428a82, bool, NO_PARAMS, NO_ARGS);
		DefineMethod(OutputRaw, 0x6726f3, bool, Params(const char* unk1, int unk2), Args(unk1, unk2));
		DefineMethod(OutputRaw, 0x428a4c, bool, Params(const char* unk1), Args(unk1));
		DefineMethod(BeginReport, 0x672237, void, NO_PARAMS, NO_ARGS);
		DefineMethod(EndReport, 0x6722f7, void, NO_PARAMS, NO_ARGS);
		DefineMethod(Indent, 0x428a36, void, NO_PARAMS, NO_ARGS);
		DefineMethod(Outdent, 0x428a41, void, NO_PARAMS, NO_ARGS);
	};
};
