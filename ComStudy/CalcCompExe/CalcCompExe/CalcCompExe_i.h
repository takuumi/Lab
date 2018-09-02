

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jan 13 14:54:45 2014
 */
/* Compiler settings for .\CalcCompExe.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __CalcCompExe_i_h__
#define __CalcCompExe_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICalcTest_FWD_DEFINED__
#define __ICalcTest_FWD_DEFINED__
typedef interface ICalcTest ICalcTest;
#endif 	/* __ICalcTest_FWD_DEFINED__ */


#ifndef __CalcTest_FWD_DEFINED__
#define __CalcTest_FWD_DEFINED__

#ifdef __cplusplus
typedef class CalcTest CalcTest;
#else
typedef struct CalcTest CalcTest;
#endif /* __cplusplus */

#endif 	/* __CalcTest_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICalcTest_INTERFACE_DEFINED__
#define __ICalcTest_INTERFACE_DEFINED__

/* interface ICalcTest */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICalcTest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B983EC8-6C95-4D8D-95C9-5EDB76EA5017")
    ICalcTest : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [out] */ LONG *ret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAddedStaticValue( 
            /* [out] */ LONG *ret) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICalcTestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICalcTest * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICalcTest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICalcTest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICalcTest * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICalcTest * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICalcTest * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICalcTest * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICalcTest * This,
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [out] */ LONG *ret);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAddedStaticValue )( 
            ICalcTest * This,
            /* [out] */ LONG *ret);
        
        END_INTERFACE
    } ICalcTestVtbl;

    interface ICalcTest
    {
        CONST_VTBL struct ICalcTestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICalcTest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICalcTest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICalcTest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICalcTest_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICalcTest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICalcTest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICalcTest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICalcTest_Add(This,a,b,ret)	\
    ( (This)->lpVtbl -> Add(This,a,b,ret) ) 

#define ICalcTest_GetAddedStaticValue(This,ret)	\
    ( (This)->lpVtbl -> GetAddedStaticValue(This,ret) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICalcTest_INTERFACE_DEFINED__ */



#ifndef __CalcCompExeLib_LIBRARY_DEFINED__
#define __CalcCompExeLib_LIBRARY_DEFINED__

/* library CalcCompExeLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CalcCompExeLib;

EXTERN_C const CLSID CLSID_CalcTest;

#ifdef __cplusplus

class DECLSPEC_UUID("32012854-523C-4822-9472-744D32FD3889")
CalcTest;
#endif
#endif /* __CalcCompExeLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


