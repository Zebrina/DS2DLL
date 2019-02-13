#pragma once

enum eActionOrigin;
enum eJobAbstractType;
enum eJobResult;
enum eJobTraits;

class JobResult {
public:
	/*JobResult*/ public: const Goid_* /*__thiscall*/ GetGoalModifier() const; //0x00411ab9
	/*JobResult*/ public: const Goid_* /*__thiscall*/ GetGoalObject() const; //0x00411aa8
	/*JobResult*/ public: const SiegePos& /*__thiscall*/ GetGoalPosition() const; //0x00411aca
	DefineConstMethod(GetTimeFinished, 0x411a44, double, Params(), Args());
	DefineConstMethod(GetOrigin, 0x411a97, eActionOrigin, Params(), Args());
	DefineConstMethod(GetJat, 0x411a75, eJobAbstractType, Params(), Args());
	DefineConstMethod(GetResult, 0x411a53, eJobResult, Params(), Args());
	DefineConstMethod(GetTraits, 0x411a86, eJobTraits, Params(), Args());
	/*JobResult*/ public: unsigned long /*__thiscall*/ GetCount() const; //0x00411a64
	DefineMethod(SetCount, 0x411a68, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetGoalModifier, 0x411abd, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetGoalObject, 0x411aac, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetGoalPosition, 0x411ace, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(SetJat, 0x411a79, void, Params(eJobAbstractType unk1), Args(eJobAbstractType unk1));
	DefineMethod(SetOrigin, 0x411a9b, void, Params(eActionOrigin unk1), Args(eActionOrigin unk1));
	DefineMethod(SetResult, 0x411a57, void, Params(eJobResult unk1), Args(eJobResult unk1));
	DefineMethod(SetTimeFinished, 0x411a47, void, Params(double unk1), Args(double unk1));
	DefineMethod(SetTraits, 0x411a8a, void, Params(eJobTraits unk1), Args(eJobTraits unk1));
};
