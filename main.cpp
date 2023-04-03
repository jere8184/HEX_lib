#include "src/Hex_Tile.hpp"
#include <iostream>


int main(int argc, char* argv[])
{
    std::cout << "Hello world!!!" <<std::endl;
    Hex_Tile hex(2,2,0,1);

    for(int corner = 0; corner < 6; corner++)
    {
        std::cout << "corner: " << corner << " x: " << hex.Get_Corner_Point(corner).x << " y: " << 
            hex.Get_Corner_Point(corner).y << std::endl;
    }
}
