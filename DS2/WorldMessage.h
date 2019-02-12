#pragma once

class WorldMessage {
public:
	/*WorldMessage*/ private: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00408327
	/*WorldMessage*/ public: bool /*__thiscall*/ HasEvent(eWorldEvent unk1) const; //0x00408302
	/*WorldMessage*/ public: const Goid_* /*__thiscall*/ GetSendFrom() const; //0x0040831b
	/*WorldMessage*/ public: const Goid_* /*__thiscall*/ GetSendTo() const; //0x0040831f
	/*WorldMessage*/ public: const Scid_* /*__thiscall*/ GetSendToScid() const; //0x00408323
	/*WorldMessage*/ public: eWorldEvent /*__thiscall*/ FUBI_RENAME_GetWorldEvent() const; //0x004082ff
	/*WorldMessage*/ public: int /*__thiscall*/ FUBI_RENAME_GetData1() const; //0x00408317
};
