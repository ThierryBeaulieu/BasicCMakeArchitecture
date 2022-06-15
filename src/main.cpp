#include <iostream>
#include <piece.h>

#define TEST 1

#if TEST
int main()
{
    std::cout << "Hello World!" << std::endl;
    Piece p;
    p.printPosition();
    return 0;
}
#endif