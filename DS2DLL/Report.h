#pragma once

#undef MessageBox

#include "ReportSys.h"

namespace Report {
	$Function(0x00996f08, IsEnabled, bool, const char* unk1);
	$Function(0x00996ebd, Enable, void, const char* unk1);
	$Function(0x00996ed7, Disable, void, const char* unk1);
	$Function(0x00996ef1, Toggle, void, const char* unk1);
	$Function(0x00996e20, Fatal, void);
	$Function(0x00996d85, Fatal, void, const char* message);
	$Function(0x00996d5a, FatalF, void, const char* format, ...);
	$Function(0x009969a5, MessageBox, void, const char* message);
	$Function(0x0099697a, MessageBoxF, void, const char* format, ...);
	$Function(0x00996c7e, Screen, void, const char* message);
	$Function(0x00996c53, ScreenF, void, const char* format, ...);
	$Function(0x00996b74, RCScreen, void, uint unk1, const char* unk2);
	$Function(0x00996ac9, SScreen, void, const char* message);
	$Function(0x00996a42, SScreenF, void, const char* format, ...);
	$Function(0x00996b62, SScreen, void, uint unk1, const char* unk2);
	$Function(0x00996ada, SScreenF, void, uint unk1, const char* format, ...);
	$Function(0x00996f46, Translate, const char*, const char* unk1);
	$Function(0x00996f38, TranslateMsg, const char*, const char* unk1);
    // These are exported but do nothing.
	//$Function(0x00996d41, Debugger, void, const char* unk1);
	//$Function(0x00996d3c, DebuggerF, void, const char* format, ...);
	//$Function(0x00996f54, DumpFile, void, const char* unk1);
	//$Function(0x00996d55, Error, void, const char* message);
	//$Function(0x00996d50, ErrorF, void, const char* format, ...);
	//$Function(0x00996a3d, ErrorBox, void, const char* message);
	//$Function(0x00996a38, ErrorBoxF, void, const char* format, ...);
	//$Function(0x0099694d, Report, void, const char* unk1, const char* unk2);
	//$Function(0x00996943, Report, void, ReportSys::Context* context, const char* unk2);
	//$Function(0x00996948, ReportF, void, const char* unk1, const char* unk2, ...);
	//$Function(0x0099693e, ReportF, void, ReportSys::Context* context, const char* unk2, ...);
	//$Function(0x00996957, Generic, void, const char* unk1);
	//$Function(0x00996952, GenericF, void, const char* format, ...);
	//$Function(0x00996961, Perf, void, const char* message);
	//$Function(0x0099695c, PerfF, void, const char* format, ...);
	//$Function(0x0099696b, PerfLog, void, const char* message);
	//$Function(0x00996966, PerfLogF, void, const char* format, ...);
	//$Function(0x00996975, TestLog, void, const char* message);
	//$Function(0x00996970, TestLogF, void, const char* format, ...);
    //$Function(0x00996d4b, Warning, void, const char* message);
    //$Function(0x00996d46, WarningF, void, const char* format, ...);
	//$Function(0x00996f29, AddNewSinkToContext, void, const char* unk1, const char* unk2);
	//$Function(0x00996f24, AddNewSinkToContext, void, const char* unk1, const char* unk2, const char* unk3);
	//$Function(0x00996f1f, AddNewSinkToContext, void, const char* unk1, const char* unk2, const char* unk3, const char* unk4);
	//$Function(0x00996f33, AddNewSinkToSink, void, const char* unk1, const char* unk2);
	//$Function(0x00996f2e, AddNewSinkToSink, void, const char* unk1, const char* unk2, const char* unk3);
};
