#pragma once

#include "Assembly.h"
#include "SafeWrite.h"

#define GetVtbl(obj) (*(void***)(obj))
#define SetVtbl(obj, vtbl) ((*(void**)(obj)) = vtbl)

#define GetVfTbl(ptr) (*(uintptr_t*)(ptr))
#define GetVfTblFn(vftbl, offset) (((uintptr_t*)(vftbl))[offset])
#define SetVfTblFn(vftbl, offset, fn) (((uintptr_t*)(vftbl))[offset] = (uintptr_t)fn)

#define CallMember(ptr, fn) ((ptr)->*(fn))

#pragma pack(push, 1)

typedef ushort OpCode16;
typedef byte OpCode8;

typedef uint Imm32;
typedef ushort Imm16;
typedef byte Imm8;

struct MovImmReg8 {
	byte op;
	Imm8 imm;

	MovImmReg8(Reg8 reg, Imm8 imm) :
		op(0xb0 | (byte)reg), imm(imm) {
	}
};

STATIC_ASSERT(sizeof(MovImmReg8) == 0x2);

struct MovImmReg16 {
	ushort op;
	Imm16 imm;
	MovImmReg16(Reg16 reg, Imm16 imm) :
		op(0x66B0 | (ushort)reg), imm(imm) {
	}
};

STATIC_ASSERT(sizeof(MovImmReg16) == 0x4);

struct MovImmReg32 {
	byte op;
	Imm32 imm;
	MovImmReg32(Reg32 reg, Imm32 imm) :
		op(0xb8 | (byte)reg), imm(imm) {
	}
};

STATIC_ASSERT(sizeof(MovImmReg32) == 0x5);

template <typename OpCodeT, OpCodeT OpCode, typename ImmT>
struct OpCodeImm {
	OpCodeT op;
	ImmT imm;
	OpCodeImm(OpCodeT reg, ImmT imm) :
		op(OpCode | (OpCodeT)reg), imm(imm) {
	}
};

typedef OpCodeImm<ushort, 0x83f0, Imm8> CmpReg32Imm8;

template <typename ImmT>
struct JmpRel {
	byte op = 0xff;
	ImmT imm;

	JmpRel(ImmT imm) :
		imm(imm - (1 + sizeof(ImmT))) {
	}
};

class VirtualFunctionTable {
public:
	constexpr VirtualFunctionTable(uintptr_t vftbl);
	explicit VirtualFunctionTable(void* ptr);
	VirtualFunctionTable(const VirtualFunctionTable&) = default;

	uintptr_t GetFunctionPtr(uint offset) const;
	template <typename T>
	T GetFunction(uint offset) const {
		return (T)GetFunctionPtr(offset);
	}

	operator uint() const;

	VirtualFunctionTable& operator=(const VirtualFunctionTable&) = default;
	VirtualFunctionTable& operator=(uintptr_t otherVftbl);

	bool operator==(const VirtualFunctionTable& other) const;
	bool operator!=(const VirtualFunctionTable& other) const;

private:
	uintptr_t vftbl;
};

template <uintptr_t ADDR, typename FDECL>
FDECL CallVirtualFunctionBase;
template <uintptr_t ADDR, typename FDECL>
void HookVirtualFunction(FDECL function) {
	CallVirtualFunctionBase<ADDR, FDECL> = (FDECL)*(uintptr_t*)ADDR;
	SafeWrite32(ADDR, (uint)function);
}

//template <uintptr_t PTR, typename R, typename VA...>
//R(__thiscall*)(VA...) CallVirtualFunctionBase;

