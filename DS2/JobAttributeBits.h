#pragma once

#include "Enums.h"
#include "GPBString.h"

#include "ClassMacros.h"

class JobAttributeBits {
public:
	DefineStaticMethod(GetTemp1, 0x94115c, JobAttributeBits&, NO_PARAMS, NO_ARGS);
	DefineStaticMethod(GetTemp2, 0x941162, JobAttributeBits&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(Get, 0x942014, bool, Params(eJobAttribute unk1), Args(unk1));
	DefineConstMethod(HasAnyBitsSet, 0x941c89, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(IsEqualTo, 0x9424c4, bool, Params(const JobAttributeBits& unk1), Args(unk1));
	DefineConstMethod(IsLargerSuperSetOf, 0x942e59, bool, Params(const JobAttributeBits& unk1), Args(unk1));
	DefineConstMethod(IsSmallerSubSetOf, 0x942e85, bool, Params(const JobAttributeBits& unk1), Args(unk1));
	DefineConstMethod(IsSubSetOf, 0x942e22, bool, Params(const JobAttributeBits& unk1), Args(unk1));
	DefineConstMethod(IsSuperSetOf, 0x942ded, bool, Params(const JobAttributeBits& unk1), Args(unk1));
	DefineMethod(Clear, 0x94204d, void, Params(eJobAttribute unk1), Args(unk1));
	DefineMethod(ClearAll, 0x9420d0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(CopyFrom, 0x942c88, void, Params(const JobAttributeBits& unk1), Args(unk1));
	DefineMethod(Set, 0x94201d, void, Params(eJobAttribute unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(Set, 0x94203c, void, Params(eJobAttribute unk1), Args(unk1));
	DefineMethod(SetAll, 0x94205e, void, Params(bool unk1), Args(unk1));
};

DefineFunction(ToString, 0x942853, gpbstring<char>, Params(const JobAttributeBits& unk1), Args(unk1));
