#pragma once

#include "FuBi.h"

class GoDefend {
public:
	/*GoDefend*/ private: /*static*/ GoDefend* /*__cdecl*/ FUBI_NetToInstance(unsigned long unk1, FuBi::Cookie__** unk2); //0x004a43df
	/*GoDefend*/ private: /*static*/ unsigned long /*__cdecl*/ FUBI_InstanceToNet(GoDefend* unk1); //0x004a43d6
	/*GoDefend*/ public: float /*__thiscall*/ EvaluateTotalDefense(); //0x00959dbc
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockCombatMagicChance() const; //0x004a565d
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockCombatMagicChanceAmount() const; //0x004a5679
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockCombatMagicDamage() const; //0x004a562c
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockCustomDamage(const char* unk1) const; //0x00959fc1
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockDamage() const; //0x004a561c
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockMeleeDamage() const; //0x004a5620
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockMeleeDamageChance() const; //0x004a564f
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockMeleeDamageChanceAmount() const; //0x004a566b
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockNatureMagicChance() const; //0x004a5664
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockNatureMagicChanceAmount() const; //0x004a5680
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockNatureMagicDamage() const; //0x004a5628
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockPartCombatMagicDamage() const; //0x004a5644
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockPartCustomDamage(const char* unk1) const; //0x0095a009
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockPartDamage() const; //0x004a5634
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockPartMeleeDamage() const; //0x004a5638
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockPartNatureMagicDamage() const; //0x004a5640
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockPartPiercingDamage() const; //0x004a5648
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockPartRangedDamage() const; //0x004a563c
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockPiercingDamage() const; //0x004a5630
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockRangedDamage() const; //0x004a5624
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockRangedDamageChance() const; //0x004a5656
	/*GoDefend*/ public: float /*__thiscall*/ GetBlockRangedDamageChanceAmount() const; //0x004a5672
	/*GoDefend*/ public: float /*__thiscall*/ GetChanceToDodgeHit() const; //0x004a5687
	/*GoDefend*/ public: float /*__thiscall*/ GetChanceToDodgeHitMelee() const; //0x004a568e
	/*GoDefend*/ public: float /*__thiscall*/ GetChanceToDodgeHitRanged() const; //0x004a5695
	/*GoDefend*/ public: float /*__thiscall*/ GetDamageThreshold() const; //0x00959e09
	/*GoDefend*/ public: float /*__thiscall*/ GetDamageToManaPercent() const; //0x004a56cd
	/*GoDefend*/ public: float /*__thiscall*/ GetDefense() const; //0x004a5611
	/*GoDefend*/ public: float /*__thiscall*/ GetDefenseBonusPercent(); //0x004a5615
	/*GoDefend*/ public: float /*__thiscall*/ GetManaShield() const; //0x004a56c6
	/*GoDefend*/ public: float /*__thiscall*/ GetReflectDamageAmount() const; //0x004a569c
	/*GoDefend*/ public: float /*__thiscall*/ GetReflectDamageChance() const; //0x004a56aa
	/*GoDefend*/ public: float /*__thiscall*/ GetReflectDamageToSelfAmount() const; //0x004a56bf
	/*GoDefend*/ public: float /*__thiscall*/ GetReflectFixedDamageAmount() const; //0x004a56a3
	/*GoDefend*/ public: float /*__thiscall*/ GetReflectPiercingDamageAmount() const; //0x004a56b1
	/*GoDefend*/ public: float /*__thiscall*/ GetReflectPiercingDamageChance() const; //0x004a56b8
	/*GoDefend*/ public: void /*__thiscall*/ RCSetDefenseNatural(float unk1); //0x00959c77
	/*GoDefend*/ public: void /*__thiscall*/ SSetDefenseNatural(float unk1); //0x00959da9
};
