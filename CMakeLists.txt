cmake_minimum_required(VERSION 3.10)

project(TomatoPi)

find_package(fmt CONFIG REQUIRED)

add_executable(TomatoPi tomato_pi.cpp)

target_link_libraries(TomatoPi PRIVATE fmt::fmt wiringPi)