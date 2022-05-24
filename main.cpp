#include <iostream>
#include "SFML/Graphics.hpp"
#include "GameController.h"
#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define TITLE "Adventure"

int main()
{
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), TITLE);
    GameController GC(&window);

    GC.init();

    while (window.isOpen())
    {
        GC.update(0);
        GC.draw();
    }

    return 0;
}

