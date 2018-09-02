#pragma once

class CAboutDlg;

class CComClientAdd : public CWinApp
{
public:
	CComClientAdd(void);
	virtual ~CComClientAdd(void);

	afx_msg void Execute(void);
private:
	CAboutDlg* m_pDlg;
};
