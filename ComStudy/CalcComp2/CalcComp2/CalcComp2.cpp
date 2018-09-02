// CalcComp2.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//

#include "stdafx.h"


#include "dllmain.h" 
 
//extern "C" HRESULT __stdcall DllGetClassObject(REFCLSID rclsid, REFIID riid, void** ppv) 
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)  //←[4] 
{ 
    return _AtlModule.DllGetClassObject(rclsid, riid, ppv); 
} 
 
//extern "C" HRESULT __stdcall DllCanUnloadNow() 
STDAPI DllCanUnloadNow(void)  //←[5] 
{ 
    return _AtlModule.DllCanUnloadNow(); 
} 

//extern "C" HRESULT __stdcall DllRegisterServer(void)  
STDAPI DllRegisterServer(void) //←[1] 
{ 
    HRESULT hr = _AtlModule.DllRegisterServer(); 
    return hr; 
} 
 
//extern "C" HRESULT __stdcall DllUnregisterServer(void) 
STDAPI DllUnregisterServer(void) //←[2] 
{ 
    HRESULT hr = _AtlModule.DllUnregisterServer(); 
    return hr; 
} 