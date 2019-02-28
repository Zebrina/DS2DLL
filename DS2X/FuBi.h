#pragma once

#include "GPBString.h"
#include "Siege.h"

struct Goid_;
struct Quat;
struct vector_3;

namespace FuBi {
	enum eXfer {

	};

	class ClassHeaderSpec {
	public:
	};

	struct Cookie__ {
		template <typename ToType, typename FromType>
		ToType* DynamicCast(FromType* ptr) {
			// Specialized for all dynamically convertable types.
			return nullptr;
		}
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

	DefineFunction(RCCreateAndLaunchFlickFX, 0x966838, Cookie__*, Params(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3), Args(unk1, unk2, unk3));

	template <typename ToType, typename FromType>
	static ToType* DynamicCast(FromType* ptr) {
		// Specialized for all dynamically convertable types.
		return nullptr;
	}
};

DefineTemplateStaticMethod(FuBi::Traits<_SYSTEMTIME>, FromString, 0x9d53fc, bool, Params(const char* unk1, _SYSTEMTIME& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<_SYSTEMTIME>, ToString, 0x9d53a8, void, Params(gpbstring<char>& unk1, const _SYSTEMTIME& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));

DefineTemplateStaticMethod(FuBi::Traits<siege::database_guid>, FromString, 0x6d0d10, bool, Params(const char* unk1, siege::database_guid& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<siege::database_guid>, ToString, 0x6d19a0, void, Params(gpbstring<char>& unk1, const siege::database_guid& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));
DefineTemplateConstMethod(FuBi::Traits<siege::database_guid>, IsNodeInAnyFrustum, 0x6d0f50, bool, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<siege::database_guid>, IsValid, 0x40aca8, bool, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<siege::database_guid>, GetValue, 0x40a1b3, unsigned int, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<siege::database_guid>, SetValue, 0x40a1b8, void, Params(unsigned int unk1), Args(unk1));

DefineTemplateStaticMethod(FuBi::Traits<tagPOINT>, FromString, 0x9d528d, bool, Params(const char* str, tagPOINT& valueOut), Args(str, valueOut));
DefineTemplateStaticMethod(FuBi::Traits<tagPOINT>, FUBI_GetHeaderSpec, 0x503d59, void, Params(FuBi::ClassHeaderSpec& headerSpec), Args(headerSpec));
DefineTemplateStaticMethod(FuBi::Traits<tagPOINT>, ToString, 0x9d5258, void, Params(gpbstring<char>& strOut, const tagPOINT& value, FuBi::eXfer unk3), Args(strOut, value, unk3));
DefineTemplateConstMethod(FuBi::Traits<tagPOINT>, Getx, 0x502b6c, long, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<tagPOINT>, Gety, 0x502b7b, long, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<tagPOINT>, Setx, 0x502b6f, void, Params(long x), Args(x));
DefineTemplateMethod(FuBi::Traits<tagPOINT>, Sety, 0x502b7f, void, Params(long y), Args(y));

DefineTemplateStaticMethod(FuBi::Traits<tagRECT>, FromString, 0x9d534f, bool, Params(const char* unk1, tagRECT& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<tagRECT>, FUBI_GetHeaderSpec, 0x503daf, void, Params(FuBi::ClassHeaderSpec& unk1), Args(unk1));
DefineTemplateStaticMethod(FuBi::Traits<tagRECT>, ToString, 0x9d530e, void, Params(gpbstring<char>& unk1, const tagRECT& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));
DefineTemplateConstMethod(FuBi::Traits<tagRECT>, Getbottom, 0x502c21, long, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<tagRECT>, Getleft, 0x502bf0, long, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<tagRECT>, Getright, 0x502c10, long, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<tagRECT>, Gettop, 0x502bff, long, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<tagRECT>, Setbottom, 0x502c25, void, Params(long unk1), Args(unk1));
DefineTemplateMethod(FuBi::Traits<tagRECT>, Setleft, 0x502bf3, void, Params(long unk1), Args(unk1));
DefineTemplateMethod(FuBi::Traits<tagRECT>, Setright, 0x502c14, void, Params(long unk1), Args(unk1));
DefineTemplateMethod(FuBi::Traits<tagRECT>, Settop, 0x502c03, void, Params(long unk1), Args(unk1));

DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, FromString, 0x9d52e8, bool, Params(const char* unk1, tagSIZE& unk2), Args(unk1, unk2));
DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, FUBI_GetHeaderSpec, 0x503d84, void, Params(FuBi::ClassHeaderSpec& unk1), Args(unk1));
DefineTemplateStaticMethod(FuBi::Traits<tagSIZE>, ToString, 0x9d52b3, void, Params(gpbstring<char>& unk1, const tagSIZE& unk2, FuBi::eXfer unk3), Args(unk1, unk2, unk3));
DefineTemplateConstMethod(FuBi::Traits<tagSIZE>, Getcx, 0x502bae, long, NO_PARAMS, NO_ARGS);
DefineTemplateConstMethod(FuBi::Traits<tagSIZE>, Getcy, 0x502bbd, long, NO_PARAMS, NO_ARGS);
DefineTemplateMethod(FuBi::Traits<tagSIZE>, Setcx, 0x502bb1, void, Params(long unk1), Args(unk1));
DefineTemplateMethod(FuBi::Traits<tagSIZE>, Setcy, 0x502bc1, void, Params(long unk1), Args(unk1));
