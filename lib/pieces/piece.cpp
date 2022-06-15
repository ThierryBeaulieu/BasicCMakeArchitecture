#include "piece.h"

Piece::Piece()
{
    x = 0;
    y = 0;
}

Piece::~Piece()
{
}

void Piece::printPosition()
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}