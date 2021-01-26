#pragma once

namespace Memory {
    $Function(0x0099630f, Malloc, void*, int size);
    $Function(0x0099631d, Realloc, void*, void* ptr, int size);
    $Function(0x0099632f, Free, void, void* ptr);
};

struct const_mem_ptr {

} typedef ConstMemPtr;
