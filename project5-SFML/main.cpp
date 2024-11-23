#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Snakey", sf::Style::Close);
    window.setFramerateLimit(60);

    while(window.isOpen())
    {
        // event part on the main loop
        sf::Event event{};
        while (window.pollEvent(event))
        {
            // process events
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // logic hangling

        // REndering part of the main gam eloop
        window.clear();

        // draw things

        window.display();
    }

    return 0;
}
