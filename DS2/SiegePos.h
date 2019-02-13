#pragma once

struct SiegePos {

};

DefineTemplateStaticMethod(FuBi::Traits<SiegePos>, FromString, 0x6d0d30, bool, Params(const char* unk1, SiegePos& unk2), Args(const char* unk1, SiegePos& unk2));
DefineTemplateStaticMethod(FuBi::Traits<SiegePos>, ToString, 0x6d13c0, void, Params(gpbstring<char>& unk1, const SiegePos& unk2, FuBi::eXfer unk3), Args(gpbstring<char>& unk1, const SiegePos& unk2, FuBi::eXfer unk3));
/*FuBi::Traits<SiegePos>*/ siege::database_guid& /*__thiscall*/ GetNode(); //0x0040827f
/*FuBi::Traits<SiegePos>*/ const siege::database_guid& /*__thiscall*/ GetNode() const; //0x0040827b
/*FuBi::Traits<SiegePos>*/ const vector_3& /*__thiscall*/ GetPos() const; //0x00408275
/*FuBi::Traits<SiegePos>*/ vector_3& /*__thiscall*/ GetPos(); //0x00408278
DefineTemplateMethod(FuBi::Traits<SiegePos>, SetNode, 0x408296, void, Params(const siege::database_guid& unk1), Args(const siege::database_guid& unk1));
DefineTemplateMethod(FuBi::Traits<SiegePos>, SetPos, 0x408283, void, Params(const vector_3& unk1), Args(const vector_3& unk1));
