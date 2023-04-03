#include "Point.hpp"

//all measurements are in arbitrary units
class Hex_Tile
{
    private:
    Point center; //postion of center
    double rotation; //0 to 360
    double radius; 
    public:
    Hex_Tile(double x_coordinate, double y_coordinate, double rotation, double radius): 
        center(x_coordinate, y_coordinate), rotation(rotation), radius(radius){};
    
    Point Get_Corner_Point(int corner_index);
};