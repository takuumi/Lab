// ComClientCalcAddMFCDoc.cpp : CComClientCalcAddMFCDoc クラスの実装
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


// CComClientCalcAddMFCDoc コンストラクション/デストラクション

CComClientCalcAddMFCDoc::CComClientCalcAddMFCDoc()
{
	// TODO: この位置に 1 度だけ呼ばれる構築用のコードを追加してください。

}

CComClientCalcAddMFCDoc::~CComClientCalcAddMFCDoc()
{
}

BOOL CComClientCalcAddMFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: この位置に再初期化処理を追加してください。
	// (SDI ドキュメントはこのドキュメントを再利用します。)

	return TRUE;
}




// CComClientCalcAddMFCDoc シリアル化

void CComClientCalcAddMFCDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 格納するコードをここに追加してください。
	}
	else
	{
		// TODO: 読み込むコードをここに追加してください。
	}
}


// CComClientCalcAddMFCDoc 診断

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


// CComClientCalcAddMFCDoc コマンド
