// ComClientCalcAddMFCView.h : CComClientCalcAddMFCView �N���X�̃C���^�[�t�F�C�X
//


#pragma once


class CComClientCalcAddMFCView : public CView
{
protected: // �V���A��������̂ݍ쐬���܂��B
	CComClientCalcAddMFCView();
	DECLARE_DYNCREATE(CComClientCalcAddMFCView)

// ����
public:
	CComClientCalcAddMFCDoc* GetDocument() const;

// ����
public:

// �I�[�o�[���C�h
public:
	virtual void OnDraw(CDC* pDC);  // ���̃r���[��`�悷�邽�߂ɃI�[�o�[���C�h����܂��B
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����
public:
	virtual ~CComClientCalcAddMFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ComClientCalcAddMFCView.cpp �̃f�o�b�O �o�[�W����
inline CComClientCalcAddMFCDoc* CComClientCalcAddMFCView::GetDocument() const
   { return reinterpret_cast<CComClientCalcAddMFCDoc*>(m_pDocument); }
#endif

