cmake_minimum_required(VERSION 3.9)

project(corax_difficulty_prediction)

# to prevent numerical stability issues with GCC 12+
add_compile_options(-O1)

add_subdirectory(src)
