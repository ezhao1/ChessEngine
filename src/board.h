#include <cstdint>
#include <string>

class Board
{
public:
    void print();
    void make_move(std::string move); // TODO: change to an already preparsed / prevalidated format?
private:
    int64_t m_Board; // bitboard - each bit is a row
};