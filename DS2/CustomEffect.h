#pragma once

struct CustomEffect {
public:
	/*CustomEffect*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00449f9b
	DefineConstMethod(GetbActive, 0x449fab, bool, Params(), Args());
	DefineConstMethod(GetbInWorld, 0x449fc1, bool, Params(), Args());
	DefineConstMethod(GetbMeleeDamage, 0x449fc5, bool, Params(), Args());
	DefineConstMethod(GetbMeleeDamageOnly, 0x449fdd, bool, Params(), Args());
	DefineConstMethod(GetbRangedDamage, 0x449fc9, bool, Params(), Args());
	DefineConstMethod(GetbRangedDamageOnly, 0x449fe1, bool, Params(), Args());
	/*CustomEffect*/ public: gpbstring<char> /*__thiscall*/ GetEffectSkrit() const; //0x0044d628
	/*CustomEffect*/ public: gpbstring<char> /*__thiscall*/ GetEffectType() const; //0x0044d63e
	/*CustomEffect*/ public: gpbstring<char> /*__thiscall*/ GetStateName() const; //0x0044d615
	/*CustomEffect*/ public: const Goid_* /*__thiscall*/ GetItem() const; //0x00449fa7
	/*CustomEffect*/ public: const Goid_* /*__thiscall*/ GetSource() const; //0x00449f9f
	/*CustomEffect*/ public: const Goid_* /*__thiscall*/ GetTarget() const; //0x00449fa3
	DefineConstMethod(GetDamageType, 0x449fd9, eDamageType, Params(), Args());
	DefineConstMethod(GetDamageChance, 0x449fcd, float, Params(), Args());
	DefineConstMethod(GetDamageMax, 0x449fd5, float, Params(), Args());
	DefineConstMethod(GetDamageMin, 0x449fd1, float, Params(), Args());
};
