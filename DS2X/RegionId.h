#pragma once

struct RegionId_ {
	// 0x00
	FillStruct(0x00, 0x04);
} typedef RegionId;

STATIC_ASSERT_SIZEOF(RegionId_, 0x4);
