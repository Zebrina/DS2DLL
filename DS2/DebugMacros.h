#pragma once

#define ASSERT_SIZEOF(type, size) static_assert(sizeof(type) == size, "Size of " #type " must be " #size " bytes.")
