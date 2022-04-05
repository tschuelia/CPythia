#include "difficulty.h"

#include "corax/util/compress.h"


CORAX_EXPORT double*
corax_msa_column_entropies(const corax_msa_t *   msa,
                           unsigned int          states,
                           const corax_state_t * tipmap
                           )
{
  if (!msa)
  {
    corax_set_error(CORAX_ERROR_INVALID_PARAM, "MSA structure is NULL");
    return CORAX_FAILURE;
  }

  if (!tipmap)
  {
    corax_set_error(CORAX_ERROR_INVALID_PARAM,
                    "Character-to-state mapping (charmap) is NULL");
    return CORAX_FAILURE;
  }

  const unsigned long msa_count  = (unsigned long)msa->count;
  const unsigned long msa_length = (unsigned long)msa->length;

  unsigned long  i, j, k;

  corax_state_t gap_state = 0;

  double *column_entropies = (double *)calloc(msa_length, sizeof(double));

  /* gap state has always all bits set to one */
  for (i = 0; i < states; ++i)
  {
    gap_state <<= 1;
    gap_state |= 1;
  }

  for (j = 0; j < msa_length; ++j) // site loop msa_length
  {
    // compute the column wise entropy
    // for this first count the proportion of each state in this column
    int *state_counts = (int *)calloc(states, sizeof(int));
    int count_non_gaps = 0;

    for (i = 0; i < msa_count; ++i) // sequence loop msa_count
    {
      const corax_state_t state       = tipmap[(int)msa->sequence[i][j]];
      const int           is_gap      = state == gap_state ? 1 : 0;

      if (!is_gap)
      {
        for (k = 0; k < states; ++k)
        {
          if (state & (1ll << k)) {
            state_counts[k]++;
          }
        }
        count_non_gaps++;
      }
    }

    double column_entropy = 0.0;
    for (k = 0; k < states; ++k)
    {
      if (state_counts[k] == 0) continue;

      double state_probability = state_counts[k] / (double)count_non_gaps;
      column_entropy += -state_probability * log2(state_probability);
    }

    column_entropies[j] = column_entropy;
  }

  return column_entropies;
}


CORAX_EXPORT double
corax_msa_entropy(const corax_msa_t *         msa,
                        unsigned int          states,
                        const corax_state_t * tipmap
                  )
{
  if (!msa)
  {
    corax_set_error(CORAX_ERROR_INVALID_PARAM, "MSA structure is NULL");
    return CORAX_FAILURE;
  }

  if (!tipmap)
  {
    corax_set_error(CORAX_ERROR_INVALID_PARAM,
                    "Character-to-state mapping (charmap) is NULL");
    return CORAX_FAILURE;
  }

  const unsigned long msa_length = (unsigned long)msa->length;

  unsigned long  i;

  double* column_entropies = corax_msa_column_entropies(msa, states, tipmap);

  double sum = 0.0;

  for (i = 0; i < msa_length; ++i)
  {
    sum += column_entropies[i];
  }

  return sum / msa_length;
}


CORAX_EXPORT double
corax_msa_bollback_multinomial(corax_msa_t *         msa,
                               const corax_state_t * tipmap
                               )
{
  if (!msa)
  {
    corax_set_error(CORAX_ERROR_INVALID_PARAM, "MSA structure is NULL");
    return CORAX_FAILURE;
  }

  if (!tipmap)
  {
    corax_set_error(CORAX_ERROR_INVALID_PARAM,
                    "Character-to-state mapping (charmap) is NULL");
    return CORAX_FAILURE;
  }

  const int number_of_sites = msa->length;
  int i;
  unsigned int* site_pattern_map = (unsigned int *)calloc(msa->length, sizeof(unsigned int));
  unsigned int* site_weights = corax_compress_site_patterns_msa(msa, tipmap, site_pattern_map);

  double sum = 0.0;

  for (i = 0; i < msa->length; ++i)
  {
    unsigned int site_weight = site_weights[i];

    if (site_weight == 0) continue;

    double factor = site_weight * log(site_weight);
    sum += factor;
  }

  return sum - number_of_sites * log(number_of_sites);
}


CORAX_EXPORT corax_msa_features *
corax_msa_compute_features(corax_msa_t *   msa,
                           unsigned int          states,
                           const corax_state_t * tipmap
                           )
{
  if (!msa)
  {
    corax_set_error(CORAX_ERROR_INVALID_PARAM, "MSA structure is NULL");
    return CORAX_FAILURE;
  }

  if (!tipmap)
  {
    corax_set_error(CORAX_ERROR_INVALID_PARAM,
                    "Character-to-state mapping (charmap) is NULL");
    return CORAX_FAILURE;
  }

  corax_msa_features * features =
      (corax_msa_features *)calloc(1, sizeof(corax_msa_features));

  if (!features)
  {
    corax_set_error(CORAX_ERROR_MEM_ALLOC,
                    "Cannot allocate memory for MSA features");
    return NULL;
  }

  const double msa_taxa  = (double)msa->count;
  const double msa_sites = (double)msa->length;
  features->taxa = msa_taxa;
  features->sites = msa_sites;
  features->sites_per_taxa = msa_sites / msa_taxa;

  corax_msa_stats_t* msa_stats = corax_msa_compute_stats(msa, states, tipmap, NULL, CORAX_MSA_STATS_GAP_PROP | CORAX_MSA_STATS_INV_PROP);
  features->proportion_gaps = msa_stats->gap_prop;
  features->proportion_invariant = msa_stats->inv_prop;

  features->entropy = corax_msa_entropy(msa, states, tipmap);

  // The Bollback multinomial computation changes the MSA object
  // the msa->count afterwards corresponds to the number of patterns instead of the number of sites
  features->bollback_multinomial = corax_msa_bollback_multinomial(msa, tipmap);

  const double msa_patterns = (double)msa->length;
  features->patterns = msa_patterns;
  features->patterns_per_taxa = msa_patterns / msa_taxa;

  return features;
}

CORAX_EXPORT double
corax_msa_predict_difficulty(const corax_msa_features * msa_features,
                             double                     average_rfdistance_parsimony_trees,
                             int                        prediction_margin
                             )
{
    union Entry *feat = (union Entry *)calloc(1, sizeof(union Entry));
    const int num_features = get_num_feature();

    double prediction_features[7] = {
            msa_features->patterns_per_taxa,
            msa_features->sites_per_taxa,
            msa_features->proportion_gaps,
            msa_features->proportion_invariant,
            msa_features->entropy,
            msa_features->bollback_multinomial,
            average_rfdistance_parsimony_trees
    };

    for (int i = 0; i < num_features; ++i) {
        feat[i].missing = -1; // TODO: check if this feature is present or not
        feat[i].fvalue = prediction_features[i];
    }

    return predict(feat, prediction_margin);
}