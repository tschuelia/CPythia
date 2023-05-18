#ifndef DIFFICULTY_TEST_ENV_HPP
#define DIFFICULTY_TEST_ENV_HPP

#include <fstream>
#include <iostream>
#include <list>

#include "gtest/gtest.h"

#define STRING(s) #s
#define STRINGIFY(s) STRING(s)

typedef std::tuple<std::string, double, double, double> PredAttr; // filename, avg_rfdist, proportion_unique, difficulty

class DifficultyEnvironment : public ::testing::Environment {
public:
DifficultyEnvironment() {}

std::string example_msa() {
    return std::string(STRINGIFY(DATAPATH/DNA_1.phy));
}

std::list<PredAttr> dna_msas() {
    std::list<PredAttr> dna_msas = {
            std::make_tuple(std::string(STRINGIFY(DATAPATH/DNA_1.phy)), 0.69, 1.0, 0.77),
            std::make_tuple(std::string(STRINGIFY(DATAPATH/DNA_2.phy)), 0.29, 0.88, 0.09),
            std::make_tuple(std::string(STRINGIFY(DATAPATH/DNA_3.phy)), 0.0, 0.01, 0.01)
    };

    return dna_msas;
}

std::list<PredAttr> aa_msas() {
    std::list<PredAttr> aa_msas = {
            std::make_tuple(std::string(STRINGIFY(DATAPATH/AA_1.phy)), 0.27, 0.75, 0.02),
            std::make_tuple(std::string(STRINGIFY(DATAPATH/AA_2.phy)), 0.27, 0.73, 0.01),
            std::make_tuple(std::string(STRINGIFY(DATAPATH/AA_3.phy)), 0.38, 1.0, 0.07),
    };

    return aa_msas;
}

};

extern DifficultyEnvironment *env;


#endif
