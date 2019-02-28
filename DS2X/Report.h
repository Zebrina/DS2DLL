#pragma once

#undef MessageBox

#include "ReportSys.h"

namespace Report {
	DefineFunction(IsEnabled, 0x996f08, bool, Params(const char* unk1), Args(unk1));
	DefineFunction(Enable, 0x996ebd, void, Params(const char* unk1), Args(unk1));
	DefineFunction(Disable, 0x996ed7, void, Params(const char* unk1), Args(unk1));
	DefineFunction(Toggle, 0x996ef1, void, Params(const char* unk1), Args(unk1));
	DefineFunction(Debugger, 0x996d41, void, Params(const char* unk1), Args(unk1));
	DefineVarArgFunction(DebuggerF, 0x996d3c, void, Params(const char* format), Args(format));
	DefineFunction(DumpFile, 0x996f54, void, Params(const char* unk1), Args(unk1));
	DefineFunction(Error, 0x996d55, void, Params(const char* message), Args(message));
	DefineVarArgFunction(ErrorF, 0x996d50, void, Params(const char* format), Args(format));
	DefineFunction(ErrorBox, 0x996a3d, void, Params(const char* message), Args(message));
	DefineVarArgFunction(ErrorBoxF, 0x996a38, void, Params(const char* format), Args(format));
	DefineFunction(Fatal, 0x996e20, void, NO_PARAMS, NO_ARGS);
	DefineFunction(Fatal, 0x996d85, void, Params(const char* message), Args(message));
	DefineVarArgFunction(FatalF, 0x996d5a, void, Params(const char* format), Args(format));
	DefineFunction(Report, 0x996943, void, Params(ReportSys::Context* unk1, const char* unk2), Args(unk1, unk2)); // Exported as: FUBI_RENAME_Report
	DefineFunction(Report, 0x99694d, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2)); // Exported as: FUBI_RENAME_Report
	DefineVarArgFunction(ReportF, 0x99693e, void, Params(ReportSys::Context* unk1, const char* unk2), Args(unk1, unk2)); // Exported as: FUBI_RENAME_ReportF
	DefineVarArgFunction(ReportF, 0x996948, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2)); // Exported as: FUBI_RENAME_ReportF
	DefineFunction(Generic, 0x996957, void, Params(const char* unk1), Args(unk1));
	DefineVarArgFunction(GenericF, 0x996952, void, Params(const char* format), Args(format));
	DefineFunction(MessageBox, 0x9969a5, void, Params(const char* message), Args(message));
	DefineVarArgFunction(MessageBoxF, 0x99697a, void, Params(const char* format), Args(format));
	DefineFunction(Perf, 0x996961, void, Params(const char* message), Args(message));
	DefineVarArgFunction(PerfF, 0x99695c, void, Params(const char* format), Args(format));
	DefineFunction(PerfLog, 0x99696b, void, Params(const char* message), Args(message));
	DefineVarArgFunction(PerfLogF, 0x996966, void, Params(const char* format), Args(format));
	DefineFunction(Screen, 0x996c7e, void, Params(const char* message), Args(message));
	DefineVarArgFunction(ScreenF, 0x996c53, void, Params(const char* format), Args(format));
	DefineFunction(RCScreen, 0x996b74, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineFunction(SScreen, 0x996ac9, void, Params(const char* message), Args(message));
	DefineVarArgFunction(SScreenF, 0x996a42, void, Params(const char* format), Args(format));
	DefineFunction(SScreen, 0x996b62, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineVarArgFunction(SScreenF, 0x996ada, void, Params(unsigned long unk1, const char* format), Args(unk1, format));
	DefineFunction(TestLog, 0x996975, void, Params(const char* message), Args(message));
	DefineVarArgFunction(TestLogF, 0x996970, void, Params(const char* format), Args(format));
	DefineFunction(Warning, 0x996d4b, void, Params(const char* message), Args(message));
	DefineVarArgFunction(WarningF, 0x996d46, void, Params(const char* format), Args(format));
	DefineFunction(Translate, 0x996f46, const char*, Params(const char* unk1), Args(unk1));
	DefineFunction(TranslateMsg, 0x996f38, const char*, Params(const char* unk1), Args(unk1));
	DefineFunction(AddNewSinkToContext, 0x996f29, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineFunction(AddNewSinkToContext, 0x996f24, void, Params(const char* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineFunction(AddNewSinkToContext, 0x996f1f, void, Params(const char* unk1, const char* unk2, const char* unk3, const char* unk4), Args(unk1, unk2, unk3, unk4));
	DefineFunction(AddNewSinkToSink, 0x996f33, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineFunction(AddNewSinkToSink, 0x996f2e, void, Params(const char* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
};
