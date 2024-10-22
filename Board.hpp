#pragma once

class Board {
    int width;
    int height;

public:
    // Constructor cu parametri
    Board(int w = 0, int h = 0) : width(w), height(h) {}

    // Constructor de copiere
    Board(const Board& other) : width(other.width), height(other.height) {}

    // Operator de copiere
    Board& operator=(const Board& other) {
        if (this != &other) {
            width = other.width;
            height = other.height;
        }
        return *this;
    }

    // Operator de comparație
    bool operator==(const Board& other) const {
        return width == other.width && height == other.height;
    }

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Board& board) {
        os << "Board(" << board.width << ", " << board.height << ")";
        return os;
    }

    // Operator de citire
    friend std::istream& operator>>(std::istream& is, Board& board) {
        is >> board.width >> board.height;
        return is;
    }

    int GetWidth() const { return width; }
    int GetHeight() const { return height; }
};
