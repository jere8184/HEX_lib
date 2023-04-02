#include "Hex_Map.hpp"


Hex_Map_2d::Hex_Map_2d(int x_size, int y_size)
{
    for(int y = 0; y < y_size; y++)
    {
        std::vector<Hex_Tile> y_row;
        for(int x = 0; x < x_size; x++)
        {
            Hex_Tile tile(x,y,0,1);
            y_row.push_back(tile);
        }
        hex_map.push_back(y_row);
    }
}