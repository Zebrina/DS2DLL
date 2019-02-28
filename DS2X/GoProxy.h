#pragma once

#include "GoComponent.h"

class GoProxy : public GoComponent {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x502e98, int, Params(GoComponent* component), Args(component));
};
