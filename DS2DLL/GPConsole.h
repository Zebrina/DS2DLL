#pragma once

#include "FuBi.h"
#include "Memory.h"

// From DungeonSiege2Mod.exe
class GpConsole {
private:
	//DefineSingleton(GpConsole, 0xffffffff);

	//$Method(0xffffffff, RSExecuteLine, FuBiCookie*, const_mem_ptr unk1, GPBString unk2, bool unk3);
	FuBiCookie* RSExecuteLine(const_mem_ptr unk1, GPBString unk2, bool unk3);
	//$Method(0xffffffff, RCExecuteLine, FuBiCookie*, const_mem_ptr unk1, GPBString unk2, uint unk3);
	FuBiCookie* RCExecuteLine(const_mem_ptr unk1, GPBString unk2, bool unk3);
} typedef GPConsole;

//$Function(0xffffffff, ConsoleExecute, void, const GPBString& cmd);
void __cdecl ConsoleExecute(const GPBString& cmd);
