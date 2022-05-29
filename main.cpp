#include <iostream>
#include "SFML/Graphics.hpp"
#include "GameController.h"
#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define FPS 60
#define TITLE "Adventure"

int main()
{
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), TITLE);
    window.setFramerateLimit(FPS);
    GameController GC(&window);

    sf::Clock deltaClock;
    sf::Time delta;

    GC.init();

    while (window.isOpen())
    {
        GC.update(delta.asSeconds());
        GC.draw();
        delta = deltaClock.restart();
    }

    return 0;
}

