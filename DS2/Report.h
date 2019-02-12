#pragma once

#include "ReportSys.h"

#include "ClassMacros.h"

/*
DefineFunction(Fatal_, 0x996e20, void);
DefineFunction(Fatal_msg, 0x996d85, void, const char* msg);
DefineFunction(AddNewSinkToSink_unk1_unk2, 0x996f33, void, const char* unk1, const char* unk2);
DefineFunction(AddNewSinkToSink_unk1_unk2_unk3, 0x996f2e, void, const char* unk1, const char* unk2, const char* unk3);
DefineFunction(AddNewSinkToContext_unk1_unk2, 0x996f29, void, const char* unk1, const char* unk2);
DefineFunction(AddNewSinkToContext_unk1_unk2_unk3, 0x996f24, void, const char* unk1, const char* unk2, const char* unk3);
DefineFunction(AddNewSinkToContext_unk1_unk2_unk3_unk4, 0x996f1f, void, const char* unk1, const char* unk2, const char* unk3, const char* unk4);
*/

#pragma message("TODO: Make namespace.")
class Report {
	/*Report*/ private: /*static*/ bool /*__cdecl*/ IsEnabled(const char* unk1); //0x00996f08
	/*Report*/ private: /*static*/ const char* /*__cdecl*/ Translate(const char* unk1); //0x00996f46
	/*Report*/ private: /*static*/ const char* /*__cdecl*/ TranslateMsg(const char* unk1); //0x00996f38
	/*Report*/ private: /*static*/ void /*__cdecl*/ AddNewSinkToContext(const char* unk1, const char* unk2, const char* unk3, const char* unk4); //0x00996f1f
	/*Report*/ private: /*static*/ void /*__cdecl*/ AddNewSinkToContext(const char* unk1, const char* unk2, const char* unk3); //0x00996f24
	/*Report*/ private: /*static*/ void /*__cdecl*/ AddNewSinkToContext(const char* unk1, const char* unk2); //0x00996f29
	/*Report*/ private: /*static*/ void /*__cdecl*/ AddNewSinkToSink(const char* unk1, const char* unk2, const char* unk3); //0x00996f2e
	/*Report*/ private: /*static*/ void /*__cdecl*/ AddNewSinkToSink(const char* unk1, const char* unk2); //0x00996f33
	/*Report*/ private: /*static*/ void /*__cdecl*/ Debugger(const char* unk1); //0x00996d41
	/*Report*/ private: /*static*/ void /*__cdecl*/ DebuggerF(const char* unk1, ...); //0x00996d3c
	/*Report*/ private: /*static*/ void /*__cdecl*/ Disable(const char* unk1); //0x00996ed7
	/*Report*/ private: /*static*/ void /*__cdecl*/ DumpFile(const char* unk1); //0x00996f54
	/*Report*/ private: /*static*/ void /*__cdecl*/ Enable(const char* unk1); //0x00996ebd
	/*Report*/ private: /*static*/ void /*__cdecl*/ Error(const char* unk1); //0x00996d55
	/*Report*/ private: /*static*/ void /*__cdecl*/ ErrorBox(const char* unk1); //0x00996a3d
	/*Report*/ private: /*static*/ void /*__cdecl*/ ErrorBoxF(const char* unk1, ...); //0x00996a38
	/*Report*/ private: /*static*/ void /*__cdecl*/ ErrorF(const char* unk1, ...); //0x00996d50
	/*Report*/ private: /*static*/ void /*__cdecl*/ Fatal(); //0x00996e20
	/*Report*/ private: /*static*/ void /*__cdecl*/ Fatal(const char* unk1); //0x00996d85
	/*Report*/ private: /*static*/ void /*__cdecl*/ FatalF(const char* unk1, ...); //0x00996d5a
	/*Report*/ private: /*static*/ void /*__cdecl*/ FUBI_RENAME_Report(ReportSys::Context* unk1, const char* unk2); //0x00996943
	/*Report*/ private: /*static*/ void /*__cdecl*/ FUBI_RENAME_Report(const char* unk1, const char* unk2); //0x0099694d
	/*Report*/ private: /*static*/ void /*__cdecl*/ FUBI_RENAME_ReportF(ReportSys::Context* unk1, const char* unk2, ...); //0x0099693e
	/*Report*/ private: /*static*/ void /*__cdecl*/ FUBI_RENAME_ReportF(const char* unk1, const char* unk2, ...); //0x00996948
	/*Report*/ private: /*static*/ void /*__cdecl*/ Generic(const char* unk1); //0x00996957
	/*Report*/ private: /*static*/ void /*__cdecl*/ GenericF(const char* unk1, ...); //0x00996952
	/*Report*/ private: /*static*/ void /*__cdecl*/ MessageBox(const char* unk1); //0x009969a5
	/*Report*/ private: /*static*/ void /*__cdecl*/ MessageBoxF(const char* unk1, ...); //0x0099697a
	/*Report*/ private: /*static*/ void /*__cdecl*/ Perf(const char* unk1); //0x00996961
	/*Report*/ private: /*static*/ void /*__cdecl*/ PerfF(const char* unk1, ...); //0x0099695c
	/*Report*/ private: /*static*/ void /*__cdecl*/ PerfLog(const char* unk1); //0x0099696b
	/*Report*/ private: /*static*/ void /*__cdecl*/ PerfLogF(const char* unk1, ...); //0x00996966
	/*Report*/ private: /*static*/ void /*__cdecl*/ RCScreen(unsigned long unk1, const char* unk2); //0x00996b74
	/*Report*/ private: /*static*/ void /*__cdecl*/ Screen(const char* unk1); //0x00996c7e
	/*Report*/ private: /*static*/ void /*__cdecl*/ ScreenF(const char* unk1, ...); //0x00996c53
	/*Report*/ private: /*static*/ void /*__cdecl*/ SScreen(const char* unk1); //0x00996ac9
	/*Report*/ private: /*static*/ void /*__cdecl*/ SScreen(unsigned long unk1, const char* unk2); //0x00996b62
	/*Report*/ private: /*static*/ void /*__cdecl*/ SScreenF(const char* unk1, ...); //0x00996a42
	/*Report*/ private: /*static*/ void /*__cdecl*/ SScreenF(unsigned long unk1, const char* unk2, ...); //0x00996ada
	/*Report*/ private: /*static*/ void /*__cdecl*/ TestLog(const char* unk1); //0x00996975
	/*Report*/ private: /*static*/ void /*__cdecl*/ TestLogF(const char* unk1, ...); //0x00996970
	/*Report*/ private: /*static*/ void /*__cdecl*/ Toggle(const char* unk1); //0x00996ef1
	/*Report*/ private: /*static*/ void /*__cdecl*/ Warning(const char* unk1); //0x00996d4b
	/*Report*/ private: /*static*/ void /*__cdecl*/ WarningF(const char* unk1, ...); //0x00996d46
};
