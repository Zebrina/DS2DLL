#pragma once

#include "GoComponent.h"

class GoFlick : public GoComponent {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x7d7bc1, int, Params(GoComponent* component), Args(component));
};
