#pragma once

class WorldMessage {
public:
	/*WorldMessage*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00408327
	DefineConstMethod(HasEvent, 0x408302, bool, Params(eWorldEvent unk1), Args(eWorldEvent unk1));
	/*WorldMessage*/ public: const Goid_* /*__thiscall*/ GetSendFrom() const; //0x0040831b
	/*WorldMessage*/ public: const Goid_* /*__thiscall*/ GetSendTo() const; //0x0040831f
	/*WorldMessage*/ public: const Scid_* /*__thiscall*/ GetSendToScid() const; //0x00408323
	DefineConstMethod(FUBI_RENAME_GetWorldEvent, 0x4082ff, eWorldEvent, Params(), Args());
	DefineConstMethod(FUBI_RENAME_GetData1, 0x408317, int, Params(), Args());
};
