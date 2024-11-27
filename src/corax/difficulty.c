#include "difficulty.h"

CORAX_EXPORT corax_msa_features *corax_msa_compute_features(
    corax_msa_t *msa, unsigned int states, const corax_state_t *tipmap)
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

  corax_msa_features *features =
      (corax_msa_features *)calloc(1, sizeof(corax_msa_features));

  if (!features)
  {
    corax_set_error(CORAX_ERROR_MEM_ALLOC,
                    "Cannot allocate memory for MSA features");
    return NULL;
  }

  const double msa_taxa    = (double)msa->count;
  const double msa_sites   = (double)msa->length;
  features->taxa           = msa_taxa;
  features->sites          = msa_sites;
  features->sites_per_taxa = msa_sites / msa_taxa;

  corax_msa_stats_t *msa_stats = corax_msa_compute_stats(
      msa,
      states,
      tipmap,
      NULL,
      CORAX_MSA_STATS_GAP_PROP | CORAX_MSA_STATS_INV_PROP
          | CORAX_MSA_STATS_ENTROPY);
  features->proportion_gaps      = msa_stats->gap_prop;
  features->proportion_invariant = msa_stats->inv_prop;
  features->entropy              = msa_stats->entropy;

  // The Bollback multinomial and pattern_entropy computations changes the MSA object
  // the msa->length afterwards corresponds to the number of patterns instead of
  // the number of sites
  unsigned int *site_pattern_map = (unsigned int *)calloc(msa->length, sizeof(unsigned int));
  unsigned int *site_weights = corax_compress_site_patterns_msa(msa, tipmap, site_pattern_map);
  features->bollback_multinomial = corax_msa_bollback_multinomial(msa, site_weights, tipmap);
  features->pattern_entropy = corax_msa_pattern_entropy(msa, site_weights, tipmap);

  const double msa_patterns   = (double)msa->length;
  features->patterns          = msa_patterns;
  features->patterns_per_taxa = msa_patterns / msa_taxa;
  features->patterns_per_site = msa_patterns / msa_sites;

  corax_msa_destroy_stats(msa_stats);
  free(site_pattern_map);
  free(site_weights);

  return features;
}

CORAX_EXPORT double
corax_msa_predict_difficulty(const corax_msa_features *msa_features,
                             double average_rfdistance_parsimony_trees,
                             double proportion_unique_parsimony_tree_topologies)
{
  union Entry *feat = (union Entry *)calloc(num_features, sizeof(union Entry));

  double prediction_features[num_features] = {
      msa_features->patterns_per_taxa,
      msa_features->sites_per_taxa,
      msa_features->proportion_gaps,
      msa_features->proportion_invariant,
      msa_features->entropy,
      msa_features->bollback_multinomial,
      average_rfdistance_parsimony_trees,
      msa_features->patterns_per_site,
      msa_features->pattern_entropy,
      proportion_unique_parsimony_tree_topologies,
  };

  for (int i = 0; i < num_features; ++i)
  {
    feat[i].fvalue = prediction_features[i];
  }

  int prediction_margin = 0;
  double prediction;
  predict(feat, prediction_margin, &prediction);
  free(feat);

  // LightGBM may produce results lower than 0.0 or higher than 1.0
  // -> clip the difficulty to [0.0, 1.0]
  if (prediction < 0.0) prediction = 0.0;
  if (prediction > 1.0) prediction = 1.0;

  return prediction;
}