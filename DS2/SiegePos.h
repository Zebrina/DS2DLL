#pragma once

#include "FuBi.h"

#include "ClassMacros.h"

struct SiegePos {

};

DefineTemplateStaticMethod(FuBi::Traits<SiegePos>, FromString, 0x6d0d30, bool, Params(const char* unk1, SiegePos& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<SiegePos>, ToString, 0x6d13c0, void, Params(gpbstring<char>& unk1, const SiegePos& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));
/*FuBi::Traits<SiegePos>*/ siege::database_guid& /*__thiscall*/ GetNode(); //0x40827f
DefineTemplateConstMethod(FuBi::Traits<SiegePos>, GetNode, 0x40827b, const siege::database_guid&, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<SiegePos>, GetPos, 0x408275, const vector_3&, NO_PARAMS, NO_ARGS);
/*FuBi::Traits<SiegePos>*/ vector_3& /*__thiscall*/ GetPos(); //0x408278
DefineTemplateMethod(FuBi::Traits<SiegePos>, SetNode, 0x408296, void, Params(const siege::database_guid& unk1), Args(unk1));
DefineTemplateMethod(FuBi::Traits<SiegePos>, SetPos, 0x408283, void, Params(const vector_3& unk1), Args(unk1));
