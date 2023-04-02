#include "Point.hpp"


class Hex_Tile
{
    private:
    Point center; //postion of center
    int rotation; //0 to 360
    int arbitrary_radius_units;
    public:
    Hex_Tile(int x_coordinate, int y_coordinate, int rotation, int arbitrary_radius_units): 
        center(x_coordinate, y_coordinate), rotation(rotation), arbitrary_radius_units(arbitrary_radius_units){};
    
    Point Get_Corner_Point(int corner_index);
};