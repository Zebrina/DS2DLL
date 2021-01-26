#pragma once

struct RegionId_ {
	// 0x00
	$Padding(0x00, 0x04);
} typedef RegionId;

STATIC_ASSERT(sizeof(RegionId_) == 0x4);
