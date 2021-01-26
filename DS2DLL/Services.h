#pragma once

#include "GPString.h"
#include "SiegeConsole.h"

class Services {
public:
	$Singleton(Services, 0x00414306);

	$StaticMethod(0x0090f01e, CheckAllSkrits, void);
	$StaticMethod(0x0090ec8f, CheckSkrit, void, const GPBString& unk1);
	$Method(0x0090ea3f, GetOutputConsole, SiegeConsole&);

    // 0x00
    $Padding(0x00, 0x68);
};

STATIC_ASSERT(sizeof(Services) == 0x68);
