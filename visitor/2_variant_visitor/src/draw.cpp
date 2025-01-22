#include <iostream>
#include "draw.h"



void DrawOpenGL::operator()(const Circle& circle) const
{
    std::cout << "DrawOpenGL: Draw a circle" << std::endl;
}


void DrawOpenGL::operator()(const Square& square) const
{
    std::cout << "DrawOpenGL: Draw a square" << std::endl;
}


void DrawImGui::operator()(const Circle& circle) const
{
    std::cout << "DrawImGui: Draw a circle" << std::endl;
}


void DrawImGui::operator()(const Square& square) const
{
    std::cout << "DrawImGui: Draw a square" << std::endl;
}