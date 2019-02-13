#pragma once

struct QuestData {
	/*QuestData*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00412a83
	DefineConstMethod(GetSecondary, 0x412a8a, bool, Params(), Args());
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetDescription() const; //0x004188b3
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetDescription2() const; //0x004188c9
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetImage() const; //0x004188df
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetName() const; //0x00418887
	/*QuestData*/ public: gpbstring<char> /*__thiscall*/ GetTitle() const; //0x0041889d
	/*QuestData*/ public: const TaskData* /*__thiscall*/ GetTaskData(unsigned int unk1) const; //0x00414284
	DefineConstMethod(GetAct, 0x412a8e, int, Params(), Args());
	DefineConstMethod(GetEliteLevel, 0x412a9a, int, Params(), Args());
	DefineConstMethod(GetIndex, 0x412a87, int, Params(), Args());
	DefineConstMethod(GetMercenaryLevel, 0x412a92, int, Params(), Args());
	DefineConstMethod(GetTaskCount, 0x414277, int, Params(), Args());
	DefineConstMethod(GetVeteranLevel, 0x412a96, int, Params(), Args());
};
