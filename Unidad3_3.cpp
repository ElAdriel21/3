#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "3");

    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile("fondo.jpg");
    sf::Sprite fondo(backgroundTexture);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        
        fondo.setPosition(0,0);
        fondo.setScale(0.78,0.78);
        window.draw(fondo);

        window.display();
    }
}