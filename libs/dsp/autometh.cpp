//
//  File = autometh.cpp
//

#include <fstream>
#include <iostream>
#include <stdlib.h>

#include "autometh.h"
#include "complex.h"
#include "overload.h"

template<class T>
AutocorrMethCorrMtx<T>::AutocorrMethCorrMtx(T* signal, int seq_len, int max_lag)
{
  int j, k;
  T sum;
  double denom;
  int mode = 0;

  this->Herm_Toep_Col_1 = new T[max_lag + 1];
  this->Num_Rows = max_lag + 1;
  this->Num_Cols = max_lag + 1;
  denom = double(seq_len);

  for (k = 0; k <= max_lag; k++) {
    sum = 0.0;

    for (j = 0; j < (seq_len - k); j++) {
      sum += signal[j + k] * conj(signal[j]);
    }
    // if(mode == ACF_MODE_UNBIASED)
    if (mode == 0)
      denom = double(seq_len);
    this->Herm_Toep_Col_1[k] = sum / denom;
  }
  return;
}
template<class T>
AutocorrMethCorrMtx<T>::~AutocorrMethCorrMtx()
{
  delete[] this->Herm_Toep_Col_1;
}

template class AutocorrMethCorrMtx<double>;
template class AutocorrMethCorrMtx<complex>;
