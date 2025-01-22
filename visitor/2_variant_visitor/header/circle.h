#pragma once

#include "point.h"

class Circle 
{
    public:
    Circle(const Point& center, double radius )
      : center_{center}
      , radius_{radius}
    {}

    double radius() const 
    { 
        return radius_; 
    }

    Point center() const 
    {
        return center_;
    }
    
    private:
    Point center_{};
    double radius_{};
};