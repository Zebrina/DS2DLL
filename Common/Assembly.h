#pragma once

#include "Types.h"

#if _WIN64 == 1
typedef uint64 memptr;
#elif _WIN32 == 1
typedef uint memptr;
#else
#error Unsupported architecture or compiler
#endif

enum Reg32 : uint {
    EAX = 0x00,
    EBX = 0x03,
    ECX = 0x01,
    EDX = 0x02,
    ESI = 0x06,
    EDI = 0x07,
    EBP = 0x05,
    ESP = 0x04,
};

enum Reg16 : ushort {
    AX = 0x08,
    BX = 0x0b,
    CX = 0x09,
    DX = 0x0a,
    SI = 0x0e,
    DI = 0x0f,
    BP = 0x0d,
    SP = 0x0c,
};

enum Reg8 : byte {
    AH = 0x04,
    AL = 0x00,
    BH = 0x07,
    BL = 0x03,
    CH = 0x05,
    CL = 0x01,
    DH = 0x06,
    DL = 0x02,
};

enum OpCode1 : byte {
    PUSH_EAX    = 0x50 | (byte)EAX,
    PUSH_EBX    = 0x50 | (byte)EBX,
    PUSH_ECX    = 0x50 | (byte)ECX,
    PUSH_EDX    = 0x50 | (byte)EDX,
    PUSH_ESI    = 0x50 | (byte)ESI,
    PUSH_EDI    = 0x50 | (byte)EDI,
    PUSH_EBP    = 0x50 | (byte)EBP,
    PUSH_ESP    = 0x50 | (byte)ESP,
    NOP         = 0x90,
};
