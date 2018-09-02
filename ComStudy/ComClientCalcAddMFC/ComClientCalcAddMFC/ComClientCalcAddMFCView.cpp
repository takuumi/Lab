// ComClientCalcAddMFCView.cpp : CComClientCalcAddMFCView クラスの実装
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
	// 標準印刷コマンド
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CComClientCalcAddMFCView コンストラクション/デストラクション

CComClientCalcAddMFCView::CComClientCalcAddMFCView()
{
	// TODO: 構築コードをここに追加します。

}

CComClientCalcAddMFCView::~CComClientCalcAddMFCView()
{
}

BOOL CComClientCalcAddMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: この位置で CREATESTRUCT cs を修正して Window クラスまたはスタイルを
	//  修正してください。

	return CView::PreCreateWindow(cs);
}

// CComClientCalcAddMFCView 描画

void CComClientCalcAddMFCView::OnDraw(CDC* /*pDC*/)
{
	CComClientCalcAddMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: この場所にネイティブ データ用の描画コードを追加します。
}


// CComClientCalcAddMFCView 印刷

BOOL CComClientCalcAddMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 既定の印刷準備
	return DoPreparePrinting(pInfo);
}

void CComClientCalcAddMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 印刷前の特別な初期化処理を追加してください。
}

void CComClientCalcAddMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 印刷後の後処理を追加してください。
}


// CComClientCalcAddMFCView 診断

#ifdef _DEBUG
void CComClientCalcAddMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CComClientCalcAddMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CComClientCalcAddMFCDoc* CComClientCalcAddMFCView::GetDocument() const // デバッグ以外のバージョンはインラインです。
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CComClientCalcAddMFCDoc)));
	return (CComClientCalcAddMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CComClientCalcAddMFCView メッセージ ハンドラ
