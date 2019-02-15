#pragma once

#include "Skrit.h"

#include "ClassMacros.h"

namespace New {
	DefineFunction(Fuel, 0x9bcc71, Skrit::FuelWrapper*, Params(const char* unk1), Args(unk1));
	DefineFunction(SiegeRail, 0x6d3770, Skrit::SiegeRailWrapper*, NO_PARAMS, NO_ARGS);
};
