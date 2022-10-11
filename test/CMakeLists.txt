# Set the warining flags for the tests.
set(
    CORAX_TEST_WARNING_FLAGS
    "-Wall"
    "-Wextra"
    "-Wconversion"
    "-Wnon-virtual-dtor"
    "-Woverloaded-virtual"
    "-Wshadow"
    "-Wsign-conversion"
    "-Wundef"
    "-Wunreachable-code"
    "-Wunused"
)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    list(
            APPEND CORAX_TEST_WARNING_FLAGS
            "-Wcast-align"
            "-Wnull-dereference"
            "-Wpedantic"
            "-Wextra-semi"
            "-Wno-gnu-zero-variadic-macro-arguments"
    )
endif()

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    list(
            APPEND CORAX_TEST_WARNING_FLAGS
            "-Wcast-align"
            "-Wnull-dereference"
            "-Wpedantic"
            "-Wnoexcept"
            "-Wsuggest-attribute=const"
            "-Wsuggest-attribute=noreturn"
            "-Wsuggest-override"
    )
endif()

# Intel supports the fewest warning flags.

# Make the cmake helpers findable.
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

# Add the unit tests.
add_subdirectory(unit)
