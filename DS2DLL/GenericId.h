#pragma once

struct GenericId_ {
	$StaticMethod(0x00502d6e, GetInvalidGenericId, const GenericId_*); // Returns nullptr

	$ConstMethod(0x00502d66, IsValid, bool); // Basically this != nullptr
} typedef GenericId;
