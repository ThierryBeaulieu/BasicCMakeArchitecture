#ifndef PIECE_H
#define PIECE_H

#include <iostream>

class Piece
{
public:
    Piece();
    ~Piece();
    void printPosition();

private:
    int x;
    int y;
};

#endif // PIECE_H