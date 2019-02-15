#pragma once

class BoneTranslator {
public:
	enum eBone {

	};

	DefineConstMethod(Translate, 0x408238, int, Params(BoneTranslator::eBone bone), Args(bone));
};

DefineFunction(ToString, 0x7d4c06, const char*, Params(BoneTranslator::eBone unk1), Args(unk1));
