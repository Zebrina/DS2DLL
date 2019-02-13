#pragma once

struct JobReq {
	/*JobReq*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00427fba
	/*JobReq*/ public: const Goid_* /*__thiscall*/ GetGoalModifier() const; //0x00428044
	/*JobReq*/ public: const Goid_* /*__thiscall*/ GetGoalObject() const; //0x00428033
	/*JobReq*/ public: const Goid_* /*__thiscall*/ GetNotify() const; //0x00428022
	/*JobReq*/ public: const Quat& /*__thiscall*/ GetGoalOrientation() const; //0x0042806f
	/*JobReq*/ public: const Scid_* /*__thiscall*/ GetSECommandScid() const; //0x004280b2
	/*JobReq*/ public: const SiegePos& /*__thiscall*/ GetGoalPosition() const; //0x00428055
	DefineConstMethod(GetOrigin, 0x427fef, eActionOrigin, Params(), Args());
	DefineConstMethod(GetSlot, 0x42807f, eEquipSlot, Params(), Args());
	DefineConstMethod(GetJat, 0x427fbe, eJobAbstractType, Params(), Args());
	DefineConstMethod(GetQ, 0x427fcd, eJobQ, Params(), Args());
	DefineConstMethod(GetQPlace, 0x427fde, eQPlace, Params(), Args());
	DefineConstMethod(GetFloat1, 0x4280c3, float, Params(), Args());
	DefineConstMethod(GetInt1, 0x428090, int, Params(), Args());
	DefineConstMethod(GetInt2, 0x4280a1, int, Params(), Args());
	/*JobReq*/ public: unsigned long /*__thiscall*/ GetPlaceAfter() const; //0x00428011
	/*JobReq*/ public: unsigned long /*__thiscall*/ GetPlaceBefore() const; //0x00428000
	DefineMethod(SetFloat1, 0x4280c7, void, Params(float unk1), Args(float unk1));
	DefineMethod(SetGoalModifier, 0x428048, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetGoalObject, 0x428037, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetGoalOrientation, 0x428073, void, Params(const Quat& unk1), Args(const Quat& unk1));
	DefineMethod(SetGoalPosition, 0x428059, void, Params(const SiegePos& unk1), Args(const SiegePos& unk1));
	DefineMethod(SetInt1, 0x428094, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetInt2, 0x4280a5, void, Params(int unk1), Args(int unk1));
	DefineMethod(SetJat, 0x427fc1, void, Params(eJobAbstractType unk1), Args(eJobAbstractType unk1));
	DefineMethod(SetNotify, 0x428026, void, Params(const Goid_* unk1), Args(const Goid_* unk1));
	DefineMethod(SetOrigin, 0x427ff3, void, Params(eActionOrigin unk1), Args(eActionOrigin unk1));
	DefineMethod(SetPlaceAfter, 0x428015, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetPlaceBefore, 0x428004, void, Params(unsigned long unk1), Args(unsigned long unk1));
	DefineMethod(SetQ, 0x427fd1, void, Params(eJobQ unk1), Args(eJobQ unk1));
	DefineMethod(SetQPlace, 0x427fe2, void, Params(eQPlace unk1), Args(eQPlace unk1));
	DefineMethod(SetSECommandScid, 0x4280b6, void, Params(const Scid_* unk1), Args(const Scid_* unk1));
	DefineMethod(SetSlot, 0x428083, void, Params(eEquipSlot unk1), Args(eEquipSlot unk1));
};
