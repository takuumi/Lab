// ComClientCalcAddMFC.h : ComClientCalcAddMFC アプリケーションのメイン ヘッダー ファイル
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"       // メイン シンボル


// CComClientCalcAddMFCApp:
// このクラスの実装については、ComClientCalcAddMFC.cpp を参照してください。
//

class CComClientCalcAddMFCApp : public CWinApp
{
public:
	CComClientCalcAddMFCApp();


// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// ダイアログ データ
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

// 実装
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CEdit m_iAddNumber;
	afx_msg void OnBnClickedButton2();

	afx_msg void OnBnClickedButton3();

	void TreadStart();
};


extern CComClientCalcAddMFCApp theApp;