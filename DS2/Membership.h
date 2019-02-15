#pragma once

class Membership {
public:
	DefineConstMethod(Contains, 0x80645e, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(ContainsAll, 0x8040c0, bool, Params(const Membership& unk1), Args(unk1));
	DefineConstMethod(ContainsAny, 0x80408a, bool, Params(const Membership& unk1), Args(unk1));
};
