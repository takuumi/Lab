#include "StdAfx.h"
#include "ComClientTestDialog.h"

#import "..\..\CalcComp2\Debug\CalcComp2.dll" no_namespace named_guids raw_interfaces_only  //←[1] 

CComClientTestDialog::CComClientTestDialog(void) : CDialog(CComClientTestDialog::IDD)
{
}

CComClientTestDialog::~CComClientTestDialog(void)
{
}

void CComClientTestDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT2, m_Edit);
}

BEGIN_MESSAGE_MAP(CComClientTestDialog, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &CComClientTestDialog::OnBnClickedButton1)
END_MESSAGE_MAP()
void CComClientTestDialog::OnBnClickedButton1()
{
/*
	UpdateData(true);

	CString strEdit;
	m_Edit.GetWindowTextW(strEdit);
	int i = _wtoi64(strEdit);

	
	HRESULT hr; 
    hr = ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED); 
 
    ICalcObject2 *pObj; 
    hr = ::CoCreateInstance(CLSID_CalcObject2, NULL, CLSCTX_INPROC_SERVER, 
                            IID_ICalcObject2, (void**)&pObj); 

	if(hr == S_OK) 
    { 
        int ret; 
        hr = pObj->Add(i, i, &ret); //←[1] 
	
		CString str;
		str.Format(_T("計算結果は%dです。"), ret);	
		AfxMessageBox(str);


//		hr = pObj->Add(100, 100, &ret); //←[1] 
//		str.Format(_T("内部で100+100を行う関数をコール。\r\n結果は%dでした。"), ret);	
//		AfxMessageBox(str);

		hr = pObj->GetAddedStaticValue(&ret); //←[1] 
        pObj->Release(); 

		str.Format(_T("サーバ内のスタティック変数の合計値は%dです。"), ret);	
		AfxMessageBox(str);
	} 
 
    ::CoUninitialize(); 
*/
}
