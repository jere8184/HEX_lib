#define _USE_MATH_DEFINES
#include "Hex_Tile.hpp"
#include <math.h>
#include <vector>


Point Hex_Tile::Get_Corner(int corner_index)
{
    double angle_to_corner = corner_index * (60 - rotation);
    double angle_in_radians = angle_to_corner * M_PI / 180;
    return Point(center.x + radius * cos(angle_in_radians), center.y + radius * sin(angle_in_radians));
}

std::vector<Point> Hex_Tile::Get_All_Corners()
{
    std::vector<Point> vertices = {};
    for(int corner_index = 0; corner_index < 6; corner_index++)
    {
        Point point = Get_Corner(corner_index);
        vertices.push_back(point);
    }
    return vertices;
}