
#include "prediction.h"

;


size_t get_num_class(void) {
  return 1;
}

size_t get_num_feature(void) {
  return 10;
}

const char* get_pred_transform(void) {
  return "identity";
}

float get_sigmoid_alpha(void) {
  return 1.0;
}

float get_ratio_c(void) {
  return 1.0;
}

float get_global_bias(void) {
  return 0.0;
}

const char* get_threshold_type(void) {
  return "float64";
}

const char* get_leaf_output_type(void) {
  return "float64";
}


static inline double pred_transform(double margin) {
  return margin;
}
double predict(union Entry* data, int pred_margin) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  sum += predict_margin_unit0(data);
  sum += predict_margin_unit1(data);
  sum += predict_margin_unit2(data);
  sum += predict_margin_unit3(data);
  sum += predict_margin_unit4(data);
  sum += predict_margin_unit5(data);
  sum += predict_margin_unit6(data);
  sum += predict_margin_unit7(data);
  sum += predict_margin_unit8(data);
  sum += predict_margin_unit9(data);
  sum += predict_margin_unit10(data);
  sum += predict_margin_unit11(data);
  sum += predict_margin_unit12(data);
  sum += predict_margin_unit13(data);
  sum += predict_margin_unit14(data);

  sum = sum + (double)(0);
  if (!pred_margin) {
    return pred_transform(sum);
  } else {
    return sum;
  }
}
