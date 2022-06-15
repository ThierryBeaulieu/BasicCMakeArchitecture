cmake_minimum_required(VERSION 3.0)

set(this pieces_lib)

add_library(
    ${this}
    STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/pieces/piece.h
    ${CMAKE_CURRENT_SOURCE_DIR}/pieces/piece.cpp
)

target_include_directories(
    ${this}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/pieces
    
)