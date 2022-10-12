# Adapted from https://github.com/kamping-site/kamping/blob/main/tests/cmake/KampingTestHelper.cmake
# and https://github.com/kamping-site/kamping/blob/main/tests/cmake/KaTestrophe.cmake
#
# I removed the MPI parts because coraxlib doesn't directly use MPI yet; parallelization managed by
# the caller.

include(warningFlags)
include(sanitizers)
include(targetSourcesLocal)

set(CORAX_TEST_WARNING_FLAGS ${CORAX_WARNING_FLAGS})

# Convenience wrapper for adding tests for Coraxlib This creates the target, links googletest and
# coraxlib, enables warnings, and registers the test.
#
# TARGET_NAME the target name FILES the files of the target
#
# example: corax_register_test(mytarget FILES mytarget.cpp)
function (corax_register_test TARGET_NAME)
    cmake_parse_arguments(
            "CORAX" # prefix
            "NO_EXCEPTION_MODE" # flags
            "" # one-valued arguments
            "FILES;DEFINES" # multi-valued arguments
            ${ARGN}
    )

    # Add our main.cpp to the list of source files and register the test target.
    add_executable(${TARGET_NAME} ${CORAX_FILES})
    target_sources_local(${TARGET_NAME} PRIVATE ${CORAX_FILES} src/main.cpp)

    # Link gtest, gmock, coraxlib and pthread to the test target; also add corax lib include
    # directories.
    target_link_libraries(${TARGET_NAME} PRIVATE coraxlib_difficulty_prediction_lib gtest gmock ${CORAX_LIB_TARGET} pthread)
    target_include_directories(${TARGET_NAME} PRIVATE ${CORAX_INCLUDE_DIRS})

    # Enable lots of warnings, enable the adress sanitizer and pass on defines (e.g. HAVE_AVX=1 for
    # some tests).
    target_compile_options(${TARGET_NAME} PRIVATE ${CORAX_TEST_WARNING_FLAGS})
    target_compile_definitions(${TARGET_NAME} PRIVATE ${CORAX_DEFINES})
    target_add_address_sanitizer(${TARGET_NAME})

    # Let ctest discover all tests in the test target (-> pretty list when calling ctest).
    gtest_discover_tests(${TARGET_NAME})
endfunction ()

# Registers a set of tests which should fail to compile.
#
# TARGET prefix for the targets to be built FILES the list of files to include in the target
# SECTIONS sections of the compilation test to build LIBRARIES libraries to link via
# target_link_libraries(...)
#
# Loosely based on:
# https://stackoverflow.com/questions/30155619/expected-build-failure-tests-in-cmake
function (katestrophe_register_compilation_failure_test)
    cmake_parse_arguments(
            "KATESTROPHE" # prefix
            "" # options
            "TARGET" # one value arguments
            "FILES;SECTIONS;LIBRARIES" # multiple value arguments
            ${ARGN}
    )

    # the file should compile without any section enabled
    add_executable(${KATESTROPHE_TARGET} ${KATESTROPHE_FILES})
    target_link_libraries(${KATESTROPHE_TARGET} PUBLIC gtest ${KATESTROPHE_LIBRARIES})

    # For each given section, add a target.
    foreach (SECTION ${KATESTROPHE_SECTIONS})
        string(TOLOWER ${SECTION} SECTION_LOWERCASE)
        set(THIS_TARGETS_NAME "${KATESTROPHE_TARGET}.${SECTION_LOWERCASE}")

        # Add the executable and link the libraries.
        add_executable(${THIS_TARGETS_NAME} ${KATESTROPHE_FILES})
        target_link_libraries(${THIS_TARGETS_NAME} PUBLIC gtest ${KATESTROPHE_LIBRARIES})

        # Select the correct section of the target by setting the appropriate preprocessor define.
        target_compile_definitions(${THIS_TARGETS_NAME} PRIVATE ${SECTION})

        # Exclude the target fromn the "all" target.
        set_target_properties(
                ${THIS_TARGETS_NAME} PROPERTIES EXCLUDE_FROM_ALL TRUE EXCLUDE_FROM_DEFAULT_BUILD TRUE
        )

        # Add a test invoking "cmake --build" to test if the target compiles.
        add_test(
                NAME "${THIS_TARGETS_NAME}"
                COMMAND cmake --build . --target ${THIS_TARGETS_NAME} --config $<CONFIGURATION>
                WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        )

        # Specify, that the target should not compile.
        set_tests_properties("${THIS_TARGETS_NAME}" PROPERTIES WILL_FAIL TRUE)
    endforeach ()
endfunction ()

# Convenience wrapper for registering a set of tests that should fail to compile and require
# coraxlib to be linked.
#
# TARGET prefix for the targets to be built FILES the list of files to include in the target
# SECTIONS sections of the compilation test to build
#
function (corax_register_compilation_failure_test TARGET_NAME)
    cmake_parse_arguments("CORAX" "NO_EXCEPTION_MODE" "" "FILES;SECTIONS" ${ARGN})
    katestrophe_register_compilation_failure_test(
            TARGET ${TARGET_NAME}
            FILES ${CORAX_FILES}
            SECTIONS ${CORAX_SECTIONS}
            LIBRARIES ${CORAX_LIBRARIES} pthread
    )
    # corax_set_kassert_flags(${CORAX_TARGET_NAME} ${ARGN})
endfunction ()
