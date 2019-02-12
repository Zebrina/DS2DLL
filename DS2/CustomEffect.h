#pragma once

struct CustomEffect {
public:
	/*CustomEffect*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00449f9b
	/*CustomEffect*/ public: bool /*__thiscall*/ GetbActive() const; //0x00449fab
	/*CustomEffect*/ public: bool /*__thiscall*/ GetbInWorld() const; //0x00449fc1
	/*CustomEffect*/ public: bool /*__thiscall*/ GetbMeleeDamage() const; //0x00449fc5
	/*CustomEffect*/ public: bool /*__thiscall*/ GetbMeleeDamageOnly() const; //0x00449fdd
	/*CustomEffect*/ public: bool /*__thiscall*/ GetbRangedDamage() const; //0x00449fc9
	/*CustomEffect*/ public: bool /*__thiscall*/ GetbRangedDamageOnly() const; //0x00449fe1
	/*CustomEffect*/ public: gpbstring<char> /*__thiscall*/ GetEffectSkrit() const; //0x0044d628
	/*CustomEffect*/ public: gpbstring<char> /*__thiscall*/ GetEffectType() const; //0x0044d63e
	/*CustomEffect*/ public: gpbstring<char> /*__thiscall*/ GetStateName() const; //0x0044d615
	/*CustomEffect*/ public: const Goid_* /*__thiscall*/ GetItem() const; //0x00449fa7
	/*CustomEffect*/ public: const Goid_* /*__thiscall*/ GetSource() const; //0x00449f9f
	/*CustomEffect*/ public: const Goid_* /*__thiscall*/ GetTarget() const; //0x00449fa3
	/*CustomEffect*/ public: eDamageType /*__thiscall*/ GetDamageType() const; //0x00449fd9
	/*CustomEffect*/ public: float /*__thiscall*/ GetDamageChance() const; //0x00449fcd
	/*CustomEffect*/ public: float /*__thiscall*/ GetDamageMax() const; //0x00449fd5
	/*CustomEffect*/ public: float /*__thiscall*/ GetDamageMin() const; //0x00449fd1
};
