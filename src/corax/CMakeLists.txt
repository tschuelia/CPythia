file(GLOB DIFFICULTY_SOURCE_FILES difficulty/tu*.c)

add_library(
        coraxlib_difficulty_prediction_lib
        STATIC
        difficulty.c
        difficulty/prediction.c
        ${DIFFICULTY_SOURCE_FILES}
)

target_link_libraries(coraxlib_difficulty_prediction_lib PRIVATE corax)

target_include_directories(
  coraxlib_difficulty_prediction_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
