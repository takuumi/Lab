// CalcCompExe.cpp : WinMain ‚ÌŽÀ‘•


#include "stdafx.h"
#include "resource.h"
#include "CalcCompExe_i.h"


class CCalcCompExeModule : public CAtlExeModuleT< CCalcCompExeModule >
{
public :
	DECLARE_LIBID(LIBID_CalcCompExeLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CALCCOMPEXE, "{D5FF3676-A434-42F4-BC90-1E7FB4AFCE75}")
};

CCalcCompExeModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
                                LPTSTR /*lpCmdLine*/, int nShowCmd)
{
    return _AtlModule.WinMain(nShowCmd);
}

