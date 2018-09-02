#include "StdAfx.h"
#include "ComClientAdd.h"

//#include <objbase.h> 
#import "..\..\\CalcCompExe\CalcCompExe\Debug\CalcCompExe.tlb" no_namespace named_guids raw_interfaces_only  //←[1] 

#include "ComClientCalcAddMFC.h"

CComClientAdd::CComClientAdd(void)
{
	m_pDlg = NULL;
}

CComClientAdd::~CComClientAdd(void)
{
}

void CComClientAdd::Execute(void)
{
	HRESULT hr; 
    hr = ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED); 
 
    ICalcTest *pObj; 
    hr = ::CoCreateInstance(CLSID_CalcTest, NULL, CLSCTX_LOCAL_SERVER, 
                            IID_ICalcTest, (void**)&pObj); 
	
	if(hr == S_OK) 
    { 
        long ret; 
        hr = pObj->Add(1, 1, &ret); //←[1] 
	
		CString str;
		str.Format(_T("計算結果は%dです。"), ret);	
		AfxMessageBox(str);

		Sleep(2000);

		hr = pObj->GetAddedStaticValue(&ret); //←[1] 
        pObj->Release(); 

		str.Format(_T("サーバ内のスタティック変数の合計値は%dです。"), ret);	
		AfxMessageBox(str);
	} 
 
    ::CoUninitialize(); 
	
/*
	if (m_pDlg != NULL) {
		m_pDlg->CloseWindow();
		delete m_pDlg;
	}

	m_pDlg = new CAboutDlg();
	m_pDlg->Create(IDD_ABOUTBOX);
	m_pDlg->ShowWindow(true);
*/
}