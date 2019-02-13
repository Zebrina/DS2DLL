#pragma once

class GoComponent {
public:
	DefineConstMethod(FUBI_RENAME_GetGo, 0x502e90, Go*, Params(), Args());
	/*GoComponent*/ public: const GoDataComponent* /*__thiscall*/ FUBI_RENAME_GetData() const; //0x00502e94
	/*GoComponent*/ public: const gpbstring<char>& /*__thiscall*/ GetName() const; //0x007b10cd
	/*GoComponent*/ public: const Goid_* /*__thiscall*/ GetGoid() const; //0x007b10d5
	/*GoComponent*/ public: const Scid_* /*__thiscall*/ GetScid() const; //0x007b10dc
};
