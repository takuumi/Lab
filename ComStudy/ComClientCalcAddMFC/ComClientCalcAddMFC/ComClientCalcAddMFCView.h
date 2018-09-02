// ComClientCalcAddMFCView.h : CComClientCalcAddMFCView クラスのインターフェイス
//


#pragma once


class CComClientCalcAddMFCView : public CView
{
protected: // シリアル化からのみ作成します。
	CComClientCalcAddMFCView();
	DECLARE_DYNCREATE(CComClientCalcAddMFCView)

// 属性
public:
	CComClientCalcAddMFCDoc* GetDocument() const;

// 操作
public:

// オーバーライド
public:
	virtual void OnDraw(CDC* pDC);  // このビューを描画するためにオーバーライドされます。
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 実装
public:
	virtual ~CComClientCalcAddMFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成された、メッセージ割り当て関数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ComClientCalcAddMFCView.cpp のデバッグ バージョン
inline CComClientCalcAddMFCDoc* CComClientCalcAddMFCView::GetDocument() const
   { return reinterpret_cast<CComClientCalcAddMFCDoc*>(m_pDocument); }
#endif

