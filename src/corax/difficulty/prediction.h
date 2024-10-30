
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <stdint.h>

#if defined(__clang__) || defined(__GNUC__)
#define LIKELY(x)   __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#else
#define LIKELY(x)   (x)
#define UNLIKELY(x) (x)
#endif

#define N_TARGET 1
#define MAX_N_CLASS 1

union Entry {
  int missing;
  double fvalue;
  int qvalue;
};

int32_t get_num_target(void);
void get_num_class(int32_t* out);
int32_t get_num_feature(void);
const char* get_threshold_type(void);
const char* get_leaf_output_type(void);
void predict(union Entry* data, int pred_margin, double* result);
void postprocess(double* result);
void predict_unit0(union Entry* data, double* result);
void predict_unit1(union Entry* data, double* result);
void predict_unit2(union Entry* data, double* result);
void predict_unit3(union Entry* data, double* result);
void predict_unit4(union Entry* data, double* result);
void predict_unit5(union Entry* data, double* result);
void predict_unit6(union Entry* data, double* result);
void predict_unit7(union Entry* data, double* result);
void predict_unit8(union Entry* data, double* result);
void predict_unit9(union Entry* data, double* result);
void predict_unit10(union Entry* data, double* result);
void predict_unit11(union Entry* data, double* result);
void predict_unit12(union Entry* data, double* result);
void predict_unit13(union Entry* data, double* result);
void predict_unit14(union Entry* data, double* result);

