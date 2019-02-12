#pragma once

struct ActData {
	/*ActData*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00412a9e
	/*ActData*/ public: gpbstring<char> /*__thiscall*/ GetName() const; //0x0041890b
	/*ActData*/ public: gpbstring<char> /*__thiscall*/ GetTab() const; //0x004188f5
	/*ActData*/ public: gpbstring<char> /*__thiscall*/ GetTitle() const; //0x00418921
	/*ActData*/ public: const QuestData* /*__thiscall*/ GetQuestData(unsigned int unk1) const; //0x004142cc
	/*ActData*/ public: int /*__thiscall*/ GetIndex() const; //0x00412aa2
	/*ActData*/ public: int /*__thiscall*/ GetPrimaryQuestCount() const; //0x004142ad
	/*ActData*/ public: int /*__thiscall*/ GetQuestCount() const; //0x004142bf
	/*ActData*/ public: int /*__thiscall*/ GetSecondaryQuestCount() const; //0x00412aa5
};
