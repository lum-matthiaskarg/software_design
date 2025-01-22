#pragma once

#include <iostream>
#include "shape.h"
#include "point.h"

class Square : public Shape
{
    public:
    Square(Point center, double side)
      : center_{std::move(center)}
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

    void draw() const override
    {
        std::cout << "draw square" << std::endl;
    }
    private:
    Point center_{};
    double side_{};
};