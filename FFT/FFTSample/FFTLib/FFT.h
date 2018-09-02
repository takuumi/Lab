#pragma once

// "fft.h"
#include <iostream>
#include <vector>
#include <complex>

class FFT
{
public:
	FFT();
	virtual ~FFT();

	// fft header
	int lc_fft_calc_ids(const int N, std::vector< int >* pids);
	void lc_fft(const std::vector< std::complex<double> >& a,const std::vector< int >& ids, const int n_level, std::vector< std::complex< double > >* pout, bool is_inverse = 0);
	void lc_inverse_fft(const std::vector< std::complex<double> >& a, const std::vector< int >& ids, const int n_level, std::vector< std::complex< double > >* pout);

};
