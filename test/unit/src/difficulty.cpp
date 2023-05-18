#include "corax/corax.h"
#include "difficulty.h"
#include "environment.hpp"
#include <gtest/gtest.h>


TEST(Difficulty, msa_features)
{
    std::string filename = env->example_msa();
    const char* c_filename = filename.c_str();
    corax_msa_t* msa = corax_phylip_load(c_filename, CORAX_TRUE);

    EXPECT_TRUE(msa != NULL);

    corax_msa_features * features = corax_msa_compute_features(msa, 4, corax_map_nt);

    int n_taxa = features->taxa;
    EXPECT_EQ(n_taxa, 56);

    int n_sites = features->sites;
    EXPECT_EQ(n_sites, 766);

    int n_patterns = features->patterns;
    EXPECT_EQ(n_patterns, 241);

    double sites_per_taxa = features->sites_per_taxa;
    EXPECT_NEAR(sites_per_taxa, n_sites / (double)n_taxa, 0.001);

    double patterns_per_taxa = features->patterns_per_taxa;
    EXPECT_NEAR(patterns_per_taxa, n_patterns / (double)n_taxa, 0.001);

    double patterns_per_site = features->patterns_per_site;
    EXPECT_NEAR(patterns_per_site, n_patterns / (double)n_sites, 0.001);

    double proportion_gaps = features->proportion_gaps;
    EXPECT_NEAR(proportion_gaps, 0.0839, 0.001);

    double proportion_invariant = features->proportion_invariant;
    EXPECT_NEAR(proportion_invariant, 0.5979, 0.001);

    double entropy = features->entropy;
    EXPECT_NEAR(entropy, 0.22, 0.01);

    double bollback_multinomial = features->bollback_multinomial;
    EXPECT_NEAR(bollback_multinomial, -3326.8187, 0.01);

    corax_msa_destroy(msa);
    free(features);
}


double predict_for_msa(std::string filename, double rfdistance, double proportion_unique, unsigned int states, const corax_state_t *tipmap) {
    corax_msa_t* msa = corax_phylip_load(filename.c_str(), CORAX_TRUE);

    EXPECT_TRUE(msa != NULL);

    corax_msa_features * features = corax_msa_compute_features(msa, states, tipmap);
    double difficulty = corax_msa_predict_difficulty(features, rfdistance, proportion_unique);

    corax_msa_destroy(msa);
    free(features);

    return difficulty;
}

void iterate_multiple_msas(std::list<PredAttr> msas, unsigned int states, const corax_state_t *tipmap) {
    std::list<PredAttr>::iterator msa_iter;

    for(msa_iter=msas.begin(); msa_iter!=msas.end(); ++msa_iter) {
        std::string filename = std::get<0>(*msa_iter);
        double rfdist = std::get<1>(*msa_iter);
        double prop_unique_topos = std::get<2>(*msa_iter);

        double predicted_diff = predict_for_msa(filename, rfdist, prop_unique_topos, states, tipmap);

        double expected_diff = std::get<3>(*msa_iter);
        EXPECT_NEAR(predicted_diff, expected_diff, 0.05);

    }
}

TEST(Difficulty, predict_multiple_dna)
{
    iterate_multiple_msas(env->dna_msas(), 4, corax_map_nt);
}

TEST(Difficulty, predict_multiple_aa)
{
    iterate_multiple_msas(env->aa_msas(), 20, corax_map_aa);
}
