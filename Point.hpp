#pragma once
#include <iostream>

struct Point {
    int x;
    int y;

    // Constructor implicit
    Point() : x(0), y(0) {}

    // Constructor cu parametri
    Point(int xPos, int yPos) : x(xPos), y(yPos) {}

    // Constructor de copiere
    Point(const Point& other) : x(other.x), y(other.y) {}

    // Operator de copiere
    Point& operator=(const Point& other) {
        if (this != &other) {
            x = other.x;
            y = other.y;
        }
        return *this;
    }

    // Operator de comparație
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Point& point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }

    // Operator de citire
    friend std::istream& operator>>(std::istream& is, Point& point) {
        is >> point.x >> point.y;
        return is;
    }
};
