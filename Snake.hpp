#pragma once
#include "point.hpp"
#include <iostream>

class Snake {
    Point segments[100];  
    int length;           

public:
    // Constructor implicit
    Snake() : length(1) {
        segments[0] = Point(10, 10);
    }

    // Constructor de copiere
    Snake(const Snake& other) : length(other.length) {
        for (int i = 0; i < length; ++i) {
            segments[i] = other.segments[i];
        }
    }

    // Operator de copiere
    Snake& operator=(const Snake& other) {
        if (this != &other) {
            length = other.length;
            for (int i = 0; i < length; ++i) {
                segments[i] = other.segments[i];
            }
        }
        return *this;
    }

    // Operator de comparație
    bool operator==(const Snake& other) const {
        if (length != other.length) return false;
        for (int i = 0; i < length; ++i) {
            if (!(segments[i] == other.segments[i])) return false;
        }
        return true;
    }

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Snake& snake) {
        os << "Snake: ";
        for (int i = 0; i < snake.length; ++i) {
            os << snake.segments[i] << " ";
        }
        return os;
    }

    void Move(Point direction);
    void Grow();
    Point GetHeadPosition() const;
};
