#ifndef CORAX_DIFFICULTY_H
#define CORAX_DIFFICULTY_H

// important: keep this above the includes
#ifdef __cplusplus
extern "C"
{
#endif

#include "corax/core/partition.h"
#include "corax/util/msa.h"
#include "difficulty/prediction.h"

/**
 * A structure that contains attributes of a multiple sequence alignment.
 */
typedef struct {
  /**
   * Number of taxa in the alignment.
   */
  int taxa;
  /**
   * Number of sites in the alignment.
   */
  int sites;
  /**
   * Number of patterns in the alignment.
   */
  int patterns;

  /**
   * Sites per taxa ratio of the alignment.
   */
  double sites_per_taxa;
  /**
   * Patterns per taxa ratio of the alignment.
   */
  double patterns_per_taxa;

  /**
   * The proportion of gaps in the alignment.
   */
  double proportion_gaps;
  /**
   * The proportion of invariant sites in the alignment.
   */
  double proportion_invariant;

  /**
   * Shannon entropy of the alignment.
   */
  double entropy;
  /**
   * Bollback multinomial statsitics of the alignment.
   * Computed according to Bollback, JP: Bayesian model adequacy and choice in phylogenetics (2002).
   */
  double bollback_multinomial;
} corax_msa_features;

    /**
     * Takes a multiple sequence alignment, the number of states and a tipmap and
     * computes the Shannon entropies per alignment site (in bits).
     *
     * @param msa Multiple Sequence Alignment
     * @param states Number of states (e.g., DNA=4, AA=20 etc.)
     * @param tipmap Mapping from chars to states (e.g., corax_map_nt for DNA)
     * @return Array of per-site Shannon entropies (in bits). Each per-site entropy is >= 0.
     */
  CORAX_EXPORT double *
  corax_msa_column_entropies(const corax_msa_t *   msa,
                             unsigned int          states,
                             const corax_state_t * tipmap
                             );

  /**
   * Takes a multiple sequence alignment, the number of states and a tipmap and
   * compute the Shannon entropy of the alignment.
   *
   * @param msa Multiple Sequence Alignment
   * @param states Number of states (e.g., DNA=4, AA=20 etc.)
   * @param tipmap Mapping from chars to states (e.g., corax_map_nt for DNA)
   * @return Shannon entropy of the multiple sequence alignment (in bits). The entropy is >= 0.
   */
  CORAX_EXPORT double
  corax_msa_entropy(const corax_msa_t *         msa,
                          unsigned int          states,
                          const corax_state_t * tipmap
                    );


  /**
   * Takes a multiple sequence alignment and a tipmap and computes the bollback multinomial
   * statistic according to Bollback, JP: Bayesian model adequacy and choice in phylogenetics (2002).
   *
   * @param msa Multiple Sequence Alignment. Note that the MSA object is modified during
   *            the computation of the multinomial statistic.
   * @param tipmap Mapping from chars to states (e.g., corax_map_nt for DNA)
   * @return Bollback multinomial statistic. The bollback multinomial statistic is always <= 0.
   */
  CORAX_EXPORT double
  corax_msa_bollback_multinomial(corax_msa_t *         msa,
                                 const corax_state_t * tipmap
                                 );

  /**
   * Takes a multiple sequence alignment, the number of states and a tipmap and
   * computes the MSA attributes and collects them in a corax_msa_features object.
   *
   * @param msa Multiple Sequence Alignment. Note that the MSA object is modified during
   *            the computation of the Bollback multinomial statistic.
   * @param states Number of states (e.g., DNA=4, AA=20 etc.)
   * @param tipmap Mapping from chars to states (e.g., corax_map_nt for DNA)
   * @return corax_msa_features struct containing the MSA attributes
   */
  CORAX_EXPORT corax_msa_features *
  corax_msa_compute_features(corax_msa_t *   msa,
                             unsigned int          states,
                             const corax_state_t * tipmap
                    );

  /**
   * Predicts the difficulty of a MSA given its features and
   * the average RF Distance between a set of parsimony trees for the same MSA.
   *
   * @param msa_features The features of the multiple sequence alignment.
   * @param average_rfdistance_parsimony_trees The RF distance between a set of parsimony trees inferred for the MSA.
   * @param prediction_margin
   * @return The predicted difficulty for the given MSA. The difficulty is a value between 0.0 and 1.0.
   */
  CORAX_EXPORT double
  corax_msa_predict_difficulty(const corax_msa_features * msa_features,
                               double                     average_rfdistance_parsimony_trees,
                               int                        prediction_margin
                               );

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif // CORAX_DIFFICULTY_H
