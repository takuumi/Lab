// ComClientCalcAddMFCView.cpp : CComClientCalcAddMFCView �N���X�̎���
//

#include "stdafx.h"
#include "ComClientCalcAddMFC.h"

#include "ComClientCalcAddMFCDoc.h"
#include "ComClientCalcAddMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CComClientCalcAddMFCView

IMPLEMENT_DYNCREATE(CComClientCalcAddMFCView, CView)

BEGIN_MESSAGE_MAP(CComClientCalcAddMFCView, CView)
	// �W������R�}���h
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CComClientCalcAddMFCView �R���X�g���N�V����/�f�X�g���N�V����

CComClientCalcAddMFCView::CComClientCalcAddMFCView()
{
	// TODO: �\�z�R�[�h�������ɒǉ����܂��B

}

CComClientCalcAddMFCView::~CComClientCalcAddMFCView()
{
}

BOOL CComClientCalcAddMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: ���̈ʒu�� CREATESTRUCT cs ���C������ Window �N���X�܂��̓X�^�C����
	//  �C�����Ă��������B

	return CView::PreCreateWindow(cs);
}

// CComClientCalcAddMFCView �`��

void CComClientCalcAddMFCView::OnDraw(CDC* /*pDC*/)
{
	CComClientCalcAddMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���̏ꏊ�Ƀl�C�e�B�u �f�[�^�p�̕`��R�[�h��ǉ����܂��B
}


// CComClientCalcAddMFCView ���

BOOL CComClientCalcAddMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// ����̈������
	return DoPreparePrinting(pInfo);
}

void CComClientCalcAddMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ����O�̓��ʂȏ�����������ǉ����Ă��������B
}

void CComClientCalcAddMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �����̌㏈����ǉ����Ă��������B
}


// CComClientCalcAddMFCView �f�f

#ifdef _DEBUG
void CComClientCalcAddMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CComClientCalcAddMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CComClientCalcAddMFCDoc* CComClientCalcAddMFCView::GetDocument() const // �f�o�b�O�ȊO�̃o�[�W�����̓C�����C���ł��B
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CComClientCalcAddMFCDoc)));
	return (CComClientCalcAddMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CComClientCalcAddMFCView ���b�Z�[�W �n���h��
