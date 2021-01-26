#pragma once

struct GridItem {
	GridItem() = default;
	GridItem(const GridItem&) = default;
	~GridItem() = default;

	GridItem& operator=(const GridItem&) = default;

    // 0x00
    $Padding(0x00, 0x2c);
};

// Size confirmed.
STATIC_ASSERT(sizeof(GridItem) == 0x2c);
