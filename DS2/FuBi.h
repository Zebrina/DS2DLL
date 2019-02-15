#pragma once

#include "GPBString.h"
#include "Siege.h"

#include <Windows.h>

struct Goid_;
struct Quat;
struct tagPOINT;
struct tagRECT;
struct tagSIZE;
struct vector_3;

class FuBi {
public:
	enum eXfer {

	};

	class ClassHeaderSpec {
	public:
	};

	struct Cookie__ {

	} typedef Cookie;

	struct FunctionSpec {

	};

	class IFdtTable {
	public:
	};

	template <typename T>
	class Traits {
	public:
		bool IsNodeInAnyFrustum() const;
		bool IsValid() const;
		const Quat& GetRot() const;
		const siege::database_guid& GetNode() const;
		const vector_3& GetPos() const;
		int GetMaxValue() const;
		int GetMinValue() const;
		long Getbottom() const;
		long Getcx() const;
		long Getcy() const;
		long Getleft() const;
		long Getright() const;
		long Gettop() const;
		long Getx() const;
		long Gety() const;
		unsigned int GetValue() const;
		void Setbottom(long bottom);
		void Setcx(long cx);
		void Setcy(long cy);
		void Setleft(long left);
		void SetMaxValue(int maxValue);
		void SetMinValue(int minValue);
		void SetNode(const siege::database_guid& node);
		void SetPos(const vector_3& pos);
		void Setright(long right);
		void SetRot(const Quat& roy);
		void Settop(long top);
		void SetValue(unsigned int value);
		void Setx(long x);
		void Sety(long y);

		static bool FromString(const char* str, T& valueOut);
		static const T& GetIDENTITY();
		static const T& GetINDEFINITE();
		static const T& GetINVALID();
		static const T& GetZERO();
		static int FUBI_Inheritance(tagPOINT* tagPoint);
		static int FUBI_Inheritance(tagRECT* tagRect);
		static int FUBI_Inheritance(tagSIZE* tagSIZE);
		static void FUBI_GetHeaderSpec(ClassHeaderSpec& headerSpec);
		static void ToString(gpbstring<char>& strOut, const T& value, eXfer unk3);
	};

	DefineStaticMethod(RCCreateAndLaunchFlickFX, 0x966838, Cookie__*, Params(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));
};

DefineTemplateStaticMethod(FuBi::Traits<_SYSTEMTIME>, FromString, 0x9d53fc, bool, Params(const char* unk1, _SYSTEMTIME& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<_SYSTEMTIME>, ToString, 0x9d53a8, void, Params(gpbstring<char>& unk1, const _SYSTEMTIME& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));

DefineTemplateStaticMethod(FuBi::Traits<siege::database_guid>, FromString, 0x6d0d10, bool, Params(const char* unk1, siege::database_guid& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<siege::database_guid>, ToString, 0x6d19a0, void, Params(gpbstring<char>& unk1, const siege::database_guid& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));
DefineTemplateConstMethod(FuBi::Traits<siege::database_guid>, IsNodeInAnyFrustum, 0x6d0f50, bool, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<siege::database_guid>, IsValid, 0x40aca8, bool, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<siege::database_guid>, GetValue, 0x40a1b3, unsigned int, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<siege::database_guid>, SetValue, 0x40a1b8, void, Params(unsigned int unk1), Args(unk1));
