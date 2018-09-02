// ComClientCalcAddMFC.cpp : �A�v���P�[�V�����̃N���X������`���܂��B
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

#import "..\..\CalcComp2\Debug\CalcComp2.dll" no_namespace named_guids raw_interfaces_only  //��[1] 
#import "..\..\\CalcCompExe\CalcCompExe\Debug\CalcCompExe.tlb" no_namespace named_guids raw_interfaces_only  //��[1] 


#include "afxwin.h"


// CComClientCalcAddMFCApp

BEGIN_MESSAGE_MAP(CComClientCalcAddMFCApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CComClientCalcAddMFCApp::OnAppAbout)
	// �W���̃t�@�C����{�h�L�������g �R�}���h
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
	// �W���̈���Z�b�g�A�b�v �R�}���h
	ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinApp::OnFilePrintSetup)
	ON_COMMAND(ID_APP_COM_ADD, &CComClientAdd::Execute)
END_MESSAGE_MAP()


// CComClientCalcAddMFCApp �R���X�g���N�V����

CComClientCalcAddMFCApp::CComClientCalcAddMFCApp()
{
	// TODO: ���̈ʒu�ɍ\�z�p�R�[�h��ǉ����Ă��������B
	// ������ InitInstance ���̏d�v�ȏ��������������ׂċL�q���Ă��������B
}


// �B��� CComClientCalcAddMFCApp �I�u�W�F�N�g�ł��B

CComClientCalcAddMFCApp theApp;


// CComClientCalcAddMFCApp ������

