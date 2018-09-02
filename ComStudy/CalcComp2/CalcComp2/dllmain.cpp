// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "stdafx.h"

 
#include "dllmain.h" 
 
CalcComp2Module _AtlModule;  //←[2] 
 
BOOL APIENTRY DllMain( HMODULE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved 
                      ) 
{ 
    return _AtlModule.DllMain(ul_reason_for_call, lpReserved);  //←[3] 
} 