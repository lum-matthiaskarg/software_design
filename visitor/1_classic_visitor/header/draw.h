#pragma once

#include "shape_visitor.h"

class DrawOpenGL : public ShapeVisitor
{
    public:
    void visit(const Circle& circle) const override;
    void visit(const Square& square) const override;
};

class DrawImGui : public ShapeVisitor
{
    public:
    void visit(const Circle& circle) const override;
    void visit(const Square& square) const override;
};