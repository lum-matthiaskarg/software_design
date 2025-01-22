#pragma once

#include "circle.h"
#include "square.h"

class DrawOpenGL
{
    public:
    void operator()(const Circle& circle) const;
    void operator()(const Square& square) const;
};

class DrawImGui 
{
    public:
    void operator()(const Circle& circle) const;
    void operator()(const Square& square) const;
};