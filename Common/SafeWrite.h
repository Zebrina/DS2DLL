#pragma once

#include "Assembly.h"
#include "MemUtil.h"
#include <exception>

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

// Additions by Zebrina.

void SafeWriteN(memptr address, const void* buffer, uint size);
void SafeWrite1(memptr address, char value);
void SafeWrite1(memptr address, byte value);
void SafeWrite2(memptr address, short value);
void SafeWrite2(memptr address, ushort value);
void SafeWrite4(memptr address, int value);
void SafeWrite4(memptr address, uint value);
void SafeWrite4(memptr address, void* value);
template <typename T>
void SafeWrite(memptr address, const T& type) {
	SafeWriteN(address, &type, sizeof(T));
}
void SafeWriteString(memptr address, const string& value);
void SafeWriteString(memptr address, const char* value);
void SafeWriteFormat(memptr address, uint bufferSize, const char* format, ...);

void SafeWriteNoOperation(memptr address, uint repeat = 1);
void SafeWriteNoOperationRange(memptr start, memptr end);

void SafeWriteBreakpoint(memptr address, uint repeat = 1);
void SafeWriteBreakpointRange(memptr start, memptr end);

template <typename T>
void SafeWriteJump(memptr source, T destination) {
#pragma pack(push, 1)
	struct JumpNear {
		byte op = 0xe9;
		int displ;
	};
#pragma pack(pop)
	STATIC_ASSERT(sizeof(JumpNear) == 5);

	int delta = (int)destination - ((int)source + sizeof(JumpNear));
	JumpNear opcode;
	opcode.displ = delta;
	SafeWrite(source, opcode);
}
template <typename T>
void SafeWriteJumpShort(memptr source, T destination) {
#pragma pack(push, 1)
    struct JumpShort {
        byte op = 0xeb;
        sbyte displ;
    };
#pragma pack(pop)
    STATIC_ASSERT(sizeof(JumpShort) == 2);

    int delta = (int)destination - ((int)source + sizeof(JumpShort));
    ASSERT(delta >= -128 && delta < 127);

    JumpShort opcode;
    opcode.displ = delta;
    SafeWrite(source, opcode);
}

template <typename T>
void SafeWriteCall(memptr source, T destination) {
#pragma pack(push, 1)
	struct Call {
		byte op = 0xe8;
		int displ;
	};
#pragma pack(pop)
	STATIC_ASSERT(sizeof(Call) == 5);

    Call opcode;
	opcode.displ = Reinterpret<int>(destination) - ((int)source + sizeof(Call));
	SafeWrite(source, opcode);
}
template <typename T>
void SafeWriteHook(memptr src, T dst) {
	ushort op = *(byte*)src;
	if (op != 0xe8 && op != 0x94) {
		op = *(ushort*)src;
		if (op != 0x15ff) {
            return;
		}
		SafeWrite8(src + 5, 0x90);
    }
	SafeWriteCall(src, dst);
}

bool FlushInstructionCache();
