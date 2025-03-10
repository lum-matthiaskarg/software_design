#include <iostream>
#include <vector>
#include "circle.h"
#include "square.h"
#include "shape.h"
#include <memory>

using Shapes = std::vector<std::unique_ptr<Shape>>;

void drawAllShapes(const Shapes& shapes)
{
    for(const auto& shape : shapes)
    {
        shape->draw();
    }
}


int main(int argc, char *argv[])
{
    Shapes shapes;
    shapes.emplace_back( std::make_unique<Circle>(Point{1.0, 2.0}, 4.0) );
    shapes.emplace_back( std::make_unique<Square>(Point{1.0, 2.0}, 5.0) );
    drawAllShapes(shapes);

    return 0;
}
