#pragma once



struct SiegeRot {

};

DefineTemplateStaticMethod(FuBi::Traits<SiegeRot>, FromString, 0x6d0d90, bool, Params(const char* unk1, SiegeRot& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<SiegeRot>, ToString, 0x6d1430, void, Params(gpbstring<char>& unk1, const SiegeRot& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));
/*FuBi::Traits<SiegeRot>*/ siege::database_guid& /*__thiscall*/ GetNode(); //0x4082e1
DefineTemplateConstMethod(FuBi::Traits<SiegeRot>, GetNode, 0x4082dd, const siege::database_guid&, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<SiegeRot>, GetRot, 0x4082d7, const Quat&, NO_PARAMS, NO_ARGS);
/*FuBi::Traits<SiegeRot>*/ Quat & /*__thiscall*/ GetRot(); //0x4082da
DefineTemplateMethod(FuBi::Traits<SiegeRot>, SetNode, 0x4082e5, void, Params(const siege::database_guid& unk1), Args(unk1));
DefineTemplateMethod(FuBi::Traits<SiegeRot>, SetRot, 0x40a1c1, void, Params(const Quat& unk1), Args(unk1));
