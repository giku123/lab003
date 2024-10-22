#include "snake.hpp"


Snake::Snake() {
    segments[0] = Point(10, 10); 
    length = 1;
}


void Snake::Move(Point direction) {
   
    for (int i = length - 1; i > 0; --i) {
        segments[i] = segments[i - 1]; 
    }
    
  
    segments[0].x += direction.x;
    segments[0].y += direction.y;
}


void Snake::Grow() {
    if (length < 100) {
        segments[length] = segments[length - 1]; 
        length++;
    }
}


Point Snake::GetHeadPosition() const {
    return segments[0];
}
