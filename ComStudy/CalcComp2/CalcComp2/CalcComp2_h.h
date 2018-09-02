

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jan 13 15:07:23 2014
 */
/* Compiler settings for .\CalcComp2.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
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

#ifndef __CalcComp2_h_h__
#define __CalcComp2_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICalcObject2_FWD_DEFINED__
#define __ICalcObject2_FWD_DEFINED__
typedef interface ICalcObject2 ICalcObject2;
#endif 	/* __ICalcObject2_FWD_DEFINED__ */


#ifndef __CalcObject2_FWD_DEFINED__
#define __CalcObject2_FWD_DEFINED__

#ifdef __cplusplus
typedef class CalcObject2 CalcObject2;
#else
typedef struct CalcObject2 CalcObject2;
#endif /* __cplusplus */

#endif 	/* __CalcObject2_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICalcObject2_INTERFACE_DEFINED__
#define __ICalcObject2_INTERFACE_DEFINED__

/* interface ICalcObject2 */
/* [uuid][object] */ 


EXTERN_C const IID IID_ICalcObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4341CDB6-AF0F-4ef4-9C51-0BAFFE845FF4")
    ICalcObject2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ int op1,
            /* [in] */ int op2,
            /* [retval][out] */ int *ret) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAddedStaticValue( 
            /* [retval][out] */ int *ret) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICalcObject2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICalcObject2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICalcObject2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICalcObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICalcObject2 * This,
            /* [in] */ int op1,
            /* [in] */ int op2,
            /* [retval][out] */ int *ret);
        
        HRESULT ( STDMETHODCALLTYPE *GetAddedStaticValue )( 
            ICalcObject2 * This,
            /* [retval][out] */ int *ret);
        
        END_INTERFACE
    } ICalcObject2Vtbl;

    interface ICalcObject2
    {
        CONST_VTBL struct ICalcObject2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICalcObject2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICalcObject2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICalcObject2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICalcObject2_Add(This,op1,op2,ret)	\
    ( (This)->lpVtbl -> Add(This,op1,op2,ret) ) 

#define ICalcObject2_GetAddedStaticValue(This,ret)	\
    ( (This)->lpVtbl -> GetAddedStaticValue(This,ret) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICalcObject2_INTERFACE_DEFINED__ */



#ifndef __CalcComp2Lib_LIBRARY_DEFINED__
#define __CalcComp2Lib_LIBRARY_DEFINED__

/* library CalcComp2Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_CalcComp2Lib;

EXTERN_C const CLSID CLSID_CalcObject2;

#ifdef __cplusplus

class DECLSPEC_UUID("6E805751-5B02-4c1b-BF9D-FD69C07AF2FA")
CalcObject2;
#endif
#endif /* __CalcComp2Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