BOOL CComClientCalcAddMFCApp::InitInstance()
{
	// �A�v���P�[�V���� �}�j�t�F�X�g�� visual �X�^�C����L���ɂ��邽�߂ɁA
	// ComCtl32.dll Version 6 �ȍ~�̎g�p���w�肷��ꍇ�́A
	// Windows XP �� InitCommonControlsEx() ���K�v�ł��B�����Ȃ���΁A�E�B���h�E�쐬�͂��ׂĎ��s���܂��B
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// �A�v���P�[�V�����Ŏg�p���邷�ׂẴR���� �R���g���[�� �N���X���܂߂�ɂ́A
	// �����ݒ肵�܂��B
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	if (!AfxSocketInit())
	{
		AfxMessageBox(IDP_SOCKETS_INIT_FAILED);
		return FALSE;
	}

	// OLE ���C�u���������������܂��B
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxEnableControlContainer();
	// �W��������
	// �����̋@�\���g�킸�ɍŏI�I�Ȏ��s�\�t�@�C����
	// �T�C�Y���k���������ꍇ�́A�ȉ�����s�v�ȏ�����
	// ���[�`�����폜���Ă��������B
	// �ݒ肪�i�[����Ă��郌�W�X�g�� �L�[��ύX���܂��B
	// TODO: ��Ж��܂��͑g�D���Ȃǂ̓K�؂ȕ������
	// ���̕������ύX���Ă��������B
	SetRegistryKey(_T("�A�v���P�[�V���� �E�B�U�[�h�Ő������ꂽ���[�J�� �A�v���P�[�V����"));
	LoadStdProfileSettings(4);  // �W���� INI �t�@�C���̃I�v�V���������[�h���܂� (MRU ���܂�)
	// �A�v���P�[�V�����p�̃h�L�������g �e���v���[�g��o�^���܂��B�h�L�������g �e���v���[�g
	//  �̓h�L�������g�A�t���[�� �E�B���h�E�ƃr���[���������邽�߂ɋ@�\���܂��B
	CMultiDocTemplate* pDocTemplate;
	pDocTemplate = new CMultiDocTemplate(IDR_ComClientCalcAdTYPE,
		RUNTIME_CLASS(CComClientCalcAddMFCDoc),
		RUNTIME_CLASS(CChildFrame), // �J�X�^�� MDI �q�t���[��
		RUNTIME_CLASS(CComClientCalcAddMFCView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

	// ���C�� MDI �t���[�� �E�B���h�E���쐬���܂��B
	CMainFrame* pMainFrame = new CMainFrame;
	if (!pMainFrame || !pMainFrame->LoadFrame(IDR_MAINFRAME))
	{
		delete pMainFrame;
		return FALSE;
	}
	m_pMainWnd = pMainFrame;
	// �ڔ��������݂���ꍇ�ɂ̂� DragAcceptFiles ���Ăяo���܂��B
	//  MDI �A�v���P�[�V�����ł́A���̌Ăяo���́Am_pMainWnd ��ݒ肵������ɔ������Ȃ���΂Ȃ�܂���B


	// DDE�Afile open �ȂǕW���̃V�F�� �R�}���h�̃R�}���h ���C������͂��܂��B
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);


	// �R�}���h ���C���Ŏw�肳�ꂽ�f�B�X�p�b�` �R�}���h�ł��B�A�v���P�[�V������
	// /RegServer�A/Register�A/Unregserver �܂��� /Unregister �ŋN�����ꂽ�ꍇ�AFalse ��Ԃ��܂��B
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
	// ���C�� �E�B���h�E�����������ꂽ�̂ŁA�\���ƍX�V���s���܂��B
	pMainFrame->ShowWindow(m_nCmdShow);
	pMainFrame->UpdateWindow();

	return TRUE;
}



// �A�v���P�[�V�����̃o�[�W�������Ɏg���� CAboutDlg �_�C�A���O


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

// �_�C�A���O�����s���邽�߂̃A�v���P�[�V���� �R�}���h
void CComClientCalcAddMFCApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// CComClientCalcAddMFCApp ���b�Z�[�W �n���h��


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
        hr = pObj->Add(i, i, &ret); //��[1] 
	
		CString str;
		str.Format(_T("�v�Z���ʂ�%d�ł��B"), ret);	
		AfxMessageBox(str);


//		hr = pObj->Add(100, 100, &ret); //��[1] 
//		str.Format(_T("������100+100���s���֐����R�[���B\r\n���ʂ�%d�ł����B"), ret);	
//		AfxMessageBox(str);

		//�ʃv���Z�X����
		OnBnClickedButton2();
		Sleep(2000);

		hr = pObj->GetAddedStaticValue(&ret); //��[1] 
        pObj->Release(); 

		str.Format(_T("�T�[�o���̃X�^�e�B�b�N�ϐ��̍��v�l��%d�ł��B"), ret);	
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
        hr = pObj->Add(100, 100, &ret); //��[1] 
	
		CString str;
		str.Format(_T("�v�Z���ʂ�%d�ł��B"), ret);	
		AfxMessageBox(str);


		hr = pObj->GetAddedStaticValue(&ret); //��[1] 
        pObj->Release(); 

		str.Format(_T("�T�[�o���̃X�^�e�B�b�N�ϐ��̍��v�l��%d�ł��B"), ret);	
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
        hr = pObj->Add(100, 100, &ret); //��[1] 
	
		CString str;
		str.Format(_T("�v�Z���ʂ�%d�ł��B"), ret);	
		AfxMessageBox(str);


		hr = pObj->GetAddedStaticValue(&ret); //��[1] 
        pObj->Release(); 

		str.Format(_T("�T�[�o���̃X�^�e�B�b�N�ϐ��̍��v�l��%d�ł��B"), ret);	
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
        hr = pObj->Add(i, i, &ret); //��[1] 
	
		CString str;
		str.Format(_T("�v�Z���ʂ�%d�ł��B"), ret);	
		AfxMessageBox(str);
		TreadStart();
		Sleep(2000);

		hr = pObj->GetAddedStaticValue(&ret); //��[1] 
        pObj->Release(); 

		str.Format(_T("�T�[�o���̃X�^�e�B�b�N�ϐ��̍��v�l��%d�ł��B"), ret);	
		AfxMessageBox(str);
	}

}
