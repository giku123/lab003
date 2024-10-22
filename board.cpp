#include "board.hpp"


Board::Board(int w, int h) : width(w), height(h) {}


int Board::GetWidth() const {
    return width;
}


int Board::GetHeight() const {
    return height;
}
