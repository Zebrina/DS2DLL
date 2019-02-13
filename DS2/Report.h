#pragma once

#include "ReportSys.h"

#include "ClassMacros.h"

namespace Report {
	DefineStaticMethod(IsEnabled, 0x00996f08, bool, Params(const char* unk1), Args(unk1));
	DefineStaticMethod(Translate, 0x00996f46, const char*, Params(const char* unk1), Args(unk1));
	DefineStaticMethod(TranslateMsg, 0x00996f38, const char*, Params(const char* unk1), Args(unk1));
	DefineStaticMethod(AddNewSinkToContext, 0x00996f1f, void, Params(const char* unk1, const char* unk2, const char* unk3, const char* unk4), Args(unk1, unk2, unk3, unk4));
	DefineStaticMethod(AddNewSinkToContext, 0x00996f24, void, Params(const char* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineStaticMethod(AddNewSinkToContext, 0x00996f29, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticMethod(AddNewSinkToSink, 0x00996f2e, void, Params(const char* unk1, const char* unk2, const char* unk3), Args(unk1, unk2, unk3));
	DefineStaticMethod(AddNewSinkToSink, 0x00996f33, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticMethod(Debugger, 0x00996d41, void, Params(const char* unk1), Args(unk1));
	DefineStaticVarArgMethod(DebuggerF, 0x00996d3c, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(Disable, 0x00996ed7, void, Params(const char* unk1), Args(unk1));
	DefineStaticMethod(DumpFile, 0x00996f54, void, Params(const char* unk1), Args(unk1));
	DefineStaticMethod(Enable, 0x00996ebd, void, Params(const char* unk1), Args(unk1));
	DefineStaticMethod(Error, 0x00996d55, void, Params(const char* unk1), Args(unk1));
	DefineStaticMethod(ErrorBox, 0x00996a3d, void, Params(const char* msg), Args(msg));
	DefineStaticVarArgMethod(ErrorBoxF, 0x00996a38, void, Params(const char* fmt), Args(fmt));
	DefineStaticVarArgMethod(ErrorF, 0x00996d50, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(Fatal, 0x00996e20, void, Params(), Args());
	DefineStaticMethod(ErrorBox, 0x00996a3d, void, Params(const char* msg), Args(msg));
	DefineStaticMethod(Fatal, 0x00996d85, void, Params(const char* msg), Args(msg));
	DefineStaticVarArgMethod(FatalF, 0x00996d5a, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(FUBI_RENAME_Report, 0x00996943, void, Params(ReportSys::Context* unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_RENAME_Report, 0x0099694d, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticVarArgMethod(FUBI_RENAME_ReportF, 0x0099693e, void, Params(ReportSys::Context* unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticVarArgMethod(FUBI_RENAME_ReportF, 0x00996948, void, Params(const char* unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticMethod(Generic, 0x00996957, void, Params(const char* unk1), Args(unk1));
	DefineStaticVarArgMethod(GenericF, 0x00996952, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(MessageBox, 0x009969a5, void, Params(const char* msg), Args(msg));
	DefineStaticVarArgMethod(MessageBoxF, 0x0099697a, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(Perf, 0x00996961, void, Params(const char* msg), Args(msg));
	DefineStaticVarArgMethod(PerfF, 0x0099695c, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(PerfLog, 0x0099696b, void, Params(const char* msg), Args(msg));
	DefineStaticVarArgMethod(PerfLogF, 0x00996966, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(RCScreen, 0x00996b74, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticMethod(Screen, 0x00996c7e, void, Params(const char* msg), Args(msg));
	DefineStaticVarArgMethod(ScreenF, 0x00996c53, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(SScreen, 0x00996ac9, void, Params(const char* msg), Args(msg));
	DefineStaticMethod(SScreen, 0x00996b62, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticVarArgMethod(SScreenF, 0x00996a42, void, Params(const char* fmt), Args(fmt));
	DefineStaticVarArgMethod(SScreenF, 0x00996ada, void, Params(unsigned long unk1, const char* unk2), Args(unk1, unk2));
	DefineStaticMethod(TestLog, 0x00996975, void, Params(const char* msg), Args(msg));
	DefineStaticVarArgMethod(TestLogF, 0x00996970, void, Params(const char* fmt), Args(fmt));
	DefineStaticMethod(Toggle, 0x00996ef1, void, Params(const char* unk1), Args(unk1));
	DefineStaticMethod(Warning, 0x00996d4b, void, Params(const char* msg), Args(msg));
	DefineStaticVarArgMethod(WarningF, 0x00996d46, void, Params(const char* fmt), Args(fmt));
};
