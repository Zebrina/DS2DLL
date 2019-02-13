#pragma once

struct _SYSTEMTIME {

} typedef SystemTime;

DefineTemplateStaticMethod(FuBi::Traits<_SYSTEMTIME>, FromString, 0x9d53fc, bool, Params(const char* unk1, _SYSTEMTIME& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<_SYSTEMTIME>, ToString, 0x9d53a8, void, Params(gpbstring<char>& unk1, const _SYSTEMTIME& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));
