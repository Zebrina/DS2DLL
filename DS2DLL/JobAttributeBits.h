#pragma once

#include "Enums.h"
#include "GPString.h"

class JobAttributeBits {
public:
	$StaticMethod(0x0094115c, GetTemp1, JobAttributeBits&);
	$StaticMethod(0x00941162, GetTemp2, JobAttributeBits&);
	$ConstMethod(0x00942014, Get, bool, eJobAttribute unk1);
	$ConstMethod(0x00941c89, HasAnyBitsSet, bool);
	$ConstMethod(0x009424c4, IsEqualTo, bool, const JobAttributeBits& unk1);
	$ConstMethod(0x00942e59, IsLargerSuperSetOf, bool, const JobAttributeBits& unk1);
	$ConstMethod(0x00942e85, IsSmallerSubSetOf, bool, const JobAttributeBits& unk1);
	$ConstMethod(0x00942e22, IsSubSetOf, bool, const JobAttributeBits& unk1);
	$ConstMethod(0x00942ded, IsSuperSetOf, bool, const JobAttributeBits& unk1);
	$Method(0x0094204d, Clear, void, eJobAttribute unk1);
	$Method(0x009420d0, ClearAll, void);
	$Method(0x00942c88, CopyFrom, void, const JobAttributeBits& unk1);
	$Method(0x0094201d, Set, void, eJobAttribute unk1, bool unk2);
	$Method(0x0094203c, Set, void, eJobAttribute unk1);
	$Method(0x0094205e, SetAll, void, bool unk1);

private:
	// 0x00
    $Padding(0x00, 0x14);
};

STATIC_ASSERT(sizeof(JobAttributeBits) == 0x14);

$Function(0x00942853, ToString, GPBString, const JobAttributeBits& unk1);
