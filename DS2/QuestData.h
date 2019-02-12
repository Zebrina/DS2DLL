#pragma once

struct QuestData {
	/*QuestData*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00412a83
	/*QuestData*/ public: bool /*__thiscall*/ GetSecondary() const; //0x00412a8a
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetDescription() const; //0x004188b3
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetDescription2() const; //0x004188c9
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetImage() const; //0x004188df
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetName() const; //0x00418887
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetTitle() const; //0x0041889d
	/*QuestData*/ public: const TaskData* /*__thiscall*/ GetTaskData(unsigned int unk1) const; //0x00414284
	/*QuestData*/ public: int /*__thiscall*/ GetAct() const; //0x00412a8e
	/*QuestData*/ public: int /*__thiscall*/ GetEliteLevel() const; //0x00412a9a
	/*QuestData*/ public: int /*__thiscall*/ GetIndex() const; //0x00412a87
	/*QuestData*/ public: int /*__thiscall*/ GetMercenaryLevel() const; //0x00412a92
	/*QuestData*/ public: int /*__thiscall*/ GetTaskCount() const; //0x00414277
	/*QuestData*/ public: int /*__thiscall*/ GetVeteranLevel() const; //0x00412a96
};
