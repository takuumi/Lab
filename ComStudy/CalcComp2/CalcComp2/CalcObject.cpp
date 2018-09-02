#include "StdAfx.h" 
#include "CalcObject.h" 

static int s_op1 = 0;
static int s_op2 = 0;

//HRESULT __stdcall CCalcObject2::Add(int op1, int op2, int* ret) //Å©[6] 
STDMETHODIMP CCalcObject2::Add(int op1, int op2, int* ret)        //Å©[7] 
{ 
	s_op1 = op1;
	s_op2 = op2;

    *ret = s_op1 + s_op2; 
    return S_OK; 
} 

//HRESULT __stdcall CCalcObject2::Add(int op1, int op2, int* ret) //Å©[6] 
STDMETHODIMP CCalcObject2::GetAddedStaticValue(int* ret)
{ 
    *ret = s_op1 + s_op2; 
    return S_OK; 
}