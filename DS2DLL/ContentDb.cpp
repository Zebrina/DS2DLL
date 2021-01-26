#include "ContentDb.h"

#include <algorithm>

FEX void ContentDb::SetMaxPartyGold(int amount) {
	maxPartyGold = std::max(0, amount);
}
FEX void ContentDb::SetSmallGoldAmount(int amount) {
	smallGoldAmount = std::max(0, std::min(amount, INT_MAX - 2));
	if (smallGoldAmount >= mediumGoldAmount) {
		SetMediumGoldAmount(smallGoldAmount + 1);
	}
}
FEX void ContentDb::SetMediumGoldAmount(int amount) {
	mediumGoldAmount = std::max(0, std::min(amount, INT_MAX - 1));
	if (mediumGoldAmount >= largeGoldAmount) {
		SetLargeGoldAmount(mediumGoldAmount + 1);
	}
}
FEX void ContentDb::SetLargeGoldAmount(int amount) {
	largeGoldAmount = std::max(0, amount);
}
