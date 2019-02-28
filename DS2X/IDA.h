#pragma once

#define FillStruct(from, to) char fill_##from##_##to[to - from]

class GoActor;
class GoAspect;
class GoAttack;
class GoBody;
class GoCoach;
class GoCommon;
class GoConversation;
class GoCorpse;
class GoDefend;
class GoFader;
class GoFollower;
class GoGold;
class GoGui;
class GoHire;
class GoInventory;
class GoMagic;
class GoMind;
class GoParty;
class GoPet;
class GoPhysics;
class GoPlacement;
class GoPotion;
class GoProxy;
class GoStash;
class GoStore;
class GoZone;

class Go {
public:
	// 0x00
	GoActor* actor;
	// 0x04
	GoAspect* aspect;
	// 0x08
	GoAttack* attack;
	// 0x0c
	GoBody* body;
	// 0x10
	GoCoach* coach;
	// 0x14
	GoCommon* common;
	// 0x18
	GoConversation* conversation;
	// 0x1c
	GoCorpse* corpse;
	// 0x20
	GoDefend* defend;
	// 0x24
	GoFader* fader;
	// 0x28
	GoFollower* follower;
	// 0x2c
	GoGold* gold;
	// 0x30
	GoGui* gui;
	// 0x34
	GoHire* hire;
	// 0x38
	GoInventory* inventory;
	// 0x3c
	GoMagic* magic;
	// 0x40
	GoMind* mind;
	// 0x44
	GoParty* party;
	// 0x48
	GoPet* pet;
	// 0x4c
	GoPhysics* physics;
	// 0x50
	GoPlacement* placement;
	// 0x54
	GoPotion* potion;
	// 0x58
	GoProxy* proxy;
	// 0x5c
	GoStash* stash;
	// 0x60
	GoStore* store;
	// 0x64
	GoZone* zone;
};

struct ActData {
	// 0x00
	int index;
	// 0x04
	FillStruct(0x04, 0x10);
	// 0x10
	int secondaryQuestCount;
	// questCount = floor((quest18 - quest14) / 56)
	// primaryQuestCount = questCount - secondaryQuestCount
	// 0x14
	int quest14;
	// 0x18
	int quest18;
};
