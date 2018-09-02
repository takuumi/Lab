// CalcTest.h : CCalcTest の宣言

#pragma once
#include "resource.h"       // メイン シンボル

#include "CalcCompExe_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "DCOM の完全サポートを含んでいない Windows Mobile プラットフォームのような Windows CE プラットフォームでは、単一スレッド COM オブジェクトは正しくサポートされていません。ATL が単一スレッド COM オブジェクトの作成をサポートすること、およびその単一スレッド COM オブジェクトの実装の使用を許可することを強制するには、_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA を定義してください。ご使用の rgs ファイルのスレッド モデルは 'Free' に設定されており、DCOM Windows CE 以外のプラットフォームでサポートされる唯一のスレッド モデルと設定されていました。"
#endif



// CCalcTest

class ATL_NO_VTABLE CCalcTest :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCalcTest, &CLSID_CalcTest>,
	public IDispatchImpl<ICalcTest, &IID_ICalcTest, &LIBID_CalcCompExeLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCalcTest()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CALCTEST)


BEGIN_COM_MAP(CCalcTest)
	COM_INTERFACE_ENTRY(ICalcTest)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(Add)(LONG a, LONG b, LONG* ret);
	STDMETHOD(GetAddedStaticValue)(LONG* ret);
};

OBJECT_ENTRY_AUTO(__uuidof(CalcTest), CCalcTest)
