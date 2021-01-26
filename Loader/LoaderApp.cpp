#include "LoaderApp.h"

#include "LoaderUtil.h"

void LoaderApp::GetErrorInfo(wchar_t* destBuffer, size_t destSize) const {
	swprintf_s(destBuffer, destSize, L"%s GetLastError() returns '%u'", AppResultToString(RES_ERR_UNKNOWN), GetLastError());
}
