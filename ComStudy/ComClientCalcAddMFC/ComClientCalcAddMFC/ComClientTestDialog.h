#pragma once
#include "afxwin.h"
#include "resource.h"       // ���C�� �V���{��


class CComClientTestDialog : public CDialog
{
public:
	CComClientTestDialog(void);
	virtual ~CComClientTestDialog(void);

	enum { IDD = IDD_DIALOG1};

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

// ����
protected:
	DECLARE_MESSAGE_MAP()


public:
	CEdit m_Edit;
	afx_msg void OnBnClickedButton1();
};
