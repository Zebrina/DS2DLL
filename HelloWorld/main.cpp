#ifndef _WINDLL
#error Must be compiled as DLL.
#endif // _WINDLL

#include <Windows.h>
#include "dsdll.h"

class HelloWorld {
	FEX static const char* GetHelloWorld(void) {
		return ("Hello World!");
	}
};

BOOL APIENTRY DllMain(HANDLE, DWORD, LPVOID) {
	return TRUE;
}