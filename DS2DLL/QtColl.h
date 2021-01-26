#pragma once

#include "Enums.h"
#include "GPFastVector.h"

struct QtColl : public GPFastVector<eQueryTrait> {
	$Method(0x00503c8b, Add, void, eQueryTrait queryTrait);
	$Method(0x00503905, Clear, void);
};
