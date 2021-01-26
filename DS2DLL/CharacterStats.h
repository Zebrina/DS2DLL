#pragma once

class CharacterStats {
public:
	CharacterStats() = default;
	CharacterStats(const CharacterStats&) = default;
	~CharacterStats() = default;

	CharacterStats& operator=(const CharacterStats&) = default;

    // 0x00
    $Padding(0x00, 0x2c);
};

// Size confirmed.
STATIC_ASSERT(sizeof(CharacterStats) == 0x2c);
