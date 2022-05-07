cmake_minimum_required(VERSION 3.19)
project(google_test_sample)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(google_test_sample src/main.cpp src/unit-1/code.h src/unit-2/code.h src/unit-3/code.h)

enable_testing()

add_executable(
        google_test_sample_test
        src/unit-1/code.h src/unit-1/code.test.cpp src/unit-2/code.h src/unit-2/code.test.cpp src/unit-3/code.h src/unit-3/code.test.cpp)
target_link_libraries(
        google_test_sample_test
        gtest_main
)

include(GoogleTest)
gtest_discover_tests(google_test_sample_test)
