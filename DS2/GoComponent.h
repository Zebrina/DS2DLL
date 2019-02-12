#pragma once

class GoComponent {
public:
	/*GoComponent*/ public: Go* /*__thiscall*/ FUBI_RENAME_GetGo() const; //0x00502e90
	/*GoComponent*/ public: const GoDataComponent* /*__thiscall*/ FUBI_RENAME_GetData() const; //0x00502e94
	/*GoComponent*/ public: const gpbstring<char>& /*__thiscall*/ GetName() const; //0x007b10cd
	/*GoComponent*/ public: const Goid_* /*__thiscall*/ GetGoid() const; //0x007b10d5
	/*GoComponent*/ public: const Scid_* /*__thiscall*/ GetScid() const; //0x007b10dc
};
