#define _USE_MATH_DEFINES
#include "Hex_Tile.hpp"
#include <math.h>


Point Hex_Tile::Get_Corner_Point(int corner_index)
{
    double angle_to_corner = corner_index * (-60 - rotation); //-60 as we want to traverse hex clockwise
    double angle_in_radians = angle_to_corner * M_PI / 180;
    return Point(center.x + radius * cos(angle_in_radians), center.y + radius * sin(angle_in_radians));
}