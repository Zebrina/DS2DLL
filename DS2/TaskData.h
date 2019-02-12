#pragma once

struct TaskData {
	/*TaskData*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00412a78
	/*TaskData*/ public: bool /*__thiscall*/ GetParallelTask() const; //0x00412a7f
	/*TaskData*/ public: gpbstring<char> /*__thiscall*/ GetDescription() const; //0x0041885b
	/*TaskData*/ public: gpbstring<char> /*__thiscall*/ GetName() const; //0x0041882f
	/*TaskData*/ public: gpbstring<char> /*__thiscall*/ GetRadarIcon() const; //0x00418871
	/*TaskData*/ public: gpbstring<char> /*__thiscall*/ GetTitle() const; //0x00418845
	/*TaskData*/ public: int /*__thiscall*/ GetIndex() const; //0x00412a7c
};
