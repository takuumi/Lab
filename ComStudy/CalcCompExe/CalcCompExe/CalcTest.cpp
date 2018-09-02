// CalcTest.cpp : CCalcTest ‚ÌŽÀ‘•

#include "stdafx.h"
#include "CalcTest.h"


// CCalcTest

static long s_a = 0;
static long s_b = 0;

STDMETHODIMP CCalcTest::Add(LONG a, LONG b, LONG* ret)
{
	s_a = a;
	s_b = b;

	*ret = s_a + s_b;

	return S_OK;
}

STDMETHODIMP CCalcTest::GetAddedStaticValue(LONG* ret)
{
	*ret = s_a + s_b;

	return S_OK;
}
