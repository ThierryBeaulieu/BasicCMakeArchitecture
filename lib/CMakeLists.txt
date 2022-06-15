cmake_minimum_required(VERSION 3.0)

set(This pieces_lib)

set(Source 
    Pieces/Piece.cpp
    Board/Board.cpp
)

set(Header 
    Pieces/Piece.h
    Board/Board.h
)

add_library(
    ${This}
    STATIC
    ${Source}
    ${Header}
)