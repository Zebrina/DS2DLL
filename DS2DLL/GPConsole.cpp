#include "GpConsole.h"

#include "GoDb.h"
#include "ReportSys.h"
#include "StaticMethods.h"
#include "UIWindowVec.h"

/*

FuBiCookie* GpConsole::RSExecuteLine(const_mem_ptr unk1, GPBString unk2, bool unk3) {
	__asm {

	}
}
//$Method(0xffffffff, RCExecuteLine, FuBiCookie*, const_mem_ptr unk1, GPBString unk2, uint unk3);
FuBiCookie* GpConsole::RCExecuteLine(const_mem_ptr unk1, GPBString unk2, bool unk3) {
	__asm {

	}
}

typedef bool(__thiscall *ReportSysContextOutput)(void*, const char*);
ReportSysContextOutput output = ReportSys::Context::Output;

void __declspec(naked) ConsoleExecute(const GPBString& command) {
	__asm {
		push   ebp
		mov    ebp, esp
		push   ecx
		push   ecx
		mov    ecx, DWORD PTR ds : 0x00d90434	// FIX
		and DWORD PTR[ebp - 0x8], 0x0
		and DWORD PTR[ebp - 0x4], 0x0
		call   GoDb::IsSelected
		push   DWORD PTR ds : 0x00d92ecc	// FIX
		lea    ecx, [ebp - 0x8]
		push   ecx
		mov    ecx, eax
		call   ToFullString
		mov    ecx, DWORD PTR ds : 0x00d9045c	// FIX
		lea    eax, [ebp - 0x8]
		push   eax
		call   (ReportSysContextOutput)ReportSys::Context::Output
		push   DWORD PTR[ebp + 0x8]
		mov    ecx, DWORD PTR ds : 0x00d9045c	// FIX
		call   GpConsole::RCExecuteLine
		mov    eax, DWORD PTR[ebp - 0x8]
		test   eax, eax
		je     ConsoleExecute_57
		add    eax, -4
		push   eax
		call   UIWindowVec::Add
		pop    ecx
	ConsoleExecute_57:
		leave
		ret
	}
}
*/