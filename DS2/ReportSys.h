#pragma once

#include "GPBString.h"

class ReportSys {
public:
	class Context {
	public:
		/*ReportSys::Context*/ public: bool /*__cdecl*/ OutputF(const char* unk1, ...); //0x00428a6e
		/*ReportSys::Context*/ public: bool /*__thiscall*/ IsEnabled() const; //0x004289f0
		/*ReportSys::Context*/ public: bool /*__thiscall*/ IsInReport() const; //0x00428a2d
		/*ReportSys::Context*/ public: bool /*__thiscall*/ Output(const char* unk1, int unk2); //0x006727da
		/*ReportSys::Context*/ public: bool /*__thiscall*/ Output(const char* unk1); //0x00428a5d
		/*ReportSys::Context*/ public: bool /*__thiscall*/ Output(const gpbstring<char>& unk1); //0x00429e81
		/*ReportSys::Context*/ public: bool /*__thiscall*/ OutputEol(); //0x00428a82
		/*ReportSys::Context*/ public: bool /*__thiscall*/ OutputRaw(const char* unk1, int unk2); //0x006726f3
		/*ReportSys::Context*/ public: bool /*__thiscall*/ OutputRaw(const char* unk1); //0x00428a4c
		/*ReportSys::Context*/ public: void /*__thiscall*/ BeginReport(); //0x00672237
		/*ReportSys::Context*/ public: void /*__thiscall*/ Disable(); //0x004289eb
		/*ReportSys::Context*/ public: void /*__thiscall*/ Enable(bool unk1); //0x004289de
		/*ReportSys::Context*/ public: void /*__thiscall*/ EndReport(); //0x006722f7
		/*ReportSys::Context*/ public: void /*__thiscall*/ Indent(); //0x00428a36
		/*ReportSys::Context*/ public: void /*__thiscall*/ Outdent(); //0x00428a41
		/*ReportSys::Context*/ public: void /*__thiscall*/ Toggle(); //0x00429e6e
	};
};
