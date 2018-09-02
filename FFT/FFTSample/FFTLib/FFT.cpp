#include "stdafx.h"
#include "FFT.h"
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

FFT::FFT()
{
}


FFT::~FFT()
{
}




int FFT::lc_fft_calc_ids(const int N, vector< int >* pids)
{
	// fft �v�Z�O�Ɉ�x�����{�֐����g��ID���ї���Aids, n_level���v�Z���Ă����܂��B
	// �����œ���ꂽ ids, n_level ���Afft�̌v�Z�Ŏg�p���܂��B
	// �z��T�C�Y���ς��Ȃ�����ids, n_level�͎g���񂵉\�B
	//�y���́zN:���͐M���z��̑傫���i�Q�ׂ̂���j
	//�y�o�́zpids:ID���сi�ďo���͋��O��j
	//      �߂�l: n_level
	int n_level;
	{
		auto& i = n_level;
		for (i = 0; i<64; ++i)// �}�W�b�N���i���o�[�I
			if (N >> i == 1) break;
	}
	vector< int >& ids = *pids;
	// ID ���ї�̌v�Z
	ids.reserve(N);
	{
		ids.push_back(0);
		ids.push_back(1);
		for (int i = 0; i<n_level - 1; ++i)
		{
			auto sz = ids.size();
			for_each(ids.begin(), ids.end(), [](int& x){ x *= 2; });
			ids.insert(ids.end(), ids.begin(), ids.end());
			auto it = ids.begin();
			std::advance(it, sz);
			for_each(it, ids.end(), [](int&x){ x += 1; });
		}// i
	}
	return n_level;
}

void FFT::lc_fft(const vector< complex<double> >& a, const vector< int >& ids, const int n_level, vector< complex< double > >* pout, bool is_inverse/*=0*/)
{
	// fft
	// ���͐M�� a ���l��́A�����t�[���G�ϊ����s���܂��B
	//�y���́za: ���l��Ƃ��Ă̗��U���͐M���A
	//         (a.size()�͂Q�ׂ̂��搔�ł��邱�Ƃ���O��)
	//     ids/n_level: �����g�p������(lc_fft_calc_iid()�̏o��)
	//�y�o�́zpout: ���l��Ƃ��Ă̌v�Z���ʁB�i�Ăяo�����͋��O��j
	//�y�I�v�V�����zis_inverse�F���ڂ͎g��Ȃ��ŉ������B
	//      �t�ϊ��ɂ́Alc_fft_inverse()���g�p���܂��B
	auto N = a.size();
	auto& F = *pout;
	{
		F.resize(N);
		for (int i = 0; i<N; ++i)
			F[i] = a[ids[i]];
	}
	unsigned int po2 = 1;
	for (int i_level = 1; i_level <= n_level; ++i_level)
	{
		po2 <<= 1;
		const int po2m = po2 >> 1;
		// ������exp()�v�Z�ďo�͍ŏ��񐔂ɗ}����B
		auto w =
			exp(std::complex<double>(.0, 2 * M_PI / (double)po2));
		// �����ċt�ϊ��̏ꍇ�́Aw�̑f�𕡑f�����ɁB
		w = is_inverse ? conj(w) : w;
		auto ws = complex<double>(1, 0);
		// �o�^�t���C�_�C���O�����FW�����L���鍀���܂Ƃ߂Čv�Z�B
		for (int k = 0; k<po2m; ++k)
		{
			for (int j = 0; j<N; j += po2)
			{
				auto pa = &F[j + k];
				auto pb = &F[j + k + po2m];
				auto wfb = ws**pb;
				*pb = *pa - wfb;
				*pa += wfb;
			}// j
			ws *= w;
		}// k
	}// i_level
	return;
}

void FFT::lc_inverse_fft(const vector< complex<double> >& a, const vector< int >& ids, const int n_level, vector< complex< double > >* pout)
{
	// inverse_fft
	// ���͐M�� a ���l��́A�����t�[���G�t�ϊ����s���܂��B
	// a.size()�͂Q�ׂ̂��搔�ł��邱�Ƃ���O��ł��B
	lc_fft(a, ids, n_level, pout, !0);
	auto N = a.size();
	for_each(pout->begin(), pout->end(),
		[N](complex<double>& val){val /= N; });
	return;
}
