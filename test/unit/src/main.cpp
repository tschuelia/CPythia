#include "environment.hpp"
#include <gtest/gtest.h>

DifficultyEnvironment* env = nullptr;

int main(int argc, char **argv) {
    env = new DifficultyEnvironment();
    ::testing::InitGoogleTest(&argc, argv);
    ::testing::AddGlobalTestEnvironment(env);
    return RUN_ALL_TESTS();
}
