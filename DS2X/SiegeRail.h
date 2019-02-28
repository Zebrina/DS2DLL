#pragma once

#include "GPBString.h"



struct SiegeRail {

};

DefineFunction(ToString, 0x6d4260, gpbstring<char>, Params(const SiegeRail& unk1), Args(unk1));
