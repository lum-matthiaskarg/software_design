#include <vector>
#include "shape.h"
#include "draw.h"

using Shapes = std::vector<Shape>;

void drawAllShapesImGui(const Shapes& shapes)
{
    for(const auto& shape : shapes)
    {
        std::visit(DrawImGui{}, shape);
    }
}

void drawAllShapesOpenGl(const Shapes& shapes)
{
    for(const auto& shape : shapes)
    {
        std::visit(DrawOpenGL{}, shape);
    }
}



int main(int argc, char *argv[])
{
    Shapes shapes;
    shapes.emplace_back( Circle{Point{1.0, 2.0}, 4.0} );
    shapes.emplace_back( Square{Point{1.0, 2.0}, 5.0} );
    drawAllShapesImGui(shapes);
    drawAllShapesOpenGl(shapes);

    return 0;
}
