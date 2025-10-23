#include <SFML/Graphics.hpp>

int main() {
    const int grid_dim = 10;
    const int block_size = 50;
    const int line_width = 2;

    sf::RectangleShape grid[grid_dim][grid_dim];

    for (int i = 0; i < grid_dim; i++) {
        for (int j = 0; j < grid_dim; j++) {
            grid[i][j].setPosition(sf::Vector2f(block_size * i, block_size * j));
            grid[i][j].setSize(sf::Vector2f(block_size - line_width, block_size - line_width));
            grid[i][j].setFillColor(sf::Color(255, 255, 255, 255));
        }
    }

    sf::RenderWindow window(sf::VideoMode(block_size * grid_dim, block_size * grid_dim), "bogoprotivnoe");

    for (int i = 3; i < 7; i++) {
        for (int j = 3; j < 7 ; j++) {
            grid[i][j].setFillColor(sf::Color(0, 255, 0, 255));
        }

    }
    while (window.isOpen())
    {
        window.clear();

        for (int i = 0; i < grid_dim; i++) {
            for (int j = 0; j < grid_dim; j++) {
                window.draw(grid[i][j]);
            }

        }
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        
        window.display();
    }

    return 0;
}