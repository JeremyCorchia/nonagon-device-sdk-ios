/*
verctor's (array of numbers with static size) tools
*/

#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

int linear_regression(const double ys[], unsigned int numofys, double *ret_m, double *ret_c); //Linear Regression (Fitting y = mx + c) where x=0...(numofys-1)

int quadratic_and_linear_regression(const double ys[], unsigned int numofys, double *ret_a, double *ret_b, double *ret_c, double *ret_m, double *ret_lc); //Quadratic regression (Fitting y = ax^2 +bx + c) and Linear regression(Fitting y = mx + lc) where x=-(numofys-1)/2,...,-1,0,1,...,(numofys-1)/2

int quadratic_regression(const double ys[], unsigned int numofys, double *ret_a, double *ret_b, double *ret_c); //Quadratic regression (Fitting y = ax^2 +bx + c) where x=-(numofys-1)/2,...,-1,0,1,...,(numofys-1)/2

int trend_removal(const double data_vector[], size_t vec_len, double *out_vector);

int my_averge_window(const double data_vector[], size_t vec_len, double *out_smoot_vector, size_t span); //the length of out_smoot_vector is vec_len-span+1
int my_averge_window_int2double(const int data_vector[], size_t vec_len, double *out_smoot_vector, size_t span); //the length of out_smoot_vector is vec_len-span+1

int min_of_pairs_max(const double data_vector[], size_t vec_len, double *ret_val);

/*
Calculates the cross-correlation function of data arrays tr1 and tr2. We use
the following definition of cross-correlation:
corp_out[i] = sum_j(tr1[i+j]*tr2[j])
The result is normalized.
input:
tr1, tr2:   data arrays with length ndat1, ndat2
shift:      maximal shift

normalize:  0 or 1. if 1 the cross-correlation function is normalized
            (correlation coefficient of 1 than means perfect fit)
window:     only use values in this window for normalization
            if 0: window = min(ndat1, ndat2)
            if >0: window = this paramter
ndat1, ndat2: length of data arrays

output:
corp_out: cross-correlation function of length 2*shift+1
 */
int xcorr(const double tr1[], size_t ndat1, const double tr2[], size_t ndat2, double *corp_out, int shift, int normalize, int window);

int simple_findpeaks(const double x[], int datalen, double pksOut[], int locsOut[], double Ph, double Th, int Pd, int *pks_length);

int my_findPeaks_noSort(const double data_vec[], size_t data_len, size_t minPeakDist, double pks_val_ret[], size_t pks_index_ret[], size_t *pks_length_InOut);

