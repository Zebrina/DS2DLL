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
	/*JobResult*/ public: double /*__thiscall*/ GetTimeFinished() const; //0x00411a44
	/*JobResult*/ public: eActionOrigin /*__thiscall*/ GetOrigin() const; //0x00411a97
	/*JobResult*/ public: eJobAbstractType /*__thiscall*/ GetJat() const; //0x00411a75
	/*JobResult*/ public: eJobResult /*__thiscall*/ GetResult() const; //0x00411a53
	/*JobResult*/ public: eJobTraits /*__thiscall*/ GetTraits() const; //0x00411a86
	/*JobResult*/ public: unsigned long /*__thiscall*/ GetCount() const; //0x00411a64
	/*JobResult*/ public: void /*__thiscall*/ SetCount(unsigned long unk1); //0x00411a68
	/*JobResult*/ public: void /*__thiscall*/ SetGoalModifier(const Goid_* unk1); //0x00411abd
	/*JobResult*/ public: void /*__thiscall*/ SetGoalObject(const Goid_* unk1); //0x00411aac
	/*JobResult*/ public: void /*__thiscall*/ SetGoalPosition(const SiegePos& unk1); //0x00411ace
	/*JobResult*/ public: void /*__thiscall*/ SetJat(eJobAbstractType unk1); //0x00411a79
	/*JobResult*/ public: void /*__thiscall*/ SetOrigin(eActionOrigin unk1); //0x00411a9b
	/*JobResult*/ public: void /*__thiscall*/ SetResult(eJobResult unk1); //0x00411a57
	/*JobResult*/ public: void /*__thiscall*/ SetTimeFinished(double unk1); //0x00411a47
	/*JobResult*/ public: void /*__thiscall*/ SetTraits(eJobTraits unk1); //0x00411a8a
};
