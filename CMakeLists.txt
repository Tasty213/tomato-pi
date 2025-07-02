cmake_minimum_required(VERSION 3.14)
project(TomatoPi)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(fmt CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

add_executable(TomatoPi src/main.cpp)
target_link_libraries(TomatoPi PRIVATE fmt::fmt wiringPi)

enable_testing()
add_executable(TomatoPiTests tests/test_gpio.cpp)
target_link_libraries(TomatoPiTests GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(TomatoPiTests)
