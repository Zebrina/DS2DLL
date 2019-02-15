#pragma once

#include "DebugMacros.h"

#ifdef Params
#error Params already defined.
#endif // Params
#ifdef Args
#error Args already defined.
#endif // Args
#ifdef DefineFunction
#error DefineFunction already defined.
#endif // DefineFunction
#ifdef OverloadFunction
#error OverloadFunction already defined.
#endif // OverloadFunction
#ifdef DefineMethod
#error DefineMethod already defined.
#endif // DefineMethod

#define _ASSERT_ADDRESS_NOT_NULL(address) static_assert(address != 0x0, "Address must not be null.")

#define Params(...) __VA_ARGS__
#define Args(...) __VA_ARGS__ 

#define NO_PARAMS
#define NO_ARGS
#define _NON_CONST

#define _NON_STATIC
#define _TrimFirstVarArg(arg, ...) __VA_ARGS__
#define _PushVarArg(arg, ...) _TrimFirstVarArg(void*, arg, __VA_ARGS__)

#define _DefineMethod(name, cl, addr, ret, params, fnParams, fnArgs, cnst) \
	ret name(params) cnst { \
		typedef ret (cl *fn)(fnParams); \
		return ((fn)addr)(fnArgs); \
	} _ASSERT_ADDRESS_NOT_NULL(addr)

//
#define DefineMethod(name, address, returnType, params, args) \
	_DefineMethod(name, __thiscall, address, returnType, params, _PushVarArg(void*, params), _PushVarArg(this, args), _NON_CONST)
//
#define DefineConstMethod(name, address, returnType, params, args) \
	_DefineMethod(name, __thiscall, address, returnType, params, _PushVarArg(const void*, params), _PushVarArg(this, args), const)
//
#define DefineStaticMethod(name, address, returnType, params, args) \
	static _DefineMethod(name, __cdecl, address, returnType, params, params, args, _NON_CONST)
//
#define DefineFunction(name, address, returnType, params, args) \
	_DefineMethod(name, __cdecl, address, returnType, params, params, args, _NON_CONST)

#define _DefineVarArgMethod(name, addr, stat, ret, params, cnst) \
	stat ret __cdecl name(params, ...) cnst { \
		__asm { push addr; ret; } \
	} _ASSERT_ADDRESS_NOT_NULL(addr)

#define DefineVarArgMethod(name, address, returnType, params) \
	_DefineVarArgMethod(name, address, _NON_STATIC, returnType, params, _NON_CONST)
#define DefineConstVarArgMethod(name, address, returnType, params) \
	_DefineVarArgMethod(name, address, _NON_STATIC, returnType, params, const)
#define DefineStaticVarArgMethod(name, address, returnType, params) \
	_DefineVarArgMethod(name, address, static, returnType, params, _NON_CONST)
#define DefineVarArgFunction(name, address, returnType, params) \
	_DefineVarArgMethod(name, address, _NON_STATIC, returnType, params, _NON_CONST)

#define _DefineTemplateMethod(type, name, cl, addr, stat, ret, params, tParams, tArgs, cnst) \
	template <> \
	stat ret type##::##name(params) cnst { \
		typedef ret (cl *fn)(tParams); \
		return ((fn)addr)(tArgs); \
	} _ASSERT_ADDRESS_NOT_NULL(addr)

#define DefineTemplateMethod(type, name, address, returnType, params, args) \
	_DefineTemplateMethod(type, name, __thiscall, address, _NON_STATIC, returnType, params, _PushVarArg(void*, params), _PushVarArg(this, args), _NON_CONST)
#define DefineTemplateConstMethod(type, name, address, returnType, params, args) \
	_DefineTemplateMethod(type, name, __thiscall, address, _NON_STATIC, returnType, params, _PushVarArg(const void*, params), _PushVarArg(this, args), const)
#define DefineTemplateStaticMethod(type, name, address, returnType, params, args) \
	_DefineTemplateMethod(type, name, __cdecl, address, static, returnType, params, params, args, _NON_CONST)

//
#define DefineSingleton(type, address) \
	type() = delete; \
	~type() = delete; \
	type(const type&) = delete; \
	type(type&&) = delete; \
	type& operator=(const type&) = delete; \
	type& operator=(type&&) = delete; \
	static type* FUBI_GetClassSingleton() { \
		return ((type*(*)())address)(); \
	} _ASSERT_ADDRESS_NOT_NULL(address)

#define FillStruct(from, to) char fill_##from##_##to[to - from]

ASSERT_SIZEOF(bool, 0x1);
ASSERT_SIZEOF(short, 0x2);
ASSERT_SIZEOF(int, 0x4);
ASSERT_SIZEOF(long, 0x4);
ASSERT_SIZEOF(long long, 0x8);
