#include <iostream>

#include <Pieces/Piece.h>
#include <Board/Board.h>

int main()
{

#if RELEASE
    std::cout << "Release version:" << std::endl;
#endif


#if DEBUG
    std::cout << "Debug version:" << std::endl;
#endif

    std::cout << "Testing Piece::printPosition()" << std::endl;
    Piece p;
    p.printPosition();

    std::cout << "Testing Board::state()" << std::endl;
    Board b;
    b.printState();

    return 0;
}