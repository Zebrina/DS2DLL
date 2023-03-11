#include "PContentDb.h"

FEX float PContentDb::GetHighestMagicFindChance() const {
	return highestMagicFindChance;
}
void PContentDb::SetHighestMagicFindChance(float newValue) {
	highestMagicFindChance = newValue;
}

FEX float PContentDb::GetHighestGoldBonusPercent() const {
	return highestGoldBonusPercent;
}
void PContentDb::SetHighestGoldBonusPercent(float newValue) {
	highestGoldBonusPercent = newValue;
}

bool PContentDb::GetForceBestDrops() const {
	return forceBestDrops;
}
void PContentDb::SetForceBestDrops(bool flag) {
	forceBestDrops = flag;
}

int PContentDb::GetTotalCharacterCount() const {
	return totalCharacterCount;
}
void PContentDb::SetTotalCharacterCount(int newValue) {
	totalCharacterCount = newValue;
}
