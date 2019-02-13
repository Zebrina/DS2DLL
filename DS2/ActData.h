#pragma once

struct ActData {
	/*ActData*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00412a9e
	/*ActData*/ public: gpbstring<char> /*__thiscall*/ GetName() const; //0x0041890b
	/*ActData*/ public: gpbstring<char> /*__thiscall*/ GetTab() const; //0x004188f5
	/*ActData*/ public: gpbstring<char> /*__thiscall*/ GetTitle() const; //0x00418921
	/*ActData*/ public: const QuestData* /*__thiscall*/ GetQuestData(unsigned int unk1) const; //0x004142cc
	DefineConstMethod(GetIndex, 0x412aa2, int, Params(), Args());
	DefineConstMethod(GetPrimaryQuestCount, 0x4142ad, int, Params(), Args());
	DefineConstMethod(GetQuestCount, 0x4142bf, int, Params(), Args());
	DefineConstMethod(GetSecondaryQuestCount, 0x412aa5, int, Params(), Args());
};
