
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

union Entry {
  int missing;
  double fvalue;
  int qvalue;
};

struct Node {
  uint8_t default_left;
  unsigned int split_index;
  double threshold;
  int left_child;
  int right_child;
};

extern const unsigned char is_categorical[];


size_t get_num_class(void);
size_t get_num_feature(void);
const char* get_pred_transform(void);
float get_sigmoid_alpha(void);
float get_ratio_c(void);
float get_global_bias(void);
const char* get_threshold_type(void);
const char* get_leaf_output_type(void);

double predict(union Entry* data, int pred_margin);
double predict_margin_unit0(union Entry* data);
double predict_margin_unit1(union Entry* data);
double predict_margin_unit2(union Entry* data);
double predict_margin_unit3(union Entry* data);
double predict_margin_unit4(union Entry* data);
double predict_margin_unit5(union Entry* data);
double predict_margin_unit6(union Entry* data);
double predict_margin_unit7(union Entry* data);
double predict_margin_unit8(union Entry* data);
double predict_margin_unit9(union Entry* data);
double predict_margin_unit10(union Entry* data);
double predict_margin_unit11(union Entry* data);
double predict_margin_unit12(union Entry* data);
double predict_margin_unit13(union Entry* data);
double predict_margin_unit14(union Entry* data);
