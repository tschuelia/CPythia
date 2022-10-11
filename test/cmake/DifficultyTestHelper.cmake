# Adapted from https://github.com/kamping-site/kamping/blob/main/tests/cmake/KampingTestHelper.cmake
# and https://github.com/kamping-site/kamping/blob/main/tests/cmake/KaTestrophe.cmake
#
# I removed the MPI parts because coraxlib doesn't directly use MPI yet; parallelization managed by the caller.

include(GoogleTest)

# We're relying on GoogleTest already being installed on this system.
# add_subdirectory("${PROJECT_SOURCE_DIR}/extern/googletest" "extern/googletest")

# keep the cache clean
mark_as_advanced(
        BUILD_GMOCK BUILD_GTEST BUILD_SHARED_LIBS
        gmock_build_tests gtest_build_samples gtest_build_tests
        gtest_disable_pthreads gtest_force_shared_crt gtest_hide_internal_symbols
)


function(target_add_address_sanitizer TARGET)
    if(${CMAKE_VERSION} VERSION_LESS "3.13")
        set_target_properties(${TARGET} PROPERTIES COMPILE_FLAGS -fsanitize=address)
        set_target_properties(${TARGET} PROPERTIES LINK_FLAGS -fsanitize=address)
    else()
        target_compile_options(${TARGET} PRIVATE -fsanitize=address)
        target_link_options(${TARGET} PRIVATE -fsanitize=address)
    endif()
endfunction()

# Convenience wrapper for adding tests for Coraxlib
# This creates the target, links googletest and coraxlib, enables warnings, and registers the test.
#
# TARGET_NAME the target name
# FILES the files of the target
#
# example: corax_register_test(mytarget FILES mytarget.cpp)
function(corax_register_test CORAX_TARGET_NAME)
    cmake_parse_arguments(
            "CORAX"              # prefix
            "NO_EXCEPTION_MODE"  # flags
            ""                   # one-valued arguments
            "FILES;DEFINES"      # multi-valued arguments
            ${ARGN}
    )

    # Add our main.cpp to the list of source files and register the test target.
    list(APPEND CORAX_FILES src/main.cpp)
    add_executable(${CORAX_TARGET_NAME} ${CORAX_FILES})

    # Link gtest, gmock, coraxlib and pthread to the test target; also add corax lib include directories.
    target_include_directories(${CORAX_TARGET_NAME} PRIVATE ${CORAX_INCLUDE_DIRS})
    target_link_libraries(${CORAX_TARGET_NAME} PRIVATE coraxlib_difficulty_prediction_lib gtest gmock ${CORAX_LIBRARIES} pthread)

    # Enable lots of warnings, enable the adress sanitizer and pass on defines (e.g. HAVE_AVX=1 for
    # some tests).
    target_compile_options(${CORAX_TARGET_NAME} PRIVATE ${CORAX_TEST_WARNING_FLAGS})
    target_compile_definitions(${CORAX_TARGET_NAME} PRIVATE ${CORAX_DEFINES})
    target_add_address_sanitizer(${CORAX_TARGET_NAME})

    # Let ctest discover all tests in the test target (-> pretty list when calling ctest).
    gtest_discover_tests(${CORAX_TARGET_NAME} WORKING_DIRECTORY ${PROJECT_DIR})

endfunction()

# Registers a set of tests which should fail to compile.
#
# TARGET prefix for the targets to be built
# FILES the list of files to include in the target
# SECTIONS sections of the compilation test to build
# LIBRARIES libraries to link via target_link_libraries(...)
#
# Loosely based on: https://stackoverflow.com/questions/30155619/expected-build-failure-tests-in-cmake
function(katestrophe_add_compilation_failure_test)
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
    foreach(SECTION ${KATESTROPHE_SECTIONS})
        string(TOLOWER ${SECTION} SECTION_LOWERCASE)
        set(THIS_TARGETS_NAME "${KATESTROPHE_TARGET}.${SECTION_LOWERCASE}")

        # Add the executable and link the libraries.
        add_executable(${THIS_TARGETS_NAME} ${KATESTROPHE_FILES})
        target_link_libraries(${THIS_TARGETS_NAME} PUBLIC gtest ${KATESTROPHE_LIBRARIES})

        # Select the correct section of the target by setting the appropriate preprocessor define.
        target_compile_definitions(${THIS_TARGETS_NAME} PRIVATE ${SECTION})

        # Exclude the target fromn the "all" target.
        set_target_properties(
                ${THIS_TARGETS_NAME} PROPERTIES
                EXCLUDE_FROM_ALL TRUE
                EXCLUDE_FROM_DEFAULT_BUILD TRUE
        )

        # Add a test invoking "cmake --build" to test if the target compiles.
        add_test(
                NAME "${THIS_TARGETS_NAME}"
                COMMAND cmake --build . --target ${THIS_TARGETS_NAME} --config $<CONFIGURATION>
                WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        )

        # Specify, that the target should not compile.
        set_tests_properties("${THIS_TARGETS_NAME}" PROPERTIES WILL_FAIL TRUE)
    endforeach()
endfunction()

# Convenience wrapper for registering a set of tests that should fail to compile and require coraxlib to be linked.
#
# TARGET prefix for the targets to be built
# FILES the list of files to include in the target
# SECTIONS sections of the compilation test to build
#
function(corax_register_compilation_failure_test CORAX_TARGET_NAME)
    cmake_parse_arguments(
            "CORAX"
            "NO_EXCEPTION_MODE"
            ""
            "FILES;SECTIONS"
            ${ARGN}
    )
    katestrophe_add_compilation_failure_test(
            TARGET ${CORAX_TARGET_NAME}
            FILES ${CORAX_FILES}
            SECTIONS ${CORAX_SECTIONS}
            LIBRARIES ${CORAX_LIBRARIES} pthread
    )
endfunction()
