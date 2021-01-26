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

	$ConstMethod(0x00408238, Translate, int, BoneTranslator::eBone bone);
};

$Function(0x007d4c06, ToString, const char*, BoneTranslator::eBone bone);
