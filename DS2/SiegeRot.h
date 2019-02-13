#pragma once

struct SiegeRot {

};

DefineTemplateStaticMethod(FuBi::Traits<SiegeRot>, FromString, 0x6d0d90, bool, Params(const char* unk1, SiegeRot& unk2), Args(const char* unk1, SiegeRot& unk2));
DefineTemplateStaticMethod(FuBi::Traits<SiegeRot>, ToString, 0x6d1430, void, Params(gpbstring<char>& unk1, const SiegeRot& unk2, FuBi::eXfer unk3), Args(gpbstring<char>& unk1, const SiegeRot& unk2, FuBi::eXfer unk3));
/*FuBi::Traits<SiegeRot>*/ siege::database_guid& /*__thiscall*/ GetNode(); //0x004082e1
/*FuBi::Traits<SiegeRot>*/ const siege::database_guid& /*__thiscall*/ GetNode() const; //0x004082dd
/*FuBi::Traits<SiegeRot>*/ const Quat& /*__thiscall*/ GetRot() const; //0x004082d7
/*FuBi::Traits<SiegeRot>*/ Quat & /*__thiscall*/ GetRot(); //0x004082da
DefineTemplateMethod(FuBi::Traits<SiegeRot>, SetNode, 0x4082e5, void, Params(const siege::database_guid& unk1), Args(const siege::database_guid& unk1));
DefineTemplateMethod(FuBi::Traits<SiegeRot>, SetRot, 0x40a1c1, void, Params(const Quat& unk1), Args(const Quat& unk1));
