#pragma once

class IJournal {
public:
    // 0x00
    $Padding(0x00, 0x24);
};

STATIC_ASSERT(sizeof(IJournal) == 0x24);
