#pragma once

#include "point.h"

class Square 
{
    public:
    Square(const Point& center, double side)
      : center_{center}
      , side_{side}
    {}

    double side() const 
    { 
        return side_; 
    }

    Point center() const 
    {
        return center_;
    }
    
    private:
    Point center_{};
    double side_{};
};