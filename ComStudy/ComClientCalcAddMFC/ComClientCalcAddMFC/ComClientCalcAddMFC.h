// ComClientCalcAddMFC.h : ComClientCalcAddMFC �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C��
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH �ɑ΂��Ă��̃t�@�C�����C���N���[�h����O�� 'stdafx.h' ���C���N���[�h���Ă�������"
#endif

#include "resource.h"       // ���C�� �V���{��


// CComClientCalcAddMFCApp:
// ���̃N���X�̎����ɂ��ẮAComClientCalcAddMFC.cpp ���Q�Ƃ��Ă��������B
//

class CComClientCalcAddMFCApp : public CWinApp
{
public:
	CComClientCalcAddMFCApp();


// �I�[�o�[���C�h
public:
	virtual BOOL InitInstance();

// ����
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// �_�C�A���O �f�[�^
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

// ����
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