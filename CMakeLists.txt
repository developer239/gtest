cmake_minimum_required(VERSION 3.19)
project(google_test_sample)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
message("GTEST_INCLUDE_DIRS = ${GTEST_INCLUDE_DIRS}")

set(GMOCK_LIBRARIES /usr/lib/libgmock.a /usr/lib/libgmock_main.a)

add_executable(google_test_sample src/main.cpp src/unit-1/code.h src/unit-2/code.h src/unit-3/code.h src/unit-4/code.h src/unit-4.1/code.h src/unit-5/code.h src/unit-6/Employee.h src/unit-6/EmployeeManager.cpp src/unit-6/EmployeeManager.h src/unit-6/IDatabaseConnection.cpp src/unit-6/IDatabaseConnection.h)

enable_testing()

add_executable(
        google_test_sample_test
        src/unit-1/code.h src/unit-1/code.test.cpp src/unit-2/code.h src/unit-2/code.test.cpp src/unit-3/code.h src/unit-3/code.test.cpp src/unit-4/code.test.cpp src/unit-4.1/code.h src/unit-4.1/code.test.cpp src/unit-4.1/code.test.fixture.h src/unit-5/code.h src/unit-5/code.test.cpp src/unit-6/Employee.h src/unit-6/EmployeeManager.cpp src/unit-6/EmployeeManager.h src/unit-6/IDatabaseConnection.cpp src/unit-6/IDatabaseConnection.h src/unit-6/code.test.cpp)
target_link_libraries(
        google_test_sample_test
        GTest::gtest GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(google_test_sample_test)
