#pragma once
#include "shape_visitor.h"

class Shape
{
    public:
    virtual ~Shape() = default;
    virtual void accept(const ShapeVisitor& visitor) = 0;
};