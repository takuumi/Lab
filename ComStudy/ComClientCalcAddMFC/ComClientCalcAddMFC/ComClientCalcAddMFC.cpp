// ComClientCalcAddMFC.cpp : アプリケーションのクラス動作を定義します。
//

#include "stdafx.h"
#include "ComClientCalcAddMFC.h"
#include "MainFrm.h"

#include "ChildFrm.h"
#include "ComClientCalcAddMFCDoc.h"
#include "ComClientCalcAddMFCView.h"

#include "ComClientAdd.h"

#include "ComClientTestDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#import "..\..\CalcComp2\Debug\CalcComp2.dll" no_namespace named_guids raw_interfaces_only  //←[1] 
#import "..\..\\CalcCompExe\CalcCompExe\Debug\CalcCompExe.tlb" no_namespace named_guids raw_interfaces_only  //←[1] 


#include "afxwin.h"


// CComClientCalcAddMFCApp

BEGIN_MESSAGE_MAP(CComClientCalcAddMFCApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CComClientCalcAddMFCApp::OnAppAbout)
	// 標準のファイル基本ドキュメント コマンド
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
	// 標準の印刷セットアップ コマンド
	ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinApp::OnFilePrintSetup)
	ON_COMMAND(ID_APP_COM_ADD, &CComClientAdd::Execute)
END_MESSAGE_MAP()


// CComClientCalcAddMFCApp コンストラクション

CComClientCalcAddMFCApp::CComClientCalcAddMFCApp()
{
	// TODO: この位置に構築用コードを追加してください。
	// ここに InitInstance 中の重要な初期化処理をすべて記述してください。
}


// 唯一の CComClientCalcAddMFCApp オブジェクトです。

CComClientCalcAddMFCApp theApp;


// CComClientCalcAddMFCApp 初期化

BOOL CComClientCalcAddMFCApp::InitInstance()
{
	// アプリケーション マニフェストが visual スタイルを有効にするために、
	// ComCtl32.dll Version 6 以降の使用を指定する場合は、
	// Windows XP に InitCommonControlsEx() が必要です。さもなければ、ウィンドウ作成はすべて失敗します。
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// アプリケーションで使用するすべてのコモン コントロール クラスを含めるには、
	// これを設定します。
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	if (!AfxSocketInit())
	{
		AfxMessageBox(IDP_SOCKETS_INIT_FAILED);
		return FALSE;
	}

	// OLE ライブラリを初期化します。
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxEnableControlContainer();
	// 標準初期化
	// これらの機能を使わずに最終的な実行可能ファイルの
	// サイズを縮小したい場合は、以下から不要な初期化
	// ルーチンを削除してください。
	// 設定が格納されているレジストリ キーを変更します。
	// TODO: 会社名または組織名などの適切な文字列に
	// この文字列を変更してください。
	SetRegistryKey(_T("アプリケーション ウィザードで生成されたローカル アプリケーション"));
	LoadStdProfileSettings(4);  // 標準の INI ファイルのオプションをロードします (MRU を含む)
	// アプリケーション用のドキュメント テンプレートを登録します。ドキュメント テンプレート
	//  はドキュメント、フレーム ウィンドウとビューを結合するために機能します。
	CMultiDocTemplate* pDocTemplate;
	pDocTemplate = new CMultiDocTemplate(IDR_ComClientCalcAdTYPE,
		RUNTIME_CLASS(CComClientCalcAddMFCDoc),
		RUNTIME_CLASS(CChildFrame), // カスタム MDI 子フレーム
		RUNTIME_CLASS(CComClientCalcAddMFCView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

	// メイン MDI フレーム ウィンドウを作成します。
	CMainFrame* pMainFrame = new CMainFrame;
	if (!pMainFrame || !pMainFrame->LoadFrame(IDR_MAINFRAME))
	{
		delete pMainFrame;
		return FALSE;
	}
	m_pMainWnd = pMainFrame;
	// 接尾辞が存在する場合にのみ DragAcceptFiles を呼び出します。
	//  MDI アプリケーションでは、この呼び出しは、m_pMainWnd を設定した直後に発生しなければなりません。


	// DDE、file open など標準のシェル コマンドのコマンド ラインを解析します。
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);


	// コマンド ラインで指定されたディスパッチ コマンドです。アプリケーションが
	// /RegServer、/Register、/Unregserver または /Unregister で起動された場合、False を返します。
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
	// メイン ウィンドウが初期化されたので、表示と更新を行います。
	pMainFrame->ShowWindow(m_nCmdShow);
	pMainFrame->UpdateWindow();

	return TRUE;
}



// アプリケーションのバージョン情報に使われる CAboutDlg ダイアログ


CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_iAddNumber);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &CAboutDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CAboutDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CAboutDlg::OnBnClickedButton3)
END_MESSAGE_MAP()

