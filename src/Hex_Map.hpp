#include "hex_tile.hpp"
#include <vector>

class Hex_Map_2d
{
    public:
    Hex_Map_2d(int x_size, int y_size);

    private:
    int x_size;
    int y_size;
    std::vector<std::vector<Hex_Tile>> hex_map;
};