#pragma once

#include "GoidScid.h"
#include "GPMath.h"
#include "GPString.h"
#include "Siege.h"

// Function Binding
namespace FuBi {
	enum eXfer {

	};

	class ClassHeaderSpec {
	public:
	};

	struct Cookie__ {
	};

	struct FunctionSpec {

	};

	/*
	struct FunctionDocs
	{
		const char* paramDocs;
		const char* functionDocs;

		FunctionDocs(const char* paramDocs, const char* functionDocs) :
			paramDocs(paramDocs), functionDocs(functionDocs) {
		{
	};
	*/

	class IFdtTable {
	public:
	};

	template <typename T>
	class Traits {
	public:
		bool IsNodeInAnyFrustum() const;
		bool IsValid() const;
		const Quat& GetRot() const;
		const SiegeDbGuid& GetNode() const;
		const Vector3& GetPos() const;
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
		uint GetValue() const;
		void Setbottom(long bottom);
		void Setcx(long cx);
		void Setcy(long cy);
		void Setleft(long left);
		void SetMaxValue(int maxValue);
		void SetMinValue(int minValue);
		void SetNode(const SiegeDbGuid& node);
		void SetPos(const Vector3& pos);
		void Setright(long right);
		void SetRot(const Quat& roy);
		void Settop(long top);
		void SetValue(uint value);
		void Setx(long x);
		void Sety(long y);

		static bool FromString(const char* str, T& valueOut);
		static const T& GetIDENTITY();
		static const T& GetINDEFINITE();
		static const T& GetINVALID();
		static const T& GetZERO();
		static void FUBI_GetHeaderSpec(ClassHeaderSpec& headerSpec);
		static void ToString(GPBString& strOut, const T& value, eXfer unk3);
	};

	$Function(0x00966838, RCCreateAndLaunchFlickFX, Cookie__*, const GPBString& unk1, const Goid* unk2, const Goid* unk3);

	template <typename ToType, typename FromType>
	static ToType* DynamicCast(FromType* ptr) {
		// Specialized for all dynamically convertable types.
		return nullptr;
	}
};

typedef FuBi::Cookie__ FuBiCookie;

/*
#define FuBiSpecializeDynamicCast(fromType, toType, ...) \
	template<> \
	toType* FuBi::DynamicCast(fromType* ptr) { \
		return ptr->Query##type(__VA_ARGS__); \
	}
*/

#define DefineFuBiSetMethod(type, name, variable) \
	__declspec(dllexport) inline void Set##name(type variable) { \
		this->variable = variable; \
	}
#define DefineFuBiSetMethodEx(type, exportName, variable, internalName) \
private: \
	DefineSetMethod(type, exportName, variable) \
public: \
	__forceinline Set##internalName(type variable) { \
		Set##exportName(variable); \
	}

$TemplateStaticMethod(0x009d53fc, FuBi::Traits<_SYSTEMTIME>::FromString, bool, const char* unk1, _SYSTEMTIME& unk2);
$TemplateStaticMethod(0x009d53a8, FuBi::Traits<_SYSTEMTIME>::ToString, void, GPBString& unk1, const _SYSTEMTIME& unk2, FuBi::eXfer unk3);

$TemplateStaticMethod(0x006d0d10, FuBi::Traits<SiegeDbGuid>::FromString, bool, const char* unk1, SiegeDbGuid& unk2);
$TemplateStaticMethod(0x006d19a0, FuBi::Traits<SiegeDbGuid>::ToString, void, GPBString& unk1, const SiegeDbGuid& unk2, FuBi::eXfer unk3);
$TemplateConstMethod(0x006d0f50, FuBi::Traits<SiegeDbGuid>::IsNodeInAnyFrustum, bool);
$TemplateConstMethod(0x0040aca8, FuBi::Traits<SiegeDbGuid>::IsValid, bool);
$TemplateConstMethod(0x0040a1b3, FuBi::Traits<SiegeDbGuid>::GetValue, uint);
$TemplateMethod(0x0040a1b8, FuBi::Traits<SiegeDbGuid>::SetValue, void, uint unk1);

$TemplateStaticMethod(0x009d528d, FuBi::Traits<tagPOINT>::FromString, bool, const char* str, tagPOINT& valueOut);
$TemplateStaticMethod(0x00503d59, FuBi::Traits<tagPOINT>::FUBI_GetHeaderSpec, void, FuBi::ClassHeaderSpec& headerSpec);
$TemplateStaticMethod(0x009d5258, FuBi::Traits<tagPOINT>::ToString, void, GPBString& strOut, const tagPOINT& value, FuBi::eXfer unk3);
$TemplateConstMethod(0x00502b6c, FuBi::Traits<tagPOINT>::Getx, long);
$TemplateConstMethod(0x00502b7b, FuBi::Traits<tagPOINT>::Gety, long);
$TemplateMethod(0x00502b6f, FuBi::Traits<tagPOINT>::Setx, void, long x);
$TemplateMethod(0x00502b7f, FuBi::Traits<tagPOINT>::Sety, void, long y);

$TemplateStaticMethod(0x009d534f, FuBi::Traits<tagRECT>::FromString, bool, const char* unk1, tagRECT& unk2);
$TemplateStaticMethod(0x00503daf, FuBi::Traits<tagRECT>::FUBI_GetHeaderSpec, void, FuBi::ClassHeaderSpec& unk1);
$TemplateStaticMethod(0x009d530e, FuBi::Traits<tagRECT>::ToString, void, GPBString& unk1, const tagRECT& unk2, FuBi::eXfer unk3);
$TemplateConstMethod(0x00502c21, FuBi::Traits<tagRECT>::Getbottom, long);
$TemplateConstMethod(0x00502bf0, FuBi::Traits<tagRECT>::Getleft, long);
$TemplateConstMethod(0x00502c10, FuBi::Traits<tagRECT>::Getright, long);
$TemplateConstMethod(0x00502bff, FuBi::Traits<tagRECT>::Gettop, long);
$TemplateMethod(0x00502c25, FuBi::Traits<tagRECT>::Setbottom, void, long unk1);
$TemplateMethod(0x00502bf3, FuBi::Traits<tagRECT>::Setleft, void, long unk1);
$TemplateMethod(0x00502c14, FuBi::Traits<tagRECT>::Setright, void, long unk1);
$TemplateMethod(0x00502c03, FuBi::Traits<tagRECT>::Settop, void, long unk1);

$TemplateStaticMethod(0x009d52e8, FuBi::Traits<tagSIZE>::FromString, bool, const char* unk1, tagSIZE& unk2);
$TemplateStaticMethod(0x00503d84, FuBi::Traits<tagSIZE>::FUBI_GetHeaderSpec, void, FuBi::ClassHeaderSpec& unk1);
$TemplateStaticMethod(0x009d52b3, FuBi::Traits<tagSIZE>::ToString, void, GPBString& unk1, const tagSIZE& unk2, FuBi::eXfer unk3);
$TemplateConstMethod(0x00502bae, FuBi::Traits<tagSIZE>::Getcx, long);
$TemplateConstMethod(0x00502bbd, FuBi::Traits<tagSIZE>::Getcy, long);
$TemplateMethod(0x00502bb1, FuBi::Traits<tagSIZE>::Setcx, void, long unk1);
$TemplateMethod(0x00502bc1, FuBi::Traits<tagSIZE>::Setcy, void, long unk1);
