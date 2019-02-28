#pragma once

#include "Enums.h"
#include "Job.h"



// Only reference by JobResult.
enum eJobTraits {

};

class JobResult {
public:
	DefineConstMethod(GetGoalModifier, 0x411ab9, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalObject, 0x411aa8, const Goid_*, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetGoalPosition, 0x411aca, const SiegePos&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTimeFinished, 0x411a44, double, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetOrigin, 0x411a97, eActionOrigin, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetJat, 0x411a75, eJobAbstractType, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetResult, 0x411a53, eJobResult, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetTraits, 0x411a86, eJobTraits, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCount, 0x411a64, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(SetCount, 0x411a68, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetGoalModifier, 0x411abd, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetGoalObject, 0x411aac, void, Params(const Goid_* unk1), Args(unk1));
	DefineMethod(SetGoalPosition, 0x411ace, void, Params(const SiegePos& unk1), Args(unk1));
	DefineMethod(SetJat, 0x411a79, void, Params(eJobAbstractType unk1), Args(unk1));
	DefineMethod(SetOrigin, 0x411a9b, void, Params(eActionOrigin unk1), Args(unk1));
	DefineMethod(SetResult, 0x411a57, void, Params(eJobResult unk1), Args(unk1));
	DefineMethod(SetTimeFinished, 0x411a47, void, Params(double unk1), Args(unk1));
	DefineMethod(SetTraits, 0x411a8a, void, Params(eJobTraits unk1), Args(unk1));

private:
	// ??
	unsigned int count;
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
