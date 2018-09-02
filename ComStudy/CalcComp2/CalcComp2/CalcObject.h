#pragma once 
 
#include "CalcComp2_h.h"     
#include "myresource.h"   

class CCalcObject2           
	: public CComObjectRootEx<CComSingleThreadModel>, 
      public CComCoClass<CCalcObject2, &CLSID_CalcObject2>,  //Å©[1] 
	  public ICalcObject2    
{ 
public: 

	DECLARE_REGISTRY_RESOURCEID(IDR_CALCCOMP2)

	BEGIN_COM_MAP(CCalcObject2)             //Å©[3] 
        COM_INTERFACE_ENTRY(ICalcObject2)   //Å©[4] 
    END_COM_MAP() 


    //virtual HRESULT __stdcall Add(int op1, int op2, int* ret);
    STDMETHOD(Add)(int op1, int op2, int* ret);                 
	STDMETHOD(GetAddedStaticValue)(int* ret);                 
}; 

OBJECT_ENTRY_AUTO(__uuidof(CalcObject2), CCalcObject2)  //Å©[3] 
