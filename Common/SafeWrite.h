#pragma once

/*
	Credits: SKSE Team (https://skse.silverlock.org/)

	Ported for use in this project by Zebrina.
*/

void SafeWriteBuf(uintptr_t addr, void* data, size_t len);
void SafeWrite8(uintptr_t addr, uint8_t data);
void SafeWrite16(uintptr_t addr, uint16_t data);
void SafeWrite32(uintptr_t addr, uint32_t data);
void SafeWrite64(uintptr_t addr, uint64_t data);

// ### warning: if you try to branch more than +/- 2GB with these, they will fail and return false
// ### this is a limitation of the 'jmp' instruction and more generally the x64 ISA
// 5 bytes written to src
bool SafeWriteJump(uintptr_t src, uintptr_t dst);
bool SafeWriteCall(uintptr_t src, uintptr_t dst);

// Added by Zebrina.
void SafeWriteStr(uintptr_t addr, const char* str);
