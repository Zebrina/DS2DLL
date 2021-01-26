#pragma once

#include "Enums.h"
#include "Job.h"



// Only reference by JobResult.
enum eJobTraits {

};

class JobResult {
public:
	$ConstMethod(0x00411ab9, GetGoalModifier, const Goid*);
	$ConstMethod(0x00411aa8, GetGoalObject, const Goid*);
	$ConstMethod(0x00411aca, GetGoalPosition, const SiegePos&);
	$ConstMethod(0x00411a44, GetTimeFinished, double);
	$ConstMethod(0x00411a97, GetOrigin, eActionOrigin);
	$ConstMethod(0x00411a75, GetJat, eJobAbstractType);
	$ConstMethod(0x00411a53, GetResult, eJobResult);
	$ConstMethod(0x00411a86, GetTraits, eJobTraits);
	$ConstMethod(0x00411a64, GetCount, uint);
	$Method(0x00411a68, SetCount, void, uint unk1);
	$Method(0x00411abd, SetGoalModifier, void, const Goid* unk1);
	$Method(0x00411aac, SetGoalObject, void, const Goid* unk1);
	$Method(0x00411ace, SetGoalPosition, void, const SiegePos& unk1);
	$Method(0x00411a79, SetJat, void, eJobAbstractType unk1);
	$Method(0x00411a9b, SetOrigin, void, eActionOrigin unk1);
	$Method(0x00411a57, SetResult, void, eJobResult unk1);
	$Method(0x00411a47, SetTimeFinished, void, double unk1);
	$Method(0x00411a8a, SetTraits, void, eJobTraits unk1);

private:
	// ??
	uint count;
	// ??
	Goid* goalModifier;
	// ??
	Goid* goalObject;
	// ??
	SiegePos* goalPosition;
	// ??
	eJobAbstractType jat;
	// ??
	eActionOrigin origin;
	// ??
	eJobResult result;
	// ??
	float timeFinished;
	// ??
	eJobTraits traits;
};
