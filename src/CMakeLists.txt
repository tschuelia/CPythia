file(GLOB DIFFICULTY_SOURCE_FILES difficulty/tu*.c)

add_library(
        coraxlib_difficulty_prediction_lib
        STATIC
        difficulty.c
        difficulty/prediction.c
        ${DIFFICULTY_SOURCE_FILES}
)

target_include_directories(
        coraxlib_difficulty_prediction_lib PRIVATE ${CORAX_INCLUDE_DIRS}
)