/*
#include <utility>

#define _SetFlags(flags, mask) ((flags)|=(mask))
#define _ClearFlags(flags, mask) ((flags)&=(~(mask)))
#define _TestFlags(flags, mask) (((flags)&(mask))!=0)

#define _GetObjectVTable(ptr) MemUtil::IntPtr(*(UInt64**)(ptr))
#define _CallMemberFunction(thisPtr, method) ((thisPtr)->*(method))

#define _AsmBasicHookPrefix(id, addr, retnOffset)	\
		__asm push dword ptr retnOffset				\
		__asm push _ASM_##id##_END_OF_HOOK			\
		__asm push _ASM_##id##_START_OF_HOOK		\
		__asm push addr								\
		__asm call MemUtil::WriteRedirectionHook	\
		__asm jmp _ASM_##id##_SKIP_HOOK				\
	__asm _ASM_##id##_START_OF_HOOK:

#define _AsmRedirectHookPrefix(id, addr, retnOffset, newFunc, oldFuncPtr)	\
		__asm push eax														\
		__asm mov eax, _ASM_##id##_ORIGINAL_CODE							\
		__asm mov oldFuncPtr, eax											\
		__asm pop eax														\
		__asm push dword ptr retnOffset										\
		__asm push _ASM_##id##_END_OF_HOOK									\
		__asm push newFunc													\
		__asm push addr														\
		__asm call MemUtil::WriteRedirectionHook							\
		__asm jmp _ASM_##id##_SKIP_HOOK										\
	__asm _ASM_##id##_ORIGINAL_CODE:

#define _AsmHookSuffix(id)					\
	__asm _ASM_##id##_END_OF_HOOK:			\
		__asm nop							\
		__asm nop							\
		__asm nop							\
		__asm nop							\
		__asm nop							\
	__asm _ASM_##id##_SKIP_HOOK:

namespace MemUtil {
	

class IntPtr {
	public:
		template <typename T>
		IntPtr(const T type) :
			data(castFrom<T>(type)) {
		}
		IntPtr(const IntPtr& other) :
			data(other.data) {
		}

		template <typename T>
		IntPtr& operator=(const T value) {
			data = castFrom<T>(value);
			return *this;
		}

		template <typename T>
		operator T() const {
			return castTo<T>(data);
		}

		template <typename T>
		bool operator==(const T other) const {
			return data == (UInt64)other;
		}
		template <typename T>
		bool operator!=(const T other) const {
			return data != (UInt64)other;
		}

		template <typename T>
		bool operator<(const T other) const {
			return data < (UInt64)other;
		}
		template <typename T>
		bool operator<=(const T other) const {
			return data <= (UInt64)other;
		}
		template <typename T>
		bool operator>(const T other) const {
			return data > (UInt64)other;
		}
		template <typename T>
		bool operator>=(const T other) const {
			return data >= (UInt64)other;
		}

		template <typename T>
		IntPtr operator+(const T value) const {
			return IntPtr(data + castFrom<T>(value));
		}
		template <typename T>
		IntPtr& operator+=(const T value) {
			data += castFrom<T>(value);
			return *this;
		}

		template <typename T>
		IntPtr operator-(const T value) const {
			return IntPtr(data - castFrom<T>(value));
		}
		template <typename T>
		IntPtr& operator-=(const T value) {
			data -= castFrom<T>(value);
			return *this;
		}

		template <typename T>
		IntPtr operator*(const T value) const {
			return IntPtr(data * castFrom<T>(value));
		}
		template <typename T>
		IntPtr& operator*=(const T value) {
			data *= castFrom<T>(value);
			return *this;
		}

		template <typename T>
		IntPtr operator/(const T value) const {
			return IntPtr(data / castFrom<T>(value));
		}
		template <typename T>
		IntPtr& operator/=(const T value) {
			data /= castFrom<T>(value);
			return *this;
		}

		template <typename T>
		IntPtr operator%(const T value) const {
			return IntPtr(data + castFrom<T>(value));
		}
		template <typename T>
		IntPtr& operator%=(const T value) {
			data %= castFrom<T>(value);
			return *this;
		}

		const IntPtr& operator[](int index) const {
			return *((IntPtr*)(data + index * sizeof(IntPtr)));
		}

	private:
		UInt64 data;

		template <typename T>
		union Castable {
			UInt64 data;
			T type;
		};

		template <typename T>
		static T castTo(UInt64 data) {
			Castable<T> c;
			c.data = data;
			return c.type;
		}
		template <typename T>
		static UInt64 castFrom(T type) {
			Castable<T> c;
			c.type = type;
			return c.data;
		}
	};

	enum OpCode8 : UInt8 {
		Mov_BytePtrImm_AL = 0xa2,

		Jb_Rel = 0x72,
		Jna_Rel = 0x76,
		Ja_Rel = 0x77,
	};
	enum OpCode16 : UInt16 {
		Cmp_BytePtrImm_AL = 0x0538,
		Cmp_BytePtrImm_BL = 0x1d38,
		Cmp_BytePtrImm_CL = 0x0d38,
		Cmp_BytePtrImm_DL = 0x1538,
		Cmp_BytePtrImm_AH = 0x2538,
		Cmp_BytePtrImm_BH = 0x3d38,
		Cmp_BytePtrImm_CH = 0x2d38,
		Cmp_BytePtrImm_DH = 0x3538,
		Cmp_BytePtrImm_Imm = 0x3d80,

		Cmp_DwordPtrImm_EAX = 0x0539,
		Cmp_DwordPtrImm_EBX = 0x1d39,
		Cmp_DwordPtrImm_ECX = 0x0d39,
		Cmp_DwordPtrImm_EDX = 0x1539,
		Cmp_DwordPtrImm_ESI = 0x3539,
		Cmp_DwordPtrImm_EDI = 0x3d39,
		Cmp_DwordPtrImm_EBP = 0x2d39,
		Cmp_DwordPtrImm_ESP = 0x2539,
		Cmp_DwordPtrImm_Imm = 0x3d83,

		Mov_ECX_DwordPtrImm = 0x8e8b,
	};
	enum OpCode24 : UInt32 {
		Movzx_BytePtrImm = 0x000db60f,
	};

	void __stdcall WriteRedirectionHook(IntPtr targetOfHook, IntPtr sourceBegin, IntPtr sourceEnd, UInt32 asmSegSize);
	IntPtr __stdcall WriteVTableHook(IntPtr vtable, UInt32 fn, IntPtr fnPtr);

	void __stdcall WriteOpCode8(IntPtr target, OpCode8 op);
	void __stdcall WriteOpCode16(IntPtr target, OpCode16 op);
	void __stdcall WriteOpCode24(IntPtr target, OpCode24 op);
	void __stdcall WriteOpCode8WithImmediate(IntPtr target, OpCode8 op, IntPtr var);
	void __stdcall WriteOpCode16WithImmediate(IntPtr target, OpCode16 op, IntPtr var);
	void __stdcall WriteOpCode24WithImmediate(IntPtr target, OpCode24 op, IntPtr var);
}

template <>
struct std::hash<MemUtil::IntPtr> {
	size_t operator()(MemUtil::IntPtr iptr) const {
		return iptr;
	}
};

STATIC_ASSERT(sizeof(MemUtil::IntPtr) == sizeof(UInt64));
*/

#pragma pack(pop)