// ダイアログを実行するためのアプリケーション コマンド
void CComClientCalcAddMFCApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// CComClientCalcAddMFCApp メッセージ ハンドラ


void CAboutDlg::OnBnClickedButton1()
{
	UpdateData(true);

	CString strEdit;
	m_iAddNumber.GetWindowTextW(strEdit);
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

		//別プロセス検証
		OnBnClickedButton2();
		Sleep(2000);

		hr = pObj->GetAddedStaticValue(&ret); //←[1] 
        pObj->Release(); 

		str.Format(_T("サーバ内のスタティック変数の合計値は%dです。"), ret);	
		AfxMessageBox(str);
	} 
 
    ::CoUninitialize(); 
}



static UINT CreateAboutDialog(LPVOID p)
{
	HRESULT hr; 
    hr = ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED); 
 
    ICalcObject2 *pObj; 
    hr = ::CoCreateInstance(CLSID_CalcObject2, NULL, CLSCTX_INPROC_SERVER, 
                            IID_ICalcObject2, (void**)&pObj); 
    if(hr == S_OK) 
    { 
        int ret; 
        hr = pObj->Add(100, 100, &ret); //←[1] 
	
		CString str;
		str.Format(_T("計算結果は%dです。"), ret);	
		AfxMessageBox(str);


		hr = pObj->GetAddedStaticValue(&ret); //←[1] 
        pObj->Release(); 

		str.Format(_T("サーバ内のスタティック変数の合計値は%dです。"), ret);	
		AfxMessageBox(str);
	} 
 
    ::CoUninitialize(); 

	return 0;
}


void CAboutDlg::OnBnClickedButton2()
{
	AfxBeginThread(CreateAboutDialog, NULL);
}



static UINT ExecuteAdd(LPVOID p)
{
	HRESULT hr; 
    hr = ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED); 
 
	ICalcTest *pObj; 
    hr = ::CoCreateInstance(CLSID_CalcTest, NULL, CLSCTX_LOCAL_SERVER, 
                            IID_ICalcTest, (void**)&pObj); 
    if(hr == S_OK) 
    { 
        long ret; 
        hr = pObj->Add(100, 100, &ret); //←[1] 
	
		CString str;
		str.Format(_T("計算結果は%dです。"), ret);	
		AfxMessageBox(str);


		hr = pObj->GetAddedStaticValue(&ret); //←[1] 
        pObj->Release(); 

		str.Format(_T("サーバ内のスタティック変数の合計値は%dです。"), ret);	
		AfxMessageBox(str);
	} 
 
    ::CoUninitialize(); 

	return 0;
}


void CAboutDlg::TreadStart()
{
	AfxBeginThread(ExecuteAdd, NULL);
}



void CAboutDlg::OnBnClickedButton3()
{
	UpdateData(true);

	CString strEdit;
	m_iAddNumber.GetWindowTextW(strEdit);
	long i = _wtoi64(strEdit);

	HRESULT hr; 
    hr = ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED); 
 
    ICalcTest *pObj; 
    hr = ::CoCreateInstance(CLSID_CalcTest, NULL, CLSCTX_LOCAL_SERVER, 
                            IID_ICalcTest, (void**)&pObj); 
	
	if(hr == S_OK) 
    { 
        long ret; 
        hr = pObj->Add(i, i, &ret); //←[1] 
	
		CString str;
		str.Format(_T("計算結果は%dです。"), ret);	
		AfxMessageBox(str);
		TreadStart();
		Sleep(2000);

		hr = pObj->GetAddedStaticValue(&ret); //←[1] 
        pObj->Release(); 

		str.Format(_T("サーバ内のスタティック変数の合計値は%dです。"), ret);	
		AfxMessageBox(str);
	}

}
