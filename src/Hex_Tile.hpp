
class Hex_Tile
{
    private:
    int x_coordinate, y_coordinate; //postion of center
    int rotation; //0 to 360
    int arbitrary_radius_units;
    public:
    Hex_Tile(int x_coordinate, int y_coordinate, int rotation, int arbitrary_radius_units): 
        x_coordinate(x_coordinate), y_coordinate(y_coordinate), rotation(rotation), arbitrary_radius_units(arbitrary_radius_units){};
};