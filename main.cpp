#include <SFML/Graphics.hpp>
#include "src/Hex_Tile.hpp"

int main()
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Line Shape Example");

    // Create a vertex array to hold the lines
    sf::VertexArray shape(sf::Lines);

    // Define the vertices of the shape
    Hex_Tile hex(300,300,0,100);
    std::vector<Point> points = hex.Get_All_Corners();
    auto first_vert = points.begin();
    auto second_vert = points.begin() + 1;

    while (first_vert != points.end())
    {
        if(second_vert == points.end())
        {
            second_vert = points.begin();
        }
        auto v1 = sf::Vector2f(first_vert->x, first_vert->y);
        auto v2 = sf::Vector2f(second_vert->x, second_vert->y);
        shape.append(sf::Vertex(v1, sf::Color::Red));
        shape.append(sf::Vertex(v2, sf::Color::Red));
        first_vert++;
        second_vert++;
    }
    
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear(sf::Color::White);

        // Draw the shape
        window.draw(shape);

        window.display();
    }

    return 0;
}
