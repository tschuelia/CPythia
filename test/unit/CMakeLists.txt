include(DifficultyTestHelper)
include(GoogleTest)

set(DIFFICULTY_TEST_DATA_DIR ${CMAKE_CURRENT_SOURCE_DIR}/data)

corax_register_test(test_difficulty FILES src/difficulty.cpp  DEFINES DATAPATH=${DIFFICULTY_TEST_DATA_DIR})

enable_testing()
