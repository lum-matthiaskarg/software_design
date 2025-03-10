#pragma once

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

    void accept(const ShapeVisitor& visitor ) override
    {
        visitor.visit(*this);
    }
    
    private:
    Point center_{};
    double radius_{};
};