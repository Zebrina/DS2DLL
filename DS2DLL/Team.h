#pragma once

struct TeamId_ {

};

typedef TeamId_ TeamId;

class Team {
public:
	Team() = default;
	Team(const Team&) = default;
	~Team() = default;

	Team& operator=(const Team&) = default;

    // 0x00
    $Padding(0x00, 0x24);
};

// Size confirmed.
STATIC_ASSERT(sizeof(Team) == 0x24);
