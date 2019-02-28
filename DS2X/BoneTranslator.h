#pragma once

class BoneTranslator {
public:
	enum eBone {
		kill_bone = 0,
		weapon_bone = 1,
		shield_bone = 2,
		body_anterior = 3,
		body_mid = 4,
		body_posterior = 5,
		tip = 6,
		middle = 7,
		handle = 8,
		misc1 = 9,
		misc2 = 10,
		misc3 = 11,
	};

	DefineConstMethod(Translate, 0x408238, int, Params(BoneTranslator::eBone bone), Args(bone));
};

DefineFunction(ToString, 0x7d4c06, const char*, Params(BoneTranslator::eBone bone), Args(bone));
