#pragma once

#include "shape.h"
#include "point.h"

class Square : public Shape
{
    public:
    Square(const Point& center , double side)
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

    void accept(const ShapeVisitor& visitor ) override
    {
        visitor.visit(*this);
    }
    
    private:
    Point center_{};
    double side_{};
};