#pragma once

class BoneTranslator {
public:
	enum eBone {

	};

	DefineConstMethod(Translate, 0x408238, int, Params(BoneTranslator::eBone bone), Args(BoneTranslator::eBone bone));
};

/*__STATIC__*/ const char* /*__cdecl*/ ToString(BoneTranslator::eBone unk1); //0x007d4c06
