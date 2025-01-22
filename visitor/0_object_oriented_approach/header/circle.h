#pragma once

#include <iostream>
#include "shape.h"
#include "point.h"

class Circle : public Shape
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

    void draw() const override
    {
        std::cout << "draw circle" << std::endl;
    }
    private:
    Point center_{};
    double radius_{};
};