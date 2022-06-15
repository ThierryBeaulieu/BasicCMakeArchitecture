cmake_minimum_required(VERSION 3.0)

set(this "ExempleTests")

set(Sources
    test.cpp
)

add_executable(
    ${this}
    ${Sources}
)

target_link_libraries(
    ${this}
    PUBLIC
    gtest_main
    pieces_lib
)

add_test(
    NAME ${this}
    COMMAND ${this}
)