// ComClientCalcAddMFCDoc.h : CComClientCalcAddMFCDoc クラスのインターフェイス
//


#pragma once


class CComClientCalcAddMFCDoc : public CDocument
{
protected: // シリアル化からのみ作成します。
	CComClientCalcAddMFCDoc();
	DECLARE_DYNCREATE(CComClientCalcAddMFCDoc)

// 属性
public:

// 操作
public:

// オーバーライド
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// 実装
public:
	virtual ~CComClientCalcAddMFCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成された、メッセージ割り当て関数
protected:
	DECLARE_MESSAGE_MAP()
};


