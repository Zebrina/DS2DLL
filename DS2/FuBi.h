#pragma once

#include "GPBString.h"
#include "Goid.h"
#include "Quat.h"
#include "Siege.h"
#include "Vector3.h"

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
		bool /*__thiscall*/ IsNodeInAnyFrustum() const; //0x006d0f50
		bool /*__thiscall*/ IsValid() const; //0x0040aca8
		const Quat& /*__thiscall*/ GetRot() const; //0x004082d7
		const siege::database_guid& /*__thiscall*/ GetNode() const; //0x0040827b
		const vector_3& /*__thiscall*/ GetPos() const; //0x00408275
		int /*__thiscall*/ GetMaxValue() const; //0x00408de8
		int /*__thiscall*/ GetMinValue() const; //0x00408dd7
		long /*__thiscall*/ Getbottom() const; //0x00502c21
		long /*__thiscall*/ Getcx() const; //0x00502bae
		long /*__thiscall*/ Getcy() const; //0x00502bbd
		long /*__thiscall*/ Getleft() const; //0x00502bf0
		long /*__thiscall*/ Getright() const; //0x00502c10
		long /*__thiscall*/ Gettop() const; //0x00502bff
		long /*__thiscall*/ Getx() const; //0x00502b6c
		long /*__thiscall*/ Gety() const; //0x00502b7b
		unsigned int /*__thiscall*/ GetValue() const; //0x0040a1b3
		void /*__thiscall*/ Setbottom(long unk1); //0x00502c25
		void /*__thiscall*/ Setcx(long unk1); //0x00502bb1
		void /*__thiscall*/ Setcy(long unk1); //0x00502bc1
		void /*__thiscall*/ Setleft(long unk1); //0x00502bf3
		void /*__thiscall*/ SetMaxValue(int unk1); //0x00408dec
		void /*__thiscall*/ SetMinValue(int unk1); //0x00408ddb
		void /*__thiscall*/ SetNode(const siege::database_guid& unk1); //0x00408296
		void /*__thiscall*/ SetNode(const siege::database_guid& unk1); //0x004082e5
		void /*__thiscall*/ SetPos(const vector_3& unk1); //0x00408283
		void /*__thiscall*/ Setright(long unk1); //0x00502c14
		void /*__thiscall*/ SetRot(const Quat& unk1); //0x0040a1c1
		void /*__thiscall*/ Settop(long unk1); //0x00502c03
		void /*__thiscall*/ SetValue(unsigned int unk1); //0x0040a1b8
		void /*__thiscall*/ Setx(long unk1); //0x00502b6f
		void /*__thiscall*/ Sety(long unk1); //0x00502b7f

		static bool /*__cdecl*/ FromString(const char* unk1, T& unk2); //0x006d0d10
		static const T& /*__cdecl*/ GetIDENTITY(); //0x00502c85
		static const T& /*__cdecl*/ GetINDEFINITE(); //0x00502c91
		static const T& /*__cdecl*/ GetINVALID(); //0x00502c8b
		static const T& /*__cdecl*/ GetZERO(); //0x00502c7f
		static int /*__cdecl*/ FUBI_Inheritance(tagPOINT* unk1); //0x00502c32
		static void /*__cdecl*/ FUBI_GetHeaderSpec(ClassHeaderSpec& unk1); //0x00503e41
		static void /*__cdecl*/ ToString(gpbstring<char>& unk1, const T& unk2, eXfer unk3); //0x006d19a0
	};

	/*FuBi*/ Cookie__* /*__cdecl*/ RCCreateAndLaunchFlickFX(const gpbstring<char>& unk1, const Goid_* unk2, const Goid_* unk3); //0x00966838
};
