// ComClientCalcAddMFCDoc.cpp : CComClientCalcAddMFCDoc �N���X�̎���
//

#include "stdafx.h"
#include "ComClientCalcAddMFC.h"

#include "ComClientCalcAddMFCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CComClientCalcAddMFCDoc

IMPLEMENT_DYNCREATE(CComClientCalcAddMFCDoc, CDocument)

BEGIN_MESSAGE_MAP(CComClientCalcAddMFCDoc, CDocument)
END_MESSAGE_MAP()


// CComClientCalcAddMFCDoc �R���X�g���N�V����/�f�X�g���N�V����

CComClientCalcAddMFCDoc::CComClientCalcAddMFCDoc()
{
	// TODO: ���̈ʒu�� 1 �x�����Ă΂��\�z�p�̃R�[�h��ǉ����Ă��������B

}

CComClientCalcAddMFCDoc::~CComClientCalcAddMFCDoc()
{
}

BOOL CComClientCalcAddMFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���̈ʒu�ɍď�����������ǉ����Ă��������B
	// (SDI �h�L�������g�͂��̃h�L�������g���ė��p���܂��B)

	return TRUE;
}




// CComClientCalcAddMFCDoc �V���A����

void CComClientCalcAddMFCDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �i�[����R�[�h�������ɒǉ����Ă��������B
	}
	else
	{
		// TODO: �ǂݍ��ރR�[�h�������ɒǉ����Ă��������B
	}
}


// CComClientCalcAddMFCDoc �f�f

#ifdef _DEBUG
void CComClientCalcAddMFCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CComClientCalcAddMFCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CComClientCalcAddMFCDoc �R�}���h
