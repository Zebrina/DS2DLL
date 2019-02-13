#pragma once

struct TaskData {
	/*TaskData*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00412a78
	DefineConstMethod(GetParallelTask, 0x412a7f, bool, Params(), Args());
	/*TaskData*/ public: gpbstring<char> /*__thiscall*/ GetDescription() const; //0x0041885b
	/*TaskData*/ public: gpbstring<char> /*__thiscall*/ GetName() const; //0x0041882f
	/*TaskData*/ public: gpbstring<char> /*__thiscall*/ GetRadarIcon() const; //0x00418871
	/*TaskData*/ public: gpbstring<char> /*__thiscall*/ GetTitle() const; //0x00418845
	DefineConstMethod(GetIndex, 0x412a7c, int, Params(), Args());
};
