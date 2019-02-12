#pragma once

class AnalysisResults {
public:
	/*AnalysisResults*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00408df9
	/*AnalysisResults*/ public: bool /*__thiscall*/ GetForceAnalysis() const; //0x00408e61
	/*AnalysisResults*/ public: bool /*__thiscall*/ GetRandomCharacter() const; //0x00408e3f
	/*AnalysisResults*/ public: eAttackClass /*__thiscall*/ GetAttackClass() const; //0x00408e50
	/*AnalysisResults*/ public: eItemSkillType /*__thiscall*/ GetItemSkillType() const; //0x00408e1d
	/*AnalysisResults*/ public: ePContentType /*__thiscall*/ GetSpecificType() const; //0x00408e0c
	/*AnalysisResults*/ public: ePContentType /*__thiscall*/ GetType() const; //0x00408dfd
	/*AnalysisResults*/ public: int /*__thiscall*/ GetItemLevel() const; //0x00408e2e
	/*AnalysisResults*/ public: void /*__thiscall*/ SetAttackClass(eAttackClass unk1); //0x00408e54
	/*AnalysisResults*/ public: void /*__thiscall*/ SetForceAnalysis(bool unk1); //0x00408e65
	/*AnalysisResults*/ public: void /*__thiscall*/ SetItemLevel(int unk1); //0x00408e32
	/*AnalysisResults*/ public: void /*__thiscall*/ SetItemSkillType(eItemSkillType unk1); //0x00408e21
	/*AnalysisResults*/ public: void /*__thiscall*/ SetRandomCharacter(bool unk1); //0x00408e43
	/*AnalysisResults*/ public: void /*__thiscall*/ SetSpecificType(ePContentType unk1); //0x00408e10
	/*AnalysisResults*/ public: void /*__thiscall*/ SetType(ePContentType unk1); //0x00408e00
};