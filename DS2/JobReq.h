#pragma once

struct JobReq {
	/*JobReq*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00427fba
	/*JobReq*/ public: const Goid_* /*__thiscall*/ GetGoalModifier() const; //0x00428044
	/*JobReq*/ public: const Goid_* /*__thiscall*/ GetGoalObject() const; //0x00428033
	/*JobReq*/ public: const Goid_* /*__thiscall*/ GetNotify() const; //0x00428022
	/*JobReq*/ public: const Quat& /*__thiscall*/ GetGoalOrientation() const; //0x0042806f
	/*JobReq*/ public: const Scid_* /*__thiscall*/ GetSECommandScid() const; //0x004280b2
	/*JobReq*/ public: const SiegePos& /*__thiscall*/ GetGoalPosition() const; //0x00428055
	/*JobReq*/ public: eActionOrigin /*__thiscall*/ GetOrigin() const; //0x00427fef
	/*JobReq*/ public: eEquipSlot /*__thiscall*/ GetSlot() const; //0x0042807f
	/*JobReq*/ public: eJobAbstractType /*__thiscall*/ GetJat() const; //0x00427fbe
	/*JobReq*/ public: eJobQ /*__thiscall*/ GetQ() const; //0x00427fcd
	/*JobReq*/ public: eQPlace /*__thiscall*/ GetQPlace() const; //0x00427fde
	/*JobReq*/ public: float /*__thiscall*/ GetFloat1() const; //0x004280c3
	/*JobReq*/ public: int /*__thiscall*/ GetInt1() const; //0x00428090
	/*JobReq*/ public: int /*__thiscall*/ GetInt2() const; //0x004280a1
	/*JobReq*/ public: unsigned long /*__thiscall*/ GetPlaceAfter() const; //0x00428011
	/*JobReq*/ public: unsigned long /*__thiscall*/ GetPlaceBefore() const; //0x00428000
	/*JobReq*/ public: void /*__thiscall*/ SetFloat1(float unk1); //0x004280c7
	/*JobReq*/ public: void /*__thiscall*/ SetGoalModifier(const Goid_* unk1); //0x00428048
	/*JobReq*/ public: void /*__thiscall*/ SetGoalObject(const Goid_* unk1); //0x00428037
	/*JobReq*/ public: void /*__thiscall*/ SetGoalOrientation(const Quat& unk1); //0x00428073
	/*JobReq*/ public: void /*__thiscall*/ SetGoalPosition(const SiegePos& unk1); //0x00428059
	/*JobReq*/ public: void /*__thiscall*/ SetInt1(int unk1); //0x00428094
	/*JobReq*/ public: void /*__thiscall*/ SetInt2(int unk1); //0x004280a5
	/*JobReq*/ public: void /*__thiscall*/ SetJat(eJobAbstractType unk1); //0x00427fc1
	/*JobReq*/ public: void /*__thiscall*/ SetNotify(const Goid_* unk1); //0x00428026
	/*JobReq*/ public: void /*__thiscall*/ SetOrigin(eActionOrigin unk1); //0x00427ff3
	/*JobReq*/ public: void /*__thiscall*/ SetPlaceAfter(unsigned long unk1); //0x00428015
	/*JobReq*/ public: void /*__thiscall*/ SetPlaceBefore(unsigned long unk1); //0x00428004
	/*JobReq*/ public: void /*__thiscall*/ SetQ(eJobQ unk1); //0x00427fd1
	/*JobReq*/ public: void /*__thiscall*/ SetQPlace(eQPlace unk1); //0x00427fe2
	/*JobReq*/ public: void /*__thiscall*/ SetSECommandScid(const Scid_* unk1); //0x004280b6
	/*JobReq*/ public: void /*__thiscall*/ SetSlot(eEquipSlot unk1); //0x00428083
};
