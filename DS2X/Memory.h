#pragma once

// void* operator new (std::size_t count) throw (std::bad_alloc); // 0x12487a2
// void* operator new (std::size_t count) throw (std::bad_alloc); // 0x1249990
// void* operator new (std::size_t count) throw (std::bad_alloc); // 0x16a6349
// void* operator new (std::size_t count) throw (std::bad_alloc); // 0x16a636d
// void* operator new (std::size_t count) throw (std::bad_alloc); // 0x16c67e9
// void* operator new (std::size_t count) throw (std::bad_alloc); // 0x16c67ee

// void* operator new (std::size_t count, const std::nothrow_t& nothrow_value) throw(); // 0xa4b090

// void* operator new (std::size_t count, void* ptr) throw(); // 0x4026a7
// void* operator new (std::size_t count, void* ptr) throw(); // 0xa5ce70
// void* operator new (std::size_t count, void* ptr) throw(); // 0x125fef8
// void* operator new (std::size_t count, void* ptr) throw(); // 0x16c43bc

// void* __cdecl malloc(size_t size); // 0x124919d
// void* __cdecl malloc(size_t size); // 0x16a8363
// void* __cdecl malloc(size_t size); // 0x16c7766
// void* __cdecl malloc(size_t size); // 0x16fc34e
// void* __cdecl malloc(size_t size); // 0x1712bec

// void* __cdecl calloc(size_t num, size_t size); // 0x1249bcb
// void* __cdecl calloc(size_t num, size_t size); // 0x16a84a1
// void* __cdecl calloc(size_t num, size_t size); // 0x16cc899
// void* __cdecl calloc(size_t num, size_t size); // 0x16fd249

// void* __cdecl realloc(void* ptr, size_t new_size); // 0x164afca
// void* __cdecl realloc(void* ptr, size_t new_size); // 0x16acb56
// void* __cdecl realloc(void* ptr, size_t new_size); // 0x16c77ed
// void* __cdecl realloc(void* ptr, size_t new_size); // 0x1701239

// void __cdecl free(void* ptr); // 0x12490f3
// void __cdecl free(void* ptr); // 0x16a82ca
// void __cdecl free(void* ptr); // 0x16c7778
// void __cdecl free(void* ptr); // 0x16fc2a4

struct VoidPtr;

namespace Memory {
	DefineFunction(Malloc, 0x99630f, VoidPtr*, Params(int unk1), Args(unk1));
	DefineFunction(Realloc, 0x99631d, VoidPtr*, Params(VoidPtr* unk1, int unk2), Args(unk1, unk2));
	DefineFunction(Free, 0x99632f, void, Params(VoidPtr* unk1), Args(unk1));
};

struct const_mem_ptr {

} typedef ConstMemPtr;

struct VoidPtr {

};
