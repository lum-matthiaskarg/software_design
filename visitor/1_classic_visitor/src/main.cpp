#include <iostream>
#include <vector>
#include "circle.h"
#include "square.h"
#include "shape.h"
#include "draw.h"
#include <memory>

using Shapes = std::vector<std::unique_ptr<Shape>>;

void drawAllShapesImGui(const Shapes& shapes)
{
    for(const auto& shape : shapes)
    {
        shape->accept(DrawImGui{});
    }
}

void drawAllShapesOpenGl(const Shapes& shapes)
{
    for(const auto& shape : shapes)
    {
        shape->accept(DrawOpenGL{});
    }
}



int main(int argc, char *argv[])
{
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.emplace_back( std::make_unique<Circle>(Point{1.0, 2.0}, 4.0) );
    shapes.emplace_back( std::make_unique<Square>(Point{1.0, 2.0}, 5.0) );
    drawAllShapesImGui(shapes);
    drawAllShapesOpenGl(shapes);

    return 0;
}
