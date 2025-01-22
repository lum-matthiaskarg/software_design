#include <iostream>
#include "draw.h"


void DrawOpenGL::visit(const Circle& circle) const
{
    std::cout << "DrawOpenGL: Draw a circle" << std::endl;
}


void DrawOpenGL::visit(const Square& circle) const
{
    std::cout << "DrawOpenGL: Draw a square" << std::endl;
}


void DrawImGui::visit(const Circle& circle) const
{
    std::cout << "DrawImGui: Draw a circle" << std::endl;
}


void DrawImGui::visit(const Square& circle) const
{
    std::cout << "DrawImGui: Draw a square" << std::endl;
}